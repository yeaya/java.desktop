#include <sun/awt/X11/XEmbedChildProxyPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Runnable.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbedChildProxy.h>
#include <sun/awt/X11/XEmbedChildProxyPeer$1.h>
#include <sun/awt/X11/XEmbeddingContainer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef COMPONENT_RESIZED
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED
#undef XA_WM_NORMAL_HINTS

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AppContext = ::sun::awt::AppContext;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAtom = ::sun::awt::X11::XAtom;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbedChildProxy = ::sun::awt::X11::XEmbedChildProxy;
using $XEmbedChildProxyPeer$1 = ::sun::awt::X11::XEmbedChildProxyPeer$1;
using $XEmbeddingContainer = ::sun::awt::X11::XEmbeddingContainer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedChildProxyPeer_FieldInfo_[] = {
	{"container", "Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0, $field(XEmbedChildProxyPeer, container)},
	{"proxy", "Lsun/awt/X11/XEmbedChildProxy;", nullptr, 0, $field(XEmbedChildProxyPeer, proxy)},
	{"handle", "J", nullptr, 0, $field(XEmbedChildProxyPeer, handle)},
	{}
};

$MethodInfo _XEmbedChildProxyPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XEmbedChildProxy;)V", nullptr, 0, $method(static_cast<void(XEmbedChildProxyPeer::*)($XEmbedChildProxy*)>(&XEmbedChildProxyPeer::init$))},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"childResized", "()V", nullptr, 0},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"destroyBuffers", "()V", nullptr, $PUBLIC},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC},
	{"getTopLevel", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, 0},
	{"handleConfigureNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, 0},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, 0},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"initDispatching", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isObscured", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestXEmbedFocus", "()V", nullptr, 0},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsOperation", "(I)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"simulateMotifRequestFocus", "(Ljava/awt/Component;ZZJ)Z", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XEmbedChildProxyPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedChildProxyPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedChildProxyPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbedChildProxyPeer",
	"java.lang.Object",
	"java.awt.peer.ComponentPeer,sun.awt.X11.XEventDispatcher",
	_XEmbedChildProxyPeer_FieldInfo_,
	_XEmbedChildProxyPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedChildProxyPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedChildProxyPeer$1"
};

$Object* allocate$XEmbedChildProxyPeer($Class* clazz) {
	return $of($alloc(XEmbedChildProxyPeer));
}

int32_t XEmbedChildProxyPeer::hashCode() {
	 return this->$ComponentPeer::hashCode();
}

bool XEmbedChildProxyPeer::equals(Object$* arg0) {
	 return this->$ComponentPeer::equals(arg0);
}

$Object* XEmbedChildProxyPeer::clone() {
	 return this->$ComponentPeer::clone();
}

$String* XEmbedChildProxyPeer::toString() {
	 return this->$ComponentPeer::toString();
}

void XEmbedChildProxyPeer::finalize() {
	this->$ComponentPeer::finalize();
}

void XEmbedChildProxyPeer::init$($XEmbedChildProxy* proxy) {
	$set(this, container, $nc(proxy)->getEmbeddingContainer());
	this->handle = proxy->getHandle();
	$set(this, proxy, proxy);
	initDispatching();
}

void XEmbedChildProxyPeer::initDispatching() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::addEventDispatcher(this->handle, this);
			$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->handle, $XConstants::StructureNotifyMask | $XConstants::PropertyChangeMask);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc(this->container)->notifyChildEmbedded(this->handle);
}

bool XEmbedChildProxyPeer::isObscured() {
	return false;
}

bool XEmbedChildProxyPeer::canDetermineObscurity() {
	return false;
}

void XEmbedChildProxyPeer::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	if (!b) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$XlibWrapper::XUnmapWindow($XToolkit::getDisplay(), this->handle);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$2, nullptr);
			try {
				$XlibWrapper::XMapWindow($XToolkit::getDisplay(), this->handle);
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
}

void XEmbedChildProxyPeer::setEnabled(bool b) {
}

void XEmbedChildProxyPeer::paint($Graphics* g) {
}

void XEmbedChildProxyPeer::print($Graphics* g) {
}

void XEmbedChildProxyPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XMoveResizeWindow($XToolkit::getDisplay(), this->handle, x, y, width, height);
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

