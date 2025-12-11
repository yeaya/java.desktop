#include <sun/awt/X11/XClipboard$SelectionNotifyHandler.h>

#include <java/util/Map.h>
#include <sun/awt/X11/XClipboard.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelectionEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XClipboard = ::sun::awt::X11::XClipboard;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelectionEvent = ::sun::awt::X11::XSelectionEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XClipboard$SelectionNotifyHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XClipboard$SelectionNotifyHandler::*)()>(&XClipboard$SelectionNotifyHandler::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XClipboard$SelectionNotifyHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XClipboard$SelectionNotifyHandler", "sun.awt.X11.XClipboard", "SelectionNotifyHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XClipboard$SelectionNotifyHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XClipboard$SelectionNotifyHandler",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	nullptr,
	_XClipboard$SelectionNotifyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XClipboard$SelectionNotifyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XClipboard"
};

$Object* allocate$XClipboard$SelectionNotifyHandler($Class* clazz) {
	return $of($alloc(XClipboard$SelectionNotifyHandler));
}

void XClipboard$SelectionNotifyHandler::init$() {
}

void XClipboard$SelectionNotifyHandler::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ev)->get_type() == $XConstants::SelectionNotify) {
		$var($XSelectionEvent, xse, ev->get_xselection());
		$var($XClipboard, clipboard, nullptr);
		$init($XClipboard);
		$synchronized($XClipboard::classLock) {
			if ($XClipboard::targetsAtom2Clipboard != nullptr && $nc($XClipboard::targetsAtom2Clipboard)->isEmpty()) {
				$XToolkit::removeEventDispatcher($nc($($XWindow::getXAWTRootWindow()))->getWindow(), this);
				return;
			}
			int64_t propertyAtom = $nc(xse)->get_property();
			$assign(clipboard, $cast($XClipboard, $nc($XClipboard::targetsAtom2Clipboard)->get($($Long::valueOf(propertyAtom)))));
		}
		if (nullptr != clipboard) {
			clipboard->checkChange(xse);
		}
	}
}

XClipboard$SelectionNotifyHandler::XClipboard$SelectionNotifyHandler() {
}

$Class* XClipboard$SelectionNotifyHandler::load$($String* name, bool initialize) {
	$loadClass(XClipboard$SelectionNotifyHandler, name, initialize, &_XClipboard$SelectionNotifyHandler_ClassInfo_, allocate$XClipboard$SelectionNotifyHandler);
	return class$;
}

$Class* XClipboard$SelectionNotifyHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun