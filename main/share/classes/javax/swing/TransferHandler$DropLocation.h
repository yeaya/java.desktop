#ifndef _javax_swing_TransferHandler$DropLocation_h_
#define _javax_swing_TransferHandler$DropLocation_h_
//$ class javax.swing.TransferHandler$DropLocation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Point;
	}
}

namespace javax {
	namespace swing {

class $export TransferHandler$DropLocation : public ::java::lang::Object {
	$class(TransferHandler$DropLocation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransferHandler$DropLocation();
	void init$(::java::awt::Point* dropPoint);
	::java::awt::Point* getDropPoint();
	virtual $String* toString() override;
	::java::awt::Point* dropPoint = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$DropLocation_h_