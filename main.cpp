#include "GTGeneralLogSystem.h"

using namespace std;

int main() {

	// Demo
	using namespace _GT_GENERAL_LOG_SYSTEM_;
	GTGeneralLogSystem * GTGLS = new GTGeneralLogSystem("Log Demo");

	GTGLS->setLogType(GT_GLS_LogType::GT_GLS_LT_STANDARD);
	GTGLS->log("generate log", "main()");

	GTGLS->setLogFile("output.log");
	GTGLS->setLogType(GT_GLS_LogType::GT_GLS_LT_OUTSIDEFILE);
	GTGLS->log("generate log", "main()");
	GTGLS->log("generate log", "main()");

	return 0;
}