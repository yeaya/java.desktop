#ifndef _TableViewLayoutTest$1_h_
#define _TableViewLayoutTest$1_h_
//$ class TableViewLayoutTest$1
//$ extends javax.swing.event.CaretListener

#include <javax/swing/event/CaretListener.h>

class TableViewLayoutTest;
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
		}
	}
}

class TableViewLayoutTest$1 : public ::javax::swing::event::CaretListener {
	$class(TableViewLayoutTest$1, $NO_CLASS_INIT, ::javax::swing::event::CaretListener)
public:
	TableViewLayoutTest$1();
	void init$(::TableViewLayoutTest* this$0);
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) override;
	::TableViewLayoutTest* this$0 = nullptr;
};

#endif // _TableViewLayoutTest$1_h_