#ifndef _javax_swing_plaf_basic_ComboPopup_h_
#define _javax_swing_plaf_basic_ComboPopup_h_
//$ interface javax.swing.plaf.basic.ComboPopup
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyListener;
			class MouseListener;
			class MouseMotionListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export ComboPopup : public ::java::lang::Object {
	$interface(ComboPopup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::event::KeyListener* getKeyListener() {return nullptr;}
	virtual ::javax::swing::JList* getList() {return nullptr;}
	virtual ::java::awt::event::MouseListener* getMouseListener() {return nullptr;}
	virtual ::java::awt::event::MouseMotionListener* getMouseMotionListener() {return nullptr;}
	virtual void hide() {}
	virtual bool isVisible() {return false;}
	virtual void show() {}
	virtual void uninstallingUI() {}
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_ComboPopup_h_