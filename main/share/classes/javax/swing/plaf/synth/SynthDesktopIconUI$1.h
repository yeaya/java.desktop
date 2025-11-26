#ifndef _javax_swing_plaf_synth_SynthDesktopIconUI$1_h_
#define _javax_swing_plaf_synth_SynthDesktopIconUI$1_h_
//$ class javax.swing.plaf.synth.SynthDesktopIconUI$1
//$ extends javax.swing.JToggleButton

#include <javax/swing/JToggleButton.h>

namespace javax {
	namespace swing {
		class Icon;
		class JPopupMenu;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthDesktopIconUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthDesktopIconUI$1 : public ::javax::swing::JToggleButton {
	$class(SynthDesktopIconUI$1, $NO_CLASS_INIT, ::javax::swing::JToggleButton)
public:
	SynthDesktopIconUI$1();
	using ::javax::swing::JToggleButton::contains;
	using ::javax::swing::JToggleButton::getToolTipText;
	using ::javax::swing::JToggleButton::enable;
	using ::javax::swing::JToggleButton::getBounds;
	using ::javax::swing::JToggleButton::getSize;
	using ::javax::swing::JToggleButton::getLocation;
	using ::javax::swing::JToggleButton::firePropertyChange;
	using ::javax::swing::JToggleButton::add;
	using ::javax::swing::JToggleButton::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthDesktopIconUI* this$0, $String* text, ::javax::swing::Icon* icon);
	virtual ::javax::swing::JPopupMenu* getComponentPopupMenu() override;
	virtual $String* getToolTipText() override;
	using ::javax::swing::JToggleButton::requestFocus;
	using ::javax::swing::JToggleButton::requestFocusInWindow;
	using ::javax::swing::JToggleButton::setUI;
	using ::javax::swing::JToggleButton::repaint;
	using ::javax::swing::JToggleButton::remove;
	using ::javax::swing::JToggleButton::list;
	::javax::swing::plaf::synth::SynthDesktopIconUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDesktopIconUI$1_h_