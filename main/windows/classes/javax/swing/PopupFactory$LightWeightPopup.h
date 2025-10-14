#ifndef _javax_swing_PopupFactory$LightWeightPopup_h_
#define _javax_swing_PopupFactory$LightWeightPopup_h_
//$ class javax.swing.PopupFactory$LightWeightPopup
//$ extends javax.swing.PopupFactory$ContainerPopup

#include <javax/swing/PopupFactory$ContainerPopup.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class Popup;
	}
}

namespace javax {
	namespace swing {

class PopupFactory$LightWeightPopup : public ::javax::swing::PopupFactory$ContainerPopup {
	$class(PopupFactory$LightWeightPopup, 0, ::javax::swing::PopupFactory$ContainerPopup)
public:
	PopupFactory$LightWeightPopup();
	void init$();
	virtual ::java::awt::Component* createComponent(::java::awt::Component* owner) override;
	static ::javax::swing::Popup* getLightWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	static ::java::util::List* getLightWeightPopupCache();
	static ::javax::swing::PopupFactory$LightWeightPopup* getRecycledLightWeightPopup();
	virtual void hide() override;
	static void recycleLightWeightPopup(::javax::swing::PopupFactory$LightWeightPopup* popup);
	virtual void reset(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY) override;
	virtual void show() override;
	static $Object* lightWeightPopupCacheKey;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$LightWeightPopup_h_