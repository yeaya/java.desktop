#ifndef _Test6462562$TestFormattedTextField_h_
#define _Test6462562$TestFormattedTextField_h_
//$ class Test6462562$TestFormattedTextField
//$ extends javax.swing.JFormattedTextField

#include <javax/swing/JFormattedTextField.h>

class Test6462562;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class Action;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class InternationalFormatter;
		}
	}
}

class $export Test6462562$TestFormattedTextField : public ::javax::swing::JFormattedTextField {
	$class(Test6462562$TestFormattedTextField, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField)
public:
	Test6462562$TestFormattedTextField();
	using ::javax::swing::JFormattedTextField::getToolTipText;
	using ::javax::swing::JFormattedTextField::contains;
	using ::javax::swing::JFormattedTextField::enable;
	using ::javax::swing::JFormattedTextField::getBounds;
	using ::javax::swing::JFormattedTextField::getSize;
	using ::javax::swing::JFormattedTextField::getLocation;
	using ::javax::swing::JFormattedTextField::firePropertyChange;
	using ::javax::swing::JFormattedTextField::add;
	using ::javax::swing::JFormattedTextField::getMousePosition;
	void init$(::Test6462562* this$0, ::javax::swing::text::InternationalFormatter* fmt);
	using ::javax::swing::JFormattedTextField::setUI;
	using ::javax::swing::JFormattedTextField::print;
	using ::javax::swing::JFormattedTextField::requestFocus;
	using ::javax::swing::JFormattedTextField::requestFocusInWindow;
	using ::javax::swing::JFormattedTextField::repaint;
	using ::javax::swing::JFormattedTextField::remove;
	using ::javax::swing::JFormattedTextField::list;
	virtual bool test(int32_t pos, int32_t selectionLength, $String* todo, Object$* expectedResult);
	::Test6462562* this$0 = nullptr;
	::javax::swing::Action* backspace = nullptr;
	::javax::swing::Action* delete$ = nullptr;
	::javax::swing::Action* insert = nullptr;
	::java::awt::event::ActionEvent* dummyEvent = nullptr;
};

#endif // _Test6462562$TestFormattedTextField_h_