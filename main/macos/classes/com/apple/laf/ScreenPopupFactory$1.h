#ifndef _com_apple_laf_ScreenPopupFactory$1_h_
#define _com_apple_laf_ScreenPopupFactory$1_h_
//$ class com.apple.laf.ScreenPopupFactory$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenPopupFactory;
		}
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenPopupFactory$1 : public ::java::lang::Runnable {
	$class(ScreenPopupFactory$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScreenPopupFactory$1();
	void init$(::com::apple::laf::ScreenPopupFactory* this$0, ::javax::swing::JRootPane* val$popupRootPane);
	virtual void run() override;
	::com::apple::laf::ScreenPopupFactory* this$0 = nullptr;
	::javax::swing::JRootPane* val$popupRootPane = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenPopupFactory$1_h_