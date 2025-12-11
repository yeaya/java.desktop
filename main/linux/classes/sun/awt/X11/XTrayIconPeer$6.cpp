#include <sun/awt/X11/XTrayIconPeer$6.h>

#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer$TrayIconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XTrayIconPeer$TrayIconCanvas = ::sun::awt::X11::XTrayIconPeer$TrayIconCanvas;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$6_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$6, this$0)},
	{}
};

$MethodInfo _XTrayIconPeer$6_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$6::*)($XTrayIconPeer*)>(&XTrayIconPeer$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$6_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	"updateImage",
	"()V"
};

$InnerClassInfo _XTrayIconPeer$6_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_XTrayIconPeer$6_FieldInfo_,
	_XTrayIconPeer$6_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$6_EnclosingMethodInfo_,
	_XTrayIconPeer$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$6($Class* clazz) {
	return $of($alloc(XTrayIconPeer$6));
}

void XTrayIconPeer$6::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$6::run() {
	$nc(this->this$0->canvas)->updateImage($($nc(this->this$0->target)->getImage()));
}

XTrayIconPeer$6::XTrayIconPeer$6() {
}

$Class* XTrayIconPeer$6::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$6, name, initialize, &_XTrayIconPeer$6_ClassInfo_, allocate$XTrayIconPeer$6);
	return class$;
}

$Class* XTrayIconPeer$6::class$ = nullptr;

		} // X11
	} // awt
} // sun