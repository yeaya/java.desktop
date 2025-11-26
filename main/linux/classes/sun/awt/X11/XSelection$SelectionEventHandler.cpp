#include <sun/awt/X11/XSelection$SelectionEventHandler.h>

#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XSelectionClearEvent.h>
#include <sun/awt/X11/XSelectionEvent.h>
#include <sun/awt/X11/XSelectionRequestEvent.h>
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
using $XSelection = ::sun::awt::X11::XSelection;
using $XSelectionClearEvent = ::sun::awt::X11::XSelectionClearEvent;
using $XSelectionEvent = ::sun::awt::X11::XSelectionEvent;
using $XSelectionRequestEvent = ::sun::awt::X11::XSelectionRequestEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XSelection$SelectionEventHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XSelection$SelectionEventHandler::*)()>(&XSelection$SelectionEventHandler::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSelection$SelectionEventHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSelection$SelectionEventHandler", "sun.awt.X11.XSelection", "SelectionEventHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSelection$SelectionEventHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XSelection$SelectionEventHandler",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	nullptr,
	_XSelection$SelectionEventHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XSelection$SelectionEventHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XSelection"
};

$Object* allocate$XSelection$SelectionEventHandler($Class* clazz) {
	return $of($alloc(XSelection$SelectionEventHandler));
}

void XSelection$SelectionEventHandler::init$() {
}

void XSelection$SelectionEventHandler::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(ev)->get_type()) {
	case $XConstants::SelectionNotify:
		{
			{
				$XToolkit::awtLock();
				{
					$var($Throwable, var$0, nullptr);
					try {
						$var($XSelectionEvent, xse, ev->get_xselection());
						$init($XSelection);
						if ($XSelection::propertyGetter != nullptr && $nc(xse)->get_time() == $XSelection::lastRequestServerTime) {
							int64_t var$1 = xse->get_property();
							if (var$1 == $nc($XSelection::selectionPropertyAtom)->getAtom()) {
								$nc($XSelection::propertyGetter)->execute();
								$assignStatic($XSelection::propertyGetter, nullptr);
							} else if (xse->get_property() == 0) {
								$nc($XSelection::propertyGetter)->dispose();
								$assignStatic($XSelection::propertyGetter, nullptr);
							}
						}
						$XToolkit::awtLockNotifyAll();
					} catch ($Throwable& var$2) {
						$assign(var$0, var$2);
					} /*finally*/ {
						$XToolkit::awtUnlock();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				break;
			}
		}
	case $XConstants::SelectionRequest:
		{
			{
				$var($XSelectionRequestEvent, xsre, ev->get_xselectionrequest());
				int64_t atom = $nc(xsre)->get_selection();
				$var($XSelection, selection, $XSelection::getSelection($($XAtom::get(atom))));
				if (selection != nullptr) {
					selection->handleSelectionRequest(xsre);
				}
				break;
			}
		}
	case $XConstants::SelectionClear:
		{
			{
				$var($XSelectionClearEvent, xsce, ev->get_xselectionclear());
				int64_t atom = $nc(xsce)->get_selection();
				$var($XSelection, selection, $XSelection::getSelection($($XAtom::get(atom))));
				if (selection != nullptr) {
					selection->lostOwnership();
				}
				$XToolkit::awtLock();
				{
					$var($Throwable, var$3, nullptr);
					try {
						$XToolkit::awtLockNotifyAll();
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						$XToolkit::awtUnlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
				break;
			}
		}
	}
}

XSelection$SelectionEventHandler::XSelection$SelectionEventHandler() {
}

$Class* XSelection$SelectionEventHandler::load$($String* name, bool initialize) {
	$loadClass(XSelection$SelectionEventHandler, name, initialize, &_XSelection$SelectionEventHandler_ClassInfo_, allocate$XSelection$SelectionEventHandler);
	return class$;
}

$Class* XSelection$SelectionEventHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun