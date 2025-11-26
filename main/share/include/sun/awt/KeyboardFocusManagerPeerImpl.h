#ifndef _sun_awt_KeyboardFocusManagerPeerImpl_h_
#define _sun_awt_KeyboardFocusManagerPeerImpl_h_
//$ class sun.awt.KeyboardFocusManagerPeerImpl
//$ extends java.awt.peer.KeyboardFocusManagerPeer

#include <java/awt/peer/KeyboardFocusManagerPeer.h>

#pragma push_macro("SNFH_FAILURE")
#undef SNFH_FAILURE
#pragma push_macro("SNFH_SUCCESS_HANDLED")
#undef SNFH_SUCCESS_HANDLED
#pragma push_macro("SNFH_SUCCESS_PROCEED")
#undef SNFH_SUCCESS_PROCEED

namespace java {
	namespace awt {
		class Component;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $import KeyboardFocusManagerPeerImpl : public ::java::awt::peer::KeyboardFocusManagerPeer {
	$class(KeyboardFocusManagerPeerImpl, 0, ::java::awt::peer::KeyboardFocusManagerPeer)
public:
	KeyboardFocusManagerPeerImpl();
	void init$();
	virtual void clearGlobalFocusOwner(::java::awt::Window* activeWindow) override;
	static bool deliverFocus(::java::awt::Component* lightweightChild, ::java::awt::Component* target, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause, ::java::awt::Component* currentFocusOwner);
	static bool processSynchronousLightweightTransfer(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time);
	static void removeLastFocusRequest(::java::awt::Component* heavyweight);
	static void requestFocusFor(::java::awt::Component* target, ::java::awt::event::FocusEvent$Cause* cause);
	static bool shouldFocusOnClick(::java::awt::Component* component);
	static int32_t shouldNativelyFocusHeavyweight(::java::awt::Component* heavyweight, ::java::awt::Component* descendant, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause);
	static ::sun::util::logging::PlatformLogger* focusLog;
	static const int32_t SNFH_FAILURE = 0;
	static const int32_t SNFH_SUCCESS_HANDLED = 1;
	static const int32_t SNFH_SUCCESS_PROCEED = 2;
};

	} // awt
} // sun

#pragma pop_macro("SNFH_FAILURE")
#pragma pop_macro("SNFH_SUCCESS_HANDLED")
#pragma pop_macro("SNFH_SUCCESS_PROCEED")

#endif // _sun_awt_KeyboardFocusManagerPeerImpl_h_