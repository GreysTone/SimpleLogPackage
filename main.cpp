#include "GTGeneralLogSystem.h"

using namespace std;

int main() {

	// Demo
	using namespace _GT_GENERAL_LOG_SYSTEM_;
	GTGeneralLogSystem * GTGLS = new GTGeneralLogSystem("Log Demo");

	GTGLS->setLogType(LogType::STANDARD);
	GTGLS->log("generate log", "main()");

	GTGLS->setLogFile("output.log");
	GTGLS->setLogType(LogType::OUTSIDE);
	GTGLS->log("generate log", "main()");
	GTGLS->log("generate log", "main()");

	return 0;
}