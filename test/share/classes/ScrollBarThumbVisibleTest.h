#ifndef _ScrollBarThumbVisibleTest_h_
#define _ScrollBarThumbVisibleTest_h_
//$ class ScrollBarThumbVisibleTest
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
	}
}

class $export ScrollBarThumbVisibleTest : public ::java::lang::Object {
	$class(ScrollBarThumbVisibleTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ScrollBarThumbVisibleTest();
	void init$();
	static void main($StringArray* args);
	static void setup(::javax::swing::JFrame* frame);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Point* point;
	static ::javax::swing::JScrollBar* bar;
};

#endif // _ScrollBarThumbVisibleTest_h_