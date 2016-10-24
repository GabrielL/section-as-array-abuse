#include <stddef.h>
#include <string.h>

#include "cmds.h"

extern struct cmd __start_cmds[];
extern struct cmd __stop_cmds[];

#define array_size(t) (sizeof(t) / sizeof(*t))

int main(int argc, char **argv)
{
	for (size_t i = 0; i < __stop_cmds - __start_cmds; ++i) {
		struct cmd *cmd = __start_cmds + i;
		if (!strcmp(argv[1], cmd->cmd)) {
			(*cmd->fn)(NULL);
		}
	}
}
