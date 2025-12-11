#ifndef _com_apple_laf_ScreenMenuItemUI_h_
#define _com_apple_laf_ScreenMenuItemUI_h_
//$ interface com.apple.laf.ScreenMenuItemUI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuItemUI : public ::java::lang::Object {
	$interface(ScreenMenuItemUI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void updateListenersForScreenMenuItem() {}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuItemUI_h_