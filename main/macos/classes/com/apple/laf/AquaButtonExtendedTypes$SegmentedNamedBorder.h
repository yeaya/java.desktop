#ifndef _com_apple_laf_AquaButtonExtendedTypes$SegmentedNamedBorder_h_
#define _com_apple_laf_AquaButtonExtendedTypes$SegmentedNamedBorder_h_
//$ class com.apple.laf.AquaButtonExtendedTypes$SegmentedNamedBorder
//$ extends com.apple.laf.AquaButtonBorder$Named

#include <com/apple/laf/AquaButtonBorder$Named.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Widget;
	}
}
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

class AquaButtonExtendedTypes$SegmentedNamedBorder : public ::com::apple::laf::AquaButtonBorder$Named {
	$class(AquaButtonExtendedTypes$SegmentedNamedBorder, $NO_CLASS_INIT, ::com::apple::laf::AquaButtonBorder$Named)
public:
	AquaButtonExtendedTypes$SegmentedNamedBorder();
	void init$(::com::apple::laf::AquaButtonExtendedTypes$SegmentedNamedBorder* sizeDescriptor);
	void init$(::apple::laf::JRSUIConstants$Widget* widget, ::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	virtual bool isSelectionPressing() override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaButtonExtendedTypes$SegmentedNamedBorder_h_