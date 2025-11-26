#include <sun/awt/X11/XRootWindow$LazyHolder.h>

#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XRootWindow$LazyHolder_FieldInfo_[] = {
	{"xawtRootWindow", "Lsun/awt/X11/XRootWindow;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XRootWindow$LazyHolder, xawtRootWindow)},
	{}
};

$MethodInfo _XRootWindow$LazyHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRootWindow$LazyHolder::*)()>(&XRootWindow$LazyHolder::init$))},
	{}
};

$InnerClassInfo _XRootWindow$LazyHolder_InnerClassesInfo_[] = {
	{"sun.awt.X11.XRootWindow$LazyHolder", "sun.awt.X11.XRootWindow", "LazyHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRootWindow$LazyHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XRootWindow$LazyHolder",
	"java.lang.Object",
	nullptr,
	_XRootWindow$LazyHolder_FieldInfo_,
	_XRootWindow$LazyHolder_MethodInfo_,
	nullptr,
	nullptr,
	_XRootWindow$LazyHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XRootWindow"
};

$Object* allocate$XRootWindow$LazyHolder($Class* clazz) {
	return $of($alloc(XRootWindow$LazyHolder));
}

$XRootWindow* XRootWindow$LazyHolder::xawtRootWindow = nullptr;

void XRootWindow$LazyHolder::init$() {
}

void clinit$XRootWindow$LazyHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assignStatic(XRootWindow$LazyHolder::xawtRootWindow, $new($XRootWindow));
				$nc(XRootWindow$LazyHolder::xawtRootWindow)->init($($nc($($nc(XRootWindow$LazyHolder::xawtRootWindow)->getDelayedParams()))->delete$("delayed"_s)));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

XRootWindow$LazyHolder::XRootWindow$LazyHolder() {
}

$Class* XRootWindow$LazyHolder::load$($String* name, bool initialize) {
	$loadClass(XRootWindow$LazyHolder, name, initialize, &_XRootWindow$LazyHolder_ClassInfo_, clinit$XRootWindow$LazyHolder, allocate$XRootWindow$LazyHolder);
	return class$;
}

$Class* XRootWindow$LazyHolder::class$ = nullptr;

		} // X11
	} // awt
} // sun