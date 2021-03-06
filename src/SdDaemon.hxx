/* mpdscribble (MPD Client)
 * Copyright (C) 2008-2019 The Music Player Daemon Project
 * Project homepage: http://musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef SD_DAEMON_HXX
#define SD_DAEMON_HXX

/* this header provides dummy implementations of some functions in
   libsystemd/sd-daemon.h to reduce the number of #ifdefs */

#include "config.h"
#ifdef HAVE_LIBSYSTEMD
#include <systemd/sd-daemon.h>
#else

static inline void
sd_notify(int, const char *) noexcept
{
}

static constexpr bool
sd_booted() noexcept
{
	return false;
}

#endif

#endif
