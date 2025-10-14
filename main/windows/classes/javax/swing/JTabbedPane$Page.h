#ifndef _javax_swing_JTabbedPane$Page_h_
#define _javax_swing_JTabbedPane$Page_h_
//$ class javax.swing.JTabbedPane$Page
//$ extends javax.accessibility.AccessibleContext
//$ implements java.io.Serializable,javax.accessibility.Accessible,javax.accessibility.AccessibleComponent

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
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
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleIcon;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JTabbedPane;
	}
}

namespace javax {
	namespace swing {

class JTabbedPane$Page : public ::javax::accessibility::AccessibleContext, public ::java::io::Serializable, public ::javax::accessibility::Accessible, public ::javax::accessibility::AccessibleComponent {
	$class(JTabbedPane$Page, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::java::io::Serializable, ::javax::accessibility::Accessible, ::javax::accessibility::AccessibleComponent)
public:
	JTabbedPane$Page();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTabbedPane* this$0, ::javax::swing::JTabbedPane* parent, $String* title, ::javax::swing::Icon* icon, ::javax::swing::Icon* disabledIcon, ::java::awt::Component* component, $String* tip);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getAccessibleDescription() override;
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual int32_t getDisplayedMnemonicIndex();
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual int32_t getMnemonic();
	int32_t getPageIndex();
	virtual ::java::awt::Dimension* getSize() override;
	$String* getTitle();
	virtual void initAccessibleContext();
	virtual bool isEnabled() override;
	virtual bool isFocusTraversable() override;
	virtual bool isShowing() override;
	virtual bool isVisible() override;
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void requestFocus() override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(::java::awt::Rectangle* r) override;
	virtual void setCursor(::java::awt::Cursor* c) override;
	virtual void setDisplayedMnemonicIndex(int32_t mnemonicIndex);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLocation(::java::awt::Point* p) override;
	virtual void setMnemonic(int32_t mnemonic);
	virtual void setSize(::java::awt::Dimension* d) override;
	virtual void setVisible(bool b) override;
	virtual $String* toString() override;
	virtual void updateDisplayedMnemonicIndex();
	::javax::swing::JTabbedPane* this$0 = nullptr;
	$String* title = nullptr;
	::java::awt::Color* background = nullptr;
	::java::awt::Color* foreground = nullptr;
	::javax::swing::Icon* icon = nullptr;
	::javax::swing::Icon* disabledIcon = nullptr;
	::javax::swing::JTabbedPane* parent = nullptr;
	::java::awt::Component* component = nullptr;
	$String* tip = nullptr;
	bool enabled = false;
	bool needsUIUpdate = false;
	int32_t mnemonic = 0;
	int32_t mnemonicIndex = 0;
	::java::awt::Component* tabComponent = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTabbedPane$Page_h_