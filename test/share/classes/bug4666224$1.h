#ifndef _bug4666224$1_h_
#define _bug4666224$1_h_
//$ class bug4666224$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class bug4666224;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class bug4666224$1 : public ::java::awt::event::MouseAdapter {
	$class(bug4666224$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	bug4666224$1();
	void init$(::bug4666224* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::bug4666224* this$0 = nullptr;
};

#endif // _bug4666224$1_h_