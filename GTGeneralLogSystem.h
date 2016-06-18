//////////////////////////////////////////////////////////////////////////////
//
// GTGeneralLogSystem.h
//
// Introductions...
//
// Project          : GTGeneralLogSystem
// Author           : Danyang Song (Arthur) Handle: GreysTone
// Contact          : arthur_song@sfu.ca
//
// Created by GreysTone on 2016-06-10.
// Copyright (c) 2016 GreysTone. All rights reserved.
// Last Modified on 2016-06-10 by GreysTone, arthur_song@sfu.ca
// Modified         : ...
//
//////////////////////////////////////////////////////////////////////////////

#ifndef GTGENERALLOGSYSTEM_GTGENERALLOGSYSTEM_H
#define GTGENERALLOGSYSTEM_GTGENERALLOGSYSTEM_H

#include <string>
#include <iostream>
#include <fstream>

namespace _GT_GENERAL_LOG_SYSTEM_ {

enum class GT_GLS_LogType {
	GT_GLS_LT_CLOSED,
	GT_GLS_LT_STANDARD,
	GT_GLS_LT_OUTSIDEFILE,
};

class GTGeneralLogSystem {
	GT_GLS_LogType logType;
protected:
	std::string identifier;
	std::ofstream *logFile;
public:
	GTGeneralLogSystem(const std::string identifier);

	const void setLogType(const GT_GLS_LogType t);
	const void setLogFile(const std::string f);
	const void log(const std::string msg, const std::string func);

};

} // namespace _GT_GENERAL_LOG_SYSTEM_

#endif //GTGENERALLOGSYSTEM_GTGENERALLOGSYSTEM_H
