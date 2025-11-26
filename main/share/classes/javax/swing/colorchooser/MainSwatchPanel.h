#ifndef _javax_swing_colorchooser_MainSwatchPanel_h_
#define _javax_swing_colorchooser_MainSwatchPanel_h_
//$ class javax.swing.colorchooser.MainSwatchPanel
//$ extends javax.swing.colorchooser.SwatchPanel

#include <java/lang/Array.h>
#include <javax/swing/colorchooser/SwatchPanel.h>

namespace javax {
	namespace swing {
		namespace colorchooser {

class MainSwatchPanel : public ::javax::swing::colorchooser::SwatchPanel {
	$class(MainSwatchPanel, $NO_CLASS_INIT, ::javax::swing::colorchooser::SwatchPanel)
public:
	MainSwatchPanel();
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
	$ints* initRawValues();
	virtual void initValues() override;
	using ::javax::swing::colorchooser::SwatchPanel::setUI;
	using ::javax::swing::colorchooser::SwatchPanel::requestFocus;
	using ::javax::swing::colorchooser::SwatchPanel::requestFocusInWindow;
	using ::javax::swing::colorchooser::SwatchPanel::repaint;
	using ::javax::swing::colorchooser::SwatchPanel::remove;
	using ::javax::swing::colorchooser::SwatchPanel::list;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_MainSwatchPanel_h_