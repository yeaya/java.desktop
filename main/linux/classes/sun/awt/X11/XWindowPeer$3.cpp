#include <sun/awt/X11/XWindowPeer$3.h>

#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$3, this$0)},
	{}
};

$MethodInfo _XWindowPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0, $method(static_cast<void(XWindowPeer$3::*)($XWindowPeer*)>(&XWindowPeer$3::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWindowPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWindowPeer",
	"addRootPropertyEventDispatcher",
	"()V"
};

$InnerClassInfo _XWindowPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindowPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindowPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindowPeer$3",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XWindowPeer$3_FieldInfo_,
	_XWindowPeer$3_MethodInfo_,
	nullptr,
	&_XWindowPeer$3_EnclosingMethodInfo_,
	_XWindowPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindowPeer"
};

$Object* allocate$XWindowPeer$3($Class* clazz) {
	return $of($alloc(XWindowPeer$3));
}

void XWindowPeer$3::init$($XWindowPeer* this$0) {
	$set(this, this$0, this$0);
}

void XWindowPeer$3::dispatchEvent($XEvent* ev) {
	if ($nc(ev)->get_type() == $XConstants::PropertyNotify) {
		this->this$0->handleRootPropertyNotify(ev);
	}
}

XWindowPeer$3::XWindowPeer$3() {
}

$Class* XWindowPeer$3::load$($String* name, bool initialize) {
	$loadClass(XWindowPeer$3, name, initialize, &_XWindowPeer$3_ClassInfo_, allocate$XWindowPeer$3);
	return class$;
}

$Class* XWindowPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun