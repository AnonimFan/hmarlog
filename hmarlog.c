#include "hmarlog.h"
#include <stdio.h>
#include <stdlib.h>

int createlogfile(const char *logfile, const char *header)
{
	FILE *logfile1 = fopen(logfile, "w+");
	fprintf(logfile1, "hmarlog v1, app: %s\n", header);
	fclose(logfile1);
	return 0;
}

// argument usage: "message here", function will do "[LOG TYPE]: message here"

// logerr: log errors 
int logerr(const char *error, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[ERROR]: %s\n", error);
	fclose(logfile1);
	return 0;
}

// logwarn: log warnings
int logwarn(const char *warn, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[WARN]: %s\n", warn);
	fclose(logfile1);
	return 0;
}

// loginf: log informations
int loginf(const char *inf, const char *logfile)
{	
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[INFO]: %s\n", inf);
	fclose(logfile1);
	return 0;
}

// logver: log the version info of the app and the library
int logver(const char *appver, const char *logfile) 
{
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[INFO]: library version v.1, app version %s\n", appver);
	fclose(logfile1);
	return 0;
}

// logfatal: logs a fatal error
int logfatal(const char *err, const char *logfile, int shexit) 
{
	FILE *logfile1 = fopen(logfile, "a");
	fprintf(logfile1, "[FATAL]: %s\n", err);
	fclose(logfile1);
	if (shexit == 1) {
		exit(1);
	}
	return 0;
}