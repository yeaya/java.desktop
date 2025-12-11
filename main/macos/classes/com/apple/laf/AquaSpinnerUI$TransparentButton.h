#ifndef _com_apple_laf_AquaSpinnerUI$TransparentButton_h_
#define _com_apple_laf_AquaSpinnerUI$TransparentButton_h_
//$ class com.apple.laf.AquaSpinnerUI$TransparentButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSpinnerUI;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI$TransparentButton : public ::javax::swing::JButton {
	$class(AquaSpinnerUI$TransparentButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	AquaSpinnerUI$TransparentButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::com::apple::laf::AquaSpinnerUI* this$0);
	using ::javax::swing::JButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void repaint() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	::com::apple::laf::AquaSpinnerUI* this$0 = nullptr;
	bool interceptRepaints = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$TransparentButton_h_