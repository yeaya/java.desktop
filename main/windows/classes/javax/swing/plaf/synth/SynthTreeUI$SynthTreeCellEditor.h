#ifndef _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor_h_
#define _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor_h_
//$ class javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor
//$ extends javax.swing.tree.DefaultTreeCellEditor

#include <javax/swing/tree/DefaultTreeCellEditor.h>

namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellRenderer;
			class TreeCellEditor;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTreeUI$SynthTreeCellEditor : public ::javax::swing::tree::DefaultTreeCellEditor {
	$class(SynthTreeUI$SynthTreeCellEditor, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeCellEditor)
public:
	SynthTreeUI$SynthTreeCellEditor();
	void init$(::javax::swing::JTree* tree, ::javax::swing::tree::DefaultTreeCellRenderer* renderer);
	virtual ::javax::swing::tree::TreeCellEditor* createTreeCellEditor() override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor_h_