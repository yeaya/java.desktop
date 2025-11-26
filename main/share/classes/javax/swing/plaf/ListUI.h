#ifndef _javax_swing_plaf_ListUI_h_
#define _javax_swing_plaf_ListUI_h_
//$ class javax.swing.plaf.ListUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export ListUI : public ::javax::swing::plaf::ComponentUI {
	$class(ListUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	ListUI();
	void init$();
	virtual ::java::awt::Rectangle* getCellBounds(::javax::swing::JList* list, int32_t index1, int32_t index2) {return nullptr;}
	virtual ::java::awt::Point* indexToLocation(::javax::swing::JList* list, int32_t index) {return nullptr;}
	virtual int32_t locationToIndex(::javax::swing::JList* list, ::java::awt::Point* location) {return 0;}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_ListUI_h_