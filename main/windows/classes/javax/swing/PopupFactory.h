#ifndef _javax_swing_PopupFactory_h_
#define _javax_swing_PopupFactory_h_
//$ class javax.swing.PopupFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HEAVY_WEIGHT_POPUP")
#undef HEAVY_WEIGHT_POPUP
#pragma push_macro("LIGHT_WEIGHT_POPUP")
#undef LIGHT_WEIGHT_POPUP
#pragma push_macro("MAX_CACHE_SIZE")
#undef MAX_CACHE_SIZE
#pragma push_macro("MEDIUM_WEIGHT_POPUP")
#undef MEDIUM_WEIGHT_POPUP

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

class $export PopupFactory : public ::java::lang::Object {
	$class(PopupFactory, 0, ::java::lang::Object)
public:
	PopupFactory();
	void init$();
	::javax::swing::Popup* getHeadlessPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	::javax::swing::Popup* getHeavyWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	::javax::swing::Popup* getLightWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	::javax::swing::Popup* getMediumWeightPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	virtual ::javax::swing::Popup* getPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t x, int32_t y);
	virtual ::javax::swing::Popup* getPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t x, int32_t y, bool isHeavyWeightPopup);
	::javax::swing::Popup* getPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY, int32_t popupType);
	virtual int32_t getPopupType();
	int32_t getPopupType(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY);
	static ::javax::swing::PopupFactory* getSharedInstance();
	bool invokerInHeavyWeightPopup(::java::awt::Component* i);
	virtual void setPopupType(int32_t type);
	static void setSharedInstance(::javax::swing::PopupFactory* factory);
	static $Object* SharedInstanceKey;
	static const int32_t MAX_CACHE_SIZE = 5;
	static const int32_t LIGHT_WEIGHT_POPUP = 0;
	static const int32_t MEDIUM_WEIGHT_POPUP = 1;
	static const int32_t HEAVY_WEIGHT_POPUP = 2;
	int32_t popupType = 0;
};

	} // swing
} // javax

#pragma pop_macro("HEAVY_WEIGHT_POPUP")
#pragma pop_macro("LIGHT_WEIGHT_POPUP")
#pragma pop_macro("MAX_CACHE_SIZE")
#pragma pop_macro("MEDIUM_WEIGHT_POPUP")

#endif // _javax_swing_PopupFactory_h_