#ifndef _apple_laf_JRSUIUtils$HitDetection_h_
#define _apple_laf_JRSUIUtils$HitDetection_h_
//$ class apple.laf.JRSUIUtils$HitDetection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Hit;
		class JRSUIControl;
	}
}

namespace apple {
	namespace laf {

class JRSUIUtils$HitDetection : public ::java::lang::Object {
	$class(JRSUIUtils$HitDetection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIUtils$HitDetection();
	void init$();
	static ::apple::laf::JRSUIConstants$Hit* getHitForPoint(::apple::laf::JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t hitX, int32_t hitY);
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIUtils$HitDetection_h_