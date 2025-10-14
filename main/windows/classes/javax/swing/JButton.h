#ifndef _javax_swing_JButton_h_
#define _javax_swing_JButton_h_
//$ class javax.swing.JButton
//$ extends javax.swing.AbstractButton
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/AbstractButton.h>

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

class $export JButton : public ::javax::swing::AbstractButton, public ::javax::accessibility::Accessible {
	$class(JButton, 0, ::javax::swing::AbstractButton, ::javax::accessibility::Accessible)
public:
	JButton();
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
	void init$($String* text);
	void init$(::javax::swing::Action* a);
	void init$($String* text, ::javax::swing::Icon* icon);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getUIClassID() override;
	virtual bool isDefaultButton();
	virtual bool isDefaultCapable();
	using ::javax::swing::AbstractButton::list;
	virtual $String* paramString() override;
	using ::javax::swing::AbstractButton::remove;
	virtual void removeNotify() override;
	using ::javax::swing::AbstractButton::requestFocus;
	using ::javax::swing::AbstractButton::requestFocusInWindow;
	using ::javax::swing::AbstractButton::repaint;
	virtual void setDefaultCapable(bool defaultCapable);
	using ::javax::swing::AbstractButton::setUI;
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JButton_h_