#ifndef OSNAME_H
#define OSNAME_H 1

/* C-Ware License
 * 
 * Copyright (c) 2022, C-Ware
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * 3. Redistributions of modified source code must append a copyright notice in
 *    the form of 'Copyright <YEAR> <NAME>' to each modified source file's
 *    copyright notice, and the standalone license file if one exists.
 *                                                                                
 * A "redistribution" can be constituted as any version of the source code
 * that is intended to comprise some other derivative work of this code. A
 * fork created for the purpose of contributing to any version of the source
 * does not constitute a truly "derivative work" and does not require listing.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

enum OSClass {
	UNIX,
	WINDOWS,
	DOS,
	OS2,
	S370,
	DEC,
	MACINTOSH,
	AMIGA,
	OTHER
};

#ifdef _AIX 
#define OSNAME "AIX"
#define OSCLASS UNIX
#endif

#ifdef __ANDROID__
#define OSNAME "Android"
#define OSCLASS UNIX
#endif

#ifdef UTS
#define OSNAME "UTS"
#define OSCLASS UNIX
#endif

#ifdef aegis
#define OSNAME "Aegis"
#define OSCLASS UNIX
#endif

#ifdef __BEOS__
#define OSNAME "BeOS"
#define OSCLASS OTHER
#endif

#ifdef __FreeBSD__
#define OSNAME "FreeBSD"
#define OSCLASS UNIX
#endif

#ifdef __NetBSD__
#define OSNAME "NetBSD"
#define OSCLASS UNIX
#endif

#ifdef __OpenBSD__
#define OSNAME "OpenBSD"
#define OSCLASS UNIX
#endif

#ifdef __bsdi__
#define OSNAME "BSD/OS"
#define OSCLASS UNIX
#endif

#ifdef __DragonFly__
#define OSNAME "DragonFly BSD"
#define OSCLASS UNIX
#endif

#ifdef __convex__
#define OSNAME "ConvexOS"
#define OSCLASS UNIX
#endif

#ifdef __CYGWIN__
#define OSNAME "Windows NT (Cygwin)"
#define OSCLASS UNIX
#endif

#if defined __DGUX__ || DGUX
#define OSNAME "DG/UX"
#define OSCLASS UNIX
#endif

#if defined __SEQUENT__ || sequent
#define OSNAME "DYNIX/ptx"
#define OSCLASS UNIX
#endif

#ifdef __ECOS
#define OSNAME "eCos"
#define OSCLASS OTHER
#endif

#ifdef __EMX__
#define OSNAME "OS/2 (EMX)"
#define OSCLASS UNIX
#endif

#ifdef __gnu_hurd__
#define OSNAME "GNU/Hurd"
#define OSCLASS UNIX
#endif

#if defined __gnu_linux__ || defined __linux__ || defined linux
#define OSNAME "GNU/Linux"
#define OSCLASS UNIX
#endif

#if defined _hpux || defined hpux || defined __hpux
#define OSNAME "HP-UX"
#define OSCLASS UNIX
#endif

#ifdef __OS400__
#define OSNAME "OS/400"
#define OSCLASS OTHER
#endif

#if defined __sgi || defined sgi
#define OSNAME "IRIX"
#define OSCLASS UNIX
#endif

#ifdef __INTEGRITY
#define OSNAME "INTEGRITY"
#define OSCLASS OTHER
#endif

#ifdef __Lynx__
#define OSNAME "LynxOS"
#define OSCLASS OTHER
#endif

#if defined macintosh || defined Macintosh
#define OSNAME "Classic Mac OS"
#define OSTYPE MACINTOSH
#endif

#ifdef __APPLE__
#ifdef __MACH
#define OSNAME "Mac OS X"
#define OSCLASS UNIX
#endif
#endif

#if defined __OS9000 || defined _OSK
#define OSNAME "OS-9"
#define OSCLASS OTHER
#endif

#ifdef __MORPHOS__
#define OSNAME "MorphOS"
#define OSCLASS AMIGA
#endif

#if defined AMIGA || defined __amigaos__
#define OSNAME "AmigaOS"
#define OSCLASS AMIGA
#endif

#if defined mpeix || defined __mpexl
#define OSNAME "MPE/iX"
#define OSCLASS OTHER
#endif

#if defined MSDOS || defined __MSDOS__ || defined _MSDOS || defined __DOS__
#define OSNAME "MS-DOS"
#define OSCLASS DOS
#endif

#ifdef __TANDEM
#define OSNAME "NonStop OS"
#define OSCLASS OTHER
#endif

#if defined OS2 || defined _OS2 || defined __OS2__ || defined __TOS_OS2__ 
#define OSNAME "OS/2"
#define OSCLASS OS2
#endif

#ifdef EPLAN9
#define OSNAME "Plan 9"
#define OSCLASS OTHER
#endif

#if defined __QNX__ || defined __QNXNTO__ 
#define OSNAME "QNX"
#define OSCLASS UNIX
#endif

#ifdef M_I386
#define OSNAME "SCO UNIX"
#define OSCLASS UNIX
#endif

#if defined sun || defined __sun
#if defined __SVR4 || defined __svr4
#define OSNAME "Solaris"
#define OSCLASS UNIX
#endif
#define OSNAME "SunOS"
#define OSCLASS UNIX
#endif

#ifdef __VOS__
#define OSNAME "VOS"
#define OSCLASS OTHER
#endif

#if defined __osf__ || defined __osf
#define OSNAME "OSF/1"
#define OSCLASS UNIX
#endif

#if defined ultrix || defined __ultrix || defined __ultrix__ || __SYSTYPE_BSD
#define OSNAME "ULTRIX"
#define OSCLASS UNIX
#endif

#if defined sco || defined _UNIXWARE7
#define OSNAME "UnixWare"
#define OSCLASS UNIX
#endif

#if defined VMS || defined __VMS
#define OSNAME "VMS"
#define OSCLASS VMS
#endif

#ifdef __VM__
#define OSNAME "VM/CMS"
#define OSCLASS S370
#endif

#ifdef __MVS__
#define OSNAME "MVS"
#define OSCLASS S370
#endif

#ifdef __EDC_LE
#ifndef __VM__
#define OSNAME "VSE"
#define OSCLASS S370
#endif
#ifndef __MVS__ 
#define OSNAME "VSE"
#define OSCLASS S370
#endif
#endif

#if defined __MCP__
#define OSNAME "MCP"
#define OSCLASS OTHER
#endif

#if defined _NETWARE_ || defined __NETWARE__
#define OSNAME "NetWare"
#define OSCLASS OTHER
#endif

#ifdef __MACH__  
#ifndef __APPLE__
#define OSNAME "NeXTSTEP"
#define OSCLASS UNIX
#endif
#endif

#ifdef pyr
#define OSNAME "DC/OSx"
#define OSCLASS UNIX
#endif

#if defined sinux || defined sinix
#define OSNAME "Reliant UNIX"
#define OSCLASS UNIX
#endif

#ifdef _UNICOS
#define OSNAME "UNICOS"
#define OSCLASS UNIX
#endif

#if defined _CRAY || defined _crayx1
#define OSNAME "UNICOS/mp"
#define OSCLASS UNIX
#endif

#ifdef _UWIN
#define OSNAME "Windows NT (U/Win)"
#define OSCLASS WINDOWS
#endif

#if defined __VXWORKS__ || defined __vxworks
#define OSNAME "VxWorks"
#define OSCLASS OTHER
#endif

#ifdef _WIN32_WCE
#define OSNAME "Windows CE"
#define OSCLASS WINDOWS
#endif

#if defined _WIN32 | defined _WIN64 | defined __WIN32__
#define OSNAME "Windows NT"
#define OSCLASS WINDOWS
#endif

#ifdef _WIN16
#define OSNAME "Windows 3.x"
#define OSCLASS WINDOWS
#endif

#ifndef OSNAME
#define OSNAME "POSIX"
#define OSCLASS UNIX
#endif

#endif
