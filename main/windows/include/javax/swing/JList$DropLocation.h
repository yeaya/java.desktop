#ifndef _javax_swing_JList$DropLocation_h_
#define _javax_swing_JList$DropLocation_h_
//$ class javax.swing.JList$DropLocation
//$ extends javax.swing.TransferHandler$DropLocation

#include <javax/swing/TransferHandler$DropLocation.h>

namespace java {
	namespace awt {
		class Point;
	}
}

namespace javax {
	namespace swing {

class $import JList$DropLocation : public ::javax::swing::TransferHandler$DropLocation {
	$class(JList$DropLocation, $NO_CLASS_INIT, ::javax::swing::TransferHandler$DropLocation)
public:
	JList$DropLocation();
	void init$(::java::awt::Point* p, int32_t index, bool isInsert);
	int32_t getIndex();
	bool isInsert();
	virtual $String* toString() override;
	int32_t index = 0;
	bool isInsert$ = false;
};

	} // swing
} // javax

#endif // _javax_swing_JList$DropLocation_h_