#ifndef _TestButtonGroupFocusTraversal_h_
#define _TestButtonGroupFocusTraversal_h_
//$ class TestButtonGroupFocusTraversal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JFrame;
		class JRadioButton;
		class JTextField;
		class JToggleButton;
	}
}

class $export TestButtonGroupFocusTraversal : public ::java::lang::Object {
	$class(TestButtonGroupFocusTraversal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestButtonGroupFocusTraversal();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static void checkCheckboxActionPerformed();
	static void checkFocusedComponent(::java::awt::Component* component);
	static void checkToggleButtonActionPerformed();
	static void createUI();
	static void main($StringArray* args);
	static void pressKey($ints* keys);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextField* textFieldFirst;
	static ::javax::swing::JTextField* textFieldLast;
	static ::javax::swing::JToggleButton* toggleButton1;
	static ::javax::swing::JToggleButton* toggleButton2;
	static ::javax::swing::JCheckBox* checkBox1;
	static ::javax::swing::JCheckBox* checkBox2;
	static bool toggleButtonActionPerformed;
	static bool checkboxActionPerformed;
	static ::javax::swing::JRadioButton* radioButton1;
	static ::javax::swing::JRadioButton* radioButton2;
	static ::java::awt::Robot* robot;
};

#endif // _TestButtonGroupFocusTraversal_h_