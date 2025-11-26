#ifndef _bug7146377$1$1_h_
#define _bug7146377$1$1_h_
//$ class bug7146377$1$1
//$ extends java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>

class bug7146377$1;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class bug7146377$1$1 : public ::java::awt::event::MouseListener {
	$class(bug7146377$1$1, $NO_CLASS_INIT, ::java::awt::event::MouseListener)
public:
	bug7146377$1$1();
	void init$(::bug7146377$1* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::bug7146377$1* this$0 = nullptr;
};

#endif // _bug7146377$1$1_h_