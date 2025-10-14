#ifndef _java_awt_Component$AccessibleAWTComponent_h_
#define _java_awt_Component$AccessibleAWTComponent_h_
//$ class java.awt.Component$AccessibleAWTComponent
//$ extends javax.accessibility.AccessibleContext
//$ implements java.io.Serializable,javax.accessibility.AccessibleComponent

#include <java/io/Serializable.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Cursor;
		class Dimension;
		class Font;
		class FontMetrics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
			class FocusListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import Component$AccessibleAWTComponent : public ::javax::accessibility::AccessibleContext, public ::java::io::Serializable, public ::javax::accessibility::AccessibleComponent {
	$class(Component$AccessibleAWTComponent, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::java::io::Serializable, ::javax::accessibility::AccessibleComponent)
public:
	Component$AccessibleAWTComponent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* this$0);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual $String* getAccessibleDescription() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getSize() override;
	virtual bool isEnabled() override;
	virtual bool isFocusTraversable() override;
	virtual bool isShowing() override;
	virtual bool isVisible() override;
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void requestFocus() override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(::java::awt::Rectangle* r) override;
	virtual void setCursor(::java::awt::Cursor* cursor) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLocation(::java::awt::Point* p) override;
	virtual void setSize(::java::awt::Dimension* d) override;
	virtual void setVisible(bool b) override;
	virtual $String* toString() override;
	::java::awt::Component* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x08E9FC248AFC02FF;
	$volatile(int32_t) propertyListenersCount = 0;
	::java::awt::event::ComponentListener* accessibleAWTComponentHandler = nullptr;
	::java::awt::event::FocusListener* accessibleAWTFocusHandler = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$AccessibleAWTComponent_h_