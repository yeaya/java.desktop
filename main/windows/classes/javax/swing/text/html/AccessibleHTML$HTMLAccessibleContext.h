#ifndef _javax_swing_text_html_AccessibleHTML$HTMLAccessibleContext_h_
#define _javax_swing_text_html_AccessibleHTML$HTMLAccessibleContext_h_
//$ class javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext
//$ extends javax.accessibility.AccessibleContext
//$ implements javax.accessibility.Accessible,javax.accessibility.AccessibleComponent

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>

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
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML;
				class AccessibleHTML$ElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$HTMLAccessibleContext : public ::javax::accessibility::AccessibleContext, public ::javax::accessibility::Accessible, public ::javax::accessibility::AccessibleComponent {
	$class(AccessibleHTML$HTMLAccessibleContext, $NO_CLASS_INIT, ::javax::accessibility::AccessibleContext, ::javax::accessibility::Accessible, ::javax::accessibility::AccessibleComponent)
public:
	AccessibleHTML$HTMLAccessibleContext();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML* this$0, ::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	::javax::swing::text::html::AccessibleHTML$ElementInfo* getElementInfoAt(::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo, ::java::awt::Point* p);
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
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
	::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$HTMLAccessibleContext_h_