// Daniel Belizki. id: 322231408
// source file that calls the cps108 system call
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	cps108();
	exit(108);
}
