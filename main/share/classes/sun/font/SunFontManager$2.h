#ifndef _sun_font_SunFontManager$2_h_
#define _sun_font_SunFontManager$2_h_
//$ class sun.font.SunFontManager$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$2 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$2();
	void init$(::sun::font::SunFontManager* this$0);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$2_h_