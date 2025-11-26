#ifndef _javax_swing_plaf_synth_SynthComboPopup_h_
#define _javax_swing_plaf_synth_SynthComboPopup_h_
//$ class javax.swing.plaf.synth.SynthComboPopup
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthComboPopup : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(SynthComboPopup, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	SynthComboPopup();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::javax::swing::JComboBox* combo);
	virtual ::java::awt::Rectangle* computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph) override;
	virtual void configureList() override;
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboPopup_h_