#ifndef _com_apple_laf_AquaScrollBarUI$HitUtil_h_
#define _com_apple_laf_AquaScrollBarUI$HitUtil_h_
//$ class com.apple.laf.AquaScrollBarUI$HitUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Hit;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaScrollBarUI$HitUtil : public ::java::lang::Object {
	$class(AquaScrollBarUI$HitUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaScrollBarUI$HitUtil();
	void init$();
	static bool isArrow(::apple::laf::JRSUIConstants$Hit* hit);
	static bool isDecrement(::apple::laf::JRSUIConstants$Hit* hit);
	static bool isIncrement(::apple::laf::JRSUIConstants$Hit* hit);
	static bool isTrack(::apple::laf::JRSUIConstants$Hit* hit);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$HitUtil_h_