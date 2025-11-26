#ifndef _javax_swing_JComponent$AccessibleJComponent$AccessibleFocusHandler_h_
#define _javax_swing_JComponent$AccessibleJComponent$AccessibleFocusHandler_h_
//$ class javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent$AccessibleJComponent;
	}
}

namespace javax {
	namespace swing {

class $import JComponent$AccessibleJComponent$AccessibleFocusHandler : public ::java::awt::event::FocusListener {
	$class(JComponent$AccessibleJComponent$AccessibleFocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	JComponent$AccessibleJComponent$AccessibleFocusHandler();
	void init$(::javax::swing::JComponent$AccessibleJComponent* this$1);
	virtual void focusGained(::java::awt::event::FocusEvent* event) override;
	virtual void focusLost(::java::awt::event::FocusEvent* event) override;
	::javax::swing::JComponent$AccessibleJComponent* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$AccessibleJComponent$AccessibleFocusHandler_h_