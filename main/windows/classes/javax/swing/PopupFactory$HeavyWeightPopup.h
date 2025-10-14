#ifndef _javax_swing_PopupFactory$HeavyWeightPopup_h_
#define _javax_swing_PopupFactory$HeavyWeightPopup_h_
//$ class javax.swing.PopupFactory$HeavyWeightPopup
//$ extends javax.swing.Popup

#include <javax/swing/Popup.h>

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace javax {
	namespace swing {

class PopupFactory$HeavyWeightPopup : public ::javax::swing::Popup {
	$class(PopupFactory$HeavyWeightPopup, 0, ::javax::swing::Popup)
public:
	PopupFactory$HeavyWeightPopup();
	void init$();
	virtual void _dispose();
	virtual void dispose() override;
	static ::javax::swing::Popup* getHeavyWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	static ::java::util::Map* getHeavyWeightPopupCache();
	static ::javax::swing::PopupFactory$HeavyWeightPopup* getRecycledHeavyWeightPopup(::java::awt::Window* w);
	virtual void hide() override;
	static void recycleHeavyWeightPopup(::javax::swing::PopupFactory$HeavyWeightPopup* popup);
	virtual void setCacheEnabled(bool enable);
	static $Object* heavyWeightPopupCacheKey;
	$volatile(bool) isCacheEnabled = false;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$HeavyWeightPopup_h_