#ifndef _sun_font_SunFontManager$5_h_
#define _sun_font_SunFontManager$5_h_
//$ class sun.font.SunFontManager$5
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$5 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$5();
	void init$(::sun::font::SunFontManager* this$0, $StringArray* val$files);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
	$StringArray* val$files = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$5_h_