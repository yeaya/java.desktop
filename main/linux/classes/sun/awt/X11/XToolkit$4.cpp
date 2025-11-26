#include <sun/awt/X11/XToolkit$4.h>

#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XToolkit$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(XToolkit$4, this$0)},
	{}
};

$MethodInfo _XToolkit$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, 0, $method(static_cast<void(XToolkit$4::*)($XToolkit*)>(&XToolkit$4::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XToolkit$4_EnclosingMethodInfo_ = {
	"sun.awt.X11.XToolkit",
	"syncNativeQueue",
	"(J)Z"
};

$InnerClassInfo _XToolkit$4_InnerClassesInfo_[] = {
	{"sun.awt.X11.XToolkit$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XToolkit$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XToolkit$4",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XToolkit$4_FieldInfo_,
	_XToolkit$4_MethodInfo_,
	nullptr,
	&_XToolkit$4_EnclosingMethodInfo_,
	_XToolkit$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XToolkit"
};

$Object* allocate$XToolkit$4($Class* clazz) {
	return $of($alloc(XToolkit$4));
}

void XToolkit$4::init$($XToolkit* this$0) {
	$set(this, this$0, this$0);
}

void XToolkit$4::dispatchEvent($XEvent* e) {
	if ($nc(e)->get_type() == $XConstants::ConfigureNotify) {
		$init($XToolkit);
		$XToolkit::oops_updated = true;
		$SunToolkit::awtLockNotifyAll();
	}
}

XToolkit$4::XToolkit$4() {
}

$Class* XToolkit$4::load$($String* name, bool initialize) {
	$loadClass(XToolkit$4, name, initialize, &_XToolkit$4_ClassInfo_, allocate$XToolkit$4);
	return class$;
}

$Class* XToolkit$4::class$ = nullptr;

		} // X11
	} // awt
} // sun