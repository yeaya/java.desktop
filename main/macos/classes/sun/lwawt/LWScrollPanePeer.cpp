#include <sun/lwawt/LWScrollPanePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
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
#include <java/awt/ScrollPane.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/List.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/LWScrollPanePeer$1.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef SCROLLBARS_ALWAYS
#undef SCROLLBARS_NEVER
#undef SIMPLE_SCROLL_MODE
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_NEVER

using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
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
using $ScrollPane = ::java::awt::ScrollPane;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $List = ::java::util::List;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $LWScrollPanePeer$1 = ::sun::lwawt::LWScrollPanePeer$1;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWScrollPanePeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*beginLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/ScrollPane;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWScrollPanePeer::*)($ScrollPane*,$PlatformComponent*)>(&LWScrollPanePeer::init$))},
	{"childResized", "(II)V", nullptr, $PUBLIC},
	{"convertHPolicy", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LWScrollPanePeer::convertHPolicy))},
	{"convertVPolicy", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LWScrollPanePeer::convertVPolicy))},
	{"createDelegate", "()Ljavax/swing/JScrollPane;", nullptr, 0},
	{"getContentSize", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getHScrollbarHeight", "()I", nullptr, $PUBLIC},
	{"getVScrollbarWidth", "()I", nullptr, $PUBLIC},
	{"getViewPeer", "()Lsun/lwawt/LWComponentPeer;", "()Lsun/lwawt/LWComponentPeer<**>;", 0, $method(static_cast<$LWComponentPeer*(LWScrollPanePeer::*)()>(&LWScrollPanePeer::getViewPeer))},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"initializeImpl", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setScrollPosition", "(II)V", nullptr, $PUBLIC},
	{"setUnitIncrement", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWScrollPanePeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWScrollPanePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWScrollPanePeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWScrollPanePeer",
	"sun.lwawt.LWContainerPeer",
	"java.awt.peer.ScrollPanePeer,javax.swing.event.ChangeListener",
	nullptr,
	_LWScrollPanePeer_MethodInfo_,
	"Lsun/lwawt/LWContainerPeer<Ljava/awt/ScrollPane;Ljavax/swing/JScrollPane;>;Ljava/awt/peer/ScrollPanePeer;Ljavax/swing/event/ChangeListener;",
	nullptr,
	_LWScrollPanePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWScrollPanePeer$1"
};

$Object* allocate$LWScrollPanePeer($Class* clazz) {
	return $of($alloc(LWScrollPanePeer));
}

$Insets* LWScrollPanePeer::getInsets() {
	 return this->$LWContainerPeer::getInsets();
}

void LWScrollPanePeer::beginValidate() {
	this->$LWContainerPeer::beginValidate();
}

void LWScrollPanePeer::endValidate() {
	this->$LWContainerPeer::endValidate();
}

void LWScrollPanePeer::beginLayout() {
	this->$LWContainerPeer::beginLayout();
}

void LWScrollPanePeer::endLayout() {
	this->$LWContainerPeer::endLayout();
}

void LWScrollPanePeer::setEnabled(bool e) {
	this->$LWContainerPeer::setEnabled(e);
}

void LWScrollPanePeer::setBackground($Color* c) {
	this->$LWContainerPeer::setBackground(c);
}

void LWScrollPanePeer::setForeground($Color* c) {
	this->$LWContainerPeer::setForeground(c);
}

void LWScrollPanePeer::setFont($Font* f) {
	this->$LWContainerPeer::setFont(f);
}

void LWScrollPanePeer::paint($Graphics* g) {
	this->$LWContainerPeer::paint(g);
}

void LWScrollPanePeer::print($Graphics* g) {
	this->$LWContainerPeer::print(g);
}

$Dimension* LWScrollPanePeer::getPreferredSize() {
	 return this->$LWContainerPeer::getPreferredSize();
}

$Dimension* LWScrollPanePeer::getMinimumSize() {
	 return this->$LWContainerPeer::getMinimumSize();
}

void LWScrollPanePeer::dispose() {
	this->$LWContainerPeer::dispose();
}

$GraphicsConfiguration* LWScrollPanePeer::getGraphicsConfiguration() {
	 return this->$LWContainerPeer::getGraphicsConfiguration();
}

bool LWScrollPanePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWContainerPeer::updateGraphicsData(gc);
}

$Graphics* LWScrollPanePeer::getGraphics() {
	 return this->$LWContainerPeer::getGraphics();
}

$ColorModel* LWScrollPanePeer::getColorModel() {
	 return this->$LWContainerPeer::getColorModel();
}

void LWScrollPanePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWContainerPeer::createBuffers(numBuffers, caps);
}

$Image* LWScrollPanePeer::getBackBuffer() {
	 return this->$LWContainerPeer::getBackBuffer();
}

void LWScrollPanePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWContainerPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWScrollPanePeer::destroyBuffers() {
	this->$LWContainerPeer::destroyBuffers();
}

void LWScrollPanePeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWContainerPeer::setBounds(x, y, w, h, op);
}

$Point* LWScrollPanePeer::getLocationOnScreen() {
	 return this->$LWContainerPeer::getLocationOnScreen();
}

$FontMetrics* LWScrollPanePeer::getFontMetrics($Font* f) {
	 return this->$LWContainerPeer::getFontMetrics(f);
}

void LWScrollPanePeer::setVisible(bool v) {
	this->$LWContainerPeer::setVisible(v);
}

void LWScrollPanePeer::reparent($ContainerPeer* newContainer) {
	this->$LWContainerPeer::reparent(newContainer);
}

bool LWScrollPanePeer::isReparentSupported() {
	 return this->$LWContainerPeer::isReparentSupported();
}

void LWScrollPanePeer::setZOrder($ComponentPeer* above) {
	this->$LWContainerPeer::setZOrder(above);
}

void LWScrollPanePeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWContainerPeer::coalescePaintEvent(e);
}

bool LWScrollPanePeer::isObscured() {
	 return this->$LWContainerPeer::isObscured();
}

bool LWScrollPanePeer::canDetermineObscurity() {
	 return this->$LWContainerPeer::canDetermineObscurity();
}

void LWScrollPanePeer::updateCursorImmediately() {
	this->$LWContainerPeer::updateCursorImmediately();
}

bool LWScrollPanePeer::isFocusable() {
	 return this->$LWContainerPeer::isFocusable();
}

bool LWScrollPanePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWContainerPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWScrollPanePeer::createImage(int32_t width, int32_t height) {
	 return this->$LWContainerPeer::createImage(width, height);
}

$VolatileImage* LWScrollPanePeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWContainerPeer::createVolatileImage(w, h);
}

bool LWScrollPanePeer::handlesWheelScrolling() {
	 return this->$LWContainerPeer::handlesWheelScrolling();
}

void LWScrollPanePeer::applyShape($Region* shape) {
	this->$LWContainerPeer::applyShape(shape);
}

int32_t LWScrollPanePeer::hashCode() {
	 return this->$LWContainerPeer::hashCode();
}

bool LWScrollPanePeer::equals(Object$* arg0) {
	 return this->$LWContainerPeer::equals(arg0);
}

$Object* LWScrollPanePeer::clone() {
	 return this->$LWContainerPeer::clone();
}

$String* LWScrollPanePeer::toString() {
	 return this->$LWContainerPeer::toString();
}

void LWScrollPanePeer::finalize() {
	this->$LWContainerPeer::finalize();
}

void LWScrollPanePeer::init$($ScrollPane* target, $PlatformComponent* platformComponent) {
	$LWContainerPeer::init$(target, platformComponent);
}

$JComponent* LWScrollPanePeer::createDelegate() {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, sp, $new($JScrollPane));
	$var($JPanel, panel, $new($JPanel));
	panel->setOpaque(false);
	panel->setVisible(false);
	$nc($(sp->getViewport()))->setView(panel);
	sp->setBorder($($BorderFactory::createEmptyBorder()));
	$nc($(sp->getViewport()))->addChangeListener(this);
	return sp;
}

void LWScrollPanePeer::handleEvent($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($MouseWheelEvent, e)) {
		$var($MouseWheelEvent, wheelEvent, $cast($MouseWheelEvent, e));
		bool var$0 = $nc(($cast($ScrollPane, $(getTarget()))))->isWheelScrollingEnabled();
		if (var$0 && $nc(wheelEvent)->isConsumed()) {
			sendEventToDelegate(wheelEvent);
		}
	} else {
		$LWContainerPeer::handleEvent(e);
	}
}

