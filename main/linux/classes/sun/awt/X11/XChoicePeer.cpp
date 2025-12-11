#include <sun/awt/X11/XChoicePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <sun/awt/X11/ListHelper.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/XChoicePeer$1.h>
#include <sun/awt/X11/XChoicePeer$2.h>
#include <sun/awt/X11/XChoicePeer$UnfurledChoice.h>
#include <sun/awt/X11/XChoicePeerListener.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BORDER_WIDTH
#undef BUTTON1
#undef BUTTON1_MASK
#undef ITEM_MARGIN
#undef ITEM_STATE_CHANGED
#undef KEY_PRESSED
#undef MAX_UNFURLED_ITEMS
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef SCROLLBAR_WIDTH
#undef SELECTED
#undef TEXT_SPACE
#undef TEXT_XPAD
#undef TEXT_YPAD
#undef VK_DOWN
#undef VK_ENTER
#undef VK_ESCAPE
#undef VK_KP_DOWN
#undef VK_KP_UP
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP
#undef VK_UP
#undef WIDGET_OFFSET

using $ColorArray = $Array<::java::awt::Color>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Choice = ::java::awt::Choice;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ListHelper = ::sun::awt::X11::ListHelper;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $XChoicePeer$1 = ::sun::awt::X11::XChoicePeer$1;
using $XChoicePeer$2 = ::sun::awt::X11::XChoicePeer$2;
using $XChoicePeer$UnfurledChoice = ::sun::awt::X11::XChoicePeer$UnfurledChoice;
using $XChoicePeerListener = ::sun::awt::X11::XChoicePeerListener;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XHorizontalScrollbar = ::sun::awt::X11::XHorizontalScrollbar;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XChoicePeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XChoicePeer, log)},
	{"MAX_UNFURLED_ITEMS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XChoicePeer, MAX_UNFURLED_ITEMS)},
	{"TEXT_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XChoicePeer, TEXT_SPACE)},
	{"BORDER_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XChoicePeer, BORDER_WIDTH)},
	{"ITEM_MARGIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XChoicePeer, ITEM_MARGIN)},
	{"SCROLLBAR_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XChoicePeer, SCROLLBAR_WIDTH)},
	{"focusInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XChoicePeer, focusInsets)},
	{"WIDGET_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(XChoicePeer, WIDGET_OFFSET)},
	{"TEXT_XPAD", "I", nullptr, $STATIC | $FINAL, $constField(XChoicePeer, TEXT_XPAD)},
	{"TEXT_YPAD", "I", nullptr, $STATIC | $FINAL, $constField(XChoicePeer, TEXT_YPAD)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(XChoicePeer, focusColor)},
	{"unfurled", "Z", nullptr, $PRIVATE, $field(XChoicePeer, unfurled)},
	{"dragging", "Z", nullptr, $PRIVATE, $field(XChoicePeer, dragging)},
	{"mouseInSB", "Z", nullptr, $PRIVATE, $field(XChoicePeer, mouseInSB)},
	{"firstPress", "Z", nullptr, $PRIVATE, $field(XChoicePeer, firstPress)},
	{"wasDragged", "Z", nullptr, $PRIVATE, $field(XChoicePeer, wasDragged)},
	{"helper", "Lsun/awt/X11/ListHelper;", nullptr, $PRIVATE, $field(XChoicePeer, helper)},
	{"unfurledChoice", "Lsun/awt/X11/XChoicePeer$UnfurledChoice;", nullptr, $PRIVATE, $field(XChoicePeer, unfurledChoice)},
	{"drawSelectedItem", "Z", nullptr, $PRIVATE, $field(XChoicePeer, drawSelectedItem)},
	{"alignUnder", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(XChoicePeer, alignUnder)},
	{"dragStartIdx", "I", nullptr, $PRIVATE, $field(XChoicePeer, dragStartIdx)},
	{"choiceListener", "Lsun/awt/X11/XChoicePeerListener;", nullptr, $PRIVATE, $field(XChoicePeer, choiceListener)},
	{}
};

$MethodInfo _XChoicePeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Choice;)V", nullptr, 0, $method(static_cast<void(XChoicePeer::*)($Choice*)>(&XChoicePeer::init$))},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addXChoicePeerListener", "(Lsun/awt/X11/XChoicePeerListener;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($XChoicePeerListener*)>(&XChoicePeer::addXChoicePeerListener))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"handleJavaMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"handleMouseEventByChoice", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC, $method(static_cast<bool(XChoicePeer::*)($MouseEvent*)>(&XChoicePeer::handleMouseEventByChoice))},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"hidePopdownMenu", "()V", nullptr, 0, $method(static_cast<void(XChoicePeer::*)()>(&XChoicePeer::hidePopdownMenu))},
	{"initGraphicsConfiguration", "()V", nullptr, $PROTECTED},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isMouseEventInChoice", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XChoicePeer::*)($MouseEvent*)>(&XChoicePeer::isMouseEventInChoice))},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isUnfurled", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XChoicePeer::*)()>(&XChoicePeer::isUnfurled))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($KeyEvent*)>(&XChoicePeer::keyPressed))},
	{"layout", "()V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($MouseEvent*)>(&XChoicePeer::mouseDragged))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($MouseEvent*)>(&XChoicePeer::mousePressed))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($MouseEvent*)>(&XChoicePeer::mouseReleased))},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED, $method(static_cast<void(XChoicePeer::*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&XChoicePeer::paintFocus))},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"prePostEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeXChoicePeerListener", "()V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)()>(&XChoicePeer::removeXChoicePeerListener))},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"select", "(I)V", nullptr, $PUBLIC},
	{"setAlignUnder", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)($Component*)>(&XChoicePeer::setAlignUnder))},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setDrawSelectedItem", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XChoicePeer::*)(bool)>(&XChoicePeer::setDrawSelectedItem))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"stateChangedICCCM", "(II)V", nullptr, $PUBLIC},
	{"stateChangedJava", "(II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabInputImpl", "()V", nullptr, 0},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XChoicePeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XChoicePeer$UnfurledChoice", "sun.awt.X11.XChoicePeer", "UnfurledChoice", $FINAL},
	{"sun.awt.X11.XChoicePeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XChoicePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XChoicePeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XChoicePeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.ChoicePeer,sun.awt.X11.ToplevelStateListener",
	_XChoicePeer_FieldInfo_,
	_XChoicePeer_MethodInfo_,
	nullptr,
	nullptr,
	_XChoicePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XChoicePeer$UnfurledChoice,sun.awt.X11.XChoicePeer$2,sun.awt.X11.XChoicePeer$1"
};

