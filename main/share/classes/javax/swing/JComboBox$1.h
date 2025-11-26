#ifndef _javax_swing_JComboBox$1_h_
#define _javax_swing_JComboBox$1_h_
//$ class javax.swing.JComboBox$1
//$ extends javax.swing.event.AncestorListener

#include <javax/swing/event/AncestorListener.h>

namespace javax {
	namespace swing {
		class JComboBox;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JComboBox$1 : public ::javax::swing::event::AncestorListener {
	$class(JComboBox$1, $NO_CLASS_INIT, ::javax::swing::event::AncestorListener)
public:
	JComboBox$1();
	void init$(::javax::swing::JComboBox* this$0);
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* event) override;
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* event) override;
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* event) override;
	::javax::swing::JComboBox* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$1_h_