#ifndef _sun_swing_JLightweightFrame$3_h_
#define _sun_swing_JLightweightFrame$3_h_
//$ class sun.swing.JLightweightFrame$3
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace sun {
	namespace swing {
		class JLightweightFrame;
	}
}

namespace sun {
	namespace swing {

class JLightweightFrame$3 : public ::javax::swing::JPanel {
	$class(JLightweightFrame$3, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	JLightweightFrame$3();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::sun::swing::JLightweightFrame* this$0);
	virtual bool isPaintingOrigin() override;
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	::sun::swing::JLightweightFrame* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_JLightweightFrame$3_h_