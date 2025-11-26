#include <sun/awt/X11/XEventDispatcher.h>

#include <sun/awt/X11/XEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XEventDispatcher_MethodInfo_[] = {
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XEventDispatcher_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XEventDispatcher",
	nullptr,
	nullptr,
	nullptr,
	_XEventDispatcher_MethodInfo_
};

$Object* allocate$XEventDispatcher($Class* clazz) {
	return $of($alloc(XEventDispatcher));
}

$Class* XEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(XEventDispatcher, name, initialize, &_XEventDispatcher_ClassInfo_, allocate$XEventDispatcher);
	return class$;
}

$Class* XEventDispatcher::class$ = nullptr;

		} // X11
	} // awt
} // sun