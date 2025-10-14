#ifndef _bug4760494_h_
#define _bug4760494_h_
//$ class bug4760494
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug4760494$PassedListener;
class bug4760494$TestStateListener;
namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPopupMenu;
	}
}

class $export bug4760494 : public ::java::lang::Object {
	$class(bug4760494, 0, ::java::lang::Object)
public:
	bug4760494();
	void init$();
	static void createUI();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::bug4760494$PassedListener* pass;
	static ::bug4760494$TestStateListener* tester;
	static ::java::awt::Robot* robot;
	static $volatile(bool) pressed;
	static $volatile(bool) passed;
	static $volatile(::javax::swing::JPopupMenu*) popup;
};

#endif // _bug4760494_h_