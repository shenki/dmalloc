/*
 * defines for malloc string routines...
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
 * $Id: arg_check.h,v 1.9 1997/01/16 15:25:03 gray Exp $
 */

#ifndef __ARG_CHECK_H__
#define __ARG_CHECK_H__

#include "dmalloc.h"			/* for DMALLOC_SIZE */

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * dummy function for checking bcmp's arguments.
 */
extern	int	_dmalloc_bcmp(const void * b1, const void * b2,
			      const DMALLOC_SIZE len);

/*
 * dummy function for checking bcopy's arguments.
 */
extern	void	_dmalloc_bcopy(const char * from, char * to,
			       const DMALLOC_SIZE len);

/*
 * dummy function for checking memcmp's arguments.
 */
extern	int	_dmalloc_memcmp(const void * b1, const void * b2,
				const DMALLOC_SIZE len);

/*
 * dummy function for checking memcpy's arguments.
 */
extern	char	*_dmalloc_memcpy(char * to, const char * from,
				 const DMALLOC_SIZE len);

/*
 * dummy function for checking memset's arguments.
 */
extern	char	*_dmalloc_memset(void * buf, const char ch,
				 const DMALLOC_SIZE len);

/*
 * dummy function for checking index's arguments.
 */
extern	char	*_dmalloc_index(const char * str, const char ch);

/*
 * dummy function for checking rindex's arguments.
 */
extern	char	*_dmalloc_rindex(const char * str, const char ch);

/*
 * dummy function for checking strcat's arguments.
 */
extern	char	*_dmalloc_strcat(char * to, const char * from);

/*
 * dummy function for checking strcmp's arguments.
 */
extern	int	_dmalloc_strcmp(const char * s1, const char * s2);

/*
 * dummy function for checking strlen's arguments.
 */
extern	DMALLOC_SIZE	_dmalloc_strlen(const char * str);

/*
 * dummy function for checking strtok's arguments.
 */
extern	char	*_dmalloc_strtok(char * str, const char * sep);

/*
 * dummy function for checking bzero's arguments.
 */
extern	void	_dmalloc_bzero(void * buf, const DMALLOC_SIZE len);

/*
 * dummy function for checking memccpy's arguments.
 */
extern	char	*_dmalloc_memccpy(char * s1, const char * s2, const char ch,
				  const DMALLOC_SIZE len);

/*
 * dummy function for checking memchr's arguments.
 */
extern	char	*_dmalloc_memchr(const char * s1, const char ch,
				 const DMALLOC_SIZE len);

/*
 * dummy function for checking strchr's arguments.
 */
extern	char	*_dmalloc_strchr(const char * str, const char ch);

/*
 * dummy function for checking strrchr's arguments.
 */
extern	char	*_dmalloc_strrchr(const char * str, const char ch);

/*
 * dummy function for checking strcpy's arguments.
 */
extern	char	*_dmalloc_strcpy(char * to, const char * from);

/*
 * dummy function for checking strncpy's arguments.
 */
extern	char	*_dmalloc_strncpy(char * to, const char * from,
				  const DMALLOC_SIZE len);

/*
 * dummy function for checking strcasecmp's arguments.
 */
extern	int	_dmalloc_strcasecmp(const char * s1, const char * s2);

/*
 * dummy function for checking strncasecmp's arguments.
 */
extern	int	_dmalloc_strncasecmp(const char * s1, const char * s2,
				     const DMALLOC_SIZE len);

/*
 * dummy function for checking strspn's arguments.
 */
extern	int	_dmalloc_strspn(const char * str, const char * list);

/*
 * dummy function for checking strcspn's arguments.
 */
extern	int	_dmalloc_strcspn(const char * str, const char * list);

/*
 * dummy function for checking strncat's arguments.
 */
extern	char	*_dmalloc_strncat(char * to, const char * from,
				  const DMALLOC_SIZE len);

/*
 * dummy function for checking strncmp's arguments.
 */
extern	int	_dmalloc_strncmp(const char * s1, const char * s2,
				 const DMALLOC_SIZE len);

/*
 * dummy function for checking strpbrk's arguments.
 */
extern	char	*_dmalloc_strpbrk(const char * str, const char * list);

/*
 * dummy function for checking strstr's arguments.
 */
extern	char	*_dmalloc_strstr(const char * str, const char * pat);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ARG_CHECK_H__ */
