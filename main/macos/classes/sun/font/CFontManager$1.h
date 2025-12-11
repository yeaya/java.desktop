#ifndef _sun_font_CFontManager$1_h_
#define _sun_font_CFontManager$1_h_
//$ class sun.font.CFontManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class CFontManager;
	}
}

namespace sun {
	namespace font {

class CFontManager$1 : public ::java::security::PrivilegedAction {
	$class(CFontManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CFontManager$1();
	void init$(::sun::font::CFontManager* this$0);
	virtual $Object* run() override;
	::sun::font::CFontManager* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_CFontManager$1_h_