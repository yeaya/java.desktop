#ifndef _javax_swing_plaf_metal_MetalComboBoxUI$MetalPropertyChangeListener_h_
#define _javax_swing_plaf_metal_MetalComboBoxUI$MetalPropertyChangeListener_h_
//$ class javax.swing.plaf.metal.MetalComboBoxUI$MetalPropertyChangeListener
//$ extends javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
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

class $export MetalComboBoxUI$MetalPropertyChangeListener : public ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler {
	$class(MetalComboBoxUI$MetalPropertyChangeListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler)
public:
	MetalComboBoxUI$MetalPropertyChangeListener();
	void init$(::javax::swing::plaf::metal::MetalComboBoxUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalComboBoxUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxUI$MetalPropertyChangeListener_h_