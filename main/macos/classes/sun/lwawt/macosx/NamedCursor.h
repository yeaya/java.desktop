#ifndef _sun_lwawt_macosx_NamedCursor_h_
#define _sun_lwawt_macosx_NamedCursor_h_
//$ class sun.lwawt.macosx.NamedCursor
//$ extends java.awt.Cursor

#include <java/awt/Cursor.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class NamedCursor : public ::java::awt::Cursor {
	$class(NamedCursor, $NO_CLASS_INIT, ::java::awt::Cursor)
public:
	NamedCursor();
	void init$($String* name);
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_NamedCursor_h_