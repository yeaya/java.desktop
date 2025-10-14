#ifndef _sun_font_TrueTypeFont$1_h_
#define _sun_font_TrueTypeFont$1_h_
//$ class sun.font.TrueTypeFont$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace font {
		class TrueTypeFont;
	}
}

namespace sun {
	namespace font {

class TrueTypeFont$1 : public ::java::security::PrivilegedExceptionAction {
	$class(TrueTypeFont$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	TrueTypeFont$1();
	void init$(::sun::font::TrueTypeFont* this$0);
	virtual $Object* run() override;
	::sun::font::TrueTypeFont* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_TrueTypeFont$1_h_