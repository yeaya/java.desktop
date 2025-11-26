#ifndef _javax_swing_JRadioButton_h_
#define _javax_swing_JRadioButton_h_
//$ class javax.swing.JRadioButton
//$ extends javax.swing.JToggleButton

#include <javax/swing/JToggleButton.h>

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

class $export JRadioButton : public ::javax::swing::JToggleButton {
	$class(JRadioButton, 0, ::javax::swing::JToggleButton)
public:
	JRadioButton();
	using ::javax::swing::JToggleButton::contains;
	using ::javax::swing::JToggleButton::enable;
	using ::javax::swing::JToggleButton::getBounds;
	using ::javax::swing::JToggleButton::getSize;
	using ::javax::swing::JToggleButton::getLocation;
	using ::javax::swing::JToggleButton::firePropertyChange;
	using ::javax::swing::JToggleButton::add;
	using ::javax::swing::JToggleButton::getMousePosition;
	void init$();
	void init$(::javax::swing::Icon* icon);
	void init$(::javax::swing::Action* a);
	void init$(::javax::swing::Icon* icon, bool selected);
	void init$($String* text);
	void init$($String* text, bool selected);
	void init$($String* text, ::javax::swing::Icon* icon);
	void init$($String* text, ::javax::swing::Icon* icon, bool selected);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JToggleButton::list;
	virtual $String* paramString() override;
	using ::javax::swing::JToggleButton::requestFocus;
	using ::javax::swing::JToggleButton::requestFocusInWindow;
	using ::javax::swing::JToggleButton::repaint;
	using ::javax::swing::JToggleButton::remove;
	virtual void setIconFromAction(::javax::swing::Action* a) override;
	using ::javax::swing::JToggleButton::setUI;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JRadioButton_h_