#ifndef _sun_lwawt_LWCursorManager_h_
#define _sun_lwawt_LWCursorManager_h_
//$ class sun.lwawt.LWCursorManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Point;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWCursorManager : public ::java::lang::Object {
	$class(LWCursorManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LWCursorManager();
	void init$();
	static ::java::awt::Component* findComponent(::java::awt::Point* cursorPos);
	virtual ::java::awt::Point* getCursorPosition() {return nullptr;}
	virtual void setCursor(::java::awt::Cursor* cursor) {}
	void updateCursor();
	void updateCursorImpl();
	void updateCursorLater(::sun::lwawt::LWWindowPeer* window);
	::java::util::concurrent::atomic::AtomicBoolean* updatePending = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWCursorManager_h_