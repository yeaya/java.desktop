#ifndef _javax_swing_PopupFactory$HeadlessPopup_h_
#define _javax_swing_PopupFactory$HeadlessPopup_h_
//$ class javax.swing.PopupFactory$HeadlessPopup
//$ extends javax.swing.PopupFactory$ContainerPopup

#include <javax/swing/PopupFactory$ContainerPopup.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Popup;
	}
}

namespace javax {
	namespace swing {

class PopupFactory$HeadlessPopup : public ::javax::swing::PopupFactory$ContainerPopup {
	$class(PopupFactory$HeadlessPopup, $NO_CLASS_INIT, ::javax::swing::PopupFactory$ContainerPopup)
public:
	PopupFactory$HeadlessPopup();
	void init$();
	virtual ::java::awt::Component* createComponent(::java::awt::Component* owner) override;
	static ::javax::swing::Popup* getHeadlessPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	virtual void hide() override;
	virtual void show() override;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$HeadlessPopup_h_