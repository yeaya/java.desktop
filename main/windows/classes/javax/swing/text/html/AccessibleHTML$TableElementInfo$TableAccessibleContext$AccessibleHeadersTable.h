#ifndef _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_h_
#define _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_h_
//$ class javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable
//$ extends javax.accessibility.AccessibleTable

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleTable.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML$TableElementInfo$TableAccessibleContext;
				class AccessibleHTML$TableElementInfo$TableCellElementInfo;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable : public ::javax::accessibility::AccessibleTable {
	$class(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, $NO_CLASS_INIT, ::javax::accessibility::AccessibleTable)
public:
	AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable();
	void init$(::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext* this$2);
	virtual void addHeader(::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo* cellInfo, int32_t rowNumber);
	virtual ::javax::accessibility::Accessible* getAccessibleAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::Accessible* getAccessibleCaption() override;
	virtual int32_t getAccessibleColumnCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleColumnDescription(int32_t c) override;
	virtual int32_t getAccessibleColumnExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleColumnHeader() override;
	virtual int32_t getAccessibleRowCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleRowDescription(int32_t r) override;
	virtual int32_t getAccessibleRowExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleRowHeader() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSummary() override;
	::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo* getElementInfoAt(int32_t r, int32_t c);
	virtual $ints* getSelectedAccessibleColumns() override;
	virtual $ints* getSelectedAccessibleRows() override;
	virtual bool isAccessibleColumnSelected(int32_t c) override;
	virtual bool isAccessibleRowSelected(int32_t r) override;
	virtual bool isAccessibleSelected(int32_t r, int32_t c) override;
	virtual void setAccessibleCaption(::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnDescription(int32_t c, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnHeader(::javax::accessibility::AccessibleTable* table) override;
	virtual void setAccessibleRowDescription(int32_t r, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleRowHeader(::javax::accessibility::AccessibleTable* table) override;
	virtual void setAccessibleSummary(::javax::accessibility::Accessible* a) override;
	::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext* this$2 = nullptr;
	::java::util::Hashtable* headers = nullptr;
	int32_t rowCount = 0;
	int32_t columnCount = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_h_