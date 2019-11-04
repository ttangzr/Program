/*
 * Copyright (c) 2002, Adam Dunkels.
 * All rights reserved. 
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions 
 * are met: 
 * 1. Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution. 
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.  
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  
 *
 * This file is part of the Contiki desktop environment for the C64.
 *
 * $Id: simpletelnet.h,v 1.3 2007/11/17 22:27:09 oliverschmidt Exp $
 *
 */
#ifndef __SIMPLETELNET_H__
#define __SIMPLETELNET_H__

#ifdef TELNET_CONF_WINDOW_WIDTH
#define TELNET_WINDOW_WIDTH TELNET_CONF_WINDOW_WIDTH
#else /* TELNET_CONF_WINDOW_WIDTH */
#define TELNET_WINDOW_WIDTH 38
#endif /* TELNET_CONF_WINDOW_WIDTH */

#ifdef TELNET_CONF_WINDOW_HEIGHT
#define TELNET_WINDOW_HEIGHT TELNET_CONF_WINDOW_HEIGHT
#else /* TELNET_CONF_WINDOW_HEIGHT */
#define TELNET_WINDOW_HEIGHT 20
#endif /* TELNET_CONF_WINDOW_HEIGHT */

#ifdef TELNET_CONF_TEXTAREA_HEIGHT
#define TELNET_TEXTAREA_HEIGHT TELNET_CONF_TEXTAREA_HEIGHT
#else /* TELNET_CONF_TEXTAREA_HEIGHT */
#define TELNET_TEXTAREA_HEIGHT TELNET_WINDOW_HEIGHT - 7
#endif /* TELNET_CONF_TEXTAREA_HEIGHT */

#ifdef TELNET_CONF_ENTRY_WIDTH
#define TELNET_ENTRY_WIDTH TELNET_CONF_ENTRY_WIDTH
#else /* TELNET_CONF_ENTRY_WIDTH */
#define TELNET_ENTRY_WIDTH TELNET_WINDOW_WIDTH - 8
#endif /* TELNET_CONF_ENTRY_WIDTH */




void simpletelnet_init(char *arg);

#endif /* __SIMPLETELNET_H__ */
