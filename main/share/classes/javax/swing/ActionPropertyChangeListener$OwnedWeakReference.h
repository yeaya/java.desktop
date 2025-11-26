#ifndef _javax_swing_ActionPropertyChangeListener$OwnedWeakReference_h_
#define _javax_swing_ActionPropertyChangeListener$OwnedWeakReference_h_
//$ class javax.swing.ActionPropertyChangeListener$OwnedWeakReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace javax {
	namespace swing {
		class ActionPropertyChangeListener;
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class ActionPropertyChangeListener$OwnedWeakReference : public ::java::lang::ref::WeakReference {
	$class(ActionPropertyChangeListener$OwnedWeakReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ActionPropertyChangeListener$OwnedWeakReference();
	void init$(::javax::swing::JComponent* target, ::java::lang::ref::ReferenceQueue* queue, ::javax::swing::ActionPropertyChangeListener* owner);
	virtual ::javax::swing::ActionPropertyChangeListener* getOwner();
	::javax::swing::ActionPropertyChangeListener* owner = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ActionPropertyChangeListener$OwnedWeakReference_h_