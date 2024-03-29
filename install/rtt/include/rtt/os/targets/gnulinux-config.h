/***************************************************************************
  tag: wmeeusse Tue Oct 24 08:45:49 2006 +0000 target-config.h.in

                        target-config.h.in -  description
                           -------------------
    begin                : Tue Oct 24 2006
    copyright            : (C) 2006 Peter Soetens
    email                : peter.soetens@fmtc.be

 ***************************************************************************
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU General Public                   *
 *   License as published by the Free Software Foundation;                 *
 *   version 2 of the License.                                             *
 *                                                                         *
 *   As a special exception, you may use this file as part of a free       *
 *   software library without restriction.  Specifically, if other files   *
 *   instantiate templates or use macros or inline functions from this     *
 *   file, or you compile this file and link it with other files to        *
 *   produce an executable, this file does not by itself cause the         *
 *   resulting executable to be covered by the GNU General Public          *
 *   License.  This exception does not however invalidate any other        *
 *   reasons why the executable file might be covered by the GNU General   *
 *   Public License.                                                       *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   General Public License for more details.                              *
 *                                                                         *
 *   You should have received a copy of the GNU General Public             *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 59 Temple Place,                                    *
 *   Suite 330, Boston, MA  02111-1307  USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef RTT_TARGET_gnulinux_H
#define RTT_TARGET_gnulinux_H

#define OROCFG_CORELIB_REALTIME_TOOLKIT 1
#define OROCFG_CORELIB_REALTIME_TOOLKIT_IMPORT 1

/* #undef OS_NO_ASM */
#ifdef OS_NO_ASM
#define OROBLD_OS_NO_ASM
#endif

#define OS_AGNOSTIC
#ifdef OS_AGNOSTIC
#define OROBLD_OS_AGNOSTIC
#endif

#define ORONUM_OS_MAX_THREADS 8
#define OROSEM_OS_PERIODIC_THREADS_MAX_OVERRUN -1
#define OROSEM_OS_LOCK_MEMORY 1

#define ORO_ACT_DEFAULT_ACTIVITY
/* #undef ORO_ACT_DEFAULT_SEQUENTIAL */
#define OS_HAVE_MAIN
#define OS_HAVE_IOSTREAM
#define OS_HAVE_STREAMS
/* #undef OS_THREAD_SCOPE */
#define OS_RT_MALLOC
#ifdef OS_THREAD_SCOPE
#define OROPKG_OS_THREAD_SCOPE
#endif

/* #undef ORO_OS_LINUX_CAP_NG */

#define ORO_HAVE_PTHREAD_SETNAME_NP
#define ORO_HAVE_BOOST_UUID
/* #undef ORO_HAVE_LIBUUID */

/* #undef ORO_OS_USE_BOOST_THREAD */
#ifdef ORO_OS_USE_BOOST_THREAD
# ifndef BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG
#  define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG
# endif
# ifndef BOOST_THREAD_DONT_USE_CHRONO
#  define BOOST_THREAD_DONT_USE_CHRONO
# endif
#endif

/* #undef CONFIG_FORCE_UP */

#define ORO_SIGNALLING_OPERATIONS
/* #undef ORO_SIGNALLING_PORTS */

/* #undef OS_EMBEDDED */
#ifdef OS_EMBEDDED
#define ORO_EMBEDDED
#endif

/* #undef OS_NOEXCEPTIONS */
#ifdef OS_NOEXCEPTIONS
#define ORO_OS_NOEXCEPTIONS
#endif

#if !defined(OS_EMBEDDED) || defined(OS_EMBEDDED_SCRIPTING)
#define OROPKG_EXECUTION_PROGRAM_PARSER
#endif

/* #undef PLUGINS_ENABLE_SCRIPTING */

#define ORO_REMOTING

/* #undef ORO_NO_EMIT_CORBA_IOR */

/* #undef OROBLD_DISABLE_LOGGING */
/* #undef OROSEM_PRINTF_LOGGING */
#define OROSEM_FILE_LOGGING
#define OROSEM_REMOTE_LOGGING
/* #undef OROSEM_LOG4CPP_LOGGING */
#define ORONUM_LOGGING_BUFSIZE 1000

#define OROPKG_OS
#define OROPKG_CORELIB_EVENTS
#define OROPKG_CORELIB_REPORTING
#define OROPKG_DEVICE_INTERFACE

#define OROPKG_EXECUTION
#define OROPKG_EXECUTION_ENGINE 1
#define OROPKG_EXECUTION_PROGRAM_PROCESSOR
#define OROPKG_EXECUTION_ENGINE_EVENTS
#define OROPKG_EXECUTION_ENGINE_COMMANDS
#define OROPKG_EXECUTION_ENGINE_PROGRAMS
#define OROPKG_EXECUTION_ENGINE_STATEMACHINES
#define ORONUM_EXECUTION_PROC_QUEUE_SIZE 16

/** If marshalling is enabled, use these defines. */
#define PLUGINS_ENABLE_MARSHALLING
#ifdef PLUGINS_ENABLE_MARSHALLING
/* #undef OROPKG_SUPPORT_XERCES_C */
#define OROPKG_CORELIB_PROPERTIES_MARSHALLING
#define OROPKG_CORELIB_PROPERTIES_MARSHALLING_CPF 1
#define ORODAT_CORELIB_PROPERTIES_MARSHALLING_INCLUDE "marsh/CPFMarshaller.hpp"
#define OROCLS_CORELIB_PROPERTIES_MARSHALLING_DRIVER CPFMarshaller
#define ORODAT_CORELIB_PROPERTIES_DEMARSHALLING_INCLUDE "marsh/TinyDemarshaller.hpp"
#define OROCLS_CORELIB_PROPERTIES_DEMARSHALLING_DRIVER TinyDemarshaller
#endif

// Target detection macros for users:
// Backwards compatibility:
#define OROPKG_OS_GNULINUX

// New format:
#define OROCOS_TARGET_GNULINUX 1

#define OROCOS_TARGET_NAME "gnulinux"

// Safety check:
#ifndef OROPKG_OS_GNULINUX
#error "Configuration error: OROPKG_OS_GNULINUX not defined !"
#endif

#endif
