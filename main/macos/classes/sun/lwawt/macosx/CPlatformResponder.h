#ifndef _sun_lwawt_macosx_CPlatformResponder_h_
#define _sun_lwawt_macosx_CPlatformResponder_h_
//$ class sun.lwawt.macosx.CPlatformResponder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {
		class LWWindowPeer;
		class PlatformEventNotifier;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPlatformResponder$DeltaAccumulator;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformResponder : public ::java::lang::Object {
	$class(CPlatformResponder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CPlatformResponder();
	void init$(::sun::lwawt::PlatformEventNotifier* eventNotifier, bool isNpapiCallback);
	void dispatchScrollEvent(int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t roundDelta, double delta);
	void handleInputEvent($String* text);
	void handleKeyEvent(int32_t eventType, int32_t modifierFlags, $String* chars, $String* charsIgnoringModifiers, int16_t keyCode, bool needsKeyTyped, bool needsKeyReleased);
	void handleMouseEvent(int32_t eventType, int32_t modifierFlags, int32_t buttonNumber, int32_t clickCount, int32_t x, int32_t y, int32_t absX, int32_t absY);
	void handleScrollEvent(int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifierFlags, double deltaX, double deltaY, int32_t scrollPhase);
	void handleWindowFocusEvent(bool gained, ::sun::lwawt::LWWindowPeer* opposite);
	::sun::lwawt::PlatformEventNotifier* eventNotifier = nullptr;
	bool isNpapiCallback = false;
	int32_t lastKeyPressCode = 0;
	::sun::lwawt::macosx::CPlatformResponder$DeltaAccumulator* deltaAccumulatorX = nullptr;
	::sun::lwawt::macosx::CPlatformResponder$DeltaAccumulator* deltaAccumulatorY = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformResponder_h_