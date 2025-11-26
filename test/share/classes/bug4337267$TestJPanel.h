#ifndef _bug4337267$TestJPanel_h_
#define _bug4337267$TestJPanel_h_
//$ class bug4337267$TestJPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

class bug4337267$TestBufferedImage;
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}

class $export bug4337267$TestJPanel : public ::javax::swing::JPanel {
	$class(bug4337267$TestJPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	bug4337267$TestJPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	using ::javax::swing::JPanel::createImage;
	void init$();
	virtual ::bug4337267$TestBufferedImage* createImage(::java::awt::Dimension* d);
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void setPreferredSize(::java::awt::Dimension* size) override;
	using ::javax::swing::JPanel::setUI;
	::bug4337267$TestBufferedImage* image = nullptr;
};

#endif // _bug4337267$TestJPanel_h_