#ifndef _ClearSelTest$1_h_
#define _ClearSelTest$1_h_
//$ class ClearSelTest$1
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class ClearSelTest$1 : public ::java::awt::event::MouseAdapter {
	$class(ClearSelTest$1, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	ClearSelTest$1();
	void init$(::javax::swing::JTable* val$table);
	virtual void mouseEntered(::java::awt::event::MouseEvent* pE) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* pE) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* pE) override;
	::javax::swing::JTable* val$table = nullptr;
};

#endif // _ClearSelTest$1_h_