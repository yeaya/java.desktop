#ifndef _bug6278700$1_h_
#define _bug6278700$1_h_
//$ class bug6278700$1
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

class bug6278700;
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class bug6278700$1 : public ::javax::swing::event::ChangeListener {
	$class(bug6278700$1, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	bug6278700$1();
	void init$(::bug6278700* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::bug6278700* this$0 = nullptr;
};

#endif // _bug6278700$1_h_