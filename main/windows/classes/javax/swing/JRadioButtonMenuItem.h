#ifndef _javax_swing_JRadioButtonMenuItem_h_
#define _javax_swing_JRadioButtonMenuItem_h_
//$ class javax.swing.JRadioButtonMenuItem
//$ extends javax.swing.JMenuItem

#include <javax/swing/JMenuItem.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class Icon;
	}
}

namespace javax {
	namespace swing {

class $export JRadioButtonMenuItem : public ::javax::swing::JMenuItem {
	$class(JRadioButtonMenuItem, 0, ::javax::swing::JMenuItem)
public:
	JRadioButtonMenuItem();
	using ::javax::swing::JMenuItem::getComponent;
	using ::javax::swing::JMenuItem::contains;
	using ::javax::swing::JMenuItem::enable;
	using ::javax::swing::JMenuItem::getBounds;
	using ::javax::swing::JMenuItem::getSize;
	using ::javax::swing::JMenuItem::getLocation;
	using ::javax::swing::JMenuItem::firePropertyChange;
	using ::javax::swing::JMenuItem::add;
	using ::javax::swing::JMenuItem::getMousePosition;
	void init$();
	void init$(::javax::swing::Icon* icon);
	void init$($String* text);
	void init$(::javax::swing::Action* a);
	void init$($String* text, ::javax::swing::Icon* icon);
	void init$($String* text, bool selected);
	void init$(::javax::swing::Icon* icon, bool selected);
	void init$($String* text, ::javax::swing::Icon* icon, bool selected);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JMenuItem::list;
	virtual $String* paramString() override;
	using ::javax::swing::JMenuItem::setUI;
	using ::javax::swing::JMenuItem::processMouseEvent;
	using ::javax::swing::JMenuItem::processKeyEvent;
	using ::javax::swing::JMenuItem::requestFocus;
	using ::javax::swing::JMenuItem::requestFocusInWindow;
	using ::javax::swing::JMenuItem::repaint;
	using ::javax::swing::JMenuItem::remove;
	virtual bool shouldUpdateSelectedStateFromAction() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JRadioButtonMenuItem_h_