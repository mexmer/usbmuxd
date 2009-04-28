/*
	usbmuxd - iPhone/iPod Touch USB multiplex server daemon

Copyright (C) 2009	Hector Martin "marcan" <hector@marcansoft.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 or version 3.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef __DEVICE_H__
#define __DEVICE_H__

#include "usb.h"

void device_data_input(struct usb_device *dev, unsigned char *buf, int length);

int device_add(struct usb_device *dev);
void device_remove(struct usb_device *dev);

void device_init(void);
void device_shutdown(void);
#endif