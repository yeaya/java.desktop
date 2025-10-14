#ifndef _javax_swing_JLayer$DefaultLayerGlassPane_h_
#define _javax_swing_JLayer$DefaultLayerGlassPane_h_
//$ class javax.swing.JLayer$DefaultLayerGlassPane
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace javax {
	namespace swing {

class JLayer$DefaultLayerGlassPane : public ::javax::swing::JPanel {
	$class(JLayer$DefaultLayerGlassPane, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	JLayer$DefaultLayerGlassPane();
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	using ::javax::swing::JPanel::contains;
	void init$();
	virtual bool contains(int32_t x, int32_t y) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
};

	} // swing
} // javax

#endif // _javax_swing_JLayer$DefaultLayerGlassPane_h_