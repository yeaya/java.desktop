#ifndef _com_apple_laf_AquaTabbedPaneUI$1_h_
#define _com_apple_laf_AquaTabbedPaneUI$1_h_
//$ class com.apple.laf.AquaTabbedPaneUI$1
//$ extends com.apple.laf.AquaIcon$CachingScalingIcon

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Image;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$1 : public ::com::apple::laf::AquaIcon$CachingScalingIcon {
	$class(AquaTabbedPaneUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$CachingScalingIcon)
public:
	AquaTabbedPaneUI$1();
	void init$(::com::apple::laf::AquaTabbedPaneUI* this$0, int32_t width, int32_t height, ::javax::swing::Icon* val$mainIcon);
	virtual ::java::awt::Image* createImage() override;
	::com::apple::laf::AquaTabbedPaneUI* this$0 = nullptr;
	::javax::swing::Icon* val$mainIcon = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$1_h_