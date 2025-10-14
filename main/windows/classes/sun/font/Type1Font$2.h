#ifndef _sun_font_Type1Font$2_h_
#define _sun_font_Type1Font$2_h_
//$ class sun.font.Type1Font$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class Type1Font;
	}
}

namespace sun {
	namespace font {

class Type1Font$2 : public ::java::security::PrivilegedAction {
	$class(Type1Font$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Type1Font$2();
	void init$(::sun::font::Type1Font* this$0);
	virtual $Object* run() override;
	::sun::font::Type1Font* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Type1Font$2_h_