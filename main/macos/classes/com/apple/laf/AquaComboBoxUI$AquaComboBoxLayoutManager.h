#ifndef _com_apple_laf_AquaComboBoxUI$AquaComboBoxLayoutManager_h_
#define _com_apple_laf_AquaComboBoxUI$AquaComboBoxLayoutManager_h_
//$ class com.apple.laf.AquaComboBoxUI$AquaComboBoxLayoutManager
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager

#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
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

class AquaComboBoxUI$AquaComboBoxLayoutManager : public ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager {
	$class(AquaComboBoxUI$AquaComboBoxLayoutManager, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager)
public:
	AquaComboBoxUI$AquaComboBoxLayoutManager();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$AquaComboBoxLayoutManager_h_