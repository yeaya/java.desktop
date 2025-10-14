#ifndef _javax_swing_JTable$AccessibleJTable$AccessibleJTableCell_h_
#define _javax_swing_JTable$AccessibleJTable$AccessibleJTableCell_h_
//$ class javax.swing.JTable$AccessibleJTable$AccessibleJTableCell
//$ extends javax.accessibility.AccessibleContext
//$ implements javax.accessibility.Accessible,javax.accessibility.AccessibleComponent

#include <javax/accessibility/Accessible.h>
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
		class AccessibleAction;
		class AccessibleRole;
		class AccessibleSelection;
		class AccessibleStateSet;
		class AccessibleText;
		class AccessibleValue;
	}
}
namespace javax {
	namespace swing {
		class JTable;
		class JTable$AccessibleJTable;
	}
}

namespace javax {
	namespace swing {

class $import JTable$AccessibleJTable$AccessibleJTableCell : public ::javax::accessibility::AccessibleContext, public ::javax::accessibility::Accessible, public ::javax::accessibility::AccessibleComponent {
	$class(JTable$AccessibleJTable$AccessibleJTableCell, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::javax::accessibility::Accessible, ::javax::accessibility::AccessibleComponent)
public:
	JTable$AccessibleJTable$AccessibleJTableCell();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTable$AccessibleJTable* this$1, ::javax::swing::JTable* t, int32_t r, int32_t c, int32_t i);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction() override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getAccessibleDescription() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::Accessible* getAccessibleParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::javax::accessibility::AccessibleContext* getCurrentAccessibleContext();
	virtual ::java::awt::Component* getCurrentComponent();
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
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual void requestFocus() override;
	virtual void setAccessibleDescription($String* s) override;
	virtual void setAccessibleName($String* s) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(::java::awt::Rectangle* r) override;
	virtual void setCursor(::java::awt::Cursor* c) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLocation(::java::awt::Point* p) override;
	virtual void setSize(::java::awt::Dimension* d) override;
	virtual void setVisible(bool b) override;
	virtual $String* toString() override;
	::javax::swing::JTable$AccessibleJTable* this$1 = nullptr;
	::javax::swing::JTable* parent = nullptr;
	int32_t row = 0;
	int32_t column = 0;
	int32_t index = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$AccessibleJTable$AccessibleJTableCell_h_