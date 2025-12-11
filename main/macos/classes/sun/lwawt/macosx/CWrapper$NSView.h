#ifndef _sun_lwawt_macosx_CWrapper$NSView_h_
#define _sun_lwawt_macosx_CWrapper$NSView_h_
//$ class sun.lwawt.macosx.CWrapper$NSView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWrapper$NSView : public ::java::lang::Object {
	$class(CWrapper$NSView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CWrapper$NSView();
	void init$();
	static void addSubview(int64_t view, int64_t subview);
	static void removeFromSuperview(int64_t view);
	static void setFrame(int64_t view, int32_t x, int32_t y, int32_t w, int32_t h);
	static void setHidden(int64_t view, bool hidden);
	static void setToolTip(int64_t view, $String* msg);
	static int64_t window(int64_t view);
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWrapper$NSView_h_