#include <sun/awt/X11/XDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef AWT_DECOR_ALL
#undef AWT_DECOR_NONE
#undef MODELESS
#undef MWM_DECOR_ALL
#undef MWM_DECOR_MAXIMIZE
#undef MWM_DECOR_MINIMIZE
#undef MWM_FUNC_ALL
#undef MWM_FUNC_MAXIMIZE
#undef MWM_FUNC_MINIMIZE
#undef NORMAL

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDialogPeer_FieldInfo_[] = {
	{"undecorated", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(XDialogPeer, undecorated)},
	{}
};

$MethodInfo _XDialogPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, 0, $method(static_cast<void(XDialogPeer::*)($Dialog*)>(&XDialogPeer::init$))},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"getDecorations", "()I", nullptr, 0},
	{"getFunctions", "()I", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isFocusedWindowModalBlocker", "()Z", nullptr, 0},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isTargetUndecorated", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toBack", "()V", nullptr, $PUBLIC},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XDialogPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDialogPeer",
	"sun.awt.X11.XDecoratedPeer",
	"java.awt.peer.DialogPeer",
	_XDialogPeer_FieldInfo_,
	_XDialogPeer_MethodInfo_
};

$Object* allocate$XDialogPeer($Class* clazz) {
	return $of($alloc(XDialogPeer));
}

void XDialogPeer::updateMinimumSize() {
	this->$XDecoratedPeer::updateMinimumSize();
}

$Graphics* XDialogPeer::getGraphics() {
	 return this->$XDecoratedPeer::getGraphics();
}

void XDialogPeer::setTitle($String* title) {
	this->$XDecoratedPeer::setTitle(title);
}

$Insets* XDialogPeer::getInsets() {
	 return this->$XDecoratedPeer::getInsets();
}

void XDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XDecoratedPeer::setBounds(x, y, width, height, op);
}

void XDialogPeer::setResizable(bool resizable) {
	this->$XDecoratedPeer::setResizable(resizable);
}

$Point* XDialogPeer::getLocationOnScreen() {
	 return this->$XDecoratedPeer::getLocationOnScreen();
}

void XDialogPeer::dispose() {
	this->$XDecoratedPeer::dispose();
}

void XDialogPeer::updateIconImages() {
	this->$XDecoratedPeer::updateIconImages();
}

void XDialogPeer::toFront() {
	this->$XDecoratedPeer::toFront();
}

void XDialogPeer::toBack() {
	this->$XDecoratedPeer::toBack();
}

void XDialogPeer::updateAlwaysOnTopState() {
	this->$XDecoratedPeer::updateAlwaysOnTopState();
}

void XDialogPeer::repositionSecurityWarning() {
	this->$XDecoratedPeer::repositionSecurityWarning();
}

void XDialogPeer::setModalBlocked($Dialog* d, bool blocked) {
	this->$XDecoratedPeer::setModalBlocked(d, blocked);
}

void XDialogPeer::updateFocusableWindowState() {
	this->$XDecoratedPeer::updateFocusableWindowState();
}

void XDialogPeer::print($Graphics* g) {
	this->$XDecoratedPeer::print(g);
}

void XDialogPeer::setOpacity(float opacity) {
	this->$XDecoratedPeer::setOpacity(opacity);
}

void XDialogPeer::setOpaque(bool isOpaque) {
	this->$XDecoratedPeer::setOpaque(isOpaque);
}

void XDialogPeer::updateWindow() {
	this->$XDecoratedPeer::updateWindow();
}

void XDialogPeer::paint($Graphics* g) {
	this->$XDecoratedPeer::paint(g);
}

void XDialogPeer::setBackground($Color* c) {
	this->$XDecoratedPeer::setBackground(c);
}

void XDialogPeer::setForeground($Color* c) {
	this->$XDecoratedPeer::setForeground(c);
}

void XDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XDecoratedPeer::reparent(newNativeParent);
}

bool XDialogPeer::isReparentSupported() {
	 return this->$XDecoratedPeer::isReparentSupported();
}

bool XDialogPeer::isObscured() {
	 return this->$XDecoratedPeer::isObscured();
}

bool XDialogPeer::canDetermineObscurity() {
	 return this->$XDecoratedPeer::canDetermineObscurity();
}

bool XDialogPeer::isFocusable() {
	 return this->$XDecoratedPeer::isFocusable();
}

bool XDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XDecoratedPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XDialogPeer::setEnabled(bool value) {
	this->$XDecoratedPeer::setEnabled(value);
}

void XDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XDecoratedPeer::coalescePaintEvent(e);
}

void XDialogPeer::handleEvent($AWTEvent* e) {
	this->$XDecoratedPeer::handleEvent(e);
}

$Dimension* XDialogPeer::getMinimumSize() {
	 return this->$XDecoratedPeer::getMinimumSize();
}

$Dimension* XDialogPeer::getPreferredSize() {
	 return this->$XDecoratedPeer::getPreferredSize();
}

void XDialogPeer::layout() {
	this->$XDecoratedPeer::layout();
}

$FontMetrics* XDialogPeer::getFontMetrics($Font* font) {
	 return this->$XDecoratedPeer::getFontMetrics(font);
}

void XDialogPeer::setFont($Font* f) {
	this->$XDecoratedPeer::setFont(f);
}

void XDialogPeer::updateCursorImmediately() {
	this->$XDecoratedPeer::updateCursorImmediately();
}

$Image* XDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$XDecoratedPeer::createImage(width, height);
}

$VolatileImage* XDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XDecoratedPeer::createVolatileImage(width, height);
}

void XDialogPeer::beginValidate() {
	this->$XDecoratedPeer::beginValidate();
}

void XDialogPeer::endValidate() {
	this->$XDecoratedPeer::endValidate();
}

bool XDialogPeer::handlesWheelScrolling() {
	 return this->$XDecoratedPeer::handlesWheelScrolling();
}

void XDialogPeer::beginLayout() {
	this->$XDecoratedPeer::beginLayout();
}

void XDialogPeer::endLayout() {
	this->$XDecoratedPeer::endLayout();
}

void XDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XDecoratedPeer::createBuffers(numBuffers, caps);
}

void XDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XDecoratedPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XDialogPeer::getBackBuffer() {
	 return this->$XDecoratedPeer::getBackBuffer();
}

void XDialogPeer::destroyBuffers() {
	this->$XDecoratedPeer::destroyBuffers();
}

void XDialogPeer::setZOrder($ComponentPeer* above) {
	this->$XDecoratedPeer::setZOrder(above);
}

void XDialogPeer::applyShape($Region* shape) {
	this->$XDecoratedPeer::applyShape(shape);
}

bool XDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XDecoratedPeer::updateGraphicsData(gc);
}

$ColorModel* XDialogPeer::getColorModel() {
	 return this->$XDecoratedPeer::getColorModel();
}

$GraphicsConfiguration* XDialogPeer::getGraphicsConfiguration() {
	 return this->$XDecoratedPeer::getGraphicsConfiguration();
}

$String* XDialogPeer::toString() {
	 return this->$XDecoratedPeer::toString();
}

int32_t XDialogPeer::hashCode() {
	 return this->$XDecoratedPeer::hashCode();
}

bool XDialogPeer::equals(Object$* arg0) {
	 return this->$XDecoratedPeer::equals(arg0);
}

$Object* XDialogPeer::clone() {
	 return this->$XDecoratedPeer::clone();
}

void XDialogPeer::finalize() {
	this->$XDecoratedPeer::finalize();
}

void XDialogPeer::init$($Dialog* target) {
	$XDecoratedPeer::init$(static_cast<$Window*>(target));
}

