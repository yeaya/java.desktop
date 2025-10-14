#ifndef _javax_swing_Popup_h_
#define _javax_swing_Popup_h_
//$ class javax.swing.Popup
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}

namespace javax {
	namespace swing {

class $import Popup : public ::java::lang::Object {
	$class(Popup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Popup();
	void init$(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t x, int32_t y);
	void init$();
	virtual ::java::awt::Component* createComponent(::java::awt::Component* owner);
	virtual void dispose();
	virtual ::java::awt::Component* getComponent();
	::java::awt::Window* getParentWindow(::java::awt::Component* owner);
	virtual void hide();
	virtual void pack();
	virtual void reset(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	virtual void show();
	::java::awt::Component* component = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Popup_h_