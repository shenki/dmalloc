/*
 * header file for compatibility functions.
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
 * $Id: compat.h,v 1.26 1997/01/16 15:25:05 gray Exp $
 */

#ifndef __COMPAT_H__
#define __COMPAT_H__

#include "conf.h"				/* for HAVE... */

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * copy LEN characters from SRC to DEST
 */
#if HAVE_BCOPY == 0
extern	void	bcopy(const char * src, char * dest, DMALLOC_SIZE len);
#endif

/*
 * compare LEN characters, return -1,0,1 if STR1 is <,==,> STR2
 */
#if HAVE_BCMP == 0
extern	int	bcmp(const char * str1, const char * str2, DMALLOC_SIZE len);
#endif

/*
 * set LEN characters in STR to character CH
 */
#if HAVE_MEMSET == 0
extern	char	*memset(char * str, int ch, DMALLOC_SIZE len);
#endif

/*
 * find CH in STR by searching backwards through the string
 */
#if HAVE_STRCHR == 0
extern	char	*strchr(const char * str, int ch);
#endif

/*
 * find CH in STR by searching backwards through the string
 */
#if HAVE_STRRCHR == 0
extern	char	*strrchr(const char * str, int ch);
#endif

/*
 * concatenate STR2 onto the end of STR1
 */
#if HAVE_STRCAT == 0
extern	char	*strcat(char * str1, const char * str2);
#endif

/*
 * return the length in characters of STR
 */
#if HAVE_STRLEN == 0
extern	int	strlen(const char * str);
#endif

/*
 * returns -1,0,1 on whether STR1 is <,==,> STR2
 */
#if HAVE_STRCMP == 0
extern	int	strcmp(const char * str1, const char * str2);
#endif

/*
 * compare at most LEN chars in STR1 and STR2 and return -1,0,1 or STR1 - STR2
 */
#if HAVE_STRNCMP == 0
extern	int	strncmp(const char * str1, const char * str2, const int len);
#endif

/*
 * copies STR2 to STR1.  returns STR1
 */
#if HAVE_STRCPY == 0
extern	char	*strcpy(char * str1, const char * str2);
#endif

/*
 * copy STR2 to STR1 until LEN or null
 */
#if HAVE_STRNCPY == 0
extern	char	*strncpy(char * str1, const char * str2, const int len);
#endif

/*
 * get the next token from STR (pass in NULL on the 2nd, 3rd, etc. calls),
 * tokens are a list of characters deliminated by a character from DELIM.
 * writes null into STR to end token.
 */
#if HAVE_STRTOK == 0
extern	char	*strtok(char * str, char * delim);
#endif

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __COMPAT_H__ */
