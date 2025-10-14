#ifndef _javax_swing_JTable$AccessibleJTable$AccessibleTableHeader_h_
#define _javax_swing_JTable$AccessibleJTable$AccessibleTableHeader_h_
//$ class javax.swing.JTable$AccessibleJTable$AccessibleTableHeader
//$ extends javax.accessibility.AccessibleTable

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleTable.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JTable$AccessibleJTable;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
			class TableColumnModel;
		}
	}
}

namespace javax {
	namespace swing {

class JTable$AccessibleJTable$AccessibleTableHeader : public ::javax::accessibility::AccessibleTable {
	$class(JTable$AccessibleJTable$AccessibleTableHeader, $NO_CLASS_INIT, ::javax::accessibility::AccessibleTable)
public:
	JTable$AccessibleJTable$AccessibleTableHeader();
	void init$(::javax::swing::JTable$AccessibleJTable* this$1, ::javax::swing::table::JTableHeader* header);
	virtual ::javax::accessibility::Accessible* getAccessibleAt(int32_t row, int32_t column) override;
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
	::javax::swing::JTable$AccessibleJTable* this$1 = nullptr;
	::javax::swing::table::JTableHeader* header = nullptr;
	::javax::swing::table::TableColumnModel* headerModel = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$AccessibleJTable$AccessibleTableHeader_h_