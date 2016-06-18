#include "GTGeneralLogSystem.h"

using namespace std;

int main() {

	// Demo
	using namespace _GT_GENERAL_LOG_SYSTEM_;
	GTGeneralLogSystem * GTGLS = new GTGeneralLogSystem("Log Demo");

	GTGLS->setLogType(LogType::STANDARD);
	GTGLS->log("standard log", "main()");

	GTGLS->setLogFile("output.log");
	GTGLS->setLogType(LogType::OUTSIDE);
	GTGLS->log("outside log 1", "main()");
	GTGLS->log("outside log 2", "main()");

	GTGLS->setLogType(LogType::CLOSED);
	GTGLS->log("closed log", "main()");

	return 0;
}