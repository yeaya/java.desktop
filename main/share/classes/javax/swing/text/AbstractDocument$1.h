#ifndef _javax_swing_text_AbstractDocument$1_h_
#define _javax_swing_text_AbstractDocument$1_h_
//$ class javax.swing.text.AbstractDocument$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace swing {
		namespace text {
			class AbstractDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class AbstractDocument$1 : public ::java::security::PrivilegedAction {
	$class(AbstractDocument$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AbstractDocument$1();
	void init$(::javax::swing::text::AbstractDocument* this$0);
	virtual $Object* run() override;
	::javax::swing::text::AbstractDocument* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AbstractDocument$1_h_