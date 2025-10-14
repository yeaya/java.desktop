#ifndef _bug6559152_h_
#define _bug6559152_h_
//$ class bug6559152
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JComponent;
		class JFrame;
	}
}

class $export bug6559152 : public ::java::lang::Object {
	$class(bug6559152, 0, ::java::lang::Object)
public:
	bug6559152();
	void init$();
	static void blockTillDisplayed(::javax::swing::JComponent* comp);
	static void checkResult();
	static void lambda$blockTillDisplayed$2(::javax::swing::JComponent* comp);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setupUI();
	static void test();
	static void testImpl();
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JComboBox* cb;
	static ::java::awt::Robot* robot;
	static ::java::awt::Point* p;
};

#endif // _bug6559152_h_