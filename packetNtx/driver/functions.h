/*
 * Copyright (c) 2001
 *	Politecnico di Torino.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that: (1) source code distributions
 * retain the above copyright notice and this paragraph in its entirety, (2)
 * distributions including binary code include the above copyright notice and
 * this paragraph in its entirety in the documentation or other materials
 * provided with the distribution, and (3) all advertising materials mentioning
 * features or use of this software display the following acknowledgement:
 * ``This product includes software developed by the Politecnico
 * di Torino, and its contributors.'' Neither the name of
 * the University nor the names of its contributors may be used to endorse
 * or promote products derived from this software without specific prior
 * written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __FUNCTIONS
#define __FUNCTIONS

#ifdef WIN32
#include "tme.h"
#endif

#ifdef __FreeBSD__

#ifdef _KERNEL
#include <net/tme/tme.h>
#else
#include <tme/tme.h>
#endif

#endif
/*function mappers */

lut_fcn lut_fcn_mapper(uint32 index);
exec_fcn exec_fcn_mapper(uint32 index);

/* lookup functions */

#ifdef WIN32
#include "bucket_lookup.h"
#include "normal_lookup.h"
#endif

#ifdef __FreeBSD__
#include <net/tme/bucket_lookup.h>
#include <net/tme/normal_lookup.h>
#endif

/* execution functions */

#ifdef WIN32
#include "count_packets.h"
#include "tcp_session.h"
#endif

#ifdef __FreeBSD__
#include <net/tme/count_packets.h>
#include <ne/tme/tcp_session.h>
#endif

#endif