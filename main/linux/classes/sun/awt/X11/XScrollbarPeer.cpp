#include <sun/awt/X11/XScrollbarPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/UIDefaults.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ADJUSTMENT_VALUE_CHANGED
#undef BACKGROUND_COLOR
#undef BUTTON1_MASK
#undef DEFAULT_LENGTH
#undef DEFAULT_WIDTH_LINUX
#undef DEFAULT_WIDTH_SOLARIS
#undef FINER
#undef KEY_RELEASED
#undef MOUSE_DRAGGED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef VERTICAL
#undef VK_DOWN
#undef VK_END
#undef VK_HOME
#undef VK_LEFT
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP
#undef VK_RIGHT
#undef VK_UP

using $ColorArray = $Array<::java::awt::Color>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Scrollbar = ::java::awt::Scrollbar;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XHorizontalScrollbar = ::sun::awt::X11::XHorizontalScrollbar;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XVerticalScrollbar = ::sun::awt::X11::XVerticalScrollbar;
using $XWindow = ::sun::awt::X11::XWindow;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XScrollbarPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XScrollbarPeer, log)},
	{"DEFAULT_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XScrollbarPeer, DEFAULT_LENGTH)},
	{"DEFAULT_WIDTH_SOLARIS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XScrollbarPeer, DEFAULT_WIDTH_SOLARIS)},
	{"DEFAULT_WIDTH_LINUX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XScrollbarPeer, DEFAULT_WIDTH_LINUX)},
	{"tsb", "Lsun/awt/X11/XScrollbar;", nullptr, 0, $field(XScrollbarPeer, tsb)},
	{}
};

$MethodInfo _XScrollbarPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Scrollbar;)V", nullptr, 0, $method(static_cast<void(XScrollbarPeer::*)($Scrollbar*)>(&XScrollbarPeer::init$))},
	{"getDefaultDimension", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XScrollbarPeer::*)()>(&XScrollbarPeer::getDefaultDimension))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"notifyValue", "(Lsun/awt/X11/XScrollbar;IIZ)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaintScrollbarRequest", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{"setValues", "(IIII)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XScrollbarPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XScrollbarPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.ScrollbarPeer,sun.awt.X11.XScrollbarClient",
	_XScrollbarPeer_FieldInfo_,
	_XScrollbarPeer_MethodInfo_
};

$Object* allocate$XScrollbarPeer($Class* clazz) {
	return $of($alloc(XScrollbarPeer));
}

void XScrollbarPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XScrollbarPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XScrollbarPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XScrollbarPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XScrollbarPeer::isFocusable() {
	 return this->$XComponentPeer::isFocusable();
}

bool XScrollbarPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XScrollbarPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XScrollbarPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XScrollbarPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XScrollbarPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XScrollbarPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XScrollbarPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XScrollbarPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XScrollbarPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XScrollbarPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XScrollbarPeer::setBackground($Color* c) {
	this->$XComponentPeer::setBackground(c);
}

void XScrollbarPeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XScrollbarPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XScrollbarPeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XScrollbarPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XScrollbarPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XScrollbarPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XScrollbarPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XScrollbarPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XScrollbarPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XScrollbarPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XScrollbarPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XScrollbarPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XScrollbarPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XScrollbarPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XScrollbarPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XScrollbarPeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XScrollbarPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$Component* XScrollbarPeer::getEventSource() {
	 return this->$XComponentPeer::getEventSource();
}

$GraphicsConfiguration* XScrollbarPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XScrollbarPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XScrollbarPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XScrollbarPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XScrollbarPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XScrollbarPeer::finalize() {
	this->$XComponentPeer::finalize();
}

$PlatformLogger* XScrollbarPeer::log = nullptr;
int32_t XScrollbarPeer::DEFAULT_WIDTH_LINUX = 0;

void XScrollbarPeer::preInit($XCreateWindowParams* params) {
	$XComponentPeer::preInit(params);
	$var($Scrollbar, target, $cast($Scrollbar, this->target));
	if ($nc(target)->getOrientation() == $Scrollbar::VERTICAL) {
		$set(this, tsb, $new($XVerticalScrollbar, this));
	} else {
		$set(this, tsb, $new($XHorizontalScrollbar, this));
	}
	int32_t min = $nc(target)->getMinimum();
	int32_t max = target->getMaximum();
	int32_t vis = target->getVisibleAmount();
	int32_t val = target->getValue();
	int32_t line = target->getLineIncrement();
	int32_t page = target->getPageIncrement();
	$nc(this->tsb)->setValues(val, vis, min, max, line, page);
}

void XScrollbarPeer::init$($Scrollbar* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
	$set(this, target, target);
	xSetVisible(true);
}

int32_t XScrollbarPeer::getDefaultDimension() {
	if ($nc($($System::getProperty("os.name"_s)))->equals("Linux"_s)) {
		return XScrollbarPeer::DEFAULT_WIDTH_LINUX;
	} else {
		return XScrollbarPeer::DEFAULT_WIDTH_SOLARIS;
	}
}

$Dimension* XScrollbarPeer::getMinimumSize() {
	$var($Scrollbar, sb, $cast($Scrollbar, this->target));
	return ($nc(sb)->getOrientation() == $Scrollbar::VERTICAL) ? $new($Dimension, getDefaultDimension(), XScrollbarPeer::DEFAULT_LENGTH) : $new($Dimension, XScrollbarPeer::DEFAULT_LENGTH, getDefaultDimension());
}

void XScrollbarPeer::paintPeer($Graphics* g) {
	$var($ColorArray, colors, getGUIcolors());
	$nc(g)->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	$nc(this->tsb)->paint(g, colors, true);
}

void XScrollbarPeer::repaintScrollbarRequest($XScrollbar* sb) {
	repaint();
}

void XScrollbarPeer::notifyValue($XScrollbar* obj, int32_t type, int32_t value, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	$var($Scrollbar, sb, $cast($Scrollbar, this->target));
	$nc(sb)->setValue(value);
	postEvent($$new($AdjustmentEvent, sb, $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED, type, value, isAdjusting));
}

void XScrollbarPeer::handleJavaMouseEvent($MouseEvent* mouseEvent) {
	$XComponentPeer::handleJavaMouseEvent(mouseEvent);
	int32_t x = $nc(mouseEvent)->getX();
	int32_t y = mouseEvent->getY();
	int32_t modifiers = mouseEvent->getModifiers();
	int32_t id = mouseEvent->getID();
	if (((int32_t)(mouseEvent->getModifiers() & (uint32_t)$InputEvent::BUTTON1_MASK)) == 0) {
		return;
	}
	switch (mouseEvent->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			$nc(this->target)->requestFocus();
			$nc(this->tsb)->handleMouseEvent(id, modifiers, x, y);
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			$nc(this->tsb)->handleMouseEvent(id, modifiers, x, y);
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			$nc(this->tsb)->handleMouseEvent(id, modifiers, x, y);
			break;
		}
	}
}

void XScrollbarPeer::handleJavaKeyEvent($KeyEvent* event) {
	$XComponentPeer::handleJavaKeyEvent(event);
	$init($PlatformLogger$Level);
	if ($nc(XScrollbarPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbarPeer::log)->finer($$str({"KeyEvent on scrollbar: "_s, event}));
	}
	bool var$0 = !($nc(event)->isConsumed());
	if (var$0 && event->getID() == $KeyEvent::KEY_RELEASED) {
		switch (event->getKeyCode()) {
		case $KeyEvent::VK_UP:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling up"_s);
				int32_t var$1 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$1 - $nc(this->tsb)->getUnitIncrement());
				break;
			}
		case $KeyEvent::VK_DOWN:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling down"_s);
				int32_t var$2 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$2 + $nc(this->tsb)->getUnitIncrement());
				break;
			}
		case $KeyEvent::VK_LEFT:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling up"_s);
				int32_t var$3 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$3 - $nc(this->tsb)->getUnitIncrement());
				break;
			}
		case $KeyEvent::VK_RIGHT:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling down"_s);
				int32_t var$4 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$4 + $nc(this->tsb)->getUnitIncrement());
				break;
			}
		case $KeyEvent::VK_PAGE_UP:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling page up"_s);
				int32_t var$5 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$5 - $nc(this->tsb)->getBlockIncrement());
				break;
			}
		case $KeyEvent::VK_PAGE_DOWN:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling page down"_s);
				int32_t var$6 = $nc(this->tsb)->getValue();
				$nc(this->tsb)->notifyValue(var$6 + $nc(this->tsb)->getBlockIncrement());
				break;
			}
		case $KeyEvent::VK_HOME:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling to home"_s);
				$nc(this->tsb)->notifyValue(0);
				break;
			}
		case $KeyEvent::VK_END:
			{
				$nc(XScrollbarPeer::log)->finer("Scrolling to end"_s);
				$nc(this->tsb)->notifyValue($nc(this->tsb)->getMaximum());
				break;
			}
		}
	}
}

void XScrollbarPeer::setValue(int32_t value) {
	$nc(this->tsb)->setValue(value);
	repaint();
}

void XScrollbarPeer::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$nc(this->tsb)->setValues(value, visible, minimum, maximum);
	repaint();
}

void XScrollbarPeer::setLineIncrement(int32_t l) {
	$nc(this->tsb)->setUnitIncrement(l);
}

void XScrollbarPeer::setPageIncrement(int32_t p) {
	$nc(this->tsb)->setBlockIncrement(p);
}

void XScrollbarPeer::layout() {
	$XComponentPeer::layout();
	$nc(this->tsb)->setSize(this->width, this->height);
}

void clinit$XScrollbarPeer($Class* class$) {
	$assignStatic(XScrollbarPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XScrollbarPeer"_s));
	{
		XScrollbarPeer::DEFAULT_WIDTH_LINUX = $nc($($XToolkit::getUIDefaults()))->getInt("ScrollBar.defaultWidth"_s);
	}
}

XScrollbarPeer::XScrollbarPeer() {
}

$Class* XScrollbarPeer::load$($String* name, bool initialize) {
	$loadClass(XScrollbarPeer, name, initialize, &_XScrollbarPeer_ClassInfo_, clinit$XScrollbarPeer, allocate$XScrollbarPeer);
	return class$;
}

$Class* XScrollbarPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun