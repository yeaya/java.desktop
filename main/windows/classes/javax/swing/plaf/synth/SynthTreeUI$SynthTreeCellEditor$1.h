#ifndef _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor$1_h_
#define _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor$1_h_
//$ class javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor$1
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthTreeUI$SynthTreeCellEditor;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTreeUI$SynthTreeCellEditor$1 : public ::javax::swing::JTextField {
	$class(SynthTreeUI$SynthTreeCellEditor$1, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	SynthTreeUI$SynthTreeCellEditor$1();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellEditor* this$0);
	virtual $String* getName() override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellEditor* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTreeUI$SynthTreeCellEditor$1_h_