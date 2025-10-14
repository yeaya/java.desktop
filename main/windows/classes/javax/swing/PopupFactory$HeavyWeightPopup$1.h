#ifndef _javax_swing_PopupFactory$HeavyWeightPopup$1_h_
#define _javax_swing_PopupFactory$HeavyWeightPopup$1_h_
//$ class javax.swing.PopupFactory$HeavyWeightPopup$1
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace javax {
	namespace swing {

class PopupFactory$HeavyWeightPopup$1 : public ::java::awt::event::WindowAdapter {
	$class(PopupFactory$HeavyWeightPopup$1, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	PopupFactory$HeavyWeightPopup$1();
	void init$(::java::awt::Window* val$w);
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	::java::awt::Window* val$w = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$HeavyWeightPopup$1_h_