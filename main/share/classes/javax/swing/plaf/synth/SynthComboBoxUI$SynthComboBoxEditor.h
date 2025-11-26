#ifndef _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxEditor_h_
#define _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxEditor_h_
//$ class javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor
//$ extends javax.swing.plaf.basic.BasicComboBoxEditor$UIResource

#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>

namespace javax {
	namespace swing {
		class JTextField;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthComboBoxUI$SynthComboBoxEditor : public ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource {
	$class(SynthComboBoxUI$SynthComboBoxEditor, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource)
public:
	SynthComboBoxUI$SynthComboBoxEditor();
	void init$();
	virtual ::javax::swing::JTextField* createEditorComponent() override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboBoxUI$SynthComboBoxEditor_h_