#ifndef _javax_swing_ListModel_h_
#define _javax_swing_ListModel_h_
//$ interface javax.swing.ListModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListDataListener;
		}
	}
}

namespace javax {
	namespace swing {

class $export ListModel : public ::java::lang::Object {
	$interface(ListModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addListDataListener(::javax::swing::event::ListDataListener* l) {}
	virtual $Object* getElementAt(int32_t index) {return nullptr;}
	virtual int32_t getSize() {return 0;}
	virtual void removeListDataListener(::javax::swing::event::ListDataListener* l) {}
};

	} // swing
} // javax

#endif // _javax_swing_ListModel_h_