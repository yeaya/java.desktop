#ifndef _SetInvokerJPopupMenuTest_h_
#define _SetInvokerJPopupMenuTest_h_
//$ class SetInvokerJPopupMenuTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class SetInvokerJPopupMenuTest$MyButton;
class SetInvokerJPopupMenuTest$MyPopupMenu;
namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export SetInvokerJPopupMenuTest : public ::java::lang::Object {
	$class(SetInvokerJPopupMenuTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SetInvokerJPopupMenuTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static void postDown();
	static void postUp();
	static ::SetInvokerJPopupMenuTest$MyPopupMenu* popup;
	static ::SetInvokerJPopupMenuTest$MyButton* jtb;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* f;
	static ::java::awt::Point* p;
	static bool isPopupVisible;
};

#endif // _SetInvokerJPopupMenuTest_h_