void XDialogPeer::preInit($XCreateWindowParams* params) {
	$XDecoratedPeer::preInit(params);
	$var($Dialog, target, ($cast($Dialog, this->target)));
	$set(this, undecorated, $Boolean::valueOf($nc(target)->isUndecorated()));
	$nc(this->winAttr)->nativeDecor = !$nc(target)->isUndecorated();
	if ($nc(this->winAttr)->nativeDecor) {
		$init($XWindowAttributesData);
		$nc(this->winAttr)->decorations = $XWindowAttributesData::AWT_DECOR_ALL;
	} else {
		$init($XWindowAttributesData);
		$nc(this->winAttr)->decorations = $XWindowAttributesData::AWT_DECOR_NONE;
	}
	$nc(this->winAttr)->functions = $MWMConstants::MWM_FUNC_ALL;
	$nc(this->winAttr)->isResizable = true;
	$nc(this->winAttr)->initialResizability = target->isResizable();
	$set($nc(this->winAttr), title, target->getTitle());
	$init($XWindowAttributesData);
	$nc(this->winAttr)->initialState = $XWindowAttributesData::NORMAL;
}

void XDialogPeer::setVisible(bool vis) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Dialog, target, $cast($Dialog, this->target));
			if (vis) {
				$init($Dialog$ModalityType);
				if ($nc(target)->getModalityType() != $Dialog$ModalityType::MODELESS) {
					if (!isModalBlocked()) {
						$XBaseWindow::ungrabInput();
					}
				}
			} else {
				restoreTransientFor(this);
				$set(this, prevTransientFor, nullptr);
				$set(this, nextTransientFor, nullptr);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XDecoratedPeer::setVisible(vis);
}

bool XDialogPeer::isTargetUndecorated() {
	if (this->undecorated != nullptr) {
		return $nc(this->undecorated)->booleanValue();
	} else {
		return $nc(($cast($Dialog, this->target)))->isUndecorated();
	}
}

int32_t XDialogPeer::getDecorations() {
	int32_t d = $XDecoratedPeer::getDecorations();
	if (((int32_t)(d & (uint32_t)$MWMConstants::MWM_DECOR_ALL)) != 0) {
		d |= ($MWMConstants::MWM_DECOR_MINIMIZE | $MWMConstants::MWM_DECOR_MAXIMIZE);
	} else {
		d &= (uint32_t)~($MWMConstants::MWM_DECOR_MINIMIZE | $MWMConstants::MWM_DECOR_MAXIMIZE);
	}
	return d;
}

int32_t XDialogPeer::getFunctions() {
	int32_t f = $XDecoratedPeer::getFunctions();
	if (((int32_t)(f & (uint32_t)$MWMConstants::MWM_FUNC_ALL)) != 0) {
		f |= ($MWMConstants::MWM_FUNC_MINIMIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
	} else {
		f &= (uint32_t)~($MWMConstants::MWM_FUNC_MINIMIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
	}
	return f;
}

void XDialogPeer::blockWindows($List* toBlock) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, javaToplevels, nullptr);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(javaToplevels, $XWindowPeer::collectJavaToplevels());
			{
				$var($Iterator, i$, $nc(toBlock)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Window, w, $cast($Window, i$->next()));
					{
						$var($XWindowPeer, wp, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
						if (wp != nullptr) {
							wp->setModalBlocked($cast($Dialog, this->target), true, javaToplevels);
						}
					}
				}
			}
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

bool XDialogPeer::isFocusedWindowModalBlocker() {
	$useLocalCurrentObjectStackCache();
	$var($Window, focusedWindow, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	$var($XWindowPeer, focusedWindowPeer, nullptr);
	if (focusedWindow != nullptr) {
		$assign(focusedWindowPeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(focusedWindow)));
	} else {
		$assign(focusedWindowPeer, getNativeFocusedWindowPeer());
	}
	$synchronized(getStateLock()) {
		if (focusedWindowPeer != nullptr && $equals(focusedWindowPeer->modalBlocker, this->target)) {
			return true;
		}
	}
	return $XDecoratedPeer::isFocusedWindowModalBlocker();
}

XDialogPeer::XDialogPeer() {
}

$Class* XDialogPeer::load$($String* name, bool initialize) {
	$loadClass(XDialogPeer, name, initialize, &_XDialogPeer_ClassInfo_, allocate$XDialogPeer);
	return class$;
}

$Class* XDialogPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun