#ifndef _bug6249972_h_
#define _bug6249972_h_
//$ class bug6249972
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
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
namespace javax {
	namespace swing {
		class JFrame;
		class JMenu;
	}
}

class $export bug6249972 : public ::java::awt::event::ActionListener {
	$class(bug6249972, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug6249972();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static void lambda$main$0();
	void lambda$new$1();
	void lambda$test$2();
	static void main($StringArray* args);
	void test();
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	::javax::swing::JMenu* menu = nullptr;
	$volatile(bool) testPassed = false;
	$volatile(::java::awt::Point*) p = nullptr;
	$volatile(::java::awt::Dimension*) size = nullptr;
};

#endif // _bug6249972_h_