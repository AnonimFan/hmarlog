#ifndef _HMARLOG
#define _HMARLOG

int createlogfile(const char *logfile, const char *header);
int logerr(const char *error, const char *logfile);
int logwarn(const char *warn, const char *logfile);
int loginf(const char *inf, const char *logfile);
int logver(const char *appver, const char *logfile);
int logfatal(const char *err, const char *logfile, int shexit);

#endif // _HMARLOG