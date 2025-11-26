#ifndef _sun_awt_FontConfiguration$1_h_
#define _sun_awt_FontConfiguration$1_h_
//$ class sun.awt.FontConfiguration$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}

namespace sun {
	namespace awt {

class FontConfiguration$1 : public ::java::security::PrivilegedAction {
	$class(FontConfiguration$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FontConfiguration$1();
	void init$(::sun::awt::FontConfiguration* this$0, $String* val$fileName);
	virtual $Object* run() override;
	::sun::awt::FontConfiguration* this$0 = nullptr;
	$String* val$fileName = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_FontConfiguration$1_h_