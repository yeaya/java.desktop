#ifndef _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext_h_
#define _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext_h_
//$ class javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext
//$ extends javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext
//$ implements javax.accessibility.AccessibleTable

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleTable.h>
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
			namespace html {
				class AccessibleHTML$ElementInfo;
				class AccessibleHTML$TableElementInfo;
				class AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable;
				class AccessibleHTML$TableElementInfo$TableCellElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TableElementInfo$TableAccessibleContext : public ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, public ::javax::accessibility::AccessibleTable {
	$class(AccessibleHTML$TableElementInfo$TableAccessibleContext, $NO_CLASS_INIT, ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext, ::javax::accessibility::AccessibleTable)
public:
	AccessibleHTML$TableElementInfo$TableAccessibleContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1, ::javax::swing::text::html::AccessibleHTML$ElementInfo* elementInfo);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void addRowHeader(::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo* cellInfo, int32_t rowNumber);
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleCaption() override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual int32_t getAccessibleColumn(int32_t index);
	virtual int32_t getAccessibleColumnCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleColumnDescription(int32_t c) override;
	virtual int32_t getAccessibleColumnExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleColumnHeader() override;
	virtual $String* getAccessibleColumnHeader(int32_t c);
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $String* getAccessibleDescription() override;
	virtual int32_t getAccessibleIndex(int32_t r, int32_t c);
	virtual int32_t getAccessibleIndexInParent() override;
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual int32_t getAccessibleRow(int32_t index);
	virtual int32_t getAccessibleRowCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleRowDescription(int32_t r) override;
	virtual int32_t getAccessibleRowExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleRowHeader() override;
	virtual $String* getAccessibleRowHeader(int32_t r);
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSummary() override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleTable() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual $ints* getSelectedAccessibleColumns() override;
	virtual $ints* getSelectedAccessibleRows() override;
	virtual ::java::awt::Dimension* getSize() override;
	virtual bool isAccessibleColumnSelected(int32_t c) override;
	virtual bool isAccessibleRowSelected(int32_t r) override;
	virtual bool isAccessibleSelected(int32_t r, int32_t c) override;
	virtual bool isEnabled() override;
	virtual bool isFocusTraversable() override;
	virtual bool isShowing() override;
	virtual bool isVisible() override;
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void requestFocus() override;
	virtual void setAccessibleCaption(::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnDescription(int32_t c, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnHeader(::javax::accessibility::AccessibleTable* table) override;
	virtual void setAccessibleRowDescription(int32_t r, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleRowHeader(::javax::accessibility::AccessibleTable* table) override;
	virtual void setAccessibleSummary(::javax::accessibility::Accessible* a) override;
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
	::javax::swing::text::html::AccessibleHTML$TableElementInfo* this$1 = nullptr;
	::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable* rowHeadersTable = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext_h_