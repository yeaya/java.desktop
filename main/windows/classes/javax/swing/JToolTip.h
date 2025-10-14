#ifndef _javax_swing_JToolTip_h_
#define _javax_swing_JToolTip_h_
//$ class javax.swing.JToolTip
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

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
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JToolTip : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JToolTip, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JToolTip();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::getComponent;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool alwaysOnTop() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::JComponent* getComponent();
	virtual $String* getTipText();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setComponent(::javax::swing::JComponent* c);
	virtual void setTipText($String* tipText);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	$String* tipText = nullptr;
	::javax::swing::JComponent* component = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolTip_h_