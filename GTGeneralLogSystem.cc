//////////////////////////////////////////////////////////////////////////////
//
// GTGeneralLogSystem.cc
//
// Introductions...
//
// Project          : GTGeneralLogSystem
// Author           : Danyang Song (Arthur) Handle: GreysTone
// Contact          : arthur_song@sfu.ca
// Student ID       : 301295765, dsa65
// Instructor       : Anoop Sarkar
//
// Created by GreysTone on 2016-06-10.
// Copyright (c) 2016 GreysTone. All rights reserved.
// Last Modified on 2016-06-10 by GreysTone, [Contact]
// Modified         : ...
//
//////////////////////////////////////////////////////////////////////////////

#include "GTGeneralLogSystem.h"

namespace _GT_GENERAL_LOG_SYSTEM_ {

GTGeneralLogSystem::GTGeneralLogSystem(std::string id) {
	identifier = id;
	logType = GT_GLS_LogType::GT_GLS_LT_CLOSED;
}

void GTGeneralLogSystem::setLogType(GT_GLS_LogType t) {
	logType = t;
}

void GTGeneralLogSystem::log(std::string msg, std::string func) {
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

			break;
		}
	}
}

}