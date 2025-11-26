#ifndef _sun_awt_FontConfiguration$2_h_
#define _sun_awt_FontConfiguration$2_h_
//$ class sun.awt.FontConfiguration$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}

namespace sun {
	namespace awt {

class FontConfiguration$2 : public ::java::security::PrivilegedAction {
	$class(FontConfiguration$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FontConfiguration$2();
	void init$(::sun::awt::FontConfiguration* this$0, $String* val$charsetName);
	virtual $Object* run() override;
	::sun::awt::FontConfiguration* this$0 = nullptr;
	$String* val$charsetName = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_FontConfiguration$2_h_