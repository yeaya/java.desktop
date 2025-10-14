#ifndef _javax_swing_PopupFactory$1_h_
#define _javax_swing_PopupFactory$1_h_
//$ class javax.swing.PopupFactory$1
//$ extends sun.swing.SwingAccessor$PopupFactoryAccessor

#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>

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

namespace javax {
	namespace swing {

class PopupFactory$1 : public ::sun::swing::SwingAccessor$PopupFactoryAccessor {
	$class(PopupFactory$1, $NO_CLASS_INIT, ::sun::swing::SwingAccessor$PopupFactoryAccessor)
public:
	PopupFactory$1();
	void init$();
	virtual ::javax::swing::Popup* getHeavyWeightPopup(::javax::swing::PopupFactory* factory, ::java::awt::Component* owner, ::java::awt::Component* contents, int32_t ownerX, int32_t ownerY) override;
};

	} // swing
} // javax

#endif // _javax_swing_PopupFactory$1_h_