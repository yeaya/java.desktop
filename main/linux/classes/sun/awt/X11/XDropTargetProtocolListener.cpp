#include <sun/awt/X11/XDropTargetProtocolListener.h>

#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XDropTargetProtocolListener_MethodInfo_[] = {
	{"handleDropTargetNotification", "(Lsun/awt/X11/XWindow;IIII[JJI)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XDropTargetProtocolListener_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.XDropTargetProtocolListener",
	nullptr,
	nullptr,
	nullptr,
	_XDropTargetProtocolListener_MethodInfo_
};

$Object* allocate$XDropTargetProtocolListener($Class* clazz) {
	return $of($alloc(XDropTargetProtocolListener));
}

$Class* XDropTargetProtocolListener::load$($String* name, bool initialize) {
	$loadClass(XDropTargetProtocolListener, name, initialize, &_XDropTargetProtocolListener_ClassInfo_, allocate$XDropTargetProtocolListener);
	return class$;
}

$Class* XDropTargetProtocolListener::class$ = nullptr;

		} // X11
	} // awt
} // sun