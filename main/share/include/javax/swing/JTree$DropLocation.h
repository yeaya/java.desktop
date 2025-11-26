#ifndef _javax_swing_JTree$DropLocation_h_
#define _javax_swing_JTree$DropLocation_h_
//$ class javax.swing.JTree$DropLocation
//$ extends javax.swing.TransferHandler$DropLocation

#include <javax/swing/TransferHandler$DropLocation.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {

class $import JTree$DropLocation : public ::javax::swing::TransferHandler$DropLocation {
	$class(JTree$DropLocation, $NO_CLASS_INIT, ::javax::swing::TransferHandler$DropLocation)
public:
	JTree$DropLocation();
	void init$(::java::awt::Point* p, ::javax::swing::tree::TreePath* path, int32_t index);
	int32_t getChildIndex();
	::javax::swing::tree::TreePath* getPath();
	virtual $String* toString() override;
	::javax::swing::tree::TreePath* path = nullptr;
	int32_t index = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$DropLocation_h_