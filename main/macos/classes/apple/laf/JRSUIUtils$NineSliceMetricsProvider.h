#ifndef _apple_laf_JRSUIUtils$NineSliceMetricsProvider_h_
#define _apple_laf_JRSUIUtils$NineSliceMetricsProvider_h_
//$ interface apple.laf.JRSUIUtils$NineSliceMetricsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIState;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaImageFactory$NineSliceMetrics;
		}
	}
}

namespace apple {
	namespace laf {

class JRSUIUtils$NineSliceMetricsProvider : public ::java::lang::Object {
	$interface(JRSUIUtils$NineSliceMetricsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::apple::laf::AquaImageFactory$NineSliceMetrics* getNineSliceMetricsForState(::apple::laf::JRSUIState* state) {return nullptr;}
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIUtils$NineSliceMetricsProvider_h_