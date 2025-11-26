#ifndef _WindowsComboBoxSizeTest_h_
#define _WindowsComboBoxSizeTest_h_
//$ class WindowsComboBoxSizeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
		class JTextField;
	}
}

class $export WindowsComboBoxSizeTest : public ::java::lang::Object {
	$class(WindowsComboBoxSizeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsComboBoxSizeTest();
	void init$();
	static void lambda$main$0();
	static void lambda$test$1();
	static void main($StringArray* args);
	static void test();
	static ::javax::swing::JTextField* textField;
	static ::javax::swing::JComboBox* comboBox;
	static ::javax::swing::JComboBox* comboBoxEd;
	static ::javax::swing::JFrame* frame;
};

#endif // _WindowsComboBoxSizeTest_h_