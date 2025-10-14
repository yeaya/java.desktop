#ifndef _javax_swing_JCheckBox_h_
#define _javax_swing_JCheckBox_h_
//$ class javax.swing.JCheckBox
//$ extends javax.swing.JToggleButton

#include <javax/swing/JToggleButton.h>

#pragma push_macro("BORDER_PAINTED_FLAT_CHANGED_PROPERTY")
#undef BORDER_PAINTED_FLAT_CHANGED_PROPERTY

namespace java {
	namespace io {
		class ObjectInputStream;
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

class $import JCheckBox : public ::javax::swing::JToggleButton {
	$class(JCheckBox, 0, ::javax::swing::JToggleButton)
public:
	JCheckBox();
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
	void init$(::javax::swing::Icon* icon, bool selected);
	void init$($String* text);
	void init$(::javax::swing::Action* a);
	void init$($String* text, bool selected);
	void init$($String* text, ::javax::swing::Icon* icon);
	void init$($String* text, ::javax::swing::Icon* icon, bool selected);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getUIClassID() override;
	virtual bool isBorderPaintedFlat();
	using ::javax::swing::JToggleButton::list;
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JToggleButton::requestFocus;
	using ::javax::swing::JToggleButton::requestFocusInWindow;
	using ::javax::swing::JToggleButton::repaint;
	using ::javax::swing::JToggleButton::remove;
	virtual void setBorderPaintedFlat(bool b);
	virtual void setIconFromAction(::javax::swing::Action* a) override;
	using ::javax::swing::JToggleButton::setUI;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* BORDER_PAINTED_FLAT_CHANGED_PROPERTY;
	bool flat = false;
	static $String* uiClassID;
};

	} // swing
} // javax

#pragma pop_macro("BORDER_PAINTED_FLAT_CHANGED_PROPERTY")

#endif // _javax_swing_JCheckBox_h_