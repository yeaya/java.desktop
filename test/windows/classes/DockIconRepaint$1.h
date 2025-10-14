#ifndef _DockIconRepaint$1_h_
#define _DockIconRepaint$1_h_
//$ class DockIconRepaint$1
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

class DockIconRepaint$1 : public ::javax::swing::JPanel {
	$class(DockIconRepaint$1, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	DockIconRepaint$1();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
};

#endif // _DockIconRepaint$1_h_