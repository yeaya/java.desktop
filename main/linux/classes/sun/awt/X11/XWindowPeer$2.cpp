#include <sun/awt/X11/XWindowPeer$2.h>

#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWindowPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XWindowPeer$2, this$0)},
	{}
};

$MethodInfo _XWindowPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0, $method(static_cast<void(XWindowPeer$2::*)($XWindowPeer*)>(&XWindowPeer$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWindowPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWindowPeer",
	"removeStartupNotification",
	"()V"
};

$InnerClassInfo _XWindowPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindowPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindowPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindowPeer$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XWindowPeer$2_FieldInfo_,
	_XWindowPeer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_XWindowPeer$2_EnclosingMethodInfo_,
	_XWindowPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindowPeer"
};

$Object* allocate$XWindowPeer$2($Class* clazz) {
	return $of($alloc(XWindowPeer$2));
}

void XWindowPeer$2::init$($XWindowPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XWindowPeer$2::run() {
	return $of($XToolkit::getEnv("DESKTOP_STARTUP_ID"_s));
}

XWindowPeer$2::XWindowPeer$2() {
}

$Class* XWindowPeer$2::load$($String* name, bool initialize) {
	$loadClass(XWindowPeer$2, name, initialize, &_XWindowPeer$2_ClassInfo_, allocate$XWindowPeer$2);
	return class$;
}

$Class* XWindowPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun