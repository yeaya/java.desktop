#ifndef _javax_swing_colorchooser_SwatchPanel_h_
#define _javax_swing_colorchooser_SwatchPanel_h_
//$ class javax.swing.colorchooser.SwatchPanel
//$ extends javax.swing.JPanel

#include <java/lang/Array.h>
#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Color;
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

namespace javax {
	namespace swing {
		namespace colorchooser {

class SwatchPanel : public ::javax::swing::JPanel {
	$class(SwatchPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	SwatchPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::getToolTipText;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$();
	::java::awt::Color* getColorForCell(int32_t column, int32_t row);
	virtual ::java::awt::Color* getColorForLocation(int32_t x, int32_t y);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Color* getSelectedColor();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* e) override;
	virtual void initColors();
	virtual void initValues();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void setSelectedColorFromLocation(int32_t x, int32_t y);
	using ::javax::swing::JPanel::setUI;
	$Array<::java::awt::Color>* colors = nullptr;
	::java::awt::Dimension* swatchSize = nullptr;
	::java::awt::Dimension* numSwatches = nullptr;
	::java::awt::Dimension* gap = nullptr;
	int32_t selRow = 0;
	int32_t selCol = 0;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_SwatchPanel_h_