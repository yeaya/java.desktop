#ifndef _bug6348946_h_
#define _bug6348946_h_
//$ class bug6348946
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPanel;
	}
}

class $export bug6348946 : public ::java::lang::Object {
	$class(bug6348946, 0, ::java::lang::Object)
public:
	bug6348946();
	void init$();
	static void checkResult();
	static void clickOnSlider();
	static ::java::awt::Rectangle* getPanelRectangle();
	static void main($StringArray* args);
	static void setupUI();
	static void stopEDT();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JPanel* panel;
	static ::java::awt::Robot* robot;
	static $volatile(bool) passed;
};

#endif // _bug6348946_h_