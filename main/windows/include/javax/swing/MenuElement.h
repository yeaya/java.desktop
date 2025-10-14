#ifndef _javax_swing_MenuElement_h_
#define _javax_swing_MenuElement_h_
//$ interface javax.swing.MenuElement
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class MenuSelectionManager;
	}
}

namespace javax {
	namespace swing {

class $import MenuElement : public ::java::lang::Object {
	$interface(MenuElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getComponent() {return nullptr;}
	virtual $Array<::javax::swing::MenuElement>* getSubElements() {return nullptr;}
	virtual void menuSelectionChanged(bool isIncluded) {}
	virtual void processKeyEvent(::java::awt::event::KeyEvent* event, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) {}
	virtual void processMouseEvent(::java::awt::event::MouseEvent* event, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) {}
};

	} // swing
} // javax

#endif // _javax_swing_MenuElement_h_