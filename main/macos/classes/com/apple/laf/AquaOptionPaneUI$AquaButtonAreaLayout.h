#ifndef _com_apple_laf_AquaOptionPaneUI$AquaButtonAreaLayout_h_
#define _com_apple_laf_AquaOptionPaneUI$AquaButtonAreaLayout_h_
//$ class com.apple.laf.AquaOptionPaneUI$AquaButtonAreaLayout
//$ extends javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout

#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>

namespace java {
	namespace awt {
		class Container;
		class Dimension;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaOptionPaneUI$AquaButtonAreaLayout : public ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout {
	$class(AquaOptionPaneUI$AquaButtonAreaLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout)
public:
	AquaOptionPaneUI$AquaButtonAreaLayout();
	void init$(bool syncAllWidths, int32_t padding);
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaOptionPaneUI$AquaButtonAreaLayout_h_