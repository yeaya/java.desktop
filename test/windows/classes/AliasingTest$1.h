#ifndef _AliasingTest$1_h_
#define _AliasingTest$1_h_
//$ class AliasingTest$1
//$ extends javax.swing.JEditorPane

#include <javax/swing/JEditorPane.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}

class AliasingTest$1 : public ::javax::swing::JEditorPane {
	$class(AliasingTest$1, $NO_CLASS_INIT, ::javax::swing::JEditorPane)
public:
	AliasingTest$1();
	using ::javax::swing::JEditorPane::getText;
	using ::javax::swing::JEditorPane::getToolTipText;
	using ::javax::swing::JEditorPane::contains;
	using ::javax::swing::JEditorPane::enable;
	using ::javax::swing::JEditorPane::getBounds;
	using ::javax::swing::JEditorPane::getSize;
	using ::javax::swing::JEditorPane::getLocation;
	using ::javax::swing::JEditorPane::firePropertyChange;
	using ::javax::swing::JEditorPane::add;
	using ::javax::swing::JEditorPane::getMousePosition;
	void init$();
	using ::javax::swing::JEditorPane::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JEditorPane::read;
	using ::javax::swing::JEditorPane::setUI;
	using ::javax::swing::JEditorPane::print;
	using ::javax::swing::JEditorPane::requestFocus;
	using ::javax::swing::JEditorPane::requestFocusInWindow;
	using ::javax::swing::JEditorPane::repaint;
	using ::javax::swing::JEditorPane::remove;
};

#endif // _AliasingTest$1_h_