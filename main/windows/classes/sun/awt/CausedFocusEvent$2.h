#ifndef _sun_awt_CausedFocusEvent$2_h_
#define _sun_awt_CausedFocusEvent$2_h_
//$ class sun.awt.CausedFocusEvent$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace sun {
	namespace awt {
		class CausedFocusEvent;
	}
}

namespace sun {
	namespace awt {

class CausedFocusEvent$2 : public ::java::security::PrivilegedAction {
	$class(CausedFocusEvent$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CausedFocusEvent$2();
	void init$(::sun::awt::CausedFocusEvent* this$0, ::java::lang::reflect::Field* val$consumedField, ::java::awt::event::FocusEvent* val$focusEvent);
	virtual $Object* run() override;
	::sun::awt::CausedFocusEvent* this$0 = nullptr;
	::java::awt::event::FocusEvent* val$focusEvent = nullptr;
	::java::lang::reflect::Field* val$consumedField = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CausedFocusEvent$2_h_