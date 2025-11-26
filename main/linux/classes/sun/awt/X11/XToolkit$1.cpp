#include <sun/awt/X11/XToolkit$1.h>

#include <java/awt/GraphicsEnvironment.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
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
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XToolkit$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(XToolkit$1, this$0)},
	{}
};

$MethodInfo _XToolkit$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, 0, $method(static_cast<void(XToolkit$1::*)($XToolkit*)>(&XToolkit$1::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XToolkit$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XToolkit",
	"init",
	"()V"
};

$InnerClassInfo _XToolkit$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XToolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XToolkit$1",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XToolkit$1_FieldInfo_,
	_XToolkit$1_MethodInfo_,
	nullptr,
	&_XToolkit$1_EnclosingMethodInfo_,
	_XToolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XToolkit"
};

$Object* allocate$XToolkit$1($Class* clazz) {
	return $of($alloc(XToolkit$1));
}

void XToolkit$1::init$($XToolkit* this$0) {
	$set(this, this$0, this$0);
}

void XToolkit$1::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ev)->get_type() == $XConstants::ConfigureNotify) {
		$SunToolkit::awtUnlock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(($cast($X11GraphicsEnvironment, $($GraphicsEnvironment::getLocalGraphicsEnvironment()))))->rebuildDevices();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$SunToolkit::awtLock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

XToolkit$1::XToolkit$1() {
}

$Class* XToolkit$1::load$($String* name, bool initialize) {
	$loadClass(XToolkit$1, name, initialize, &_XToolkit$1_ClassInfo_, allocate$XToolkit$1);
	return class$;
}

$Class* XToolkit$1::class$ = nullptr;

		} // X11
	} // awt
} // sun