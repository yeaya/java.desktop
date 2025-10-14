#ifndef _javax_swing_JComponent$2_h_
#define _javax_swing_JComponent$2_h_
//$ class javax.swing.JComponent$2
//$ extends sun.awt.RequestFocusController

#include <sun/awt/RequestFocusController.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}

namespace javax {
	namespace swing {

class JComponent$2 : public ::sun::awt::RequestFocusController {
	$class(JComponent$2, $NO_CLASS_INIT, ::sun::awt::RequestFocusController)
public:
	JComponent$2();
	void init$();
	virtual bool acceptRequestFocus(::java::awt::Component* from, ::java::awt::Component* to, bool temporary, bool focusedWindowChangeAllowed, ::java::awt::event::FocusEvent$Cause* cause) override;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$2_h_