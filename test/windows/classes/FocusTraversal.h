#ifndef _FocusTraversal_h_
#define _FocusTraversal_h_
//$ class FocusTraversal
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
		class JFrame;
		class JRadioButton;
		class JTextField;
	}
}

class $export FocusTraversal : public ::java::lang::Object {
	$class(FocusTraversal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FocusTraversal();
	void init$();
	static void cleanUp();
	static void createUI($String* lookAndFeelString);
	static void executeCase($String* lookAndFeelString);
	static void focusOn(::java::awt::Component* component);
	static void isFocusOwner(::java::awt::Component* queriedFocusOwner, $String* direction);
	static void main($StringArray* args);
	static void runTestCase();
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JRadioButton* a;
	static ::javax::swing::JRadioButton* b;
	static ::javax::swing::JRadioButton* c;
	static ::javax::swing::JRadioButton* d;
	static ::javax::swing::JTextField* next;
	static ::javax::swing::JTextField* prev;
	static ::java::awt::Robot* robot;
};

#endif // _FocusTraversal_h_