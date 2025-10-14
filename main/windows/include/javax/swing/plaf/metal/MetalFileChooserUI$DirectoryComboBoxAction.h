#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxAction_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxAction_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalFileChooserUI$DirectoryComboBoxAction : public ::javax::swing::AbstractAction {
	$class(MetalFileChooserUI$DirectoryComboBoxAction, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	MetalFileChooserUI$DirectoryComboBoxAction();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxAction_h_