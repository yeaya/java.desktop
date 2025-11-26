#ifndef _javax_swing_JOptionPane$4_h_
#define _javax_swing_JOptionPane$4_h_
//$ class javax.swing.JOptionPane$4
//$ extends javax.swing.event.InternalFrameAdapter

#include <javax/swing/event/InternalFrameAdapter.h>

namespace javax {
	namespace swing {
		class JOptionPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class InternalFrameEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JOptionPane$4 : public ::javax::swing::event::InternalFrameAdapter {
	$class(JOptionPane$4, $NO_CLASS_INIT, ::javax::swing::event::InternalFrameAdapter)
public:
	JOptionPane$4();
	void init$(::javax::swing::JOptionPane* this$0);
	virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent* e) override;
	::javax::swing::JOptionPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$4_h_