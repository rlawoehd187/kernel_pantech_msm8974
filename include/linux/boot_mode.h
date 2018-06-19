/************************************************************
** Copyright (C), 2013-2016, Pantech Mobile Comm Corp., Ltd
** All rights reserved.
** Author: Chau Truong Thinh
************************************************************/
#ifndef _BOOT_MODE_H
#define _BOOT_MODE_H

enum{
	MSM_BOOT_MODE__NORMAL,
	MSM_BOOT_MODE__RECOVERY = 2, //the number adapt system/core/init/init.c
	MSM_BOOT_MODE__FACTORY,
	MSM_BOOT_MODE__RF,
	MSM_BOOT_MODE__WLAN,
	MSM_BOOT_MODE__MOS,
};

extern int get_boot_mode(void);

#endif /* _BOOT_MODE_H */
