#ifndef _TestCCEOnEditEvent$3$1_h_
#define _TestCCEOnEditEvent$3$1_h_
//$ class TestCCEOnEditEvent$3$1
//$ extends javax.swing.text.PlainDocument

#include <javax/swing/text/PlainDocument.h>

class TestCCEOnEditEvent$3;
namespace javax {
	namespace swing {
		namespace event {
			class UndoableEditEvent;
		}
	}
}

class TestCCEOnEditEvent$3$1 : public ::javax::swing::text::PlainDocument {
	$class(TestCCEOnEditEvent$3$1, $NO_CLASS_INIT, ::javax::swing::text::PlainDocument)
public:
	TestCCEOnEditEvent$3$1();
	void init$(::TestCCEOnEditEvent$3* this$1);
	virtual void fireUndoableEditUpdate(::javax::swing::event::UndoableEditEvent* event) override;
	::TestCCEOnEditEvent$3* this$1 = nullptr;
};

#endif // _TestCCEOnEditEvent$3$1_h_