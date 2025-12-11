#ifndef _com_apple_laf_AquaSliderUI$3_h_
#define _com_apple_laf_AquaSliderUI$3_h_
//$ class com.apple.laf.AquaSliderUI$3
//$ extends apple.laf.JRSUIUtils$NineSliceMetricsProvider

#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>

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

namespace com {
	namespace apple {
		namespace laf {

class AquaSliderUI$3 : public ::apple::laf::JRSUIUtils$NineSliceMetricsProvider {
	$class(AquaSliderUI$3, $NO_CLASS_INIT, ::apple::laf::JRSUIUtils$NineSliceMetricsProvider)
public:
	AquaSliderUI$3();
	void init$();
	virtual ::com::apple::laf::AquaImageFactory$NineSliceMetrics* getNineSliceMetricsForState(::apple::laf::JRSUIState* state) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI$3_h_