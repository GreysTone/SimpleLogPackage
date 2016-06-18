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
	logType = GT_GLS_LogType::GT_GLS_LT_CLOSED;

	identifier = id;
	logFile = NULL;
}

const void GTGeneralLogSystem::setLogFile(const std::string f) {
	logFile = new std::ofstream(f);
}

const void GTGeneralLogSystem::setLogType(const GT_GLS_LogType t) {
	logType = t;
}

const void GTGeneralLogSystem::log(const std::string msg, const std::string func) {
	switch (logType) {
		case GT_GLS_LogType::GT_GLS_LT_CLOSED: {
			std::cerr << "GT_GLS Closed." << std::endl;
			break;
		}
		case GT_GLS_LogType::GT_GLS_LT_STANDARD: {
			std::cerr << "[" << identifier << "]<" << func << "> raised: " << msg << std::endl;
			break;
		}
		case GT_GLS_LogType::GT_GLS_LT_OUTSIDEFILE: {
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