$Object* allocate$XChoicePeer($Class* clazz) {
	return $of($alloc(XChoicePeer));
}

void XChoicePeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XChoicePeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XChoicePeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XChoicePeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XChoicePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XChoicePeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XChoicePeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XChoicePeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XChoicePeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XChoicePeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XChoicePeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XChoicePeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

$FontMetrics* XChoicePeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XChoicePeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XChoicePeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XChoicePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

void XChoicePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XChoicePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XChoicePeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XChoicePeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XChoicePeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XChoicePeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XChoicePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XChoicePeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

$ColorModel* XChoicePeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XChoicePeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XChoicePeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XChoicePeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XChoicePeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XChoicePeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XChoicePeer::finalize() {
	this->$XComponentPeer::finalize();
}

$PlatformLogger* XChoicePeer::log = nullptr;
$Insets* XChoicePeer::focusInsets = nullptr;
$Color* XChoicePeer::focusColor = nullptr;

void XChoicePeer::init$($Choice* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
	this->unfurled = false;
	this->dragging = false;
	this->mouseInSB = false;
	this->firstPress = false;
	this->wasDragged = false;
	this->drawSelectedItem = true;
	this->dragStartIdx = -1;
}

void XChoicePeer::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::preInit(params);
	$var($Choice, target, $cast($Choice, this->target));
	int32_t numItems = $nc(target)->getItemCount();
	$set(this, unfurledChoice, $new($XChoicePeer$UnfurledChoice, this, target));
	$nc($(getToplevelXWindow()))->addToplevelStateListener(this);
	$var($XWindow, var$0, static_cast<$XWindow*>(this->unfurledChoice));
	$var($ColorArray, var$1, getGUIcolors());
	int32_t var$2 = numItems;
	$set(this, helper, $new($ListHelper, var$0, var$1, var$2, false, true, false, $(target->getFont()), XChoicePeer::MAX_UNFURLED_ITEMS, XChoicePeer::TEXT_SPACE, XChoicePeer::ITEM_MARGIN, XChoicePeer::BORDER_WIDTH, XChoicePeer::SCROLLBAR_WIDTH));
}

