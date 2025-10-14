#ifndef _bug7160604$2_h_
#define _bug7160604$2_h_
//$ class bug7160604$2
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

class bug7160604;
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JLabel;
		class JPopupMenu;
	}
}

class bug7160604$2 : public ::java::awt::event::MouseAdapter {
	$class(bug7160604$2, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	bug7160604$2();
	void init$(::bug7160604* this$0, ::javax::swing::JPopupMenu* val$jPopupMenu, ::javax::swing::JLabel* val$label);
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::bug7160604* this$0 = nullptr;
	::javax::swing::JLabel* val$label = nullptr;
	::javax::swing::JPopupMenu* val$jPopupMenu = nullptr;
};

#endif // _bug7160604$2_h_