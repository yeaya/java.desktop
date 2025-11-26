#include <sun/awt/X11/XTrayIconPeer$1.h>

#include <sun/awt/X11/XEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XTrayIconPeer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$1::*)()>(&XTrayIconPeer$1::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _XTrayIconPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$1",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	nullptr,
	_XTrayIconPeer$1_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$1_EnclosingMethodInfo_,
	_XTrayIconPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$1($Class* clazz) {
	return $of($alloc(XTrayIconPeer$1));
}

void XTrayIconPeer$1::init$() {
}

void XTrayIconPeer$1::dispatchEvent($XEvent* ev) {
}

XTrayIconPeer$1::XTrayIconPeer$1() {
}

$Class* XTrayIconPeer$1::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$1, name, initialize, &_XTrayIconPeer$1_ClassInfo_, allocate$XTrayIconPeer$1);
	return class$;
}

$Class* XTrayIconPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun