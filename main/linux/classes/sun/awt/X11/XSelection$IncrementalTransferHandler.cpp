#include <sun/awt/X11/XSelection$IncrementalTransferHandler.h>

#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XSelection$IncrementalTransferHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSelection$IncrementalTransferHandler::*)()>(&XSelection$IncrementalTransferHandler::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSelection$IncrementalTransferHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSelection$IncrementalTransferHandler", "sun.awt.X11.XSelection", "IncrementalTransferHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSelection$IncrementalTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XSelection$IncrementalTransferHandler",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	nullptr,
	_XSelection$IncrementalTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XSelection$IncrementalTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XSelection"
};

$Object* allocate$XSelection$IncrementalTransferHandler($Class* clazz) {
	return $of($alloc(XSelection$IncrementalTransferHandler));
}

void XSelection$IncrementalTransferHandler::init$() {
}

void XSelection$IncrementalTransferHandler::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($XPropertyEvent, xpe, nullptr)
		switch ($nc(ev)->get_type()) {
		case $XConstants::PropertyNotify:
			{
				$assign(xpe, ev->get_xproperty());
				bool var$0 = $nc(xpe)->get_state() == $XConstants::PropertyNewValue;
				if (var$0) {
					int64_t var$1 = xpe->get_atom();
					$init($XSelection);
					var$0 = var$1 == $nc($XSelection::selectionPropertyAtom)->getAtom();
				}
				if (var$0) {
					$XToolkit::awtLock();
					{
						$var($Throwable, var$2, nullptr);
						try {
							$init($XSelection);
							if ($XSelection::propertyGetter != nullptr) {
								$nc($XSelection::propertyGetter)->execute();
								$assignStatic($XSelection::propertyGetter, nullptr);
							}
							$XToolkit::awtLockNotifyAll();
						} catch ($Throwable& var$3) {
							$assign(var$2, var$3);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
				}
				break;
			}
		}
	}
}

XSelection$IncrementalTransferHandler::XSelection$IncrementalTransferHandler() {
}

$Class* XSelection$IncrementalTransferHandler::load$($String* name, bool initialize) {
	$loadClass(XSelection$IncrementalTransferHandler, name, initialize, &_XSelection$IncrementalTransferHandler_ClassInfo_, allocate$XSelection$IncrementalTransferHandler);
	return class$;
}

$Class* XSelection$IncrementalTransferHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun