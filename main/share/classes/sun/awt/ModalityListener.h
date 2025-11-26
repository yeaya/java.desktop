#ifndef _sun_awt_ModalityListener_h_
#define _sun_awt_ModalityListener_h_
//$ interface sun.awt.ModalityListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		class ModalityEvent;
	}
}

namespace sun {
	namespace awt {

class $export ModalityListener : public ::java::lang::Object {
	$interface(ModalityListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void modalityPopped(::sun::awt::ModalityEvent* ev) {}
	virtual void modalityPushed(::sun::awt::ModalityEvent* ev) {}
};

	} // awt
} // sun

#endif // _sun_awt_ModalityListener_h_