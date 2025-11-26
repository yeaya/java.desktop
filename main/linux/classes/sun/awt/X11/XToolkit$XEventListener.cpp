#include <sun/awt/X11/XToolkit$XEventListener.h>

#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XToolkit$XEventListener_MethodInfo_[] = {
	{"eventProcessed", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _XToolkit$XEventListener_InnerClassesInfo_[] = {
	{"sun.awt.X11.XToolkit$XEventListener", "sun.awt.X11.XToolkit", "XEventListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XToolkit$XEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.XToolkit$XEventListener",
	nullptr,
	nullptr,
	nullptr,
	_XToolkit$XEventListener_MethodInfo_,
	nullptr,
	nullptr,
	_XToolkit$XEventListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XToolkit"
};

$Object* allocate$XToolkit$XEventListener($Class* clazz) {
	return $of($alloc(XToolkit$XEventListener));
}

$Class* XToolkit$XEventListener::load$($String* name, bool initialize) {
	$loadClass(XToolkit$XEventListener, name, initialize, &_XToolkit$XEventListener_ClassInfo_, allocate$XToolkit$XEventListener);
	return class$;
}

$Class* XToolkit$XEventListener::class$ = nullptr;

		} // X11
	} // awt
} // sun