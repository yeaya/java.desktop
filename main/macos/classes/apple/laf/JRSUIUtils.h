#ifndef _apple_laf_JRSUIUtils_h_
#define _apple_laf_JRSUIUtils_h_
//$ class apple.laf.JRSUIUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {

class JRSUIUtils : public ::java::lang::Object {
	$class(JRSUIUtils, 0, ::java::lang::Object)
public:
	JRSUIUtils();
	void init$();
	static bool currentMacOSXVersionMatchesGivenVersionRange(int32_t version, bool inclusive, bool matchBelow, bool matchAbove);
	static bool currentMacOSXVersionMatchesGivenVersionRange(int32_t majorVersion, int32_t minorVersion, bool inclusive, bool matchBelow, bool matchAbove);
	static bool isCurrentMacOSXVersion(int32_t version);
	static bool isCurrentMacOSXVersion(int32_t major, int32_t minor);
	static bool isMacOSXBigSurOrAbove();
	static bool isMacOSXLeopard();
	static bool isMacOSXSnowLeopardOrBelow();
	static bool isLeopard;
	static bool isSnowLeopardOrBelow;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIUtils_h_