void XEmbedChildProxyPeer::handleEvent($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(e)->getID()) {
	case $FocusEvent::FOCUS_GAINED:
		{
			$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusOwner(this->proxy);
			$nc(this->container)->focusGained(this->handle);
			break;
		}
	case $FocusEvent::FOCUS_LOST:
		{
			$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusOwner(nullptr);
			$nc(this->container)->focusLost(this->handle);
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{
			if (!$nc(($cast($InputEvent, e)))->isConsumed()) {
				$nc(this->container)->forwardKeyEvent(this->handle, $cast($KeyEvent, e));
			}
			break;
		}
	}
}

void XEmbedChildProxyPeer::coalescePaintEvent($PaintEvent* e) {
}

$Point* XEmbedChildProxyPeer::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$var($XWindowAttributes, attr, $new($XWindowAttributes));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Point, var$2, nullptr);
		bool return$1 = false;
		try {
			$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), this->handle, attr->pData);
			int32_t var$3 = attr->get_x();
			$assign(var$2, $new($Point, var$3, attr->get_y()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
			attr->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Dimension* XEmbedChildProxyPeer::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	int64_t p_hints = $XlibWrapper::XAllocSizeHints();
	{
		$var($Throwable, var$0, nullptr);
		$var($Dimension, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($XSizeHints, hints, $new($XSizeHints, p_hints));
			$XlibWrapper::XGetWMNormalHints($XToolkit::getDisplay(), this->handle, p_hints, $XlibWrapper::larg1);
			int32_t var$3 = hints->get_width();
			$var($Dimension, res, $new($Dimension, var$3, hints->get_height()));
			$assign(var$2, res);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XlibWrapper::XFree(p_hints);
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Dimension* XEmbedChildProxyPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	int64_t p_hints = $XlibWrapper::XAllocSizeHints();
	{
		$var($Throwable, var$0, nullptr);
		$var($Dimension, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($XSizeHints, hints, $new($XSizeHints, p_hints));
			$XlibWrapper::XGetWMNormalHints($XToolkit::getDisplay(), this->handle, p_hints, $XlibWrapper::larg1);
			int32_t var$3 = hints->get_min_width();
			$var($Dimension, res, $new($Dimension, var$3, hints->get_min_height()));
			$assign(var$2, res);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XlibWrapper::XFree(p_hints);
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ColorModel* XEmbedChildProxyPeer::getColorModel() {
	return nullptr;
}

$Toolkit* XEmbedChildProxyPeer::getToolkit() {
	return $Toolkit::getDefaultToolkit();
}

$Graphics* XEmbedChildProxyPeer::getGraphics() {
	return nullptr;
}

$FontMetrics* XEmbedChildProxyPeer::getFontMetrics($Font* font) {
	return nullptr;
}

void XEmbedChildProxyPeer::dispose() {
	$nc(this->container)->detachChild(this->handle);
}

void XEmbedChildProxyPeer::setForeground($Color* c) {
}

void XEmbedChildProxyPeer::setBackground($Color* c) {
}

void XEmbedChildProxyPeer::setFont($Font* f) {
}

void XEmbedChildProxyPeer::updateCursorImmediately() {
}

void XEmbedChildProxyPeer::postEvent($AWTEvent* event) {
	$XToolkit::postEvent($($XToolkit::targetToAppContext(this->proxy)), event);
}

bool XEmbedChildProxyPeer::simulateMotifRequestFocus($Component* lightweightChild$renamed, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {
	$useLocalCurrentObjectStackCache();
	$var($Component, lightweightChild, lightweightChild$renamed);
	if (lightweightChild == nullptr) {
		$assign(lightweightChild, static_cast<$Component*>(this->proxy));
	}
	$var($Component, currentOwner, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusOwner());
	if (currentOwner != nullptr && !currentOwner->isDisplayable()) {
		$assign(currentOwner, nullptr);
	}
	$var($FocusEvent, fg, $new($FocusEvent, lightweightChild, $FocusEvent::FOCUS_GAINED, false, currentOwner));
	$var($FocusEvent, fl, nullptr);
	if (currentOwner != nullptr) {
		$assign(fl, $new($FocusEvent, currentOwner, $FocusEvent::FOCUS_LOST, false, lightweightChild));
	}
	if (fl != nullptr) {
		postEvent($($XComponentPeer::wrapInSequenced(fl)));
	}
	postEvent($($XComponentPeer::wrapInSequenced(fg)));
	return true;
}

bool XEmbedChildProxyPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	int32_t result = $XKeyboardFocusManagerPeer::shouldNativelyFocusHeavyweight(this->proxy, lightweightChild, temporary, false, time, cause);
	{
		$var($Container, parent, nullptr)
		switch (result) {
		case $XKeyboardFocusManagerPeer::SNFH_FAILURE:
			{
				return false;
			}
		case $XKeyboardFocusManagerPeer::SNFH_SUCCESS_PROCEED:
			{
				$assign(parent, $nc(this->proxy)->getParent());
				while (parent != nullptr && !($instanceOf($Window, parent))) {
					$assign(parent, parent->getParent());
				}
				if (parent != nullptr) {
					$var($Window, parentWindow, $cast($Window, parent));
					bool var$0 = !parentWindow->isFocused();
					if (var$0 && $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow() == parentWindow) {
						return true;
					}
				}
				return simulateMotifRequestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time);
			}
		case $XKeyboardFocusManagerPeer::SNFH_SUCCESS_HANDLED:
			{
				return true;
			}
		}
	}
	return false;
}

bool XEmbedChildProxyPeer::isFocusable() {
	return true;
}

$Image* XEmbedChildProxyPeer::createImage(int32_t width, int32_t height) {
	return nullptr;
}

$VolatileImage* XEmbedChildProxyPeer::createVolatileImage(int32_t width, int32_t height) {
	return nullptr;
}

$GraphicsConfiguration* XEmbedChildProxyPeer::getGraphicsConfiguration() {
	return nullptr;
}

bool XEmbedChildProxyPeer::handlesWheelScrolling() {
	return true;
}

void XEmbedChildProxyPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
}

$Image* XEmbedChildProxyPeer::getBackBuffer() {
	return nullptr;
}

void XEmbedChildProxyPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
}

void XEmbedChildProxyPeer::destroyBuffers() {
}

void XEmbedChildProxyPeer::layout() {
}

$Window* XEmbedChildProxyPeer::getTopLevel($Component* comp$renamed) {
	$var($Component, comp, comp$renamed);
	while (comp != nullptr && !($instanceOf($Window, comp))) {
		$assign(comp, comp->getParent());
	}
	return $cast($Window, comp);
}

void XEmbedChildProxyPeer::childResized() {
	$useLocalCurrentObjectStackCache();
	$var($AppContext, var$0, $XToolkit::targetToAppContext(this->proxy));
	$XToolkit::postEvent(var$0, $$new($ComponentEvent, this->proxy, $ComponentEvent::COMPONENT_RESIZED));
	$nc(this->container)->childResized(this->proxy);
}

void XEmbedChildProxyPeer::handlePropertyNotify($XEvent* xev) {
	$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
	if ($nc(ev)->get_atom() == $XAtom::XA_WM_NORMAL_HINTS) {
		childResized();
	}
}

void XEmbedChildProxyPeer::handleConfigureNotify($XEvent* xev) {
	childResized();
}

void XEmbedChildProxyPeer::dispatchEvent($XEvent* xev) {
	int32_t type = $nc(xev)->get_type();
	switch (type) {
	case $XConstants::PropertyNotify:
		{
			handlePropertyNotify(xev);
			break;
		}
	case $XConstants::ConfigureNotify:
		{
			handleConfigureNotify(xev);
			break;
		}
	}
}

void XEmbedChildProxyPeer::requestXEmbedFocus() {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->proxy, $$new($XEmbedChildProxyPeer$1, this)));
}

void XEmbedChildProxyPeer::reparent($ContainerPeer* newNativeParent) {
}

bool XEmbedChildProxyPeer::isReparentSupported() {
	return false;
}

$Rectangle* XEmbedChildProxyPeer::getBounds() {
	$useLocalCurrentObjectStackCache();
	$var($XWindowAttributes, attrs, $new($XWindowAttributes));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), this->handle, attrs->pData);
			int32_t var$3 = attrs->get_x();
			int32_t var$4 = attrs->get_y();
			int32_t var$5 = attrs->get_width();
			$assign(var$2, $new($Rectangle, var$3, var$4, var$5, attrs->get_height()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			$XToolkit::awtUnlock();
			attrs->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XEmbedChildProxyPeer::setBoundsOperation(int32_t operation) {
}

void XEmbedChildProxyPeer::applyShape($Region* shape) {
}

void XEmbedChildProxyPeer::setZOrder($ComponentPeer* above) {
}

bool XEmbedChildProxyPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

XEmbedChildProxyPeer::XEmbedChildProxyPeer() {
}

$Class* XEmbedChildProxyPeer::load$($String* name, bool initialize) {
	$loadClass(XEmbedChildProxyPeer, name, initialize, &_XEmbedChildProxyPeer_ClassInfo_, allocate$XEmbedChildProxyPeer);
	return class$;
}

$Class* XEmbedChildProxyPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun