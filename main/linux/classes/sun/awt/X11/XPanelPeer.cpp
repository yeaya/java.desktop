#include <sun/awt/X11/XPanelPeer.h>

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
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEmbeddingContainer.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS

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
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;
using $SunGraphicsCallback$PaintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PaintHeavyweightComponentsCallback;
using $SunGraphicsCallback$PrintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PrintHeavyweightComponentsCallback;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEmbeddingContainer = ::sun::awt::X11::XEmbeddingContainer;
using $XWindow = ::sun::awt::X11::XWindow;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XPanelPeer_FieldInfo_[] = {
	{"embedder", "Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0, $field(XPanelPeer, embedder)},
	{}
};

$MethodInfo _XPanelPeer_MethodInfo_[] = {
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
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XPanelPeer::*)()>(&XPanelPeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XPanelPeer::*)($XCreateWindowParams*)>(&XPanelPeer::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(XPanelPeer::*)($Component*)>(&XPanelPeer::init$))},
	{"disableBackgroundErase", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setForegroundForHierarchy", "(Ljava/awt/Container;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(XPanelPeer::*)($Container*,$Color*)>(&XPanelPeer::setForegroundForHierarchy))},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldFocusOnClick", "()Z", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"xembed", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPanelPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XPanelPeer",
	"sun.awt.X11.XCanvasPeer",
	"java.awt.peer.PanelPeer",
	_XPanelPeer_FieldInfo_,
	_XPanelPeer_MethodInfo_
};

$Object* allocate$XPanelPeer($Class* clazz) {
	return $of($alloc(XPanelPeer));
}

void XPanelPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XCanvasPeer::reparent(newNativeParent);
}

bool XPanelPeer::isReparentSupported() {
	 return this->$XCanvasPeer::isReparentSupported();
}

bool XPanelPeer::isObscured() {
	 return this->$XCanvasPeer::isObscured();
}

bool XPanelPeer::canDetermineObscurity() {
	 return this->$XCanvasPeer::canDetermineObscurity();
}

bool XPanelPeer::isFocusable() {
	 return this->$XCanvasPeer::isFocusable();
}

bool XPanelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XCanvasPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XPanelPeer::setVisible(bool b) {
	this->$XCanvasPeer::setVisible(b);
}

void XPanelPeer::setEnabled(bool value) {
	this->$XCanvasPeer::setEnabled(value);
}

$Graphics* XPanelPeer::getGraphics() {
	 return this->$XCanvasPeer::getGraphics();
}

void XPanelPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XCanvasPeer::setBounds(x, y, width, height, op);
}

void XPanelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XCanvasPeer::coalescePaintEvent(e);
}

void XPanelPeer::handleEvent($AWTEvent* e) {
	this->$XCanvasPeer::handleEvent(e);
}

$Dimension* XPanelPeer::getMinimumSize() {
	 return this->$XCanvasPeer::getMinimumSize();
}

$Dimension* XPanelPeer::getPreferredSize() {
	 return this->$XCanvasPeer::getPreferredSize();
}

void XPanelPeer::layout() {
	this->$XCanvasPeer::layout();
}

$FontMetrics* XPanelPeer::getFontMetrics($Font* font) {
	 return this->$XCanvasPeer::getFontMetrics(font);
}

void XPanelPeer::setFont($Font* f) {
	this->$XCanvasPeer::setFont(f);
}

void XPanelPeer::updateCursorImmediately() {
	this->$XCanvasPeer::updateCursorImmediately();
}

$Image* XPanelPeer::createImage(int32_t width, int32_t height) {
	 return this->$XCanvasPeer::createImage(width, height);
}

$VolatileImage* XPanelPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XCanvasPeer::createVolatileImage(width, height);
}

void XPanelPeer::beginValidate() {
	this->$XCanvasPeer::beginValidate();
}

void XPanelPeer::endValidate() {
	this->$XCanvasPeer::endValidate();
}

bool XPanelPeer::handlesWheelScrolling() {
	 return this->$XCanvasPeer::handlesWheelScrolling();
}

void XPanelPeer::beginLayout() {
	this->$XCanvasPeer::beginLayout();
}

void XPanelPeer::endLayout() {
	this->$XCanvasPeer::endLayout();
}

void XPanelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XCanvasPeer::createBuffers(numBuffers, caps);
}

void XPanelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XCanvasPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XPanelPeer::getBackBuffer() {
	 return this->$XCanvasPeer::getBackBuffer();
}

void XPanelPeer::destroyBuffers() {
	this->$XCanvasPeer::destroyBuffers();
}

void XPanelPeer::setZOrder($ComponentPeer* above) {
	this->$XCanvasPeer::setZOrder(above);
}

