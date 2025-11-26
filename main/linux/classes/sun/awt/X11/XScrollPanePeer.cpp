#include <sun/awt/X11/XScrollPanePeer.h>

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
#include <java/awt/ScrollPane.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <javax/swing/UIDefaults.h>
#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XScrollPanePeer$XScrollPaneContentWindow.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef BUTTON1_MASK
#undef HORIZONTAL
#undef MARGIN
#undef MOUSE_DRAGGED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef PAINT
#undef SCROLLBAR
#undef SCROLLBARS_ALWAYS
#undef SCROLLBARS_AS_NEEDED
#undef SCROLLBARS_NEVER
#undef SCROLLBAR_INSET
#undef SPACE
#undef TRACK
#undef UPDATE
#undef VERTICAL

using $ColorArray = $Array<::java::awt::Color>;
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
using $ScrollPane = ::java::awt::ScrollPane;
using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ScrollPaneAdjustableAccessor = ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XHorizontalScrollbar = ::sun::awt::X11::XHorizontalScrollbar;
using $XScrollPanePeer$XScrollPaneContentWindow = ::sun::awt::X11::XScrollPanePeer$XScrollPaneContentWindow;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XVerticalScrollbar = ::sun::awt::X11::XVerticalScrollbar;
using $XWindow = ::sun::awt::X11::XWindow;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XScrollPanePeer_FieldInfo_[] = {
	{"MARGIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollPanePeer, MARGIN)},
	{"SCROLLBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XScrollPanePeer, SCROLLBAR)},
	{"SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollPanePeer, SPACE)},
	{"SCROLLBAR_INSET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollPanePeer, SCROLLBAR_INSET)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollPanePeer, VERTICAL)},
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollPanePeer, HORIZONTAL)},
	{"vsb", "Lsun/awt/X11/XVerticalScrollbar;", nullptr, 0, $field(XScrollPanePeer, vsb)},
	{"hsb", "Lsun/awt/X11/XHorizontalScrollbar;", nullptr, 0, $field(XScrollPanePeer, hsb)},
	{"clip", "Lsun/awt/X11/XWindow;", nullptr, 0, $field(XScrollPanePeer, clip)},
	{"active", "I", nullptr, 0, $field(XScrollPanePeer, active)},
	{"hsbSpace", "I", nullptr, 0, $field(XScrollPanePeer, hsbSpace)},
	{"vsbSpace", "I", nullptr, 0, $field(XScrollPanePeer, vsbSpace)},
	{"vval", "I", nullptr, 0, $field(XScrollPanePeer, vval)},
	{"hval", "I", nullptr, 0, $field(XScrollPanePeer, hval)},
	{"vmax", "I", nullptr, 0, $field(XScrollPanePeer, vmax)},
	{"hmax", "I", nullptr, 0, $field(XScrollPanePeer, hmax)},
	{}
};

$MethodInfo _XScrollPanePeer_MethodInfo_[] = {
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
	{"*dispose", "()V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/ScrollPane;)V", nullptr, 0, $method(static_cast<void(XScrollPanePeer::*)($ScrollPane*)>(&XScrollPanePeer::init$))},
	{"childResized", "(II)V", nullptr, $PUBLIC},
	{"getChildSize", "()Ljava/awt/Dimension;", nullptr, 0},
	{"getContentWindow", "()J", nullptr, $PUBLIC},
	{"getHScrollbarHeight", "()I", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getScrollChild", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(XScrollPanePeer::*)()>(&XScrollPanePeer::getScrollChild))},
	{"getVScrollbarWidth", "()I", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"inHorizontalScrollbar", "(II)Z", nullptr, 0},
	{"inVerticalScrollbar", "(II)Z", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"notifyValue", "(Lsun/awt/X11/XScrollbar;IIZ)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintHorScrollbar", "(Ljava/awt/Graphics;[Ljava/awt/Color;Z)V", nullptr, 0},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paintScrollBars", "(Ljava/awt/Graphics;[Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(XScrollPanePeer::*)($Graphics*,$ColorArray*)>(&XScrollPanePeer::paintScrollBars))},
	{"paintVerScrollbar", "(Ljava/awt/Graphics;[Ljava/awt/Color;Z)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaintScrollBars", "()V", nullptr, 0},
	{"repaintScrollbarRequest", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"scroll", "(III)V", nullptr, 0},
	{"scroll", "(IIII)V", nullptr, 0},
	{"setAdjustableValue", "(Ljava/awt/ScrollPaneAdjustable;II)V", nullptr, $PRIVATE, $method(static_cast<void(XScrollPanePeer::*)($ScrollPaneAdjustable*,int32_t,int32_t)>(&XScrollPanePeer::setAdjustableValue))},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setScrollPosition", "(II)V", nullptr, $PUBLIC},
	{"setScrollbarSpace", "()Z", nullptr, 0},
	{"setUnitIncrement", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"setViewportSize", "()V", nullptr, 0},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XScrollPanePeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow", "sun.awt.X11.XScrollPanePeer", "XScrollPaneContentWindow", $STATIC},
	{}
};

$ClassInfo _XScrollPanePeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XScrollPanePeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.ScrollPanePeer,sun.awt.X11.XScrollbarClient",
	_XScrollPanePeer_FieldInfo_,
	_XScrollPanePeer_MethodInfo_,
	nullptr,
	nullptr,
	_XScrollPanePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow"
};

$Object* allocate$XScrollPanePeer($Class* clazz) {
	return $of($alloc(XScrollPanePeer));
}

void XScrollPanePeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XScrollPanePeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XScrollPanePeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XScrollPanePeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XScrollPanePeer::isFocusable() {
	 return this->$XComponentPeer::isFocusable();
}

bool XScrollPanePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XScrollPanePeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XScrollPanePeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XScrollPanePeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XScrollPanePeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XScrollPanePeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

$Dimension* XScrollPanePeer::getMinimumSize() {
	 return this->$XComponentPeer::getMinimumSize();
}

$Dimension* XScrollPanePeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XScrollPanePeer::layout() {
	this->$XComponentPeer::layout();
}

void XScrollPanePeer::setBackground($Color* c) {
	this->$XComponentPeer::setBackground(c);
}

void XScrollPanePeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XScrollPanePeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XScrollPanePeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XScrollPanePeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XScrollPanePeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XScrollPanePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

void XScrollPanePeer::beginValidate() {
	this->$XComponentPeer::beginValidate();
}

void XScrollPanePeer::endValidate() {
	this->$XComponentPeer::endValidate();
}

bool XScrollPanePeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XScrollPanePeer::beginLayout() {
	this->$XComponentPeer::beginLayout();
}

void XScrollPanePeer::endLayout() {
	this->$XComponentPeer::endLayout();
}

void XScrollPanePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XScrollPanePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XScrollPanePeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XScrollPanePeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XScrollPanePeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XScrollPanePeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XScrollPanePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XScrollPanePeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XScrollPanePeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XScrollPanePeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$Component* XScrollPanePeer::getEventSource() {
	 return this->$XComponentPeer::getEventSource();
}

$GraphicsConfiguration* XScrollPanePeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XScrollPanePeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XScrollPanePeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XScrollPanePeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XScrollPanePeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XScrollPanePeer::finalize() {
	this->$XComponentPeer::finalize();
}

int32_t XScrollPanePeer::SCROLLBAR = 0;

void XScrollPanePeer::init$($ScrollPane* target) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::init$(static_cast<$Component*>(target));
	this->active = XScrollPanePeer::VERTICAL;
	$set(this, clip, nullptr);
	$var($XWindow, c, $new($XScrollPanePeer$XScrollPaneContentWindow, target, this->window));
	$set(this, clip, c);
	$set(this, vsb, $new($XVerticalScrollbar, this));
	$set(this, hsb, $new($XHorizontalScrollbar, this));
	if ($nc(target)->getScrollbarDisplayPolicy() == $ScrollPane::SCROLLBARS_ALWAYS) {
		this->vsbSpace = (this->hsbSpace = XScrollPanePeer::SCROLLBAR);
	} else {
		this->vsbSpace = (this->hsbSpace = 0);
	}
	int32_t unitIncrement = 1;
	$var($Adjustable, vAdjustable, $nc(target)->getVAdjustable());
	if (vAdjustable != nullptr) {
		unitIncrement = vAdjustable->getUnitIncrement();
	}
	int32_t h = this->height - this->hsbSpace;
	$nc(this->vsb)->setValues(0, h, 0, h, unitIncrement, $Math::max(1, $cast(int32_t, (h * 0.9))));
	$nc(this->vsb)->setSize(this->vsbSpace - XScrollPanePeer::SCROLLBAR_INSET, h);
	unitIncrement = 1;
	$var($Adjustable, hAdjustable, target->getHAdjustable());
	if (hAdjustable != nullptr) {
		unitIncrement = hAdjustable->getUnitIncrement();
	}
	int32_t w = this->width - this->vsbSpace;
	$nc(this->hsb)->setValues(0, w, 0, w, unitIncrement, $Math::max(1, $cast(int32_t, (w * 0.9))));
	$nc(this->hsb)->setSize(w, this->hsbSpace - XScrollPanePeer::SCROLLBAR_INSET);
	setViewportSize();
	$nc(this->clip)->xSetVisible(true);
}

int64_t XScrollPanePeer::getContentWindow() {
	return (this->clip == nullptr) ? this->window : $nc(this->clip)->getWindow();
}

void XScrollPanePeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	$XComponentPeer::setBounds(x, y, w, h, op);
	if (this->clip == nullptr) {
		return;
	}
	setScrollbarSpace();
	setViewportSize();
	repaint();
}

