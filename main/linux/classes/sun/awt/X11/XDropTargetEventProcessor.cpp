#include <sun/awt/X11/XDropTargetEventProcessor.h>

#include <java/util/Iterator.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <jcpp.h>

#undef UNKNOWN_MESSAGE
#undef XA_MOTIF_DRAG_RECEIVER_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetEventProcessor_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/X11/XDropTargetEventProcessor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetEventProcessor, theInstance)},
	{"active", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XDropTargetEventProcessor, active)},
	{"protocol", "Lsun/awt/X11/XDropTargetProtocol;", nullptr, $PRIVATE, $field(XDropTargetEventProcessor, protocol)},
	{}
};

$MethodInfo _XDropTargetEventProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetEventProcessor::*)()>(&XDropTargetEventProcessor::init$))},
	{"activate", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XDropTargetEventProcessor::activate))},
	{"doProcessEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDropTargetEventProcessor::*)($XEvent*)>(&XDropTargetEventProcessor::doProcessEvent))},
	{"processEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XEvent*)>(&XDropTargetEventProcessor::processEvent))},
	{"reset", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XDropTargetEventProcessor::reset))},
	{}
};

$ClassInfo _XDropTargetEventProcessor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetEventProcessor",
	"java.lang.Object",
	nullptr,
	_XDropTargetEventProcessor_FieldInfo_,
	_XDropTargetEventProcessor_MethodInfo_
};

$Object* allocate$XDropTargetEventProcessor($Class* clazz) {
	return $of($alloc(XDropTargetEventProcessor));
}

XDropTargetEventProcessor* XDropTargetEventProcessor::theInstance = nullptr;
bool XDropTargetEventProcessor::active = false;

void XDropTargetEventProcessor::init$() {
	$set(this, protocol, nullptr);
}

bool XDropTargetEventProcessor::doProcessEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(ev)->get_type() == $XConstants::DestroyNotify && this->protocol != nullptr;
	if (var$0) {
		int64_t var$1 = $nc($(ev->get_xany()))->get_window();
		var$0 = var$1 == $nc(this->protocol)->getSourceWindow();
	}
	if (var$0) {
		$nc(this->protocol)->cleanup();
		$set(this, protocol, nullptr);
		return false;
	}
	if ($nc(ev)->get_type() == $XConstants::PropertyNotify) {
		$var($XPropertyEvent, xproperty, ev->get_xproperty());
		int64_t var$2 = $nc(xproperty)->get_atom();
		$init($MotifDnDConstants);
		if (var$2 == $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom()) {
			$nc($($XDropTargetRegistry::getRegistry()))->updateEmbedderDropSite(xproperty->get_window());
		}
	}
	if ($nc(ev)->get_type() != $XConstants::ClientMessage) {
		return false;
	}
	bool processed = false;
	$var($XClientMessageEvent, xclient, $nc(ev)->get_xclient());
	$var($XDropTargetProtocol, curProtocol, this->protocol);
	if (this->protocol != nullptr) {
		if ($nc(this->protocol)->getMessageType(xclient) != $XDropTargetProtocol::UNKNOWN_MESSAGE) {
			processed = $nc(this->protocol)->processClientMessage(xclient);
		} else {
			$set(this, protocol, nullptr);
		}
	}
	if (this->protocol == nullptr) {
		$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		while ($nc(dropTargetProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
			if (dropTargetProtocol == curProtocol) {
				continue;
			}
			if ($nc(dropTargetProtocol)->getMessageType(xclient) == $XDropTargetProtocol::UNKNOWN_MESSAGE) {
				continue;
			}
			$set(this, protocol, dropTargetProtocol);
			processed = $nc(this->protocol)->processClientMessage(xclient);
			break;
		}
	}
	return processed;
}

void XDropTargetEventProcessor::reset() {
	$init(XDropTargetEventProcessor);
	$set($nc(XDropTargetEventProcessor::theInstance), protocol, nullptr);
}

void XDropTargetEventProcessor::activate() {
	$init(XDropTargetEventProcessor);
	XDropTargetEventProcessor::active = true;
}

bool XDropTargetEventProcessor::processEvent($XEvent* ev) {
	$init(XDropTargetEventProcessor);
	return XDropTargetEventProcessor::active ? $nc(XDropTargetEventProcessor::theInstance)->doProcessEvent(ev) : false;
}

void clinit$XDropTargetEventProcessor($Class* class$) {
	$assignStatic(XDropTargetEventProcessor::theInstance, $new(XDropTargetEventProcessor));
	XDropTargetEventProcessor::active = false;
}

XDropTargetEventProcessor::XDropTargetEventProcessor() {
}

$Class* XDropTargetEventProcessor::load$($String* name, bool initialize) {
	$loadClass(XDropTargetEventProcessor, name, initialize, &_XDropTargetEventProcessor_ClassInfo_, clinit$XDropTargetEventProcessor, allocate$XDropTargetEventProcessor);
	return class$;
}

$Class* XDropTargetEventProcessor::class$ = nullptr;

		} // X11
	} // awt
} // sun