void XChoicePeer::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::postInit(params);
	$var($Choice, target, $cast($Choice, this->target));
	int32_t numItems = $nc(target)->getItemCount();
	for (int32_t i = 0; i < numItems; ++i) {
		$nc(this->helper)->add($(target->getItem(i)));
	}
	if (!$nc(this->helper)->isEmpty()) {
		$nc(this->helper)->select(target->getSelectedIndex());
		$nc(this->helper)->setFocusedIndex(target->getSelectedIndex());
	}
	$nc(this->helper)->updateColors($(getGUIcolors()));
	updateMotifColors($(getPeerBackground()));
}

bool XChoicePeer::isFocusable() {
	return true;
}

void XChoicePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	int32_t oldX = this->x;
	int32_t oldY = this->y;
	int32_t oldWidth = this->width;
	int32_t oldHeight = this->height;
	$XComponentPeer::setBounds(x, y, width, height, op);
	if (this->unfurled && (oldX != this->x || oldY != this->y || oldWidth != this->width || oldHeight != this->height)) {
		hidePopdownMenu();
	}
}

void XChoicePeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	repaint();
}

void XChoicePeer::setEnabled(bool value) {
	$XComponentPeer::setEnabled(value);
	$nc(this->helper)->updateColors($(getGUIcolors()));
	if (!value && this->unfurled) {
		hidePopdownMenu();
	}
}

void XChoicePeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	repaint();
}

void XChoicePeer::ungrabInputImpl() {
	if (this->unfurled) {
		this->unfurled = false;
		this->dragging = false;
		this->mouseInSB = false;
		$nc(this->unfurledChoice)->setVisible(false);
	}
	$XComponentPeer::ungrabInputImpl();
}

void XChoicePeer::handleJavaKeyEvent($KeyEvent* e) {
	if ($nc(e)->getID() == $KeyEvent::KEY_PRESSED) {
		keyPressed(e);
	}
}

