#include <sun/awt/X11/XEmbeddingContainer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/util/HashMap.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbedChildProxy.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef XEMBED_EMBEDDED_NOTIFY
#undef XEMBED_FOCUS_CURRENT
#undef XEMBED_FOCUS_IN
#undef XEMBED_FOCUS_OUT
#undef XEMBED_REQUEST_FOCUS
#undef XEMBED_VERSION

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbedChildProxy = ::sun::awt::X11::XEmbedChildProxy;
using $XEmbedChildProxyPeer = ::sun::awt::X11::XEmbedChildProxyPeer;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbeddingContainer_FieldInfo_[] = {
	{"children", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Ljava/awt/peer/ComponentPeer;>;", 0, $field(XEmbeddingContainer, children)},
	{"embedder", "Lsun/awt/X11/XWindow;", nullptr, 0, $field(XEmbeddingContainer, embedder)},
	{}
};

$MethodInfo _XEmbeddingContainer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XEmbeddingContainer::*)()>(&XEmbeddingContainer::init$))},
	{"add", "(J)V", nullptr, 0},
	{"checkXEmbed", "(J)Z", nullptr, 0},
	{"childResized", "(Ljava/awt/Component;)V", nullptr, 0},
	{"createChildProxy", "(J)Ljava/awt/Component;", nullptr, 0},
	{"deinstall", "()V", nullptr, 0},
	{"detachChild", "(J)V", nullptr, 0},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(J)V", nullptr, 0},
	{"focusLost", "(J)V", nullptr, 0},
	{"forwardKeyEvent", "(JLjava/awt/event/KeyEvent;)V", nullptr, 0},
	{"getChild", "(J)Lsun/awt/X11/XEmbedChildProxyPeer;", nullptr, 0},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"install", "(Lsun/awt/X11/XWindow;)V", nullptr, 0},
	{"notifyChildEmbedded", "(J)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XEmbeddingContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbeddingContainer",
	"sun.awt.X11.XEmbedHelper",
	"sun.awt.X11.XEventDispatcher",
	_XEmbeddingContainer_FieldInfo_,
	_XEmbeddingContainer_MethodInfo_
};

$Object* allocate$XEmbeddingContainer($Class* clazz) {
	return $of($alloc(XEmbeddingContainer));
}

int32_t XEmbeddingContainer::hashCode() {
	 return this->$XEmbedHelper::hashCode();
}

bool XEmbeddingContainer::equals(Object$* arg0) {
	 return this->$XEmbedHelper::equals(arg0);
}

$Object* XEmbeddingContainer::clone() {
	 return this->$XEmbedHelper::clone();
}

$String* XEmbeddingContainer::toString() {
	 return this->$XEmbedHelper::toString();
}

void XEmbeddingContainer::finalize() {
	this->$XEmbedHelper::finalize();
}

void XEmbeddingContainer::init$() {
	$XEmbedHelper::init$();
	$set(this, children, $new($HashMap));
}

void XEmbeddingContainer::install($XWindow* embedder) {
	$set(this, embedder, embedder);
	$XToolkit::addEventDispatcher($nc(embedder)->getWindow(), this);
}

void XEmbeddingContainer::deinstall() {
	$XToolkit::removeEventDispatcher($nc(this->embedder)->getWindow(), this);
}

void XEmbeddingContainer::add(int64_t child) {
	$useLocalCurrentObjectStackCache();
	if (checkXEmbed(child)) {
		$var($Component, proxy, createChildProxy(child));
		$nc(($cast($Container, $($nc(this->embedder)->getTarget()))))->add("Center"_s, proxy);
		$var($XEmbeddedFramePeer, peer, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(proxy)));
		if (peer != nullptr) {
			$nc(this->children)->put($($Long::valueOf(child)), peer);
		}
	}
}

$Component* XEmbeddingContainer::createChildProxy(int64_t child) {
	return $new($XEmbedChildProxy, this, child);
}

void XEmbeddingContainer::notifyChildEmbedded(int64_t child) {
	sendMessage(child, $XEmbedHelper::XEMBED_EMBEDDED_NOTIFY, $nc(this->embedder)->getWindow(), $XEmbedHelper::XEMBED_VERSION, 0);
}

void XEmbeddingContainer::childResized($Component* child) {
}

bool XEmbeddingContainer::checkXEmbed(int64_t child) {
	$init($XEmbedHelper);
	int64_t data = $nc($XEmbedHelper::unsafe)->allocateMemory(8);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if ($nc($XEmbedHelper::XEmbedInfo)->getAtomData(child, data, 2)) {
				int32_t protocol = $nc($XEmbedHelper::unsafe)->getInt(data);
				int32_t flags = $nc($XEmbedHelper::unsafe)->getInt(data);
				var$2 = true;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($XEmbedHelper::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return false;
}

void XEmbeddingContainer::detachChild(int64_t child) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XUnmapWindow($XToolkit::getDisplay(), child);
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = child;
			$XlibWrapper::XReparentWindow(var$1, var$2, $XToolkit::getDefaultRootWindow(), 0, 0);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XEmbeddingContainer::focusGained(int64_t child) {
	sendMessage(child, $XEmbedHelper::XEMBED_FOCUS_IN, $XEmbedHelper::XEMBED_FOCUS_CURRENT, 0, 0);
}

void XEmbeddingContainer::focusLost(int64_t child) {
	sendMessage(child, $XEmbedHelper::XEMBED_FOCUS_OUT);
}

$XEmbedChildProxyPeer* XEmbeddingContainer::getChild(int64_t child) {
	return $cast($XEmbedChildProxyPeer, $nc(this->children)->get($($Long::valueOf(child))));
}

void XEmbeddingContainer::handleClientMessage($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, msg, $nc(xev)->get_xclient());
	int64_t var$0 = $nc(msg)->get_message_type();
	$init($XEmbedHelper);
	if (var$0 == $nc($XEmbedHelper::XEmbed)->getAtom()) {
		{
			int64_t child = 0;
			switch ((int32_t)msg->get_data(1)) {
			case $XEmbedHelper::XEMBED_REQUEST_FOCUS:
				{
					child = msg->get_data(2);
					$nc($(getChild(child)))->requestXEmbedFocus();
					break;
				}
			}
		}
	}
}

void XEmbeddingContainer::dispatchEvent($XEvent* xev) {
	switch ($nc(xev)->get_type()) {
	case $XConstants::ClientMessage:
		{
			handleClientMessage(xev);
			break;
		}
	}
}

void XEmbeddingContainer::forwardKeyEvent(int64_t child, $KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bdata, $nc($($AWTAccessor::getAWTEventAccessor()))->getBData(e));
	int64_t data = $Native::toData(bdata);
	if (data == 0) {
		return;
	}
	$var($XKeyEvent, ke, $new($XKeyEvent, data));
	ke->set_window(child);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSendEvent($XToolkit::getDisplay(), child, false, $XConstants::NoEventMask, data);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($XlibWrapper);
	$nc($XlibWrapper::unsafe)->freeMemory(data);
}

XEmbeddingContainer::XEmbeddingContainer() {
}

$Class* XEmbeddingContainer::load$($String* name, bool initialize) {
	$loadClass(XEmbeddingContainer, name, initialize, &_XEmbeddingContainer_ClassInfo_, allocate$XEmbeddingContainer);
	return class$;
}

$Class* XEmbeddingContainer::class$ = nullptr;

		} // X11
	} // awt
} // sun