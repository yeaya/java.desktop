#ifndef _javax_swing_JComponent$AccessibleJComponent_h_
#define _javax_swing_JComponent$AccessibleJComponent_h_
//$ class javax.swing.JComponent$AccessibleJComponent
//$ extends java.awt.Container$AccessibleAWTContainer
//$ implements javax.accessibility.AccessibleExtendedComponent

#include <java/awt/Container$AccessibleAWTContainer.h>
#include <javax/accessibility/AccessibleExtendedComponent.h>

namespace java {
	namespace awt {
		class Color;
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
		class AccessibleComponent;
		class AccessibleKeyBinding;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace javax {
	namespace swing {

class $export JComponent$AccessibleJComponent : public ::java::awt::Container$AccessibleAWTContainer, public ::javax::accessibility::AccessibleExtendedComponent {
	$class(JComponent$AccessibleJComponent, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer, ::javax::accessibility::AccessibleExtendedComponent)
public:
	JComponent$AccessibleJComponent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComponent* this$0);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual $String* getAccessibleDescription() override;
	virtual ::javax::accessibility::AccessibleExtendedComponent* getAccessibleExtendedComponent();
	virtual int32_t getAccessibleIndexInParent() override;
	virtual ::javax::accessibility::AccessibleKeyBinding* getAccessibleKeyBinding() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual $String* getBorderTitle(::javax::swing::border::Border* b);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getSize() override;
	virtual $String* getTitledBorderText() override;
	virtual $String* getToolTipText() override;
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
	::javax::swing::JComponent* this$0 = nullptr;
	$volatile(int32_t) propertyListenersCount = 0;
	::java::awt::event::FocusListener* accessibleFocusHandler = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$AccessibleJComponent_h_