#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$3_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$3_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$3
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthFileChooserUIImpl$3 : public ::javax::swing::JTextField {
	$class(SynthFileChooserUIImpl$3, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	SynthFileChooserUIImpl$3();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0, int32_t columns);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$3_h_