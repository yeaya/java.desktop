#ifndef _bug7088744$2$1_h_
#define _bug7088744$2$1_h_
//$ class bug7088744$2$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class bug7088744$2;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class bug7088744$2$1 : public ::java::awt::event::MouseAdapter {
	$class(bug7088744$2$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	bug7088744$2$1();
	void init$(::bug7088744$2* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::bug7088744$2* this$0 = nullptr;
};

#endif // _bug7088744$2$1_h_