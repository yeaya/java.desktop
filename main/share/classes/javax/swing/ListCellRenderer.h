#ifndef _javax_swing_ListCellRenderer_h_
#define _javax_swing_ListCellRenderer_h_
//$ interface javax.swing.ListCellRenderer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}

namespace javax {
	namespace swing {

class $export ListCellRenderer : public ::java::lang::Object {
	$interface(ListCellRenderer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_ListCellRenderer_h_