#ifndef _sun_lwawt_macosx_CWrapper$NSWindow_h_
#define _sun_lwawt_macosx_CWrapper$NSWindow_h_
//$ class sun.lwawt.macosx.CWrapper$NSWindow
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_WINDOW_LEVELS")
#undef MAX_WINDOW_LEVELS

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWrapper$NSWindow : public ::java::lang::Object {
	$class(CWrapper$NSWindow, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CWrapper$NSWindow();
	void init$();
	static void addChildWindow(int64_t parent, int64_t child, int32_t ordered);
	static bool canBecomeMainWindow(int64_t window);
	static void close(int64_t window);
	static void deminiaturize(int64_t window);
	static bool isKeyWindow(int64_t window);
	static bool isZoomed(int64_t window);
	static void makeFirstResponder(int64_t window, int64_t responder);
	static void makeKeyAndOrderFront(int64_t window);
	static void makeKeyWindow(int64_t window);
	static void makeMainWindow(int64_t window);
	static void miniaturize(int64_t window);
	static void orderFront(int64_t window);
	static void orderFrontRegardless(int64_t window);
	static void orderOut(int64_t window);
	static void orderWindow(int64_t window, int32_t ordered, int64_t relativeTo);
	static void removeChildWindow(int64_t parent, int64_t child);
	static void setAlphaValue(int64_t window, float alpha);
	static void setBackgroundColor(int64_t window, int32_t color);
	static void setLevel(int64_t window, int32_t level);
	static void setOpaque(int64_t window, bool opaque);
	static void zoom(int64_t window);
	static const int32_t NSWindowAbove = 1;
	static const int32_t NSWindowBelow = (-1);
	static const int32_t NSWindowOut = 0;
	static const int32_t MAX_WINDOW_LEVELS = 3;
	static const int32_t NSNormalWindowLevel = 0;
	static const int32_t NSFloatingWindowLevel = 1;
	static const int32_t NSPopUpMenuWindowLevel = 2;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("MAX_WINDOW_LEVELS")

#endif // _sun_lwawt_macosx_CWrapper$NSWindow_h_