void XChoicePeer::keyPressed($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(e)->getKeyCode()) {
	case $KeyEvent::VK_DOWN:
		{}
	case $KeyEvent::VK_KP_DOWN:
		{
			{
				if ($nc(this->helper)->getItemCount() > 1) {
					$nc(this->helper)->down();
					int32_t newIdx = $nc(this->helper)->getSelectedIndex();
					if ($nc(($cast($Choice, this->target)))->getSelectedIndex() != newIdx) {
						$nc(($cast($Choice, this->target)))->select(newIdx);
						postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
						repaint();
					}
				}
				break;
			}
		}
	case $KeyEvent::VK_UP:
		{}
	case $KeyEvent::VK_KP_UP:
		{
			{
				if ($nc(this->helper)->getItemCount() > 1) {
					$nc(this->helper)->up();
					int32_t newIdx = $nc(this->helper)->getSelectedIndex();
					if ($nc(($cast($Choice, this->target)))->getSelectedIndex() != newIdx) {
						$nc(($cast($Choice, this->target)))->select(newIdx);
						postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
						repaint();
					}
				}
				break;
			}
		}
	case $KeyEvent::VK_PAGE_DOWN:
		{
			if (this->unfurled && !this->dragging) {
				int32_t oldIdx = $nc(this->helper)->getSelectedIndex();
				$nc(this->helper)->pageDown();
				int32_t newIdx = $nc(this->helper)->getSelectedIndex();
				if (oldIdx != newIdx) {
					$nc(($cast($Choice, this->target)))->select(newIdx);
					postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
					repaint();
				}
			}
			break;
		}
	case $KeyEvent::VK_PAGE_UP:
		{
			if (this->unfurled && !this->dragging) {
				int32_t oldIdx = $nc(this->helper)->getSelectedIndex();
				$nc(this->helper)->pageUp();
				int32_t newIdx = $nc(this->helper)->getSelectedIndex();
				if (oldIdx != newIdx) {
					$nc(($cast($Choice, this->target)))->select(newIdx);
					postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
					repaint();
				}
			}
			break;
		}
	case $KeyEvent::VK_ESCAPE:
		{}
	case $KeyEvent::VK_ENTER:
		{
			if (this->unfurled) {
				if (this->dragging) {
					if (e->getKeyCode() == $KeyEvent::VK_ESCAPE) {
						$nc(this->helper)->select(this->dragStartIdx);
					} else {
						int32_t newIdx = $nc(this->helper)->getSelectedIndex();
						if (newIdx != ($nc(($cast($Choice, this->target)))->getSelectedIndex())) {
							$nc(($cast($Choice, this->target)))->select(newIdx);
							postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
						}
					}
				}
				hidePopdownMenu();
				this->dragging = false;
				this->wasDragged = false;
				this->mouseInSB = false;
				if (this->choiceListener != nullptr) {
					$nc(this->choiceListener)->unfurledChoiceClosing();
				}
			}
			break;
		}
	default:
		{
			if (this->unfurled) {
				$nc($($Toolkit::getDefaultToolkit()))->beep();
			}
			break;
		}
	}
}

bool XChoicePeer::handlesWheelScrolling() {
	return true;
}

void XChoicePeer::handleJavaMouseWheelEvent($MouseWheelEvent* e) {
	if (this->unfurled && $nc(this->helper)->isVSBVisible()) {
		if ($ListHelper::doWheelScroll($($nc(this->helper)->getVSB()), nullptr, e)) {
			repaint();
		}
	}
}

void XChoicePeer::handleJavaMouseEvent($MouseEvent* e) {
	$XComponentPeer::handleJavaMouseEvent(e);
	int32_t i = $nc(e)->getID();
	switch (i) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			mousePressed(e);
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			mouseReleased(e);
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			mouseDragged(e);
			break;
		}
	}
}

void XChoicePeer::mousePressed($MouseEvent* e) {
	if ($nc(e)->getButton() == $MouseEvent::BUTTON1) {
		this->dragStartIdx = $nc(this->helper)->getSelectedIndex();
		if (this->unfurled) {
			bool var$0 = isMouseEventInChoice(e);
			if (!(var$0 || $nc(this->unfurledChoice)->isMouseEventInside(e))) {
				hidePopdownMenu();
			}
			$nc(this->unfurledChoice)->trackMouse(e);
		} else {
			grabInput();
			$nc(this->unfurledChoice)->toFront();
			this->firstPress = true;
			this->wasDragged = false;
			this->unfurled = true;
		}
	}
}

void XChoicePeer::hidePopdownMenu() {
	ungrabInput();
	$nc(this->unfurledChoice)->setVisible(false);
	this->unfurled = false;
}

