#include <sun/awt/X11/XStateProtocol.h>

#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XStateProtocol_MethodInfo_[] = {
	{"getState", "(Lsun/awt/X11/XWindowPeer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isStateChange", "(Lsun/awt/X11/XPropertyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"supportsState", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unshadeKludge", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XStateProtocol_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XStateProtocol",
	nullptr,
	nullptr,
	nullptr,
	_XStateProtocol_MethodInfo_
};

$Object* allocate$XStateProtocol($Class* clazz) {
	return $of($alloc(XStateProtocol));
}

$Class* XStateProtocol::load$($String* name, bool initialize) {
	$loadClass(XStateProtocol, name, initialize, &_XStateProtocol_ClassInfo_, allocate$XStateProtocol);
	return class$;
}

$Class* XStateProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun