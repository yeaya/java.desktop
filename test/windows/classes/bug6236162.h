#ifndef _bug6236162_h_
#define _bug6236162_h_
//$ class bug6236162
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug6236162$MyComboUI;
namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JFrame;
	}
}

class $export bug6236162 : public ::java::lang::Object {
	$class(bug6236162, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6236162();
	void init$();
	static void createAndShowGUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void test();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JComboBox* combo;
	static ::bug6236162$MyComboUI* comboUI;
	static ::java::awt::Robot* robot;
};

#endif // _bug6236162_h_