void XChoicePeer::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->unfurled) {
		if (this->mouseInSB) {
			$nc(this->unfurledChoice)->trackMouse(e);
		} else {
			bool isMouseEventInside = $nc(this->unfurledChoice)->isMouseEventInside(e);
			bool isMouseInListArea = $nc(this->unfurledChoice)->isMouseInListArea(e);
			if (!$nc(this->helper)->isEmpty() && !isMouseInListArea && this->dragging) {
				$nc(($cast($Choice, this->target)))->select(this->dragStartIdx);
			}
			if (!this->firstPress && isMouseInListArea) {
				hidePopdownMenu();
			}
			if (!this->firstPress && !isMouseEventInside) {
				hidePopdownMenu();
			}
			if (this->firstPress && this->dragging) {
				hidePopdownMenu();
			}
			if (!this->firstPress && !isMouseInListArea && isMouseEventInside && this->dragging) {
				hidePopdownMenu();
			}
			if (!$nc(this->helper)->isEmpty()) {
				if ($nc(this->unfurledChoice)->isMouseInListArea(e)) {
					int32_t newIdx = $nc(this->helper)->getSelectedIndex();
					if (newIdx >= 0) {
						int32_t currentItem = $nc(($cast($Choice, this->target)))->getSelectedIndex();
						if (newIdx != this->dragStartIdx) {
							$nc(($cast($Choice, this->target)))->select(newIdx);
						}
						if (this->wasDragged && $nc(e)->getButton() != $MouseEvent::BUTTON1) {
							$nc(($cast($Choice, this->target)))->select(this->dragStartIdx);
						}
						if ($nc(e)->getButton() == $MouseEvent::BUTTON1 && (!this->firstPress || this->wasDragged) && (newIdx != currentItem)) {
							$nc(($cast($Choice, this->target)))->select(newIdx);
							postEvent($$new($ItemEvent, $cast($Choice, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($nc(($cast($Choice, this->target)))->getItem(newIdx)), $ItemEvent::SELECTED));
						}
						if (this->choiceListener != nullptr) {
							$nc(this->choiceListener)->unfurledChoiceClosing();
						}
					}
				}
			}
			$nc(this->unfurledChoice)->trackMouse(e);
		}
	}
	this->dragging = false;
	this->wasDragged = false;
	this->firstPress = false;
	this->dragStartIdx = -1;
}

void XChoicePeer::mouseDragged($MouseEvent* e) {
	if ($nc(e)->getModifiers() == $MouseEvent::BUTTON1_MASK) {
		this->dragging = true;
		this->wasDragged = true;
		$nc(this->unfurledChoice)->trackMouse(e);
	}
}

$Dimension* XChoicePeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(this->target)->getFont())));
	$var($Choice, c, $cast($Choice, this->target));
	int32_t w = 0;
	for (int32_t i = $nc(c)->countItems(); i-- > 0;) {
		w = $Math::max($nc(fm)->stringWidth($(c->getItem(i))), w);
	}
	int32_t var$0 = $nc(fm)->getMaxAscent();
	return $new($Dimension, w + XChoicePeer::TEXT_XPAD + XChoicePeer::WIDGET_OFFSET, var$0 + fm->getMaxDescent() + XChoicePeer::TEXT_YPAD);
}

void XChoicePeer::layout() {
}

void XChoicePeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	flush();
	$var($Dimension, size, getPeerSize());
	$nc(g)->setColor($(getPeerBackground()));
	g->fillRect(0, 0, this->width, this->height);
	drawMotif3DRect(g, 1, 1, this->width - 2, this->height - 2, false);
	drawMotif3DRect(g, this->width - XChoicePeer::WIDGET_OFFSET, (this->height / 2) - 3, 12, 6, false);
	bool var$0 = !$nc(this->helper)->isEmpty();
	if (var$0 && $nc(this->helper)->getSelectedIndex() != -1) {
		g->setFont($(getPeerFont()));
		$var($FontMetrics, fm, g->getFontMetrics());
		$var($String, lbl, $nc(this->helper)->getItem($nc(this->helper)->getSelectedIndex()));
		if (lbl != nullptr && this->drawSelectedItem) {
			g->setClip(1, 1, this->width - XChoicePeer::WIDGET_OFFSET - 2, this->height);
			if (isEnabled()) {
				g->setColor($(getPeerForeground()));
				int32_t var$1 = this->height + $nc(fm)->getMaxAscent();
				g->drawString(lbl, 5, (var$1 - fm->getMaxDescent()) / 2);
			} else {
				g->setColor($($nc($(getPeerBackground()))->brighter()));
				int32_t var$2 = this->height + $nc(fm)->getMaxAscent();
				g->drawString(lbl, 5, (var$2 - fm->getMaxDescent()) / 2);
				g->setColor($($nc($(getPeerBackground()))->darker()));
				int32_t var$3 = this->height + $nc(fm)->getMaxAscent();
				g->drawString(lbl, 4, ((var$3 - fm->getMaxDescent()) / 2) - 1);
			}
			g->setClip(0, 0, this->width, this->height);
		}
	}
	if (hasFocus()) {
		paintFocus(g, $nc(XChoicePeer::focusInsets)->left, $nc(XChoicePeer::focusInsets)->top, $nc(size)->width - ($nc(XChoicePeer::focusInsets)->left + $nc(XChoicePeer::focusInsets)->right) - 1, size->height - ($nc(XChoicePeer::focusInsets)->top + $nc(XChoicePeer::focusInsets)->bottom) - 1);
	}
	if (this->unfurled) {
		$nc(this->unfurledChoice)->repaint();
	}
	flush();
}

void XChoicePeer::paintFocus($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor(XChoicePeer::focusColor);
	g->drawRect(x, y, w, h);
}

void XChoicePeer::select(int32_t index) {
	$nc(this->helper)->select(index);
	$nc(this->helper)->setFocusedIndex(index);
	repaint();
}

void XChoicePeer::add($String* item, int32_t index) {
	$nc(this->helper)->add(item, index);
	repaint();
}

void XChoicePeer::remove(int32_t index) {
	bool selected = (index == $nc(this->helper)->getSelectedIndex());
	bool var$0 = index >= $nc(this->helper)->firstDisplayedIndex();
	bool visibled = (var$0 && index <= $nc(this->helper)->lastDisplayedIndex());
	$nc(this->helper)->remove(index);
	if (selected) {
		if ($nc(this->helper)->isEmpty()) {
			$nc(this->helper)->select(-1);
		} else {
			$nc(this->helper)->select(0);
		}
	}
	if (!this->unfurled) {
		if ($nc(this->helper)->isEmpty()) {
			repaint();
		}
		return;
	}
	if (visibled) {
		$var($Rectangle, r, $nc(this->unfurledChoice)->placeOnScreen());
		$nc(this->unfurledChoice)->reshape($nc(r)->x, r->y, r->width, r->height);
		return;
	}
	if (visibled || selected) {
		repaint();
	}
}

void XChoicePeer::removeAll() {
	$nc(this->helper)->removeAll();
	$nc(this->helper)->select(-1);
	$var($Rectangle, r, $nc(this->unfurledChoice)->placeOnScreen());
	$nc(this->unfurledChoice)->reshape($nc(r)->x, r->y, r->width, r->height);
	repaint();
}

void XChoicePeer::setFont($Font* font) {
	$XComponentPeer::setFont(font);
	$nc(this->helper)->setFont(this->font);
}

void XChoicePeer::setForeground($Color* c) {
	$XComponentPeer::setForeground(c);
	$nc(this->helper)->updateColors($(getGUIcolors()));
}

void XChoicePeer::setBackground($Color* c) {
	$XComponentPeer::setBackground(c);
	$nc(this->unfurledChoice)->setBackground(c);
	$nc(this->helper)->updateColors($(getGUIcolors()));
	updateMotifColors(c);
}

void XChoicePeer::setDrawSelectedItem(bool value) {
	this->drawSelectedItem = value;
}

void XChoicePeer::setAlignUnder($Component* comp) {
	$set(this, alignUnder, comp);
}

void XChoicePeer::addXChoicePeerListener($XChoicePeerListener* l) {
	$set(this, choiceListener, l);
}

