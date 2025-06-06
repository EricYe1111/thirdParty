#ifndef QSYNCCONF_H
#define QSYNCCONF_H

/***************************************************************************
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2025 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#include "ttkprivate.h"

#define SYNC_DATA_BUCKET     "greedysky-data"
#define SYNC_MUSIC_BUCKET    "greedysky-music"

/*! @brief The class of the sync data config.
 * @author Greedysky <greedysky@163.com>
 */
struct TTK_MODULE_EXPORT QSyncConfig
{
    static QString HOST;
    static QString NAME;
    static QByteArray KEY;
};

#endif // QSYNCCONF_H
