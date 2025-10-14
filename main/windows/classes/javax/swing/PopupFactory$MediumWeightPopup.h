#ifndef _javax_swing_PopupFactory$MediumWeightPopup_h_
#define _javax_swing_PopupFactory$MediumWeightPopup_h_
//$ class javax.swing.PopupFactory$MediumWeightPopup
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
		class JRootPane;
		class Popup;
	}
}

namespace javax {
	namespace swing {

class PopupFactory$MediumWeightPopup : public ::javax::swing::PopupFactory$ContainerPopup {
	$class(PopupFactory$MediumWeightPopup, 0, ::javax::swing::PopupFactory$ContainerPopup)
public:
	PopupFactory$MediumWeightPopup();
	void init$();
	virtual ::java::awt::Component* createComponent(::java::awt::Component* owner) override;
	static ::javax::swing::Popup* getMediumWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	static ::java::util::List* getMediumWeightPopupCache();
	static ::javax::swing::PopupFactory$MediumWeightPopup* getRecycledMediumWeightPopup();
	virtual void hide() override;
	static void recycleMediumWeightPopup(::javax::swing::PopupFactory$MediumWeightPopup* popup);
	virtual void reset(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY) override;
	virtual void show() override;
	static $Object* mediumWeightPopupCacheKey;
	::javax::swing::JRootPane* rootPane = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$MediumWeightPopup_h_