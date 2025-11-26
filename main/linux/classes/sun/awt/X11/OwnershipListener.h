#ifndef _sun_awt_X11_OwnershipListener_h_
#define _sun_awt_X11_OwnershipListener_h_
//$ interface sun.awt.X11.OwnershipListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class OwnershipListener : public ::java::lang::Object {
	$interface(OwnershipListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void ownershipChanged(bool isOwner) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_OwnershipListener_h_