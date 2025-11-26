#ifndef _javax_swing_JTable$ModelChange_h_
#define _javax_swing_JTable$ModelChange_h_
//$ class javax.swing.JTable$ModelChange
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TableModelEvent;
		}
	}
}

namespace javax {
	namespace swing {

class JTable$ModelChange : public ::java::lang::Object {
	$class(JTable$ModelChange, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTable$ModelChange();
	void init$(::javax::swing::JTable* this$0, ::javax::swing::event::TableModelEvent* e);
	::javax::swing::JTable* this$0 = nullptr;
	int32_t startModelIndex = 0;
	int32_t endModelIndex = 0;
	int32_t type = 0;
	int32_t modelRowCount = 0;
	::javax::swing::event::TableModelEvent* event = nullptr;
	int32_t length = 0;
	bool allRowsChanged = false;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$ModelChange_h_