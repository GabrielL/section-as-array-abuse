#include <stdio.h>

#include "cmds.h"

static int do_ls(void *arg)
{
	(void)arg;

	return printf("%s\n", __func__);
}

shell_cmd(ls, do_ls);
