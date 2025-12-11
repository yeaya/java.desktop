#ifndef _com_apple_laf_AquaInternalFrameBorderMetrics_h_
#define _com_apple_laf_AquaInternalFrameBorderMetrics_h_
//$ class com.apple.laf.AquaInternalFrameBorderMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Font;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameBorderMetrics : public ::java::lang::Object {
	$class(AquaInternalFrameBorderMetrics, 0, ::java::lang::Object)
public:
	AquaInternalFrameBorderMetrics();
	void init$();
	static ::com::apple::laf::AquaInternalFrameBorderMetrics* getMetrics(bool isUtility);
	virtual void initialize() {}
	static bool useLegacyBorderMetrics;
	::java::awt::Font* font = nullptr;
	int32_t titleBarHeight = 0;
	int32_t leftSidePadding = 0;
	int32_t buttonHeight = 0;
	int32_t buttonWidth = 0;
	int32_t buttonPadding = 0;
	int32_t downShift = 0;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* standardMetrics;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* utilityMetrics;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* legacyStandardMetrics;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* legacyUtilityMetrics;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameBorderMetrics_h_