$Insets* XScrollPanePeer::getInsets() {
	return $new($Insets, XScrollPanePeer::MARGIN, XScrollPanePeer::MARGIN, XScrollPanePeer::MARGIN + this->hsbSpace, XScrollPanePeer::MARGIN + this->vsbSpace);
}

int32_t XScrollPanePeer::getHScrollbarHeight() {
	return XScrollPanePeer::SCROLLBAR;
}

int32_t XScrollPanePeer::getVScrollbarWidth() {
	return XScrollPanePeer::SCROLLBAR;
}

void XScrollPanePeer::childResized(int32_t w, int32_t h) {
	if (setScrollbarSpace()) {
		setViewportSize();
	}
	repaint();
}

$Dimension* XScrollPanePeer::getChildSize() {
	$useLocalCurrentObjectStackCache();
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	if ($nc(sp)->countComponents() > 0) {
		$var($Component, c, sp->getComponent(0));
		return $nc(c)->size();
	} else {
		return $new($Dimension, 0, 0);
	}
}

bool XScrollPanePeer::setScrollbarSpace() {
	$useLocalCurrentObjectStackCache();
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	bool changed = false;
	int32_t sbDisplayPolicy = $nc(sp)->getScrollbarDisplayPolicy();
	if (sbDisplayPolicy == $ScrollPane::SCROLLBARS_NEVER) {
		return changed;
	}
	$var($Dimension, cSize, getChildSize());
	if (sbDisplayPolicy == $ScrollPane::SCROLLBARS_AS_NEEDED) {
		int32_t oldHsbSpace = this->hsbSpace;
		int32_t oldVsbSpace = this->vsbSpace;
		this->hsbSpace = ($nc(cSize)->width <= (this->width - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
		this->vsbSpace = ($nc(cSize)->height <= (this->height - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
		if (this->hsbSpace == 0 && this->vsbSpace != 0) {
			this->hsbSpace = ($nc(cSize)->width <= (this->width - XScrollPanePeer::SCROLLBAR - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
		}
		if (this->vsbSpace == 0 && this->hsbSpace != 0) {
			this->vsbSpace = ($nc(cSize)->height <= (this->height - XScrollPanePeer::SCROLLBAR - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
		}
		if (oldHsbSpace != this->hsbSpace || oldVsbSpace != this->vsbSpace) {
			changed = true;
		}
	}
	if (this->vsbSpace > 0) {
		int32_t vis = this->height - (2 * XScrollPanePeer::MARGIN) - this->hsbSpace;
		int32_t max = $Math::max($nc(cSize)->height, vis);
		$nc(this->vsb)->setValues($nc(this->vsb)->getValue(), vis, 0, max);
		$nc(this->vsb)->setBlockIncrement($cast(int32_t, ($nc(this->vsb)->getVisibleAmount() * 0.9)));
		$nc(this->vsb)->setSize(this->vsbSpace - XScrollPanePeer::SCROLLBAR_INSET, this->height - this->hsbSpace);
	}
	if (this->hsbSpace > 0) {
		int32_t vis = this->width - (2 * XScrollPanePeer::MARGIN) - this->vsbSpace;
		int32_t max = $Math::max($nc(cSize)->width, vis);
		$nc(this->hsb)->setValues($nc(this->hsb)->getValue(), vis, 0, max);
		$nc(this->hsb)->setBlockIncrement($cast(int32_t, ($nc(this->hsb)->getVisibleAmount() * 0.9)));
		$nc(this->hsb)->setSize(this->width - this->vsbSpace, this->hsbSpace - XScrollPanePeer::SCROLLBAR_INSET);
	}
	bool must_scroll = false;
	$var($Point, p, $new($Point, 0, 0));
	if ($nc(($cast($ScrollPane, this->target)))->getComponentCount() > 0) {
		$assign(p, $nc($($nc(($cast($ScrollPane, this->target)))->getComponent(0)))->location());
		if ((this->vsbSpace == 0) && ($nc(p)->y < 0)) {
			p->y = 0;
			must_scroll = true;
		}
		if ((this->hsbSpace == 0) && ($nc(p)->x < 0)) {
			p->x = 0;
			must_scroll = true;
		}
	}
	if (must_scroll) {
		scroll(this->x, this->y, XScrollPanePeer::VERTICAL | XScrollPanePeer::HORIZONTAL);
	}
	return changed;
}

void XScrollPanePeer::setViewportSize() {
	$nc(this->clip)->xSetBounds(XScrollPanePeer::MARGIN, XScrollPanePeer::MARGIN, this->width - (2 * XScrollPanePeer::MARGIN) - this->vsbSpace, this->height - (2 * XScrollPanePeer::MARGIN) - this->hsbSpace);
}

void XScrollPanePeer::setUnitIncrement($Adjustable* adj, int32_t u) {
	if ($nc(adj)->getOrientation() == $Adjustable::VERTICAL) {
		$nc(this->vsb)->setUnitIncrement(u);
	} else {
		$nc(this->hsb)->setUnitIncrement(u);
	}
}

void XScrollPanePeer::setValue($Adjustable* adj, int32_t v) {
	if ($nc(adj)->getOrientation() == $Adjustable::VERTICAL) {
		scroll(-1, v, XScrollPanePeer::VERTICAL);
	} else {
		scroll(v, -1, XScrollPanePeer::HORIZONTAL);
	}
}

void XScrollPanePeer::setScrollPosition(int32_t x, int32_t y) {
	scroll(x, y, XScrollPanePeer::VERTICAL | XScrollPanePeer::HORIZONTAL);
}

void XScrollPanePeer::scroll(int32_t x, int32_t y, int32_t flag) {
	scroll(x, y, flag, $AdjustmentEvent::TRACK);
}

void XScrollPanePeer::scroll(int32_t x, int32_t y, int32_t flag, int32_t type) {
	$useLocalCurrentObjectStackCache();
	checkSecurity();
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	$var($Component, c, getScrollChild());
	if (c == nullptr) {
		return;
	}
	int32_t sx = 0;
	int32_t sy = 0;
	$var($ColorArray, colors, getGUIcolors());
	if ($nc(sp)->getScrollbarDisplayPolicy() == $ScrollPane::SCROLLBARS_NEVER) {
		sx = -x;
		sy = -y;
	} else {
		$var($Point, p, $nc(c)->location());
		sx = $nc(p)->x;
		sy = p->y;
		if (((int32_t)(flag & (uint32_t)XScrollPanePeer::HORIZONTAL)) != 0) {
			int32_t var$0 = $nc(this->hsb)->getMaximum();
			$nc(this->hsb)->setValue($Math::min(x, var$0 - $nc(this->hsb)->getVisibleAmount()));
			$var($ScrollPaneAdjustable, hadj, $cast($ScrollPaneAdjustable, sp->getHAdjustable()));
			setAdjustableValue(hadj, $nc(this->hsb)->getValue(), type);
			sx = -($nc(this->hsb)->getValue());
			$var($Graphics, g, getGraphics());
			if (g != nullptr) {
				{
					$var($Throwable, var$1, nullptr);
					try {
						paintHorScrollbar(g, colors, true);
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						g->dispose();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		}
		if (((int32_t)(flag & (uint32_t)XScrollPanePeer::VERTICAL)) != 0) {
			int32_t var$3 = $nc(this->vsb)->getMaximum();
			$nc(this->vsb)->setValue($Math::min(y, var$3 - $nc(this->vsb)->getVisibleAmount()));
			$var($ScrollPaneAdjustable, vadj, $cast($ScrollPaneAdjustable, sp->getVAdjustable()));
			setAdjustableValue(vadj, $nc(this->vsb)->getValue(), type);
			sy = -($nc(this->vsb)->getValue());
			$var($Graphics, g, getGraphics());
			if (g != nullptr) {
				{
					$var($Throwable, var$4, nullptr);
					try {
						paintVerScrollbar(g, colors, true);
					} catch ($Throwable& var$5) {
						$assign(var$4, var$5);
					} /*finally*/ {
						g->dispose();
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
			}
		}
	}
	$nc(c)->move(sx, sy);
}

void XScrollPanePeer::setAdjustableValue($ScrollPaneAdjustable* adj, int32_t value, int32_t type) {
	$nc($($AWTAccessor::getScrollPaneAdjustableAccessor()))->setTypedValue(adj, value, type);
}

void XScrollPanePeer::paintPeer($Graphics* g) {
	$var($ColorArray, colors, getGUIcolors());
	$nc(g)->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	int32_t h = this->height - this->hsbSpace;
	int32_t w = this->width - this->vsbSpace;
	g->fillRect(0, 0, w, h);
	g->fillRect(w, h, this->vsbSpace, this->hsbSpace);
	{
		draw3DRect(g, colors, 0, 0, w - 1, h - 1, false);
	}
	paintScrollBars(g, colors);
}

void XScrollPanePeer::paintScrollBars($Graphics* g, $ColorArray* colors) {
	if (this->vsbSpace > 0) {
		paintVerScrollbar(g, colors, true);
	}
	if (this->hsbSpace > 0) {
		paintHorScrollbar(g, colors, true);
	}
}

void XScrollPanePeer::repaintScrollBars() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	$var($ColorArray, colors, getGUIcolors());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				paintScrollBars(g, colors);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XScrollPanePeer::repaintScrollbarRequest($XScrollbar* sb) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	$var($ColorArray, colors, getGUIcolors());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				if ($equals(sb, this->vsb)) {
					paintVerScrollbar(g, colors, true);
				} else if ($equals(sb, this->hsb)) {
					paintHorScrollbar(g, colors, true);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XScrollPanePeer::handleEvent($AWTEvent* e) {
	$XComponentPeer::handleEvent(e);
	int32_t id = $nc(e)->getID();
	switch (id) {
	case $PaintEvent::PAINT:
		{}
	case $PaintEvent::UPDATE:
		{
			repaintScrollBars();
			break;
		}
	}
}

void XScrollPanePeer::paintHorScrollbar($Graphics* g, $ColorArray* colors, bool paintAll) {
	$useLocalCurrentObjectStackCache();
	if (this->hsbSpace <= 0) {
		return;
	}
	$var($Graphics, ng, $nc(g)->create());
	g->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	int32_t w = this->width - this->vsbSpace - (2 * XScrollPanePeer::MARGIN);
	g->fillRect(XScrollPanePeer::MARGIN, this->height - XScrollPanePeer::SCROLLBAR, w, XScrollPanePeer::SPACE);
	g->fillRect(0, this->height - XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN, XScrollPanePeer::SCROLLBAR);
	g->fillRect(XScrollPanePeer::MARGIN + w, this->height - XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN, XScrollPanePeer::SCROLLBAR);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ng)->translate(XScrollPanePeer::MARGIN, this->height - (XScrollPanePeer::SCROLLBAR - XScrollPanePeer::SPACE));
			$nc(this->hsb)->paint(ng, colors, paintAll);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ng)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XScrollPanePeer::paintVerScrollbar($Graphics* g, $ColorArray* colors, bool paintAll) {
	$useLocalCurrentObjectStackCache();
	if (this->vsbSpace <= 0) {
		return;
	}
	$var($Graphics, ng, $nc(g)->create());
	g->setColor($nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	int32_t h = this->height - this->hsbSpace - (2 * XScrollPanePeer::MARGIN);
	g->fillRect(this->width - XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN, XScrollPanePeer::SPACE, h);
	g->fillRect(this->width - XScrollPanePeer::SCROLLBAR, 0, XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN);
	g->fillRect(this->width - XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN + h, XScrollPanePeer::SCROLLBAR, XScrollPanePeer::MARGIN);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ng)->translate(this->width - (XScrollPanePeer::SCROLLBAR - XScrollPanePeer::SPACE), XScrollPanePeer::MARGIN);
			$nc(this->vsb)->paint(ng, colors, paintAll);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(ng)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XScrollPanePeer::handleJavaMouseEvent($MouseEvent* mouseEvent) {
	$XComponentPeer::handleJavaMouseEvent(mouseEvent);
	int32_t modifiers = $nc(mouseEvent)->getModifiers();
	int32_t id = mouseEvent->getID();
	int32_t x = mouseEvent->getX();
	int32_t y = mouseEvent->getY();
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) == 0) {
		return;
	}
	switch (id) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			if (inVerticalScrollbar(x, y)) {
				this->active = XScrollPanePeer::VERTICAL;
				int32_t h = this->height - this->hsbSpace - (2 * XScrollPanePeer::MARGIN);
				$nc(this->vsb)->handleMouseEvent(id, modifiers, x - (this->width - XScrollPanePeer::SCROLLBAR + XScrollPanePeer::SPACE), y - XScrollPanePeer::MARGIN);
			} else if (inHorizontalScrollbar(x, y)) {
				this->active = XScrollPanePeer::HORIZONTAL;
				int32_t w = this->width - 2 * XScrollPanePeer::MARGIN - this->vsbSpace;
				$nc(this->hsb)->handleMouseEvent(id, modifiers, x - XScrollPanePeer::MARGIN, y - (this->height - XScrollPanePeer::SCROLLBAR + XScrollPanePeer::SPACE));
			}
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			if (this->active == XScrollPanePeer::VERTICAL) {
				$nc(this->vsb)->handleMouseEvent(id, modifiers, x, y);
			} else if (this->active == XScrollPanePeer::HORIZONTAL) {
				$nc(this->hsb)->handleMouseEvent(id, modifiers, x, y);
			}
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (this->active == XScrollPanePeer::VERTICAL) {
				int32_t h = this->height - 2 * XScrollPanePeer::MARGIN - this->hsbSpace;
				$nc(this->vsb)->handleMouseEvent(id, modifiers, x - (this->width - XScrollPanePeer::SCROLLBAR + XScrollPanePeer::SPACE), y - XScrollPanePeer::MARGIN);
			} else if (this->active == XScrollPanePeer::HORIZONTAL) {
				int32_t w = this->width - 2 * XScrollPanePeer::MARGIN - this->vsbSpace;
				$nc(this->hsb)->handleMouseEvent(id, modifiers, x - XScrollPanePeer::MARGIN, y - (this->height - XScrollPanePeer::SCROLLBAR + XScrollPanePeer::SPACE));
			}
			break;
		}
	}
}

void XScrollPanePeer::notifyValue($XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) {
	if ($equals(obj, this->vsb)) {
		scroll(-1, v, XScrollPanePeer::VERTICAL, type);
	} else if ($cast($XHorizontalScrollbar, obj) == this->hsb) {
		scroll(v, -1, XScrollPanePeer::HORIZONTAL, type);
	}
}

bool XScrollPanePeer::inVerticalScrollbar(int32_t x, int32_t y) {
	if (this->vsbSpace <= 0) {
		return false;
	}
	int32_t h = this->height - XScrollPanePeer::MARGIN - this->hsbSpace;
	return (x >= this->width - (XScrollPanePeer::SCROLLBAR - XScrollPanePeer::SPACE)) && (x < this->width) && (y >= XScrollPanePeer::MARGIN) && (y < h);
}

bool XScrollPanePeer::inHorizontalScrollbar(int32_t x, int32_t y) {
	if (this->hsbSpace <= 0) {
		return false;
	}
	int32_t w = this->width - XScrollPanePeer::MARGIN - this->vsbSpace;
	return (x >= XScrollPanePeer::MARGIN) && (x < w) && (y >= this->height - (XScrollPanePeer::SCROLLBAR - XScrollPanePeer::SPACE)) && (y < this->height);
}

$Component* XScrollPanePeer::getScrollChild() {
	$useLocalCurrentObjectStackCache();
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	$var($Component, child, nullptr);
	try {
		$assign(child, $nc(sp)->getComponent(0));
	} catch ($ArrayIndexOutOfBoundsException& e) {
	}
	return child;
}

void XScrollPanePeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	$var($Dimension, d, $nc(sp)->size());
	$var($Color, bg, sp->getBackground());
	$var($Color, fg, sp->getForeground());
	$var($Point, p, sp->getScrollPosition());
	$var($Component, c, getScrollChild());
	$var($Dimension, cd, nullptr);
	if (c != nullptr) {
		$assign(cd, c->size());
	} else {
		$assign(cd, $new($Dimension, 0, 0));
	}
	int32_t sbDisplay = sp->getScrollbarDisplayPolicy();
	int32_t vvis = 0;
	int32_t hvis = 0;
	int32_t vmin = 0;
	int32_t hmin = 0;
	int32_t vmax = 0;
	int32_t hmax = 0;
	int32_t vval = 0;
	int32_t hval = 0;
	switch (sbDisplay) {
	case $ScrollPane::SCROLLBARS_NEVER:
		{
			this->hsbSpace = (this->vsbSpace = 0);
			break;
		}
	case $ScrollPane::SCROLLBARS_ALWAYS:
		{
			this->hsbSpace = (this->vsbSpace = XScrollPanePeer::SCROLLBAR);
			break;
		}
	case $ScrollPane::SCROLLBARS_AS_NEEDED:
		{
			this->hsbSpace = ($nc(cd)->width <= ($nc(d)->width - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
			this->vsbSpace = ($nc(cd)->height <= ($nc(d)->height - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
			if (this->hsbSpace == 0 && this->vsbSpace != 0) {
				this->hsbSpace = ($nc(cd)->width <= ($nc(d)->width - XScrollPanePeer::SCROLLBAR - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
			}
			if (this->vsbSpace == 0 && this->hsbSpace != 0) {
				this->vsbSpace = ($nc(cd)->height <= ($nc(d)->height - XScrollPanePeer::SCROLLBAR - 2 * XScrollPanePeer::MARGIN) ? 0 : XScrollPanePeer::SCROLLBAR);
			}
		}
	}
	vvis = (hvis = (vmin = (hmin = (vmax = (hmax = (vval = (hval = 0)))))));
	if (this->vsbSpace > 0) {
		vmin = 0;
		vvis = $nc(d)->height - (2 * XScrollPanePeer::MARGIN) - this->hsbSpace;
		vmax = $Math::max($nc(cd)->height - vvis, 0);
		vval = $nc(p)->y;
	}
	if (this->hsbSpace > 0) {
		hmin = 0;
		hvis = $nc(d)->width - (2 * XScrollPanePeer::MARGIN) - this->vsbSpace;
		hmax = $Math::max($nc(cd)->width - hvis, 0);
		hval = $nc(p)->x;
	}
	int32_t w = $nc(d)->width - this->vsbSpace;
	int32_t h = d->height - this->hsbSpace;
	$nc(g)->setColor(bg);
	g->fillRect(0, 0, d->width, d->height);
	if (this->hsbSpace > 0) {
		int32_t sbw = d->width - this->vsbSpace;
		g->fillRect(1, d->height - XScrollPanePeer::SCROLLBAR - 3, sbw - 1, XScrollPanePeer::SCROLLBAR - 3);
		$var($Graphics, ng, g->create());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ng)->translate(0, d->height - (XScrollPanePeer::SCROLLBAR - 2));
				drawScrollbar(ng, bg, XScrollPanePeer::SCROLLBAR - 2, sbw, hmin, hmax, hval, hvis, true);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(ng)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (this->vsbSpace > 0) {
		int32_t sbh = d->height - this->hsbSpace;
		g->fillRect(d->width - XScrollPanePeer::SCROLLBAR - 3, 1, XScrollPanePeer::SCROLLBAR - 3, sbh - 1);
		$var($Graphics, ng, g->create());
		{
			$var($Throwable, var$2, nullptr);
			try {
				$nc(ng)->translate(d->width - (XScrollPanePeer::SCROLLBAR - 2), 0);
				drawScrollbar(ng, bg, XScrollPanePeer::SCROLLBAR - 2, sbh, vmin, vmax, vval, vvis, false);
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$nc(ng)->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	draw3DRect(g, bg, 0, 0, w - 1, h - 1, false);
	$nc(this->target)->print(g);
	sp->printComponents(g);
}

void clinit$XScrollPanePeer($Class* class$) {
	{
		XScrollPanePeer::SCROLLBAR = $nc($($XToolkit::getUIDefaults()))->getInt("ScrollBar.defaultWidth"_s);
	}
}

XScrollPanePeer::XScrollPanePeer() {
}

$Class* XScrollPanePeer::load$($String* name, bool initialize) {
	$loadClass(XScrollPanePeer, name, initialize, &_XScrollPanePeer_ClassInfo_, clinit$XScrollPanePeer, allocate$XScrollPanePeer);
	return class$;
}

$Class* XScrollPanePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun