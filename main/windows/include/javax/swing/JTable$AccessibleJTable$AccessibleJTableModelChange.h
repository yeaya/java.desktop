#ifndef _javax_swing_JTable$AccessibleJTable$AccessibleJTableModelChange_h_
#define _javax_swing_JTable$AccessibleJTable$AccessibleJTableModelChange_h_
//$ class javax.swing.JTable$AccessibleJTable$AccessibleJTableModelChange
//$ extends javax.accessibility.AccessibleTableModelChange

#include <javax/accessibility/AccessibleTableModelChange.h>

namespace javax {
	namespace swing {
		class JTable$AccessibleJTable;
	}
}

namespace javax {
	namespace swing {

class $import JTable$AccessibleJTable$AccessibleJTableModelChange : public ::javax::accessibility::AccessibleTableModelChange {
	$class(JTable$AccessibleJTable$AccessibleJTableModelChange, $NO_CLASS_INIT, ::javax::accessibility::AccessibleTableModelChange)
public:
	JTable$AccessibleJTable$AccessibleJTableModelChange();
	void init$(::javax::swing::JTable$AccessibleJTable* this$1, int32_t type, int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn);
	virtual int32_t getFirstColumn() override;
	virtual int32_t getFirstRow() override;
	virtual int32_t getLastColumn() override;
	virtual int32_t getLastRow() override;
	virtual int32_t getType() override;
	::javax::swing::JTable$AccessibleJTable* this$1 = nullptr;
	int32_t type = 0;
	int32_t firstRow = 0;
	int32_t lastRow = 0;
	int32_t firstColumn = 0;
	int32_t lastColumn = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$AccessibleJTable$AccessibleJTableModelChange_h_