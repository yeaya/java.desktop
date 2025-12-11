#ifndef _com_apple_eawt_FullScreenHandler_h_
#define _com_apple_eawt_FullScreenHandler_h_
//$ class com.apple.eawt.FullScreenHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLIENT_PROPERTY")
#undef CLIENT_PROPERTY
#pragma push_macro("FULLSCREEN_DID_ENTER")
#undef FULLSCREEN_DID_ENTER
#pragma push_macro("FULLSCREEN_DID_EXIT")
#undef FULLSCREEN_DID_EXIT
#pragma push_macro("FULLSCREEN_WILL_ENTER")
#undef FULLSCREEN_WILL_ENTER
#pragma push_macro("FULLSCREEN_WILL_EXIT")
#undef FULLSCREEN_WILL_EXIT

namespace com {
	namespace apple {
		namespace eawt {
			class FullScreenListener;
		}
	}
}
namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class FullScreenEvent;
			}
		}
	}
}
namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class RootPaneContainer;
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class FullScreenHandler : public ::java::lang::Object {
	$class(FullScreenHandler, 0, ::java::lang::Object)
public:
	FullScreenHandler();
	void init$();
	static void addFullScreenListenerTo(::javax::swing::RootPaneContainer* window, ::com::apple::eawt::FullScreenListener* listener);
	void addListener(::com::apple::eawt::FullScreenListener* listener);
	static ::com::apple::eawt::FullScreenHandler* getHandlerFor(::javax::swing::RootPaneContainer* window);
	static void handleFullScreenEventFromNative(::java::awt::Window* window, int32_t type);
	void notifyListener(::com::apple::eawt::event::FullScreenEvent* e, int32_t op);
	static void removeFullScreenListenerFrom(::javax::swing::RootPaneContainer* window, ::com::apple::eawt::FullScreenListener* listener);
	void removeListener(::com::apple::eawt::FullScreenListener* listener);
	static $String* CLIENT_PROPERTY;
	static const int32_t FULLSCREEN_WILL_ENTER = 1;
	static const int32_t FULLSCREEN_DID_ENTER = 2;
	static const int32_t FULLSCREEN_WILL_EXIT = 3;
	static const int32_t FULLSCREEN_DID_EXIT = 4;
	::java::util::List* listeners = nullptr;
};

		} // eawt
	} // apple
} // com

#pragma pop_macro("CLIENT_PROPERTY")
#pragma pop_macro("FULLSCREEN_DID_ENTER")
#pragma pop_macro("FULLSCREEN_DID_EXIT")
#pragma pop_macro("FULLSCREEN_WILL_ENTER")
#pragma pop_macro("FULLSCREEN_WILL_EXIT")

#endif // _com_apple_eawt_FullScreenHandler_h_