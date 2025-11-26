#ifndef _sun_font_SunFontManager$9_h_
#define _sun_font_SunFontManager$9_h_
//$ class sun.font.SunFontManager$9
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$9 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$9, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$9();
	void init$(::sun::font::SunFontManager* this$0);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$9_h_