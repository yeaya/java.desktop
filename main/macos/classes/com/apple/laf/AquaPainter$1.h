#ifndef _com_apple_laf_AquaPainter$1_h_
#define _com_apple_laf_AquaPainter$1_h_
//$ class com.apple.laf.AquaPainter$1
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

class AquaPainter$1 : public ::apple::laf::JRSUIUtils$NineSliceMetricsProvider {
	$class(AquaPainter$1, $NO_CLASS_INIT, ::apple::laf::JRSUIUtils$NineSliceMetricsProvider)
public:
	AquaPainter$1();
	void init$(int32_t val$minWidth, int32_t val$minHeight, int32_t val$westCut, int32_t val$eastCut, int32_t val$northCut, int32_t val$southCut, bool val$useMiddle, bool val$stretchHorizontally, bool val$stretchVertically);
	virtual ::com::apple::laf::AquaImageFactory$NineSliceMetrics* getNineSliceMetricsForState(::apple::laf::JRSUIState* state) override;
	bool val$stretchVertically = false;
	bool val$stretchHorizontally = false;
	bool val$useMiddle = false;
	int32_t val$southCut = 0;
	int32_t val$northCut = 0;
	int32_t val$eastCut = 0;
	int32_t val$westCut = 0;
	int32_t val$minHeight = 0;
	int32_t val$minWidth = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter$1_h_