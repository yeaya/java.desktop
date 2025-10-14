#ifndef _sun_font_SunFontManager$7_h_
#define _sun_font_SunFontManager$7_h_
//$ class sun.font.SunFontManager$7
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace font {
		class CreatedFontTracker;
		class SunFontManager;
	}
}

namespace sun {
	namespace font {

class SunFontManager$7 : public ::java::security::PrivilegedAction {
	$class(SunFontManager$7, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunFontManager$7();
	void init$(::sun::font::SunFontManager* this$0, ::sun::font::CreatedFontTracker* val$_tracker, ::java::io::File* val$fFile);
	virtual $Object* run() override;
	::sun::font::SunFontManager* this$0 = nullptr;
	::java::io::File* val$fFile = nullptr;
	::sun::font::CreatedFontTracker* val$_tracker = nullptr;
};

	} // font
} // sun

#endif // _sun_font_SunFontManager$7_h_