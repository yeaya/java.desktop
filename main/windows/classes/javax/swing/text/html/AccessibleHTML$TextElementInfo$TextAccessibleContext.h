#ifndef _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext_h_
#define _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext_h_
//$ class javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext
//$ extends javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext
//$ implements javax.accessibility.AccessibleText

#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>

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
		class Accessible;
		class AccessibleComponent;
		class AccessibleContext;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML$ElementInfo;
				class AccessibleHTML$TextElementInfo;
				class AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TextElementInfo$TextAccessibleContext : public ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, public ::javax::accessibility::AccessibleText {
	$class(AccessibleHTML$TextElementInfo$TextAccessibleContext, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, ::javax::accessibility::AccessibleText)
public:
	AccessibleHTML$TextElementInfo$TextAccessibleContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML$TextElementInfo* this$1, ::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getAccessibleDescription() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::AccessibleText* getAccessibleText() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	$String* getAtIndex(int32_t part, int32_t index, int32_t direction);
	virtual ::java::awt::Color* getBackground() override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	::javax::swing::text::Element* getParagraphElement(int32_t index);
	::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment* getParagraphElementText(int32_t index);
	::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext$IndexedSegment* getSegmentAt(int32_t part, int32_t index);
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual ::java::awt::Dimension* getSize() override;
	$String* getText(int32_t offset, int32_t length);
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
	::javax::swing::text::html::AccessibleHTML$TextElementInfo* this$1 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TextElementInfo$TextAccessibleContext_h_