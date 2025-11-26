#ifndef _javax_swing_plaf_metal_MetalComboBoxEditor_h_
#define _javax_swing_plaf_metal_MetalComboBoxEditor_h_
//$ class javax.swing.plaf.metal.MetalComboBoxEditor
//$ extends javax.swing.plaf.basic.BasicComboBoxEditor

#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>

namespace java {
	namespace awt {
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalComboBoxEditor : public ::javax::swing::plaf::basic::BasicComboBoxEditor {
	$class(MetalComboBoxEditor, 0, ::javax::swing::plaf::basic::BasicComboBoxEditor)
public:
	MetalComboBoxEditor();
	void init$();
	static ::java::awt::Insets* editorBorderInsets;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxEditor_h_