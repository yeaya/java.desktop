#ifndef _sun_java2d_loops_FontInfo_h_
#define _sun_java2d_loops_FontInfo_h_
//$ class sun.java2d.loops.FontInfo
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class FontStrike;
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class FontInfo : public ::java::lang::Cloneable {
	$class(FontInfo, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	FontInfo();
	void init$();
	virtual $Object* clone() override;
	virtual $String* mtx($doubles* matrix);
	virtual $String* toString() override;
	::java::awt::Font* font = nullptr;
	::sun::font::Font2D* font2D = nullptr;
	::sun::font::FontStrike* fontStrike = nullptr;
	$doubles* devTx = nullptr;
	$doubles* glyphTx = nullptr;
	bool nonInvertibleTx = false;
	int32_t pixelHeight = 0;
	float originX = 0.0;
	float originY = 0.0;
	int32_t aaHint = 0;
	bool lcdRGBOrder = false;
	bool lcdSubPixPos = false;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_FontInfo_h_