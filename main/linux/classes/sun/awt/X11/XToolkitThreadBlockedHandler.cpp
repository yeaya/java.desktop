#include <sun/awt/X11/XToolkitThreadBlockedHandler.h>

#include <java/awt/Toolkit.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <jcpp.h>

#undef SECONDARY_LOOP

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XToolkitThreadBlockedHandler_FieldInfo_[] = {
	{"priveleged_lock", "Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkitThreadBlockedHandler, priveleged_lock)},
	{"tk", "Lsun/awt/X11/XToolkit;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkitThreadBlockedHandler, tk)},
	{}
};

$MethodInfo _XToolkitThreadBlockedHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XToolkitThreadBlockedHandler::*)()>(&XToolkitThreadBlockedHandler::init$))},
	{"enter", "()V", nullptr, $PUBLIC},
	{"exit", "()V", nullptr, $PUBLIC},
	{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $STATIC, $method(static_cast<$ToolkitThreadBlockedHandler*(*)()>(&XToolkitThreadBlockedHandler::getToolkitThreadBlockedHandler))},
	{"lock", "()V", nullptr, $PUBLIC},
	{"unlock", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XToolkitThreadBlockedHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XToolkitThreadBlockedHandler",
	"java.lang.Object",
	"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
	_XToolkitThreadBlockedHandler_FieldInfo_,
	_XToolkitThreadBlockedHandler_MethodInfo_
};

$Object* allocate$XToolkitThreadBlockedHandler($Class* clazz) {
	return $of($alloc(XToolkitThreadBlockedHandler));
}

$ToolkitThreadBlockedHandler* XToolkitThreadBlockedHandler::priveleged_lock = nullptr;
$XToolkit* XToolkitThreadBlockedHandler::tk = nullptr;

void XToolkitThreadBlockedHandler::init$() {
}

$ToolkitThreadBlockedHandler* XToolkitThreadBlockedHandler::getToolkitThreadBlockedHandler() {
	$init(XToolkitThreadBlockedHandler);
	return XToolkitThreadBlockedHandler::priveleged_lock;
}

void XToolkitThreadBlockedHandler::lock() {
	$XToolkit::awtLock();
}

void XToolkitThreadBlockedHandler::unlock() {
	$XToolkit::awtUnlock();
}

void XToolkitThreadBlockedHandler::enter() {
	$nc(XToolkitThreadBlockedHandler::tk)->run($XToolkit::SECONDARY_LOOP);
}

void XToolkitThreadBlockedHandler::exit() {
	$XlibWrapper::ExitSecondaryLoop();
}

void clinit$XToolkitThreadBlockedHandler($Class* class$) {
	{
		$assignStatic(XToolkitThreadBlockedHandler::priveleged_lock, $new(XToolkitThreadBlockedHandler));
	}
	$assignStatic(XToolkitThreadBlockedHandler::tk, $cast($XToolkit, $Toolkit::getDefaultToolkit()));
}

XToolkitThreadBlockedHandler::XToolkitThreadBlockedHandler() {
}

$Class* XToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$loadClass(XToolkitThreadBlockedHandler, name, initialize, &_XToolkitThreadBlockedHandler_ClassInfo_, clinit$XToolkitThreadBlockedHandler, allocate$XToolkitThreadBlockedHandler);
	return class$;
}

$Class* XToolkitThreadBlockedHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun