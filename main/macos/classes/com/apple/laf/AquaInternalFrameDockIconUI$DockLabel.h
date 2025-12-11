#ifndef _com_apple_laf_AquaInternalFrameDockIconUI$DockLabel_h_
#define _com_apple_laf_AquaInternalFrameDockIconUI$DockLabel_h_
//$ class com.apple.laf.AquaInternalFrameDockIconUI$DockLabel
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

#pragma push_macro("NUB_HEIGHT")
#undef NUB_HEIGHT
#pragma push_macro("ROUND_ADDITIONAL_HEIGHT")
#undef ROUND_ADDITIONAL_HEIGHT
#pragma push_macro("ROUND_ADDITIONAL_WIDTH")
#undef ROUND_ADDITIONAL_WIDTH

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameDockIconUI$DockLabel : public ::javax::swing::JLabel {
	$class(AquaInternalFrameDockIconUI$DockLabel, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	AquaInternalFrameDockIconUI$DockLabel();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$($String* text);
	virtual void hide() override;
	using ::javax::swing::JLabel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::show;
	void show(::java::awt::Component* invoker);
	static const int32_t NUB_HEIGHT = 7;
	static const int32_t ROUND_ADDITIONAL_HEIGHT = 8;
	static const int32_t ROUND_ADDITIONAL_WIDTH = 12;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("NUB_HEIGHT")
#pragma pop_macro("ROUND_ADDITIONAL_HEIGHT")
#pragma pop_macro("ROUND_ADDITIONAL_WIDTH")

#endif // _com_apple_laf_AquaInternalFrameDockIconUI$DockLabel_h_