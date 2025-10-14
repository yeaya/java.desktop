#ifndef _javax_swing_JTable$DoubleRenderer_h_
#define _javax_swing_JTable$DoubleRenderer_h_
//$ class javax.swing.JTable$DoubleRenderer
//$ extends javax.swing.JTable$NumberRenderer

#include <javax/swing/JTable$NumberRenderer.h>

namespace java {
	namespace text {
		class NumberFormat;
	}
}

namespace javax {
	namespace swing {

class $export JTable$DoubleRenderer : public ::javax::swing::JTable$NumberRenderer {
	$class(JTable$DoubleRenderer, $NO_CLASS_INIT, ::javax::swing::JTable$NumberRenderer)
public:
	JTable$DoubleRenderer();
	using ::javax::swing::JTable$NumberRenderer::firePropertyChange;
	using ::javax::swing::JTable$NumberRenderer::contains;
	using ::javax::swing::JTable$NumberRenderer::enable;
	using ::javax::swing::JTable$NumberRenderer::getBounds;
	using ::javax::swing::JTable$NumberRenderer::getSize;
	using ::javax::swing::JTable$NumberRenderer::getLocation;
	using ::javax::swing::JTable$NumberRenderer::add;
	using ::javax::swing::JTable$NumberRenderer::getMousePosition;
	void init$();
	using ::javax::swing::JTable$NumberRenderer::repaint;
	using ::javax::swing::JTable$NumberRenderer::setUI;
	using ::javax::swing::JTable$NumberRenderer::requestFocus;
	using ::javax::swing::JTable$NumberRenderer::requestFocusInWindow;
	using ::javax::swing::JTable$NumberRenderer::remove;
	using ::javax::swing::JTable$NumberRenderer::list;
	virtual void setValue(Object$* value) override;
	::java::text::NumberFormat* formatter = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$DoubleRenderer_h_