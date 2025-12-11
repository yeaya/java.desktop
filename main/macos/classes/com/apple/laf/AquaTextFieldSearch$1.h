#ifndef _com_apple_laf_AquaTextFieldSearch$1_h_
#define _com_apple_laf_AquaTextFieldSearch$1_h_
//$ class com.apple.laf.AquaTextFieldSearch$1
//$ extends com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon

#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$1 : public ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon {
	$class(AquaTextFieldSearch$1, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon)
public:
	AquaTextFieldSearch$1();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	virtual void initJRSUIState() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$1_h_