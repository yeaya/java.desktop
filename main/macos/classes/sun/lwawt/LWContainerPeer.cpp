#include <sun/lwawt/LWContainerPeer.h>

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
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <sun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
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
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;
using $SunGraphicsCallback$PaintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PaintHeavyweightComponentsCallback;
using $SunGraphicsCallback$PrintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PrintHeavyweightComponentsCallback;
using $Region = ::sun::java2d::pipe::Region;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWContainerPeer_FieldInfo_[] = {
	{"childPeers", "Ljava/util/List;", "Ljava/util/List<Lsun/lwawt/LWComponentPeer<**>;>;", $PRIVATE | $FINAL, $field(LWContainerPeer, childPeers)},
	{}
};

$MethodInfo _LWContainerPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Container;Lsun/lwawt/PlatformComponent;)V", "(TT;Lsun/lwawt/PlatformComponent;)V", 0, $method(static_cast<void(LWContainerPeer::*)($Container*,$PlatformComponent*)>(&LWContainerPeer::init$))},
	{"addChildPeer", "(Lsun/lwawt/LWComponentPeer;)V", "(Lsun/lwawt/LWComponentPeer<**>;)V", $FINAL, $method(static_cast<void(LWContainerPeer::*)($LWComponentPeer*)>(&LWContainerPeer::addChildPeer))},
	{"beginLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"beginValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"cutChildren", "(Lsun/java2d/pipe/Region;Lsun/lwawt/LWComponentPeer;)Lsun/java2d/pipe/Region;", "(Lsun/java2d/pipe/Region;Lsun/lwawt/LWComponentPeer<**>;)Lsun/java2d/pipe/Region;", $FINAL, $method(static_cast<$Region*(LWContainerPeer::*)($Region*,$LWComponentPeer*)>(&LWContainerPeer::cutChildren))},
	{"endLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"endValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"findPeerAt", "(II)Lsun/lwawt/LWComponentPeer;", "(II)Lsun/lwawt/LWComponentPeer<**>;", $FINAL},
	{"getChildren", "()Ljava/util/List;", "()Ljava/util/List<Lsun/lwawt/LWComponentPeer<**>;>;", $FINAL, $method(static_cast<$List*(LWContainerPeer::*)()>(&LWContainerPeer::getChildren))},
	{"getContentSize", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getVisibleRegion", "()Lsun/java2d/pipe/Region;", nullptr, $FINAL},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"removeChildPeer", "(Lsun/lwawt/LWComponentPeer;)V", "(Lsun/lwawt/LWComponentPeer<**>;)V", $FINAL, $method(static_cast<void(LWContainerPeer::*)($LWComponentPeer*)>(&LWContainerPeer::removeChildPeer))},
	{"repaintChildren", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(LWContainerPeer::*)($Rectangle*)>(&LWContainerPeer::repaintChildren))},
	{"repaintPeer", "(Ljava/awt/Rectangle;)V", nullptr, $FINAL},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setChildPeerZOrder", "(Lsun/lwawt/LWComponentPeer;Lsun/lwawt/LWComponentPeer;)V", "(Lsun/lwawt/LWComponentPeer<**>;Lsun/lwawt/LWComponentPeer<**>;)V", $FINAL, $method(static_cast<void(LWContainerPeer::*)($LWComponentPeer*,$LWComponentPeer*)>(&LWContainerPeer::setChildPeerZOrder))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWContainerPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.lwawt.LWContainerPeer",
	"sun.lwawt.LWCanvasPeer",
	"java.awt.peer.ContainerPeer",
	_LWContainerPeer_FieldInfo_,
	_LWContainerPeer_MethodInfo_,
	"<T:Ljava/awt/Container;D:Ljavax/swing/JComponent;>Lsun/lwawt/LWCanvasPeer<TT;TD;>;Ljava/awt/peer/ContainerPeer;"
};

$Object* allocate$LWContainerPeer($Class* clazz) {
	return $of($alloc(LWContainerPeer));
}

$Dimension* LWContainerPeer::getPreferredSize() {
	 return this->$LWCanvasPeer::getPreferredSize();
}

$Dimension* LWContainerPeer::getMinimumSize() {
	 return this->$LWCanvasPeer::getMinimumSize();
}

void LWContainerPeer::dispose() {
	this->$LWCanvasPeer::dispose();
}

$GraphicsConfiguration* LWContainerPeer::getGraphicsConfiguration() {
	 return this->$LWCanvasPeer::getGraphicsConfiguration();
}

bool LWContainerPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWCanvasPeer::updateGraphicsData(gc);
}

