#ifndef _javax_swing_JComponent$AccessibleJComponent$AccessibleContainerHandler_h_
#define _javax_swing_JComponent$AccessibleJComponent$AccessibleContainerHandler_h_
//$ class javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler
//$ extends java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
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

class $import JComponent$AccessibleJComponent$AccessibleContainerHandler : public ::java::awt::event::ContainerListener {
	$class(JComponent$AccessibleJComponent$AccessibleContainerHandler, $NO_CLASS_INIT, ::java::awt::event::ContainerListener)
public:
	JComponent$AccessibleJComponent$AccessibleContainerHandler();
	void init$(::javax::swing::JComponent$AccessibleJComponent* this$1);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	::javax::swing::JComponent$AccessibleJComponent* this$1 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$AccessibleJComponent$AccessibleContainerHandler_h_