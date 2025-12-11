#ifndef _com_apple_laf_AquaSplitPaneDividerUI$DividerLayout_h_
#define _com_apple_laf_AquaSplitPaneDividerUI$DividerLayout_h_
//$ class com.apple.laf.AquaSplitPaneDividerUI$DividerLayout
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout

#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DividerLayout.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSplitPaneDividerUI;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSplitPaneDividerUI$DividerLayout : public ::javax::swing::plaf::basic::BasicSplitPaneDivider$DividerLayout {
	$class(AquaSplitPaneDividerUI$DividerLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneDivider$DividerLayout)
public:
	AquaSplitPaneDividerUI$DividerLayout();
	void init$(::com::apple::laf::AquaSplitPaneDividerUI* this$0);
	virtual void layoutContainer(::java::awt::Container* c) override;
	::com::apple::laf::AquaSplitPaneDividerUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSplitPaneDividerUI$DividerLayout_h_