void LWScrollPanePeer::stateChanged($ChangeEvent* e) {
	$SwingUtilities::invokeLater($$new($LWScrollPanePeer$1, this));
}

void LWScrollPanePeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWContainerPeer::initializeImpl();
	int32_t policy = $nc(($cast($ScrollPane, $(getTarget()))))->getScrollbarDisplayPolicy();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($JScrollPane, $(getDelegate()))))->getViewport()))->setScrollMode($JViewport::SIMPLE_SCROLL_MODE);
		$nc(($cast($JScrollPane, $(getDelegate()))))->setVerticalScrollBarPolicy(convertVPolicy(policy));
		$nc(($cast($JScrollPane, $(getDelegate()))))->setHorizontalScrollBarPolicy(convertHPolicy(policy));
	}
}

$LWComponentPeer* LWScrollPanePeer::getViewPeer() {
	$var($List, peerList, getChildren());
	return $nc(peerList)->isEmpty() ? ($LWComponentPeer*)nullptr : $cast($LWComponentPeer, $nc(peerList)->get(0));
}

$Rectangle* LWScrollPanePeer::getContentSize() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, viewRect, $nc($($nc(($cast($JScrollPane, $(getDelegate()))))->getViewport()))->getViewRect());
	return $new($Rectangle, $nc(viewRect)->width, viewRect->height);
}

void LWScrollPanePeer::layout() {
	$useLocalCurrentObjectStackCache();
	$LWContainerPeer::layout();
	$synchronized(getDelegateLock()) {
		$var($LWComponentPeer, viewPeer, getViewPeer());
		if (viewPeer != nullptr) {
			$var($Component, view, $nc($($nc(($cast($JScrollPane, $(getDelegate()))))->getViewport()))->getView());
			$nc(view)->setBounds($(viewPeer->getBounds()));
			view->setPreferredSize($(viewPeer->getPreferredSize()));
			view->setMinimumSize($(viewPeer->getMinimumSize()));
			$nc(($cast($JScrollPane, $(getDelegate()))))->invalidate();
			$nc(($cast($JScrollPane, $(getDelegate()))))->validate();
			viewPeer->setBounds($(view->getBounds()));
		}
	}
}

void LWScrollPanePeer::setScrollPosition(int32_t x, int32_t y) {
}

int32_t LWScrollPanePeer::getHScrollbarHeight() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		return $nc($($nc(($cast($JScrollPane, $(getDelegate()))))->getHorizontalScrollBar()))->getHeight();
	}
}

int32_t LWScrollPanePeer::getVScrollbarWidth() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		return $nc($($nc(($cast($JScrollPane, $(getDelegate()))))->getVerticalScrollBar()))->getWidth();
	}
}

void LWScrollPanePeer::childResized(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc(($cast($JScrollPane, $(getDelegate()))))->invalidate();
		$nc(($cast($JScrollPane, $(getDelegate()))))->validate();
	}
}

void LWScrollPanePeer::setUnitIncrement($Adjustable* adj, int32_t u) {
}

void LWScrollPanePeer::setValue($Adjustable* adj, int32_t v) {
}

int32_t LWScrollPanePeer::convertHPolicy(int32_t policy) {
	$init(LWScrollPanePeer);
	switch (policy) {
	case $ScrollPane::SCROLLBARS_NEVER:
		{
			return $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER;
		}
	case $ScrollPane::SCROLLBARS_ALWAYS:
		{
			return $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS;
		}
	default:
		{
			return $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED;
		}
	}
}

int32_t LWScrollPanePeer::convertVPolicy(int32_t policy) {
	$init(LWScrollPanePeer);
	switch (policy) {
	case $ScrollPane::SCROLLBARS_NEVER:
		{
			return $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER;
		}
	case $ScrollPane::SCROLLBARS_ALWAYS:
		{
			return $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS;
		}
	default:
		{
			return $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED;
		}
	}
}

LWScrollPanePeer::LWScrollPanePeer() {
}

$Class* LWScrollPanePeer::load$($String* name, bool initialize) {
	$loadClass(LWScrollPanePeer, name, initialize, &_LWScrollPanePeer_ClassInfo_, allocate$LWScrollPanePeer);
	return class$;
}

$Class* LWScrollPanePeer::class$ = nullptr;

	} // lwawt
} // sun