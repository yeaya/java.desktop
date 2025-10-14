#ifndef _bug4708809_h_
#define _bug4708809_h_
//$ class bug4708809
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollBar;
		class JScrollPane;
	}
}

class $export bug4708809 : public ::java::lang::Object {
	$class(bug4708809, 0, ::java::lang::Object)
public:
	bug4708809();
	void init$();
	static void createAndShowGUI();
	static ::java::awt::Point* getClickPoint(double scaleX, double scaleY);
	static void lambda$main$0();
	static void main($StringArray* args);
	static $volatile(bool) do_test;
	static $volatile(bool) passed;
	static ::javax::swing::JScrollPane* spane;
	static ::javax::swing::JScrollBar* sbar;
	static ::javax::swing::JFrame* fr;
};

#endif // _bug4708809_h_