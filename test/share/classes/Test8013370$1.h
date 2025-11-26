#ifndef _Test8013370$1_h_
#define _Test8013370$1_h_
//$ class Test8013370$1
//$ extends javax.swing.JMenuBar

#include <javax/swing/JMenuBar.h>

class Test8013370;
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class KeyStroke;
	}
}

class Test8013370$1 : public ::javax::swing::JMenuBar {
	$class(Test8013370$1, $NO_CLASS_INIT, ::javax::swing::JMenuBar)
public:
	Test8013370$1();
	using ::javax::swing::JMenuBar::add;
	using ::javax::swing::JMenuBar::getComponent;
	using ::javax::swing::JMenuBar::contains;
	using ::javax::swing::JMenuBar::enable;
	using ::javax::swing::JMenuBar::getBounds;
	using ::javax::swing::JMenuBar::getSize;
	using ::javax::swing::JMenuBar::getLocation;
	using ::javax::swing::JMenuBar::firePropertyChange;
	using ::javax::swing::JMenuBar::getMousePosition;
	void init$(::Test8013370* this$0);
	using ::javax::swing::JMenuBar::list;
	virtual bool processKeyBinding(::javax::swing::KeyStroke* stroke, ::java::awt::event::KeyEvent* event, int32_t condition, bool pressed) override;
	using ::javax::swing::JMenuBar::setUI;
	using ::javax::swing::JMenuBar::processMouseEvent;
	using ::javax::swing::JMenuBar::processKeyEvent;
	using ::javax::swing::JMenuBar::requestFocus;
	using ::javax::swing::JMenuBar::requestFocusInWindow;
	using ::javax::swing::JMenuBar::repaint;
	using ::javax::swing::JMenuBar::remove;
	::Test8013370* this$0 = nullptr;
};

#endif // _Test8013370$1_h_