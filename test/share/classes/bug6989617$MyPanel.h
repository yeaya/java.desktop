#ifndef _bug6989617$MyPanel_h_
#define _bug6989617$MyPanel_h_
//$ class bug6989617$MyPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

class $export bug6989617$MyPanel : public ::javax::swing::JPanel {
	$class(bug6989617$MyPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	bug6989617$MyPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$();
	virtual ::java::awt::Rectangle* getPaintRectangle();
	virtual bool isPaintingOrigin() override;
	using ::javax::swing::JPanel::paintImmediately;
	using ::javax::swing::JPanel::list;
	virtual void paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void resetPaintRectangle();
	virtual void setPaintingOrigin(bool paintingOrigin);
	using ::javax::swing::JPanel::setUI;
	bool isPaintingOrigin$ = false;
	::java::awt::Rectangle* paintRectangle = nullptr;
};

#endif // _bug6989617$MyPanel_h_