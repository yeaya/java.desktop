#ifndef _TestMemLeakComboBox$MyPanel_h_
#define _TestMemLeakComboBox$MyPanel_h_
//$ class TestMemLeakComboBox$MyPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class TestMemLeakComboBox$MyPanel : public ::javax::swing::JPanel {
	$class(TestMemLeakComboBox$MyPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	TestMemLeakComboBox$MyPanel();
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
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	void verifyChild(::java::awt::Component* c);
};

#endif // _TestMemLeakComboBox$MyPanel_h_