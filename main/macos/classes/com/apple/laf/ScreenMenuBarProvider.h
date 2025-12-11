#ifndef _com_apple_laf_ScreenMenuBarProvider_h_
#define _com_apple_laf_ScreenMenuBarProvider_h_
//$ interface com.apple.laf.ScreenMenuBarProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenuBar;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenuBarProvider : public ::java::lang::Object {
	$interface(ScreenMenuBarProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::apple::laf::ScreenMenuBar* getScreenMenuBar() {return nullptr;}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenuBarProvider_h_