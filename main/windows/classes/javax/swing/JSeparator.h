#ifndef _javax_swing_JSeparator_h_
#define _javax_swing_JSeparator_h_
//$ class javax.swing.JSeparator
//$ extends javax.swing.JComponent
//$ implements javax.swing.SwingConstants,javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

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
			class SeparatorUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JSeparator : public ::javax::swing::JComponent, public ::javax::swing::SwingConstants, public ::javax::accessibility::Accessible {
	$class(JSeparator, 0, ::javax::swing::JComponent, ::javax::swing::SwingConstants, ::javax::accessibility::Accessible)
public:
	JSeparator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t orientation);
	void checkOrientation(int32_t orientation);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getOrientation();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setOrientation(int32_t orientation);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::SeparatorUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	int32_t orientation = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JSeparator_h_