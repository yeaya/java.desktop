#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$AlignedLabel_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$AlignedLabel_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel
//$ extends javax.swing.JLabel

#include <java/lang/Array.h>
#include <javax/swing/JLabel.h>

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

class $import SynthFileChooserUIImpl$AlignedLabel : public ::javax::swing::JLabel {
	$class(SynthFileChooserUIImpl$AlignedLabel, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	SynthFileChooserUIImpl$AlignedLabel();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0, $String* text);
	int32_t getMaxWidth();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	int32_t getSuperPreferredWidth();
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	$Array<::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel>* group = nullptr;
	int32_t maxWidth = 0;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$AlignedLabel_h_