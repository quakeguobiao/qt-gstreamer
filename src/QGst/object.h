/*
    Copyright (C) 2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGST_OBJECT_H
#define QGST_OBJECT_H

#include "global.h"
#include "../QGlib/object.h"

namespace QGst {

class Object : public QGlib::Object
{
    QGLIB_WRAPPER(GstObject)
protected:
    virtual void ref();
    virtual void unref();
};

}

QGLIB_REGISTER_TYPE(QGst::Object)

#endif // QGST_OBJECT_H