void XPanelPeer::applyShape($Region* shape) {
	this->$XCanvasPeer::applyShape(shape);
}

bool XPanelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XCanvasPeer::updateGraphicsData(gc);
}

$Point* XPanelPeer::getLocationOnScreen() {
	 return this->$XCanvasPeer::getLocationOnScreen();
}

$ColorModel* XPanelPeer::getColorModel() {
	 return this->$XCanvasPeer::getColorModel();
}

$GraphicsConfiguration* XPanelPeer::getGraphicsConfiguration() {
	 return this->$XCanvasPeer::getGraphicsConfiguration();
}

$String* XPanelPeer::toString() {
	 return this->$XCanvasPeer::toString();
}

int32_t XPanelPeer::hashCode() {
	 return this->$XCanvasPeer::hashCode();
}

bool XPanelPeer::equals(Object$* arg0) {
	 return this->$XCanvasPeer::equals(arg0);
}

$Object* XPanelPeer::clone() {
	 return this->$XCanvasPeer::clone();
}

void XPanelPeer::finalize() {
	this->$XCanvasPeer::finalize();
}

void XPanelPeer::xembed(int64_t window) {
	if (this->embedder != nullptr) {
		$nc(this->embedder)->add(window);
	}
}

void XPanelPeer::init$() {
	$XCanvasPeer::init$();
	$set(this, embedder, nullptr);
}

void XPanelPeer::init$($XCreateWindowParams* params) {
	$XCanvasPeer::init$(params);
	$set(this, embedder, nullptr);
}

void XPanelPeer::init$($Component* target) {
	$XCanvasPeer::init$(target);
	$set(this, embedder, nullptr);
}

void XPanelPeer::postInit($XCreateWindowParams* params) {
	$XCanvasPeer::postInit(params);
	if (this->embedder != nullptr) {
		$nc(this->embedder)->install(this);
	}
}

$Insets* XPanelPeer::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void XPanelPeer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$XCanvasPeer::paint(g);
	$nc($($SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, this->target)))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

void XPanelPeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$XCanvasPeer::print(g);
	$nc($($SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, this->target)))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

void XPanelPeer::setBackground($Color* c) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, nullptr);
	int32_t i = 0;
	$var($Container, cont, $cast($Container, this->target));
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$synchronized($nc(this->target)->getTreeLock()) {
		int32_t n = $nc(cont)->getComponentCount();
		for (i = 0; i < n; ++i) {
			$assign(comp, cont->getComponent(i));
			$var($ComponentPeer, peer, $nc(acc)->getPeer(comp));
			if (peer != nullptr) {
				$var($Color, color, $nc(comp)->getBackground());
				if (color == nullptr || $nc(color)->equals(c)) {
					peer->setBackground(c);
				}
			}
		}
	}
	$XCanvasPeer::setBackground(c);
}

void XPanelPeer::setForeground($Color* c) {
	setForegroundForHierarchy($cast($Container, this->target), c);
}

void XPanelPeer::setForegroundForHierarchy($Container* cont, $Color* c) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(this->target)->getTreeLock()) {
		$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
		int32_t n = $nc(cont)->getComponentCount();
		for (int32_t i = 0; i < n; ++i) {
			$var($Component, comp, cont->getComponent(i));
			$var($Color, color, $nc(comp)->getForeground());
			if (color == nullptr || $nc(color)->equals(c)) {
				$var($ComponentPeer, cpeer, $nc(acc)->getPeer(comp));
				if (cpeer != nullptr) {
					cpeer->setForeground(c);
				}
				if ($instanceOf($LightweightPeer, cpeer) && $instanceOf($Container, comp)) {
					setForegroundForHierarchy($cast($Container, comp), c);
				}
			}
		}
	}
}

void XPanelPeer::dispose() {
	if (this->embedder != nullptr) {
		$nc(this->embedder)->deinstall();
	}
	$XCanvasPeer::dispose();
}

bool XPanelPeer::shouldFocusOnClick() {
	return $nc(($cast($Container, this->target)))->getComponentCount() == 0;
}

void XPanelPeer::disableBackgroundErase() {
	$XCanvasPeer::disableBackgroundErase();
}

$GraphicsConfiguration* XPanelPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return $XCanvasPeer::getAppropriateGraphicsConfiguration(gc);
}

XPanelPeer::XPanelPeer() {
}

$Class* XPanelPeer::load$($String* name, bool initialize) {
	$loadClass(XPanelPeer, name, initialize, &_XPanelPeer_ClassInfo_, allocate$XPanelPeer);
	return class$;
}

$Class* XPanelPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun