/*
 * Copyright (c) 2012-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#include "64/syscallent.h"

/*
 * Arch-specific block, not used on AArch64.
 * [244 ... 259] = { },
 */

/* Quote from asm-generic/unistd.h:
 *
 * All syscalls below here should go away really,
 * these are provided for both review and as a porting
 * help for the C library version.
 *
 * Last chance: are any of these important enough to
 * enable by default?
 */

[1024] = { 3,	TD|TF,		SEN(open),		"open"		},
[1025] = { 2,	TF,		SEN(link),		"link"		},
[1026] = { 1,	TF,		SEN(unlink),		"unlink"	},
[1027] = { 3,	TF,		SEN(mknod),		"mknod"		},
[1028] = { 2,	TF,		SEN(chmod),		"chmod"		},
[1029] = { 3,	TF,		SEN(chown),		"chown"		},
[1030] = { 2,	TF,		SEN(mkdir),		"mkdir"		},
[1031] = { 1,	TF,		SEN(rmdir),		"rmdir"		},
[1032] = { 3,	TF,		SEN(chown),		"lchown"	},
[1033] = { 2,	TF,		SEN(access),		"access"	},
[1034] = { 2,	TF,		SEN(rename),		"rename"	},
[1035] = { 3,	TF,		SEN(readlink),		"readlink"	},
[1036] = { 2,	TF,		SEN(symlink),		"symlink"	},
[1037] = { 2,	TF,		SEN(utimes),		"utimes"	},
[1038] = { 2,	TF|TST|TSTA,	SEN(stat),		"stat"		},
[1039] = { 2,	TF|TLST|TSTA,	SEN(lstat),		"lstat"		},
[1040] = { 1,	TD,		SEN(pipe),		"pipe"		},
[1041] = { 2,	TD,		SEN(dup2),		"dup2"		},
[1042] = { 1,	TD,		SEN(epoll_create),	"epoll_create"	},
[1043] = { 0,	TD,		SEN(inotify_init),	"inotify_init"	},
[1044] = { 1,	TD,		SEN(eventfd),		"eventfd"	},
[1045] = { 3,	TD|TS,		SEN(signalfd),		"signalfd"	},
[1046] = { 4,	TD|TN,		SEN(sendfile64),	"sendfile"	},
[1047] = { 2,	TD,		SEN(ftruncate),		"ftruncate"	},
[1048] = { 2,	TF,		SEN(truncate),		"truncate"	},
[1049] = { 2,	TF|TST|TSTA,	SEN(stat),		"stat"		},
[1050] = { 2,	TF|TLST|TSTA,	SEN(lstat),		"lstat"		},
[1051] = { 2,	TD|TFST|TSTA,	SEN(fstat),		"fstat"		},
[1052] = { 3,	TD,		SEN(fcntl),		"fcntl"		},
[1053] = { 4,	TD,		SEN(fadvise64),		"fadvise64"	},
[1054] = { 4,	TD|TF|TFST|TSTA,SEN(newfstatat),	"newfstatat"	},
[1055] = { 2,	TD|TFSF|TSFA,	SEN(fstatfs),		"fstatfs"	},
[1056] = { 2,	TF|TSF|TSFA,	SEN(statfs),		"statfs"	},
[1057] = { 3,	TD,		SEN(lseek),		"lseek"		},
[1058] = { 6,	TD|TM|SI,	SEN(mmap),		"mmap"		},
[1059] = { 1,	0,		SEN(alarm),		"alarm"		},
[1060] = { 0,	PU|NF,		SEN(getpgrp),		"getpgrp"	},
[1061] = { 0,	TS,		SEN(pause),		"pause"		},
[1062] = { 1,	0,		SEN(time),		"time"		},
[1063] = { 2,	TF,		SEN(utime),		"utime"		},
[1064] = { 2,	TD|TF,		SEN(creat),		"creat"		},
[1065] = { 3,	TD,		SEN(getdents),		"getdents"	},
[1066] = { 3,	TD|TF,		SEN(futimesat),		"futimesat"	},
[1067] = { 5,	TD,		SEN(select),		"select"	},
[1068] = { 3,	TD,		SEN(poll),		"poll"		},
[1069] = { 4,	TD,		SEN(epoll_wait),	"epoll_wait"	},
[1070] = { 2,	TSFA,		SEN(ustat),		"ustat"		},
[1071] = { 0,	TP,		SEN(vfork),		"vfork"		},
[1072] = { 4,	TP,		SEN(wait4),		"wait4"		},
[1073] = { 4,	TN,		SEN(recv),		"recv"		},
[1074] = { 4,	TN,		SEN(send),		"send"		},
[1075] = { 2,	0,		SEN(bdflush),		"bdflush"	},
[1076] = { 1,	TF,		SEN(umount),		"umount"	},
[1077] = { 1,	TF,		SEN(uselib),		"uselib"	},
[1078] = { 1,	0,		SEN(sysctl),		"sysctl"	},
[1079] = { 0,	TP,		SEN(fork),		"fork"		},