$Graphics* LWContainerPeer::getGraphics() {
	 return this->$LWCanvasPeer::getGraphics();
}

$ColorModel* LWContainerPeer::getColorModel() {
	 return this->$LWCanvasPeer::getColorModel();
}

void LWContainerPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWCanvasPeer::createBuffers(numBuffers, caps);
}

$Image* LWContainerPeer::getBackBuffer() {
	 return this->$LWCanvasPeer::getBackBuffer();
}

void LWContainerPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWCanvasPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWContainerPeer::destroyBuffers() {
	this->$LWCanvasPeer::destroyBuffers();
}

void LWContainerPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWCanvasPeer::setBounds(x, y, w, h, op);
}

$Point* LWContainerPeer::getLocationOnScreen() {
	 return this->$LWCanvasPeer::getLocationOnScreen();
}

$FontMetrics* LWContainerPeer::getFontMetrics($Font* f) {
	 return this->$LWCanvasPeer::getFontMetrics(f);
}

void LWContainerPeer::setVisible(bool v) {
	this->$LWCanvasPeer::setVisible(v);
}

void LWContainerPeer::reparent($ContainerPeer* newContainer) {
	this->$LWCanvasPeer::reparent(newContainer);
}

bool LWContainerPeer::isReparentSupported() {
	 return this->$LWCanvasPeer::isReparentSupported();
}

void LWContainerPeer::setZOrder($ComponentPeer* above) {
	this->$LWCanvasPeer::setZOrder(above);
}

void LWContainerPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWCanvasPeer::coalescePaintEvent(e);
}

void LWContainerPeer::layout() {
	this->$LWCanvasPeer::layout();
}

bool LWContainerPeer::isObscured() {
	 return this->$LWCanvasPeer::isObscured();
}

bool LWContainerPeer::canDetermineObscurity() {
	 return this->$LWCanvasPeer::canDetermineObscurity();
}

void LWContainerPeer::updateCursorImmediately() {
	this->$LWCanvasPeer::updateCursorImmediately();
}

bool LWContainerPeer::isFocusable() {
	 return this->$LWCanvasPeer::isFocusable();
}

bool LWContainerPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWCanvasPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWContainerPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWCanvasPeer::createImage(width, height);
}

$VolatileImage* LWContainerPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWCanvasPeer::createVolatileImage(w, h);
}

bool LWContainerPeer::handlesWheelScrolling() {
	 return this->$LWCanvasPeer::handlesWheelScrolling();
}

void LWContainerPeer::applyShape($Region* shape) {
	this->$LWCanvasPeer::applyShape(shape);
}

void LWContainerPeer::handleEvent($AWTEvent* e) {
	this->$LWCanvasPeer::handleEvent(e);
}

int32_t LWContainerPeer::hashCode() {
	 return this->$LWCanvasPeer::hashCode();
}

bool LWContainerPeer::equals(Object$* arg0) {
	 return this->$LWCanvasPeer::equals(arg0);
}

$Object* LWContainerPeer::clone() {
	 return this->$LWCanvasPeer::clone();
}

$String* LWContainerPeer::toString() {
	 return this->$LWCanvasPeer::toString();
}

void LWContainerPeer::finalize() {
	this->$LWCanvasPeer::finalize();
}

void LWContainerPeer::init$($Container* target, $PlatformComponent* platformComponent) {
	$LWCanvasPeer::init$(target, platformComponent);
	$set(this, childPeers, $new($LinkedList));
}

void LWContainerPeer::addChildPeer($LWComponentPeer* child) {
	$synchronized(getPeerTreeLock()) {
		$nc(this->childPeers)->add($nc(this->childPeers)->size(), child);
	}
}

void LWContainerPeer::removeChildPeer($LWComponentPeer* child) {
	$synchronized(getPeerTreeLock()) {
		$nc(this->childPeers)->remove($of(child));
	}
}

void LWContainerPeer::setChildPeerZOrder($LWComponentPeer* peer, $LWComponentPeer* above) {
	$synchronized(getPeerTreeLock()) {
		$nc(this->childPeers)->remove($of(peer));
		int32_t index = (above != nullptr) ? $nc(this->childPeers)->indexOf(above) : $nc(this->childPeers)->size();
		if (index >= 0) {
			$nc(this->childPeers)->add(index, peer);
		} else {
		}
	}
}

$Insets* LWContainerPeer::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void LWContainerPeer::beginValidate() {
}

void LWContainerPeer::endValidate() {
}

void LWContainerPeer::beginLayout() {
	setLayouting(true);
}

