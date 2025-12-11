#ifndef _com_apple_eawt__OpenAppHandler_h_
#define _com_apple_eawt__OpenAppHandler_h_
//$ interface com.apple.eawt._OpenAppHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {

class _OpenAppHandler : public ::java::lang::Object {
	$interface(_OpenAppHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handleOpenApp() {}
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__OpenAppHandler_h_