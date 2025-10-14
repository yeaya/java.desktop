#ifndef _javax_swing_JCheckBoxMenuItem_h_
#define _javax_swing_JCheckBoxMenuItem_h_
//$ class javax.swing.JCheckBoxMenuItem
//$ extends javax.swing.JMenuItem

#include <java/lang/Array.h>
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

class $import JCheckBoxMenuItem : public ::javax::swing::JMenuItem {
	$class(JCheckBoxMenuItem, 0, ::javax::swing::JMenuItem)
public:
	JCheckBoxMenuItem();
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
	void init$($String* text, bool b);
	void init$($String* text, ::javax::swing::Icon* icon, bool b);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $ObjectArray* getSelectedObjects() override;
	virtual bool getState();
	virtual $String* getUIClassID() override;
	using ::javax::swing::JMenuItem::list;
	virtual $String* paramString() override;
	using ::javax::swing::JMenuItem::processMouseEvent;
	using ::javax::swing::JMenuItem::processKeyEvent;
	using ::javax::swing::JMenuItem::requestFocus;
	using ::javax::swing::JMenuItem::requestFocusInWindow;
	using ::javax::swing::JMenuItem::repaint;
	using ::javax::swing::JMenuItem::remove;
	virtual void setState(bool b);
	using ::javax::swing::JMenuItem::setUI;
	virtual bool shouldUpdateSelectedStateFromAction() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JCheckBoxMenuItem_h_