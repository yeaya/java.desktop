#ifndef _sun_font_Type1Font$T1DisposerRecord$1_h_
#define _sun_font_Type1Font$T1DisposerRecord$1_h_
//$ class sun.font.Type1Font$T1DisposerRecord$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace font {
		class Type1Font$T1DisposerRecord;
	}
}

namespace sun {
	namespace font {

class Type1Font$T1DisposerRecord$1 : public ::java::security::PrivilegedAction {
	$class(Type1Font$T1DisposerRecord$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Type1Font$T1DisposerRecord$1();
	void init$(::sun::font::Type1Font$T1DisposerRecord* this$0);
	virtual $Object* run() override;
	::sun::font::Type1Font$T1DisposerRecord* this$0 = nullptr;
};

	} // font
} // sun

#endif // _sun_font_Type1Font$T1DisposerRecord$1_h_