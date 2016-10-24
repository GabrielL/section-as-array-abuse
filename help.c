#include <stdio.h>

#include "cmds.h"

static int do_help(void *arg)
{
	(void)arg;

	return printf("%s\n", __func__);
}

shell_cmd(help, do_help);
