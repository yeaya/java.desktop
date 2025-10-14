#ifndef _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboBoxLayoutManager_h_
#define _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboBoxLayoutManager_h_
//$ class javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager

#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalComboBoxUI$MetalComboBoxLayoutManager : public ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager {
	$class(MetalComboBoxUI$MetalComboBoxLayoutManager, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager)
public:
	MetalComboBoxUI$MetalComboBoxLayoutManager();
	void init$(::javax::swing::plaf::metal::MetalComboBoxUI* this$0);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual void superLayout(::java::awt::Container* parent);
	::javax::swing::plaf::metal::MetalComboBoxUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboBoxLayoutManager_h_