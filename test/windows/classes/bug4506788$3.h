#ifndef _bug4506788$3_h_
#define _bug4506788$3_h_
//$ class bug4506788$3
//$ extends javax.swing.event.CaretListener

#include <javax/swing/event/CaretListener.h>

class bug4506788;
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
		}
	}
}

class bug4506788$3 : public ::javax::swing::event::CaretListener {
	$class(bug4506788$3, $NO_CLASS_INIT, ::javax::swing::event::CaretListener)
public:
	bug4506788$3();
	void init$(::bug4506788* this$0);
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) override;
	::bug4506788* this$0 = nullptr;
};

#endif // _bug4506788$3_h_