#ifndef _sun_font_SunFontManager$3_h_
#define _sun_font_SunFontManager$3_h_
//$ class sun.font.SunFontManager$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$3 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$3();
	void init$(::sun::font::SunFontManager* this$0);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$3_h_