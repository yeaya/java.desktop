#ifndef _com_apple_eawt_FullScreenUtilities_h_
#define _com_apple_eawt_FullScreenUtilities_h_
//$ class com.apple.eawt.FullScreenUtilities
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			class FullScreenListener;
		}
	}
}
namespace java {
	namespace awt {
		class Window;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class FullScreenUtilities : public ::java::lang::Object {
	$class(FullScreenUtilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FullScreenUtilities();
	void init$();
	static void addFullScreenListenerTo(::java::awt::Window* window, ::com::apple::eawt::FullScreenListener* listener);
	static void removeFullScreenListenerFrom(::java::awt::Window* window, ::com::apple::eawt::FullScreenListener* listener);
	static void setWindowCanFullScreen(::java::awt::Window* window, bool canFullScreen);
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_FullScreenUtilities_h_