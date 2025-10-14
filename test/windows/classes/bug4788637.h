#ifndef _bug4788637_h_
#define _bug4788637_h_
//$ class bug4788637
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JSpinner;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4788637 : public ::java::lang::Object {
	$class(bug4788637, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4788637();
	void init$();
	void createAndShowGUI();
	void destroy();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	void start();
	static ::javax::swing::JSpinner* spinner;
	static ::javax::swing::JFrame* fr;
	static ::java::awt::Robot* robot;
	int32_t step = 0;
	$booleans* spinnerValueChanged = nullptr;
	static ::java::awt::Point* p;
	static ::java::awt::Rectangle* rect;
};

#endif // _bug4788637_h_