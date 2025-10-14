#ifndef _javax_swing_JToggleButton_h_
#define _javax_swing_JToggleButton_h_
//$ class javax.swing.JToggleButton
//$ extends javax.swing.AbstractButton
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/AbstractButton.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
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

class $export JToggleButton : public ::javax::swing::AbstractButton, public ::javax::accessibility::Accessible {
	$class(JToggleButton, 0, ::javax::swing::AbstractButton, ::javax::accessibility::Accessible)
public:
	JToggleButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::AbstractButton::contains;
	using ::javax::swing::AbstractButton::enable;
	using ::javax::swing::AbstractButton::getBounds;
	using ::javax::swing::AbstractButton::getSize;
	using ::javax::swing::AbstractButton::getLocation;
	using ::javax::swing::AbstractButton::firePropertyChange;
	using ::javax::swing::AbstractButton::add;
	using ::javax::swing::AbstractButton::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::swing::Icon* icon);
	void init$(::javax::swing::Icon* icon, bool selected);
	void init$($String* text);
	void init$($String* text, bool selected);
	void init$(::javax::swing::Action* a);
	void init$($String* text, ::javax::swing::Icon* icon);
	void init$($String* text, ::javax::swing::Icon* icon, bool selected);
	static ::javax::accessibility::AccessibleContext* access$000(::javax::swing::JToggleButton* x0);
	static ::javax::accessibility::AccessibleContext* access$100(::javax::swing::JToggleButton* x0);
	static ::javax::accessibility::AccessibleContext* access$200(::javax::swing::JToggleButton* x0);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::javax::swing::JToggleButton* getGroupSelection(::java::awt::event::FocusEvent$Cause* cause);
	virtual $String* getUIClassID() override;
	using ::javax::swing::AbstractButton::list;
	virtual $String* paramString() override;
	using ::javax::swing::AbstractButton::requestFocus;
	using ::javax::swing::AbstractButton::repaint;
	using ::javax::swing::AbstractButton::remove;
	virtual void requestFocus(::java::awt::event::FocusEvent$Cause* cause) override;
	using ::javax::swing::AbstractButton::requestFocusInWindow;
	virtual bool requestFocusInWindow(::java::awt::event::FocusEvent$Cause* cause) override;
	bool requestFocusInWindowUnconditionally(::java::awt::event::FocusEvent$Cause* cause);
	void requestFocusUnconditionally(::java::awt::event::FocusEvent$Cause* cause);
	using ::javax::swing::AbstractButton::setUI;
	virtual bool shouldUpdateSelectedStateFromAction() override;
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JToggleButton_h_