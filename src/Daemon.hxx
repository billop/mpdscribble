/* mpdscribble (MPD Client)
 * Copyright (C) 2008-2019 The Music Player Daemon Project
 * Copyright (C) 2005-2008 Kuno Woudt <kuno@frob.nl>
 * Project homepage: http://musicpd.org
 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef DAEMON_HXX
#define DAEMON_HXX

/**
 * Throws on error.
 */
void
daemonize_init(const char *user, const char *pidfile);

void
daemonize_finish() noexcept;

/**
 * Close stdin (fd 0) and re-open it as /dev/null.
 */
void
daemonize_close_stdin() noexcept;

/**
 * Close stdout and stderr and re-open it as /dev/null.
 */
void
daemonize_close_stdout_stderr() noexcept;

/**
 * Throws on error.
 */
void
daemonize_set_user();

/**
 * Daemonize the process: detach it from the parent process and the
 * session.
 *
 * Throws on error.
 */
void
daemonize_detach();

/**
 * Writes the id of the current process to the configured pidfile.
 *
 * Throws on error.
 */
void
daemonize_write_pidfile();

#endif
