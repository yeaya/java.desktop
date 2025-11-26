#ifndef _sun_font_SunFontManager$8$1_h_
#define _sun_font_SunFontManager$8$1_h_
//$ class sun.font.SunFontManager$8$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager$8;
	}
}

namespace sun {
	namespace font {

class SunFontManager$8$1 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$8$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$8$1();
	void init$(::sun::font::SunFontManager$8* this$1);
	virtual $Object* run() override;
	::sun::font::SunFontManager$8* this$1 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$8$1_h_