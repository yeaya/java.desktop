#ifndef _java_awt_ItemSelectable_h_
#define _java_awt_ItemSelectable_h_
//$ interface java.awt.ItemSelectable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemListener;
		}
	}
}

namespace java {
	namespace awt {

class $import ItemSelectable : public ::java::lang::Object {
	$interface(ItemSelectable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addItemListener(::java::awt::event::ItemListener* l) {}
	virtual $ObjectArray* getSelectedObjects() {return nullptr;}
	virtual void removeItemListener(::java::awt::event::ItemListener* l) {}
};

	} // awt
} // java

#endif // _java_awt_ItemSelectable_h_