void LWContainerPeer::endLayout() {
	setLayouting(false);
	postPaintEvent(0, 0, 0, 0);
}

$List* LWContainerPeer::getChildren() {
	$synchronized(getPeerTreeLock()) {
		$var($Object, copy, $nc(($cast($LinkedList, this->childPeers)))->clone());
		return $cast($List, copy);
	}
}

$Region* LWContainerPeer::getVisibleRegion() {
	return cutChildren($($LWCanvasPeer::getVisibleRegion()), nullptr);
}

$Region* LWContainerPeer::cutChildren($Region* r$renamed, $LWComponentPeer* above) {
	$useLocalCurrentObjectStackCache();
	$var($Region, r, r$renamed);
	bool aboveFound = above == nullptr;
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				if (!aboveFound && child == above) {
					aboveFound = true;
					continue;
				}
				if (aboveFound) {
					if ($nc(child)->isVisible()) {
						$var($Rectangle, cb, child->getBounds());
						$var($Region, cr, child->getRegion());
						$var($Region, tr, $nc(cr)->getTranslatedRegion($nc(cb)->x, cb->y));
						$assign(r, $nc(r)->getDifference($($nc(tr)->getIntersection($(getContentSize())))));
					}
				}
			}
		}
	}
	return r;
}

$LWComponentPeer* LWContainerPeer::findPeerAt(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($LWComponentPeer, peer, $LWCanvasPeer::findPeerAt(x, y));
	$var($Rectangle, r, getBounds());
	x -= $nc(r)->x;
	y -= r->y;
	if (peer != nullptr && $nc($(getContentSize()))->contains(x, y)) {
		$synchronized(getPeerTreeLock()) {
			for (int32_t i = $nc(this->childPeers)->size() - 1; i >= 0; --i) {
				$var($LWComponentPeer, p, $nc(($cast($LWComponentPeer, $($nc(this->childPeers)->get(i)))))->findPeerAt(x, y));
				if (p != nullptr) {
					$assign(peer, p);
					break;
				}
			}
		}
	}
	return peer;
}

void LWContainerPeer::repaintPeer($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, toPaint, $nc($(getSize()))->intersection(r));
	bool var$0 = !isShowing();
	if (var$0 || $nc(toPaint)->isEmpty()) {
		return;
	}
	$LWCanvasPeer::repaintPeer(toPaint);
	repaintChildren(toPaint);
}

void LWContainerPeer::repaintChildren($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, content, getContentSize());
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				$var($Rectangle, childBounds, $nc(child)->getBounds());
				$var($Rectangle, toPaint, $nc(r)->intersection(childBounds));
				$assign(toPaint, $nc(toPaint)->intersection(content));
				toPaint->translate(-$nc(childBounds)->x, -childBounds->y);
				child->repaintPeer(toPaint);
			}
		}
	}
}

$Rectangle* LWContainerPeer::getContentSize() {
	return getSize();
}

void LWContainerPeer::setEnabled(bool e) {
	$useLocalCurrentObjectStackCache();
	$LWCanvasPeer::setEnabled(e);
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				$nc(child)->setEnabled(e && $nc($(child->getTarget()))->isEnabled());
			}
		}
	}
}

void LWContainerPeer::setBackground($Color* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				if (!$nc($($nc(child)->getTarget()))->isBackgroundSet()) {
					child->setBackground(c);
				}
			}
		}
	}
	$LWCanvasPeer::setBackground(c);
}

void LWContainerPeer::setForeground($Color* c) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				if (!$nc($($nc(child)->getTarget()))->isForegroundSet()) {
					child->setForeground(c);
				}
			}
		}
	}
	$LWCanvasPeer::setForeground(c);
}

void LWContainerPeer::setFont($Font* f) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getChildren()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LWComponentPeer, child, $cast($LWComponentPeer, i$->next()));
			{
				if (!$nc($($nc(child)->getTarget()))->isFontSet()) {
					child->setFont(f);
				}
			}
		}
	}
	$LWCanvasPeer::setFont(f);
}

void LWContainerPeer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$LWCanvasPeer::paint(g);
	$nc($($SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, $(getTarget()))))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

void LWContainerPeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$LWCanvasPeer::print(g);
	$nc($($SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, $(getTarget()))))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

LWContainerPeer::LWContainerPeer() {
}

$Class* LWContainerPeer::load$($String* name, bool initialize) {
	$loadClass(LWContainerPeer, name, initialize, &_LWContainerPeer_ClassInfo_, allocate$LWContainerPeer);
	return class$;
}

$Class* LWContainerPeer::class$ = nullptr;

	} // lwawt
} // sun