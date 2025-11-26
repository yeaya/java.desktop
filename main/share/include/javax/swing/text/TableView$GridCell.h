#ifndef _javax_swing_text_TableView$GridCell_h_
#define _javax_swing_text_TableView$GridCell_h_
//$ interface javax.swing.text.TableView$GridCell
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class $import TableView$GridCell : public ::java::lang::Object {
	$interface(TableView$GridCell, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getColumnCount() {return 0;}
	virtual int32_t getGridColumn() {return 0;}
	virtual int32_t getGridRow() {return 0;}
	virtual int32_t getRowCount() {return 0;}
	virtual void setGridLocation(int32_t row, int32_t col) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_TableView$GridCell_h_