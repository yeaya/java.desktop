#ifndef _bug8075609_h_
#define _bug8075609_h_
//$ class bug8075609
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextField;
	}
}

class $export bug8075609 : public ::java::lang::Object {
	$class(bug8075609, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8075609();
	void init$();
	static void createAndShowGUI();
	static void hitKey(::java::awt::Robot* robot, int32_t keycode);
	static void lambda$main$0();
	static void main($StringArray* args);
	static void runTest1();
	static ::java::awt::Robot* robot;
	static ::javax::swing::JTextField* textField;
	static ::javax::swing::JFrame* mainFrame;
};

#endif // _bug8075609_h_