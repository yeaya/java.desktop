#ifndef _javax_swing_colorchooser_DefaultPreviewPanel_h_
#define _javax_swing_colorchooser_DefaultPreviewPanel_h_
//$ class javax.swing.colorchooser.DefaultPreviewPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Font;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class DefaultPreviewPanel : public ::javax::swing::JPanel {
	$class(DefaultPreviewPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	DefaultPreviewPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$();
	::javax::swing::JColorChooser* getColorChooser();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	$String* getSampleText();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	int32_t paintSquares(::java::awt::Graphics* g, int32_t offsetX);
	int32_t paintSwatch(::java::awt::Graphics* g, int32_t offsetX);
	int32_t paintText(::java::awt::Graphics* g, int32_t offsetX);
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	int32_t squareSize = 0;
	int32_t squareGap = 0;
	int32_t innerGap = 0;
	int32_t textGap = 0;
	::java::awt::Font* font = nullptr;
	$String* sampleText = nullptr;
	int32_t swatchWidth = 0;
	::java::awt::Color* oldColor = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_DefaultPreviewPanel_h_