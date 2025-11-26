#ifndef _bug8033699_h_
#define _bug8033699_h_
//$ class bug8033699
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JRadioButton;
	}
}

class $export bug8033699 : public ::java::lang::Object {
	$class(bug8033699, 0, ::java::lang::Object)
public:
	bug8033699();
	void init$();
	static void changeLAF();
	static void createAndShowGUI();
	static void hitKey(::java::awt::Robot* robot, int32_t keycode);
	static void hitKey(::java::awt::Robot* robot, int32_t mode, int32_t keycode);
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$runTest1$2();
	static void lambda$runTest2$3();
	static void lambda$runTest3$4();
	static void lambda$runTest4$5();
	static void lambda$runTest5$6();
	static void lambda$runTest6$7();
	static void lambda$runTest7$8();
	static void lambda$runTest8$9();
	static void lambda$runTest9$10();
	static void lambda$runTest9$11(::java::awt::event::ActionEvent* e);
	static void lambda$runTest9$12(::java::awt::event::ActionEvent* e);
	static void lambda$runTest9$13(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static void runTest1();
	static void runTest2();
	static void runTest3();
	static void runTest4();
	static void runTest5();
	static void runTest6();
	static void runTest7();
	static void runTest8();
	static void runTest9();
	static ::javax::swing::JFrame* mainFrame;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JButton* btnStart;
	static ::javax::swing::JButton* btnEnd;
	static ::javax::swing::JButton* btnMiddle;
	static ::javax::swing::JRadioButton* radioBtn1;
	static ::javax::swing::JRadioButton* radioBtn2;
	static ::javax::swing::JRadioButton* radioBtn3;
	static ::javax::swing::JRadioButton* radioBtnSingle;
	static ::java::lang::Boolean* actRB1;
	static ::java::lang::Boolean* actRB2;
	static ::java::lang::Boolean* actRB3;
};

#endif // _bug8033699_h_