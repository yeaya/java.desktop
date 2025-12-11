#ifndef _sun_lwawt_PlatformEventNotifier_h_
#define _sun_lwawt_PlatformEventNotifier_h_
//$ interface sun.lwawt.PlatformEventNotifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace lwawt {

class PlatformEventNotifier : public ::java::lang::Object {
	$interface(PlatformEventNotifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notifyActivation(bool activation, ::sun::lwawt::LWWindowPeer* opposite) {}
	virtual void notifyExpose(::java::awt::Rectangle* r) {}
	virtual void notifyIconify(bool iconify) {}
	virtual void notifyKeyEvent(int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation) {}
	virtual void notifyMouseEvent(int32_t id, int64_t when, int32_t button, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t clickCount, bool popupTrigger, $bytes* bdata) {}
	virtual void notifyMouseWheelEvent(int64_t when, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation, $bytes* bdata) {}
	virtual void notifyNCMouseDown() {}
	virtual void notifyReshape(int32_t x, int32_t y, int32_t w, int32_t h) {}
	virtual void notifyUpdateCursor() {}
	virtual void notifyZoom(bool isZoomed) {}
};

	} // lwawt
} // sun

#endif // _sun_lwawt_PlatformEventNotifier_h_