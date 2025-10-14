#ifndef _sun_font_SunFontManager$6_h_
#define _sun_font_SunFontManager$6_h_
//$ class sun.font.SunFontManager$6
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$6 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$6, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$6();
	void init$(::sun::font::SunFontManager* this$0, $String* val$s);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
	$String* val$s = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$6_h_