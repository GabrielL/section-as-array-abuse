#ifndef CMDS_H
#define CMDS_H

struct cmd {
	const char *cmd;
	int (*fn)(void *);
};

#define shell_cmd(name, func) \
	static struct cmd __cmd_ ## name \
	__attribute__ ((section("cmds"), used)) = \
	{ .cmd = #name, .fn = func }

#endif
