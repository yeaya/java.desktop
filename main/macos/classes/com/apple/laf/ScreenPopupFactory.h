#ifndef _com_apple_laf_ScreenPopupFactory_h_
#define _com_apple_laf_ScreenPopupFactory_h_
//$ class com.apple.laf.ScreenPopupFactory
//$ extends javax.swing.PopupFactory

#include <javax/swing/PopupFactory.h>

#pragma push_macro("OPAQUE")
#undef OPAQUE
#pragma push_macro("TRANSLUCENT")
#undef TRANSLUCENT

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}
namespace java {
	namespace lang {
		class Float;
	}
}
namespace javax {
	namespace swing {
		class Popup;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenPopupFactory : public ::javax::swing::PopupFactory {
	$class(ScreenPopupFactory, 0, ::javax::swing::PopupFactory)
public:
	ScreenPopupFactory();
	using ::javax::swing::PopupFactory::getPopup;
	void init$();
	virtual ::javax::swing::Popup* getPopup(::java::awt::Component* comp, ::java::awt::Component* invoker, int32_t x, int32_t y) override;
	static ::java::awt::Window* getWindow(::java::awt::Component* c);
	virtual void setActive(bool b);
	static ::java::lang::Float* TRANSLUCENT;
	static ::java::lang::Float* OPAQUE;
	bool fIsActive = false;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("OPAQUE")
#pragma pop_macro("TRANSLUCENT")

#endif // _com_apple_laf_ScreenPopupFactory_h_