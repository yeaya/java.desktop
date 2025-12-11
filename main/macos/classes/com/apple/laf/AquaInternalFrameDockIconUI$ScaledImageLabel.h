#ifndef _com_apple_laf_AquaInternalFrameDockIconUI$ScaledImageLabel_h_
#define _com_apple_laf_AquaInternalFrameDockIconUI$ScaledImageLabel_h_
//$ class com.apple.laf.AquaInternalFrameDockIconUI$ScaledImageLabel
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameDockIconUI;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameDockIconUI$ScaledImageLabel : public ::javax::swing::JLabel {
	$class(AquaInternalFrameDockIconUI$ScaledImageLabel, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	AquaInternalFrameDockIconUI$ScaledImageLabel();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::com::apple::laf::AquaInternalFrameDockIconUI* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JLabel::list;
	bool mouseInIcon(::java::awt::event::MouseEvent* e);
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	void updateIcon();
	::com::apple::laf::AquaInternalFrameDockIconUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameDockIconUI$ScaledImageLabel_h_