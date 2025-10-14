#ifndef _javax_swing_JTable$DropLocation_h_
#define _javax_swing_JTable$DropLocation_h_
//$ class javax.swing.JTable$DropLocation
//$ extends javax.swing.TransferHandler$DropLocation

#include <javax/swing/TransferHandler$DropLocation.h>

namespace java {
	namespace awt {
		class Point;
	}
}

namespace javax {
	namespace swing {

class $export JTable$DropLocation : public ::javax::swing::TransferHandler$DropLocation {
	$class(JTable$DropLocation, $NO_CLASS_INIT, ::javax::swing::TransferHandler$DropLocation)
public:
	JTable$DropLocation();
	void init$(::java::awt::Point* p, int32_t row, int32_t col, bool isInsertRow, bool isInsertCol);
	int32_t getColumn();
	int32_t getRow();
	bool isInsertColumn();
	bool isInsertRow();
	virtual $String* toString() override;
	int32_t row = 0;
	int32_t col = 0;
	bool isInsertRow$ = false;
	bool isInsertCol = false;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$DropLocation_h_