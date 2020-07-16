/***************************************************************************
  tag: psoetens Fri Oct 5 11:17:41 2007 +0000 rtt-target.h.in

                        rtt-target.h.in -  description
                           -------------------
    begin                : Fri Oct 5 2007
    copyright            : (C) 2007 Peter Soetens
    email                : peter@thesourceworks.com

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


/**
 * This is a helper file in the targets subdirectory
 * It includes the correct target, on behalf of rtt-config.h
 */

#define ORO_RTT_CONFIG_str(s) ORO_RTT_CONFIG__str(s-config.h)
#define ORO_RTT_CONFIG_OS_str(s) ORO_RTT_CONFIG__str(../s/s.h)
#define ORO_RTT_CONFIG__str(s) #s

#define OROCOS_TARGET_HEADER ORO_RTT_CONFIG_str(OROCOS_TARGET)
#define OROCOS_TARGET_HEADER_OS ORO_RTT_CONFIG_OS_str(OROCOS_TARGET)

#include OROCOS_TARGET_HEADER
#include OROCOS_TARGET_HEADER_OS

#undef ORO_RTT_CONFIG_str
#undef ORO_RTT_CONFIG__str
