#ifndef _javax_swing_colorchooser_RecentSwatchPanel_h_
#define _javax_swing_colorchooser_RecentSwatchPanel_h_
//$ class javax.swing.colorchooser.RecentSwatchPanel
//$ extends javax.swing.colorchooser.SwatchPanel

#include <javax/swing/colorchooser/SwatchPanel.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class RecentSwatchPanel : public ::javax::swing::colorchooser::SwatchPanel {
	$class(RecentSwatchPanel, $NO_CLASS_INIT, ::javax::swing::colorchooser::SwatchPanel)
public:
	RecentSwatchPanel();
	using ::javax::swing::colorchooser::SwatchPanel::getToolTipText;
	using ::javax::swing::colorchooser::SwatchPanel::contains;
	using ::javax::swing::colorchooser::SwatchPanel::enable;
	using ::javax::swing::colorchooser::SwatchPanel::getBounds;
	using ::javax::swing::colorchooser::SwatchPanel::getSize;
	using ::javax::swing::colorchooser::SwatchPanel::getLocation;
	using ::javax::swing::colorchooser::SwatchPanel::firePropertyChange;
	using ::javax::swing::colorchooser::SwatchPanel::add;
	using ::javax::swing::colorchooser::SwatchPanel::getMousePosition;
	void init$();
	virtual void initColors() override;
	virtual void initValues() override;
	using ::javax::swing::colorchooser::SwatchPanel::requestFocus;
	using ::javax::swing::colorchooser::SwatchPanel::requestFocusInWindow;
	using ::javax::swing::colorchooser::SwatchPanel::repaint;
	using ::javax::swing::colorchooser::SwatchPanel::remove;
	using ::javax::swing::colorchooser::SwatchPanel::list;
	virtual void setMostRecentColor(::java::awt::Color* c);
	using ::javax::swing::colorchooser::SwatchPanel::setUI;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_RecentSwatchPanel_h_