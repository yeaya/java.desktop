#ifndef _com_apple_eawt_event_GestureUtilities_h_
#define _com_apple_eawt_event_GestureUtilities_h_
//$ class com.apple.eawt.event.GestureUtilities
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class GestureListener;
			}
		}
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

class GestureUtilities : public ::java::lang::Object {
	$class(GestureUtilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GestureUtilities();
	void init$();
	static void addGestureListenerTo(::javax::swing::JComponent* component, ::com::apple::eawt::event::GestureListener* listener);
	static void removeGestureListenerFrom(::javax::swing::JComponent* component, ::com::apple::eawt::event::GestureListener* listener);
};

			} // event
		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_event_GestureUtilities_h_