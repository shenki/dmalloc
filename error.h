/*
 * defines for the error and message code.
 *
 * Copyright 1995 by Gray Watson
 *
 * This file is part of the dmalloc package.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * NON-COMMERCIAL purpose and without fee is hereby granted, provided
 * that the above copyright notice and this permission notice appear
 * in all copies, and that the name of Gray Watson not be used in
 * advertising or publicity pertaining to distribution of the document
 * or software without specific, written prior permission.
 *
 * Please see the PERMISSIONS file or contact the author for information
 * about commercial licenses.
 *
 * Gray Watson makes no representations about the suitability of the
 * software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted at gray.watson@letters.com
 *
 * $Id: error.h,v 1.29 1997/01/16 15:25:07 gray Exp $
 */

#ifndef __ERROR_H__
#define __ERROR_H__

#include <stdarg.h>				/* for ... */

#include "conf.h"				/* up here for _INCLUDE */

/* for timeval type -- see conf.h */
#if STORE_TIMEVAL
#ifdef TIMEVAL_INCLUDE
#include TIMEVAL_INCLUDE
#endif
#endif

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/* global debug flags that are set my DMALLOC_DEBUG environ variable */
extern	long		_dmalloc_flags;

/* global iteration counter for activities */
extern	unsigned long	_dmalloc_iterc;

/* overhead information storing when the library started up for elapsed time */
#if STORE_TIMEVAL
extern	struct timeval	_dmalloc_start;
#else
extern	long		_dmalloc_start;
#endif

/* global flag which indicates when we are aborting */
extern	char		_dmalloc_aborting;

/*
 * print the time into local buffer which is returned
 */
#if STORE_TIMEVAL
extern	char	*_dmalloc_ptime(const struct timeval * timevalp,
				const char elapsed);
#else
extern	char	*_dmalloc_ptime(const long * timep,
				const char elapsed);
#endif

/*
 * message writer with printf like arguments
 */
extern	void	_dmalloc_message(const char * format, ...);

/*
 * kill the program because of an internal malloc error
 */
extern	void	_dmalloc_die(const char silent);

/*
 * handler of error codes from procedure FUNC.  the procedure should
 * have set the errno already.
 */
extern	void	dmalloc_error(const char * func);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ERROR_H__ */
