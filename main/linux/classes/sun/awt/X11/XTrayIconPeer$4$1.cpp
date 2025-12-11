#include <sun/awt/X11/XTrayIconPeer$4$1.h>

#include <java/awt/SystemTray.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/X11/XTrayIconPeer$4.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $SystemTray = ::java::awt::SystemTray;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer$4 = ::sun::awt::X11::XTrayIconPeer$4;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$4$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/XTrayIconPeer$4;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$4$1, this$1)},
	{}
};

$MethodInfo _XTrayIconPeer$4$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer$4;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$4$1::*)($XTrayIconPeer$4*)>(&XTrayIconPeer$4$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$4$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer$4",
	"dispatchEvent",
	"(Lsun/awt/X11/XEvent;)V"
};

$InnerClassInfo _XTrayIconPeer$4$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$4$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XTrayIconPeer$4$1_FieldInfo_,
	_XTrayIconPeer$4$1_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$4$1_EnclosingMethodInfo_,
	_XTrayIconPeer$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$4$1($Class* clazz) {
	return $of($alloc(XTrayIconPeer$4$1));
}

void XTrayIconPeer$4$1::init$($XTrayIconPeer$4* this$1) {
	$set(this, this$1, this$1);
}

void XTrayIconPeer$4$1::run() {
	$nc($($SystemTray::getSystemTray()))->remove($nc(this->this$1->xtiPeer)->target);
}

XTrayIconPeer$4$1::XTrayIconPeer$4$1() {
}

$Class* XTrayIconPeer$4$1::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$4$1, name, initialize, &_XTrayIconPeer$4$1_ClassInfo_, allocate$XTrayIconPeer$4$1);
	return class$;
}

$Class* XTrayIconPeer$4$1::class$ = nullptr;

		} // X11
	} // awt
} // sun