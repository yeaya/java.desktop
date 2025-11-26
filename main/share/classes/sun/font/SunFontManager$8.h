#ifndef _sun_font_SunFontManager$8_h_
#define _sun_font_SunFontManager$8_h_
//$ class sun.font.SunFontManager$8
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$8 : public ::java::lang::Runnable {
	$class(SunFontManager$8, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SunFontManager$8();
	void init$(::sun::font::SunFontManager* this$0);
	virtual void run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$8_h_