void XChoicePeer::removeXChoicePeerListener() {
	$set(this, choiceListener, nullptr);
}

bool XChoicePeer::isUnfurled() {
	return this->unfurled;
}

void XChoicePeer::stateChangedICCCM(int32_t oldState, int32_t newState) {
	if (this->unfurled && oldState != newState) {
		hidePopdownMenu();
	}
}

void XChoicePeer::stateChangedJava(int32_t oldState, int32_t newState) {
	if (this->unfurled && oldState != newState) {
		hidePopdownMenu();
	}
}

void XChoicePeer::initGraphicsConfiguration() {
	$XComponentPeer::initGraphicsConfiguration();
	if (this->unfurledChoice != nullptr) {
		$nc(this->unfurledChoice)->initGraphicsConfiguration();
		$nc(this->unfurledChoice)->doValidateSurface();
	}
}

void XChoicePeer::dispose() {
	if (this->unfurledChoice != nullptr) {
		$nc(this->unfurledChoice)->destroy();
	}
	$XComponentPeer::dispose();
}

bool XChoicePeer::prePostEvent($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->unfurled) {
		if ($instanceOf($MouseWheelEvent, e)) {
			return $XComponentPeer::prePostEvent(e);
		}
		if ($instanceOf($KeyEvent, e)) {
			$var($InvocationEvent, ev, $new($InvocationEvent, this->target, $$new($XChoicePeer$1, this, e)));
			postEvent(ev);
			return true;
		} else if ($instanceOf($MouseEvent, e)) {
			$var($MouseEvent, me, $cast($MouseEvent, e));
			int32_t eventId = $nc(e)->getID();
			if ($nc(this->unfurledChoice)->isMouseEventInside(me) || (!this->firstPress && eventId == $MouseEvent::MOUSE_DRAGGED)) {
				return handleMouseEventByChoice(me);
			}
			if (eventId == $MouseEvent::MOUSE_MOVED) {
				return handleMouseEventByChoice(me);
			}
			bool var$0 = !this->firstPress;
			if (var$0) {
				bool var$1 = isMouseEventInChoice(me);
				var$0 = !(var$1 || $nc(this->unfurledChoice)->isMouseEventInside(me));
			}
			if (var$0 && (eventId == $MouseEvent::MOUSE_PRESSED || eventId == $MouseEvent::MOUSE_RELEASED || eventId == $MouseEvent::MOUSE_CLICKED)) {
				return handleMouseEventByChoice(me);
			}
		}
	}
	return $XComponentPeer::prePostEvent(e);
}

bool XChoicePeer::handleMouseEventByChoice($MouseEvent* me) {
	$useLocalCurrentObjectStackCache();
	$var($InvocationEvent, ev, $new($InvocationEvent, this->target, $$new($XChoicePeer$2, this, me)));
	postEvent(ev);
	return true;
}

bool XChoicePeer::isMouseEventInChoice($MouseEvent* e) {
	int32_t x = $nc(e)->getX();
	int32_t y = e->getY();
	$var($Rectangle, choiceRect, getBounds());
	if (x < 0 || x > $nc(choiceRect)->width || y < 0 || y > $nc(choiceRect)->height) {
		return false;
	}
	return true;
}

void clinit$XChoicePeer($Class* class$) {
	$assignStatic(XChoicePeer::log, $PlatformLogger::getLogger("sun.awt.X11.XChoicePeer"_s));
	$assignStatic(XChoicePeer::focusInsets, $new($Insets, 0, 0, 0, 0));
	$init($Color);
	$assignStatic(XChoicePeer::focusColor, $Color::black);
}

XChoicePeer::XChoicePeer() {
}

$Class* XChoicePeer::load$($String* name, bool initialize) {
	$loadClass(XChoicePeer, name, initialize, &_XChoicePeer_ClassInfo_, clinit$XChoicePeer, allocate$XChoicePeer);
	return class$;
}

$Class* XChoicePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun