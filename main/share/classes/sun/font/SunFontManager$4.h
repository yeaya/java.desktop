#ifndef _sun_font_SunFontManager$4_h_
#define _sun_font_SunFontManager$4_h_
//$ class sun.font.SunFontManager$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class FilenameFilter;
	}
}
namespace sun {
	namespace font {
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$4 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$4();
	void init$(::sun::font::SunFontManager* this$0, ::java::io::FilenameFilter* val$filter);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
	::java::io::FilenameFilter* val$filter = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$4_h_