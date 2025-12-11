#ifndef _com_apple_eawt_event_GestureHandler_h_
#define _com_apple_eawt_event_GestureHandler_h_
//$ class com.apple.eawt.event.GestureHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLIENT_PROPERTY")
#undef CLIENT_PROPERTY
#pragma push_macro("MAGNIFY")
#undef MAGNIFY
#pragma push_macro("PHASE")
#undef PHASE
#pragma push_macro("ROTATE")
#undef ROTATE
#pragma push_macro("SWIPE")
#undef SWIPE

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class GestureHandler$PerComponentNotifier;
				class GestureListener;
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
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
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

class GestureHandler : public ::java::lang::Object {
	$class(GestureHandler, 0, ::java::lang::Object)
public:
	GestureHandler();
	void init$();
	static void addGestureListenerTo(::javax::swing::JComponent* component, ::com::apple::eawt::event::GestureListener* listener);
	void addListener(::com::apple::eawt::event::GestureListener* listener);
	static ::com::apple::eawt::event::GestureHandler* getHandlerForComponent(::java::awt::Component* c);
	static ::com::apple::eawt::event::GestureHandler$PerComponentNotifier* getNextNotifierForComponent(::java::awt::Component* c);
	static void handleGestureFromNative(::java::awt::Window* window, int32_t type, double x, double y, double a, double b);
	static void removeGestureListenerFrom(::javax::swing::JComponent* component, ::com::apple::eawt::event::GestureListener* listener);
	void removeListener(::com::apple::eawt::event::GestureListener* listener);
	static $String* CLIENT_PROPERTY;
	static const int32_t PHASE = 1;
	static const int32_t ROTATE = 2;
	static const int32_t MAGNIFY = 3;
	static const int32_t SWIPE = 4;
	::java::util::List* phasers = nullptr;
	::java::util::List* rotaters = nullptr;
	::java::util::List* magnifiers = nullptr;
	::java::util::List* swipers = nullptr;
};

			} // event
		} // eawt
	} // apple
} // com

#pragma pop_macro("CLIENT_PROPERTY")
#pragma pop_macro("MAGNIFY")
#pragma pop_macro("PHASE")
#pragma pop_macro("ROTATE")
#pragma pop_macro("SWIPE")

#endif // _com_apple_eawt_event_GestureHandler_h_