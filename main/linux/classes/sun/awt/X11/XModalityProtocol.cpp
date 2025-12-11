#include <sun/awt/X11/XModalityProtocol.h>

#include <sun/awt/X11/XDialogPeer.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XModalityProtocol_MethodInfo_[] = {
	{"isBlocked", "(Lsun/awt/X11/XDialogPeer;Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setModal", "(Lsun/awt/X11/XDialogPeer;Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XModalityProtocol_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XModalityProtocol",
	nullptr,
	nullptr,
	nullptr,
	_XModalityProtocol_MethodInfo_
};

$Object* allocate$XModalityProtocol($Class* clazz) {
	return $of($alloc(XModalityProtocol));
}

$Class* XModalityProtocol::load$($String* name, bool initialize) {
	$loadClass(XModalityProtocol, name, initialize, &_XModalityProtocol_ClassInfo_, allocate$XModalityProtocol);
	return class$;
}

$Class* XModalityProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun