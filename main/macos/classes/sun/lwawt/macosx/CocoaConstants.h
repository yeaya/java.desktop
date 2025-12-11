#ifndef _sun_lwawt_macosx_CocoaConstants_h_
#define _sun_lwawt_macosx_CocoaConstants_h_
//$ class sun.lwawt.macosx.CocoaConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class CocoaConstants : public ::java::lang::Object {
	$class(CocoaConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CocoaConstants();
	void init$();
	static const int32_t NSLeftMouseDown = 1;
	static const int32_t NSLeftMouseUp = 2;
	static const int32_t NSRightMouseDown = 3;
	static const int32_t NSRightMouseUp = 4;
	static const int32_t NSMouseMoved = 5;
	static const int32_t NSLeftMouseDragged = 6;
	static const int32_t NSRightMouseDragged = 7;
	static const int32_t NSMouseEntered = 8;
	static const int32_t NSMouseExited = 9;
	static const int32_t NSKeyDown = 10;
	static const int32_t NSKeyUp = 11;
	static const int32_t NSFlagsChanged = 12;
	static const int32_t NSScrollWheel = 22;
	static const int32_t NSOtherMouseDown = 25;
	static const int32_t NSOtherMouseUp = 26;
	static const int32_t NSOtherMouseDragged = 27;
	static const int32_t AllLeftMouseEventsMask = 70; // 1 << NSLeftMouseDown | 1 << NSLeftMouseUp | 1 << NSLeftMouseDragged
	static const int32_t AllRightMouseEventsMask = 152; // 1 << NSRightMouseDown | 1 << NSRightMouseUp | 1 << NSRightMouseDragged
	static const int32_t AllOtherMouseEventsMask = 0x0E000000; // 1 << NSOtherMouseDown | 1 << NSOtherMouseUp | 1 << NSOtherMouseDragged
	static const int32_t kCGMouseButtonLeft = 0;
	static const int32_t kCGMouseButtonRight = 1;
	static const int32_t kCGMouseButtonCenter = 2;
	static const int32_t NPCocoaEventDrawRect = 1;
	static const int32_t NPCocoaEventMouseDown = 2;
	static const int32_t NPCocoaEventMouseUp = 3;
	static const int32_t NPCocoaEventMouseMoved = 4;
	static const int32_t NPCocoaEventMouseEntered = 5;
	static const int32_t NPCocoaEventMouseExited = 6;
	static const int32_t NPCocoaEventMouseDragged = 7;
	static const int32_t NPCocoaEventKeyDown = 8;
	static const int32_t NPCocoaEventKeyUp = 9;
	static const int32_t NPCocoaEventFlagsChanged = 10;
	static const int32_t NPCocoaEventFocusChanged = 11;
	static const int32_t NPCocoaEventWindowFocusChanged = 12;
	static const int32_t NPCocoaEventScrollWheel = 13;
	static const int32_t NPCocoaEventTextInput = 14;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CocoaConstants_h_