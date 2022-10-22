#include "hmarlog.h"

int main()
{
	createlogfile("test.results", "test.exe src: test.c");
	logerr("Hello, World!", "test.results");
	logwarn("Hello, World!", "test.results");
	loginf("Hello, World!", "test.results");
	logfatal("Hello, World!", "test.results", 1);
	logver("test program v1", "test.results");
	
	return 0;
}