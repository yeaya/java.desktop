#ifndef _javax_swing_tree_ExpandVetoException_h_
#define _javax_swing_tree_ExpandVetoException_h_
//$ class javax.swing.tree.ExpandVetoException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import ExpandVetoException : public ::java::lang::Exception {
	$class(ExpandVetoException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ExpandVetoException();
	void init$(::javax::swing::event::TreeExpansionEvent* event);
	void init$(::javax::swing::event::TreeExpansionEvent* event, $String* message);
	::javax::swing::event::TreeExpansionEvent* event = nullptr;
	ExpandVetoException(const ExpandVetoException& e);
	ExpandVetoException wrapper$();
	virtual void throwWrapper$() override;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_ExpandVetoException_h_