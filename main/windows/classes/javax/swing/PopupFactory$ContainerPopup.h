#ifndef _javax_swing_PopupFactory$ContainerPopup_h_
#define _javax_swing_PopupFactory$ContainerPopup_h_
//$ class javax.swing.PopupFactory$ContainerPopup
//$ extends javax.swing.Popup

#include <javax/swing/Popup.h>

namespace java {
	namespace awt {
		class Component;
		class GraphicsConfiguration;
		class Rectangle;
	}
}

namespace javax {
	namespace swing {

class PopupFactory$ContainerPopup : public ::javax::swing::Popup {
	$class(PopupFactory$ContainerPopup, $NO_CLASS_INIT, ::javax::swing::Popup)
public:
	PopupFactory$ContainerPopup();
	void init$();
	virtual bool fitsOnScreen();
	virtual ::java::awt::Rectangle* getContainerPopupArea(::java::awt::GraphicsConfiguration* gc);
	virtual void hide() override;
	virtual bool overlappedByOwnedWindow();
	virtual void pack() override;
	virtual void reset(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY) override;
	::java::awt::Component* owner = nullptr;
	int32_t x = 0;
	int32_t y = 0;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$ContainerPopup_h_