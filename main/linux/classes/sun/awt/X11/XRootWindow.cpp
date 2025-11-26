#include <sun/awt/X11/XRootWindow.h>

#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XRootWindow$LazyHolder.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef DELAYED
#undef EVENT_MASK
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XRootWindow$LazyHolder = ::sun::awt::X11::XRootWindow$LazyHolder;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XRootWindow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XRootWindow::*)()>(&XRootWindow::init$))},
	{"getInstance", "()Lsun/awt/X11/XRootWindow;", nullptr, $STATIC, $method(static_cast<XRootWindow*(*)()>(&XRootWindow::getInstance))},
	{"getWMClass", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getXRootWindow", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&XRootWindow::getXRootWindow))},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XRootWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XRootWindow$LazyHolder", "sun.awt.X11.XRootWindow", "LazyHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XRootWindow_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XRootWindow",
	"sun.awt.X11.XBaseWindow",
	nullptr,
	nullptr,
	_XRootWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XRootWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XRootWindow$LazyHolder"
};

$Object* allocate$XRootWindow($Class* clazz) {
	return $of($alloc(XRootWindow));
}

XRootWindow* XRootWindow::getInstance() {
	$init(XRootWindow);
	$init($XRootWindow$LazyHolder);
	return $XRootWindow$LazyHolder::xawtRootWindow;
}

void XRootWindow::init$() {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$init($Boolean);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::DELAYED),
		$of($Boolean::TRUE),
		$of($XBaseWindow::EVENT_MASK),
		$($of($Long::valueOf($XConstants::StructureNotifyMask)))
	})));
}

void XRootWindow::postInit($XCreateWindowParams* params) {
	$XBaseWindow::postInit(params);
	setWMClass($(getWMClass()));
}

$String* XRootWindow::getWMName() {
	return $XToolkit::getAWTAppClassName();
}

$StringArray* XRootWindow::getWMClass() {
	$useLocalCurrentObjectStackCache();
	return $new($StringArray, {
		$($XToolkit::getAWTAppClassName()),
		$($XToolkit::getAWTAppClassName())
	});
}

int64_t XRootWindow::getXRootWindow() {
	$init(XRootWindow);
	return $nc($(getXAWTRootWindow()))->getWindow();
}

XRootWindow::XRootWindow() {
}

$Class* XRootWindow::load$($String* name, bool initialize) {
	$loadClass(XRootWindow, name, initialize, &_XRootWindow_ClassInfo_, allocate$XRootWindow);
	return class$;
}

$Class* XRootWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun