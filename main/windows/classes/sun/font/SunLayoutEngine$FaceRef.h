#ifndef _sun_font_SunLayoutEngine$FaceRef_h_
#define _sun_font_SunLayoutEngine$FaceRef_h_
//$ class sun.font.SunLayoutEngine$FaceRef
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace sun {
	namespace font {
		class Font2D;
	}
}

namespace sun {
	namespace font {

class SunLayoutEngine$FaceRef : public ::sun::java2d::DisposerRecord {
	$class(SunLayoutEngine$FaceRef, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	SunLayoutEngine$FaceRef();
	void init$(::sun::font::Font2D* font);
	virtual void dispose() override;
	int64_t getNativePtr();
	::sun::font::Font2D* font = nullptr;
	::java::lang::Long* facePtr = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunLayoutEngine$FaceRef_h_