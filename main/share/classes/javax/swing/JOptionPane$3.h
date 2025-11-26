#ifndef _javax_swing_JOptionPane$3_h_
#define _javax_swing_JOptionPane$3_h_
//$ class javax.swing.JOptionPane$3
//$ extends java.awt.event.ComponentAdapter

#include <java/awt/event/ComponentAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {

class JOptionPane$3 : public ::java::awt::event::ComponentAdapter {
	$class(JOptionPane$3, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter)
public:
	JOptionPane$3();
	void init$(::javax::swing::JOptionPane* this$0);
	virtual void componentShown(::java::awt::event::ComponentEvent* ce) override;
	::javax::swing::JOptionPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$3_h_