#ifndef _TestCCEOnEditEvent$4_h_
#define _TestCCEOnEditEvent$4_h_
//$ class TestCCEOnEditEvent$4
//$ extends javax.swing.undo.UndoManager

#include <javax/swing/undo/UndoManager.h>

class TestCCEOnEditEvent;
namespace javax {
	namespace swing {
		namespace event {
			class UndoableEditEvent;
		}
	}
}

class TestCCEOnEditEvent$4 : public ::javax::swing::undo::UndoManager {
	$class(TestCCEOnEditEvent$4, $NO_CLASS_INIT, ::javax::swing::undo::UndoManager)
public:
	TestCCEOnEditEvent$4();
	void init$(::TestCCEOnEditEvent* this$0);
	virtual void undoableEditHappened(::javax::swing::event::UndoableEditEvent* event) override;
	::TestCCEOnEditEvent* this$0 = nullptr;
};

#endif // _TestCCEOnEditEvent$4_h_