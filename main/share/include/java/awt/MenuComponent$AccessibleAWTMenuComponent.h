#ifndef _java_awt_MenuComponent$AccessibleAWTMenuComponent_h_
#define _java_awt_MenuComponent$AccessibleAWTMenuComponent_h_
//$ class java.awt.MenuComponent$AccessibleAWTMenuComponent
//$ extends javax.accessibility.AccessibleContext
//$ implements java.io.Serializable,javax.accessibility.AccessibleComponent,javax.accessibility.AccessibleSelection

#include <java/io/Serializable.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>

namespace java {
	namespace awt {
		class Color;
		class Cursor;
		class Dimension;
		class Font;
		class FontMetrics;
		class MenuComponent;
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

class $import MenuComponent$AccessibleAWTMenuComponent : public ::javax::accessibility::AccessibleContext, public ::java::io::Serializable, public ::javax::accessibility::AccessibleComponent, public ::javax::accessibility::AccessibleSelection {
	$class(MenuComponent$AccessibleAWTMenuComponent, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::java::io::Serializable, ::javax::accessibility::AccessibleComponent, ::javax::accessibility::AccessibleSelection)
public:
	MenuComponent$AccessibleAWTMenuComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MenuComponent* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void clearAccessibleSelection() override;
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
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
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
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual bool isEnabled() override;
	virtual bool isFocusTraversable() override;
	virtual bool isShowing() override;
	virtual bool isVisible() override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void requestFocus() override;
	virtual void selectAllAccessibleSelection() override;
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
	::java::awt::MenuComponent* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC4BF91FA99520A56;
};

	} // awt
} // java

#endif // _java_awt_MenuComponent$AccessibleAWTMenuComponent_h_