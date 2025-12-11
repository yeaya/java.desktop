#ifndef _sun_lwawt_macosx_CCustomCursor_h_
#define _sun_lwawt_macosx_CCustomCursor_h_
//$ class sun.lwawt.macosx.CCustomCursor
//$ extends java.awt.Cursor

#include <java/awt/Cursor.h>

namespace java {
	namespace awt {
		class Dimension;
		class Image;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCustomCursor : public ::java::awt::Cursor {
	$class(CCustomCursor, $NO_CLASS_INIT, ::java::awt::Cursor)
public:
	CCustomCursor();
	void init$(::java::awt::Image* cursor, ::java::awt::Point* hotSpot, $String* name);
	static ::java::awt::image::BufferedImage* createTransparentImage(int32_t w, int32_t h);
	static ::java::awt::Dimension* getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight);
	virtual ::java::awt::Point* getHotSpot();
	virtual int64_t getImageData();
	static ::java::awt::Dimension* getMaxCursorSize();
	static ::java::awt::Dimension* sMaxCursorSize;
	::java::awt::Image* fImage = nullptr;
	::java::awt::Point* fHotspot = nullptr;
	int32_t fWidth = 0;
	int32_t fHeight = 0;
	::sun::lwawt::macosx::CImage* fCImage = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CCustomCursor_h_