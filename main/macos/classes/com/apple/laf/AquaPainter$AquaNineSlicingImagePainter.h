#ifndef _com_apple_laf_AquaPainter$AquaNineSlicingImagePainter_h_
#define _com_apple_laf_AquaPainter$AquaNineSlicingImagePainter_h_
//$ class com.apple.laf.AquaPainter$AquaNineSlicingImagePainter
//$ extends com.apple.laf.AquaPainter

#include <com/apple/laf/AquaPainter.h>

namespace apple {
	namespace laf {
		class JRSUIState;
		class JRSUIUtils$NineSliceMetricsProvider;
	}
}
namespace java {
	namespace awt {
		class Graphics2D;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaPainter$AquaNineSlicingImagePainter : public ::com::apple::laf::AquaPainter {
	$class(AquaPainter$AquaNineSlicingImagePainter, $NO_CLASS_INIT, ::com::apple::laf::AquaPainter)
public:
	AquaPainter$AquaNineSlicingImagePainter();
	void init$(::apple::laf::JRSUIState* state);
	void init$(::apple::laf::JRSUIState* state, ::apple::laf::JRSUIUtils$NineSliceMetricsProvider* metricsProvider);
	using ::com::apple::laf::AquaPainter::paint;
	virtual void paint(::java::awt::Graphics2D* g, ::apple::laf::JRSUIState* stateToPaint) override;
	::java::util::HashMap* slicedControlImages = nullptr;
	::apple::laf::JRSUIUtils$NineSliceMetricsProvider* metricsProvider = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter$AquaNineSlicingImagePainter_h_