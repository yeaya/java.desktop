#ifndef _com_apple_laf_AquaMenuItemUI$1_h_
#define _com_apple_laf_AquaMenuItemUI$1_h_
//$ class com.apple.laf.AquaMenuItemUI$1
//$ extends com.apple.laf.AquaUtils$Selectable

#include <com/apple/laf/AquaUtils$Selectable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaMenuItemUI;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuItemUI$1 : public ::com::apple::laf::AquaUtils$Selectable {
	$class(AquaMenuItemUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$Selectable)
public:
	AquaMenuItemUI$1();
	void init$(::com::apple::laf::AquaMenuItemUI* this$0, ::java::awt::Dimension* val$size);
	virtual void paintSelected(bool selected) override;
	::com::apple::laf::AquaMenuItemUI* this$0 = nullptr;
	::java::awt::Dimension* val$size = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaMenuItemUI$1_h_