#ifndef _javax_swing_text_PlainView$1_h_
#define _javax_swing_text_PlainView$1_h_
//$ class javax.swing.text.PlainView$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			class PlainView$FPMethodArgs;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class PlainView$1 : public ::java::security::PrivilegedAction {
	$class(PlainView$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PlainView$1();
	void init$($String* val$methodName, $Class* val$className, ::javax::swing::text::PlainView$FPMethodArgs* val$methodArgs);
	virtual $Object* run() override;
	::javax::swing::text::PlainView$FPMethodArgs* val$methodArgs = nullptr;
	$Class* val$className = nullptr;
	$String* val$methodName = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_PlainView$1_h_