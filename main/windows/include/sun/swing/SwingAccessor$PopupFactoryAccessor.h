#ifndef _sun_swing_SwingAccessor$PopupFactoryAccessor_h_
#define _sun_swing_SwingAccessor$PopupFactoryAccessor_h_
//$ interface sun.swing.SwingAccessor$PopupFactoryAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Popup;
		class PopupFactory;
	}
}

namespace sun {
	namespace swing {

class $import SwingAccessor$PopupFactoryAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$PopupFactoryAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::Popup* getHeavyWeightPopup(::javax::swing::PopupFactory* factory, ::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY) {return nullptr;}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$PopupFactoryAccessor_h_