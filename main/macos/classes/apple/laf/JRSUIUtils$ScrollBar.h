#ifndef _apple_laf_JRSUIUtils$ScrollBar_h_
#define _apple_laf_JRSUIUtils$ScrollBar_h_
//$ class apple.laf.JRSUIUtils$ScrollBar
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$ScrollBarPart;
		class JRSUIControl;
	}
}

namespace apple {
	namespace laf {

class JRSUIUtils$ScrollBar : public ::java::lang::Object {
	$class(JRSUIUtils$ScrollBar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIUtils$ScrollBar();
	void init$();
	static double getNativeOffsetChange(::apple::laf::JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t offset, int32_t visibleAmount, int32_t extent);
	static void getPartBounds($doubles* rect, ::apple::laf::JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, ::apple::laf::JRSUIConstants$ScrollBarPart* part);
	static bool shouldUseScrollToClick();
	static bool useScrollToClick();
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIUtils$ScrollBar_h_