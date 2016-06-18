//////////////////////////////////////////////////////////////////////////////
//
// GTGeneralLogSystem.cc
//
// Introductions...
//
// Project          : GTGeneralLogSystem
// Author           : Danyang Song (Arthur) Handle: GreysTone
// Contact          : arthur_song@sfu.ca
//
// Created by GreysTone on 2016-06-10.
// Copyright (c) 2016 GreysTone. All rights reserved.
// Last Modified on 2016-06-10 by GreysTone, [Contact]
// Modified         : ...
//
//////////////////////////////////////////////////////////////////////////////

#include "GTGeneralLogSystem.h"

namespace _GT_GENERAL_LOG_SYSTEM_ {

GTGeneralLogSystem::GTGeneralLogSystem(const std::string id) {
	logType = LogType::CLOSED;

	identifier = id;
	logFile = NULL;
}

GTGeneralLogSystem::~GTGeneralLogSystem() {
	if(logFile) logFile->close();
}

const void GTGeneralLogSystem::setLogFile(const std::string f) {
	logFile = new std::ofstream(f);
}

const void GTGeneralLogSystem::setLogType(const LogType t) {
	logType = t;
	if(logType == LogType::CLOSED) std::cerr << "GT_GLS closed." << std::endl;
}

const void GTGeneralLogSystem::log(const std::string msg, const std::string func) {
	switch (logType) {
		case LogType::CLOSED: { break; }
		case LogType::STANDARD: {
			std::cerr << "[" << identifier << "]<" << func << "> raised: " << msg << std::endl;
			break;
		}
		case LogType::OUTSIDE: {
			if(logFile) {
				(*logFile) << "[" << identifier << "]<" << func << "> raised: " << msg << std::endl;
			}
			else {
				std::cerr << "Outside file is not available.";
			}
			break;
		}
	}
}

} // namespace _GT_GENERAL_LOG_SYSTEM_