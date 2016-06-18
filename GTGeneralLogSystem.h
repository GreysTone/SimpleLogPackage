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

enum class LogType {
	CLOSED,
	STANDARD,
	OUTSIDE,
};

class GTGeneralLogSystem {
	LogType logType;
protected:
	std::string identifier;
	std::ofstream *logFile;
public:
	GTGeneralLogSystem(const std::string identifier);
	~GTGeneralLogSystem();

	const void setLogType(const LogType t);
	const void setLogFile(const std::string f);
	const void log(const std::string msg, const std::string func);

};

} // namespace _GT_GENERAL_LOG_SYSTEM_

#endif //GTGENERALLOGSYSTEM_GTGENERALLOGSYSTEM_H
