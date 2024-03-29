/***************************************************************************
  tag: Peter Soetens Thu Sep 3 00:05:12 2009 +0200 rtt-mqueue-config.h.in

                        rtt-mqueue-config.h.in -  description
                           -------------------
    begin                : Thu Sep 3 2009
    copyright            : (C) 2009 Peter Soetens
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


#ifndef RTT_MQUEUE_CONFIG_H
#define RTT_MQUEUE_CONFIG_H

//
// See: <http://gcc.gnu.org/wiki/Visibility>
//
#define RTT_GCC_HASVISIBILITY
#if defined(__GNUG__) && defined(RTT_GCC_HASVISIBILITY) && (defined(__unix__) || defined(__APPLE__))

# if defined(RTT_MQUEUE_DLL_EXPORT)
   // Use RTT_MQUEUE_API for normal function exporting
#  define RTT_MQUEUE_API    __attribute__((visibility("default")))

   // Use RTT_MQUEUE_EXPORT for static template class member variables
   // They must always be 'globally' visible.
#  define RTT_MQUEUE_EXPORT __attribute__((visibility("default")))

   // Use RTT_MQUEUE_HIDE to explicitly hide a symbol
#  define RTT_MQUEUE_HIDE   __attribute__((visibility("hidden")))

# else
#  define RTT_MQUEUE_API
#  define RTT_MQUEUE_EXPORT __attribute__((visibility("default")))
#  define RTT_MQUEUE_HIDE   __attribute__((visibility("hidden")))
# endif
#else
   // NOT GNU
# if defined( __MINGW__ ) || defined( WIN32 )
#  if defined(RTT_MQUEUE_DLL_EXPORT)
#   define RTT_MQUEUE_API    __declspec(dllexport)
#   define RTT_MQUEUE_EXPORT __declspec(dllexport)
#   define RTT_MQUEUE_HIDE   
#  else
#   define RTT_MQUEUE_API	 __declspec(dllimport)
#   define RTT_MQUEUE_EXPORT __declspec(dllexport)
#   define RTT_MQUEUE_HIDE 
#  endif
# else
#  define RTT_MQUEUE_API
#  define RTT_MQUEUE_EXPORT
#  define RTT_MQUEUE_HIDE
# endif
#endif

#endif

