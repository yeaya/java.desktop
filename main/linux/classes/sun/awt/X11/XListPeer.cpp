#include <sun/awt/X11/XListPeer.h>

#include <java/awt/AWTEvent.h>
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
#include <java/awt/ItemSelectable.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
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
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/Objects.h>
#include <java/util/Vector.h>
#include <sun/awt/X11/ListHelper.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XHorizontalScrollbar.h>
#include <sun/awt/X11/XListPeer$1.h>
#include <sun/awt/X11/XListPeer$ListPainter.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <sun/awt/X11/XVerticalScrollbar.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef BACKGROUND_COLOR
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef COPY_AREA
#undef DEFAULT_VISIBLE_ROWS
#undef DESELECTED
#undef FINE
#undef FINER
#undef FINEST
#undef FOREGROUND_COLOR
#undef HORIZ_SCROLL_AMT
#undef HORSCROLLBAR
#undef ITEM_STATE_CHANGED
#undef KEY_PRESSED
#undef MARGIN
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef NONE
#undef PAINT_ALL
#undef PAINT_BACKGROUND
#undef PAINT_FOCUS
#undef PAINT_HIDEFOCUS
#undef PAINT_HSCROLL
#undef PAINT_ITEMS
#undef PAINT_VSCROLL
#undef SCROLLBAR_AREA
#undef SCROLLBAR_WIDTH
#undef SELECTED
#undef SPACE
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT
#undef VERSCROLLBAR
#undef VK_DOWN
#undef VK_END
#undef VK_ENTER
#undef VK_HOME
#undef VK_KP_DOWN
#undef VK_KP_LEFT
#undef VK_KP_RIGHT
#undef VK_KP_UP
#undef VK_LEFT
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP
#undef VK_RIGHT
#undef VK_SPACE
#undef VK_UP
#undef WINDOW

using $ColorArray = $Array<::java::awt::Color>;
using $AWTEvent = ::java::awt::AWTEvent;
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
using $ItemSelectable = ::java::awt::ItemSelectable;
using $List = ::java::awt::List;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
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
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Objects = ::java::util::Objects;
using $Vector = ::java::util::Vector;
using $ListHelper = ::sun::awt::X11::ListHelper;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XHorizontalScrollbar = ::sun::awt::X11::XHorizontalScrollbar;
using $XListPeer$1 = ::sun::awt::X11::XListPeer$1;
using $XListPeer$ListPainter = ::sun::awt::X11::XListPeer$ListPainter;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;
using $XVerticalScrollbar = ::sun::awt::X11::XVerticalScrollbar;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XListPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XListPeer, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XListPeer, log)},
	{"MARGIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, MARGIN)},
	{"SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, SPACE)},
	{"SCROLLBAR_AREA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, SCROLLBAR_AREA)},
	{"SCROLLBAR_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, SCROLLBAR_WIDTH)},
	{"NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, NONE)},
	{"WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, WINDOW)},
	{"VERSCROLLBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, VERSCROLLBAR)},
	{"HORSCROLLBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, HORSCROLLBAR)},
	{"DEFAULT_VISIBLE_ROWS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, DEFAULT_VISIBLE_ROWS)},
	{"HORIZ_SCROLL_AMT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XListPeer, HORIZ_SCROLL_AMT)},
	{"PAINT_VSCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_VSCROLL)},
	{"PAINT_HSCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_HSCROLL)},
	{"PAINT_ITEMS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_ITEMS)},
	{"PAINT_FOCUS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_FOCUS)},
	{"PAINT_BACKGROUND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_BACKGROUND)},
	{"PAINT_HIDEFOCUS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_HIDEFOCUS)},
	{"PAINT_ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, PAINT_ALL)},
	{"COPY_AREA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XListPeer, COPY_AREA)},
	{"vsb", "Lsun/awt/X11/XVerticalScrollbar;", nullptr, 0, $field(XListPeer, vsb)},
	{"hsb", "Lsun/awt/X11/XHorizontalScrollbar;", nullptr, 0, $field(XListPeer, hsb)},
	{"painter", "Lsun/awt/X11/XListPeer$ListPainter;", nullptr, 0, $field(XListPeer, painter)},
	{"items", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(XListPeer, items)},
	{"multipleSelections", "Z", nullptr, 0, $field(XListPeer, multipleSelections)},
	{"active", "I", nullptr, 0, $field(XListPeer, active)},
	{"selected", "[I", nullptr, 0, $field(XListPeer, selected)},
	{"fontHeight", "I", nullptr, 0, $field(XListPeer, fontHeight)},
	{"fontAscent", "I", nullptr, 0, $field(XListPeer, fontAscent)},
	{"fontLeading", "I", nullptr, 0, $field(XListPeer, fontLeading)},
	{"currentIndex", "I", nullptr, 0, $field(XListPeer, currentIndex)},
	{"eventIndex", "I", nullptr, 0, $field(XListPeer, eventIndex)},
	{"eventType", "I", nullptr, 0, $field(XListPeer, eventType)},
	{"focusIndex", "I", nullptr, 0, $field(XListPeer, focusIndex)},
	{"maxLength", "I", nullptr, 0, $field(XListPeer, maxLength$)},
	{"vsbVis", "Z", nullptr, 0, $field(XListPeer, vsbVis)},
	{"hsbVis", "Z", nullptr, 0, $field(XListPeer, hsbVis)},
	{"listWidth", "I", nullptr, 0, $field(XListPeer, listWidth)},
	{"listHeight", "I", nullptr, 0, $field(XListPeer, listHeight)},
	{"firstTimeVisibleIndex", "I", nullptr, $PRIVATE, $field(XListPeer, firstTimeVisibleIndex)},
	{"bgColorSet", "Z", nullptr, 0, $field(XListPeer, bgColorSet)},
	{"fgColorSet", "Z", nullptr, 0, $field(XListPeer, fgColorSet)},
	{"mouseDraggedOutHorizontally", "Z", nullptr, 0, $field(XListPeer, mouseDraggedOutHorizontally)},
	{"mouseDraggedOutVertically", "Z", nullptr, 0, $field(XListPeer, mouseDraggedOutVertically)},
	{"isScrollBarOriginated", "Z", nullptr, 0, $field(XListPeer, isScrollBarOriginated)},
	{"isMousePressed", "Z", nullptr, 0, $field(XListPeer, isMousePressed)},
	{}
};

$MethodInfo _XListPeer_MethodInfo_[] = {
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
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/List;)V", nullptr, 0, $method(static_cast<void(XListPeer::*)($List*)>(&XListPeer::init$))},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addItem", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"createHorScrollbar", "()V", nullptr, 0},
	{"createVerScrollbar", "()V", nullptr, 0},
	{"delItems", "(II)V", nullptr, $PUBLIC},
	{"deselect", "(I)V", nullptr, $PUBLIC},
	{"deselectAllItems", "()V", nullptr, $PRIVATE, $method(static_cast<void(XListPeer::*)()>(&XListPeer::deselectAllItems))},
	{"deselectItem", "(I)V", nullptr, 0},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getFirstVisibleItem", "()I", nullptr, 0},
	{"getFocusIndex", "()I", nullptr, 0},
	{"getFocusRect", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getHScrollBarRec", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getItemHeight", "()I", nullptr, 0},
	{"getItemWidth", "(I)I", nullptr, 0},
	{"getItemWidth", "()I", nullptr, 0},
	{"getItemX", "()I", nullptr, 0},
	{"getItemY", "(I)I", nullptr, 0},
	{"getLastVisibleItem", "()I", nullptr, 0},
	{"getListBackground", "([Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(XListPeer::*)($ColorArray*)>(&XListPeer::getListBackground))},
	{"getListForeground", "([Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(XListPeer::*)($ColorArray*)>(&XListPeer::getListForeground))},
	{"getListWidth", "()I", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC},
	{"getVScrollBarRec", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"handleJavaMouseEventOnEDT", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"handleJavaMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"hsbIsVisible", "(Z)Z", nullptr, 0},
	{"inHorizontalScrollbar", "(II)Z", nullptr, 0},
	{"inVerticalScrollbar", "(II)Z", nullptr, 0},
	{"inWindow", "(II)Z", nullptr, 0},
	{"index2y", "(I)I", nullptr, 0},
	{"initFontMetrics", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isIndexDisplayed", "(I)Z", nullptr, 0},
	{"isItemHidden", "(I)Z", nullptr, 0},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isSelected", "(I)Z", nullptr, 0},
	{"itemsDisplayed", "()I", nullptr, 0},
	{"itemsInWindow", "(Z)I", nullptr, 0},
	{"itemsInWindow", "()I", nullptr, 0},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"lastItemDisplayed", "()I", nullptr, 0},
	{"layout", "()V", nullptr, $PUBLIC},
	{"makeVisible", "(I)V", nullptr, $PUBLIC},
	{"maxLength", "()I", nullptr, 0},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"notifyValue", "(Lsun/awt/X11/XScrollbar;IIZ)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"posInSel", "(I)I", nullptr, 0},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"prePostEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"prePostMouseEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"repaint", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XListPeer::*)(int32_t)>(&XListPeer::repaint))},
	{"repaint", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(XListPeer::*)(int32_t,int32_t,int32_t)>(&XListPeer::repaint))},
	{"repaint", "(IIILjava/awt/Rectangle;Ljava/awt/Point;)V", nullptr, $PRIVATE, $method(static_cast<void(XListPeer::*)(int32_t,int32_t,int32_t,$Rectangle*,$Point*)>(&XListPeer::repaint))},
	{"repaintScrollbarRequest", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"scrollHorizontal", "(I)V", nullptr, 0},
	{"scrollVertical", "(I)V", nullptr, 0},
	{"select", "(I)V", nullptr, $PUBLIC},
	{"selectItem", "(I)V", nullptr, 0},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocusIndex", "(I)V", nullptr, 0},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC},
	{"setMultipleSelections", "(Z)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"stringLength", "(Ljava/lang/String;)I", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trackMouseDraggedScroll", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"trackMouseReleasedScroll", "()V", nullptr, 0},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"validY", "(I)Z", nullptr, 0},
	{"vsbIsVisible", "(Z)Z", nullptr, 0},
	{"y2index", "(I)I", nullptr, 0},
	{}
};

$InnerClassInfo _XListPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XListPeer$ListPainter", "sun.awt.X11.XListPeer", "ListPainter", 0},
	{"sun.awt.X11.XListPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XListPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XListPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.ListPeer,sun.awt.X11.XScrollbarClient",
	_XListPeer_FieldInfo_,
	_XListPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XListPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XListPeer$ListPainter,sun.awt.X11.XListPeer$1"
};

$Object* allocate$XListPeer($Class* clazz) {
	return $of($alloc(XListPeer));
}

void XListPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XListPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XListPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XListPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XListPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XListPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XListPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XListPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XListPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XListPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XListPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XListPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XListPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XListPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

$FontMetrics* XListPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XListPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XListPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XListPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

void XListPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XListPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XListPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XListPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XListPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XListPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XListPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XListPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XListPeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XListPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$Component* XListPeer::getEventSource() {
	 return this->$XComponentPeer::getEventSource();
}

$GraphicsConfiguration* XListPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XListPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XListPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XListPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XListPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XListPeer::finalize() {
	this->$XComponentPeer::finalize();
}

bool XListPeer::$assertionsDisabled = false;
$PlatformLogger* XListPeer::log = nullptr;

void XListPeer::init$($List* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
	this->active = XListPeer::NONE;
	this->currentIndex = -1;
	this->eventIndex = -1;
	this->eventType = XListPeer::NONE;
	this->firstTimeVisibleIndex = 0;
	this->mouseDraggedOutHorizontally = false;
	this->mouseDraggedOutVertically = false;
	this->isScrollBarOriginated = false;
	this->isMousePressed = false;
}

void XListPeer::preInit($XCreateWindowParams* params) {
	$XComponentPeer::preInit(params);
	$set(this, items, $new($Vector));
	createVerScrollbar();
	createHorScrollbar();
	$set(this, painter, $new($XListPeer$ListPainter, this));
	this->bgColorSet = $nc(this->target)->isBackgroundSet();
	this->fgColorSet = $nc(this->target)->isForegroundSet();
}

void XListPeer::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::postInit(params);
	initFontMetrics();
	$var($List, l, $cast($List, this->target));
	int32_t stop = $nc(l)->getItemCount();
	for (int32_t i = 0; i < stop; ++i) {
		$nc(this->items)->addElement($(l->getItem(i)));
	}
	int32_t index = l->getVisibleIndex();
	if (index >= 0) {
		$nc(this->vsb)->setValues(index, 0, 0, $nc(this->items)->size());
	}
	this->maxLength$ = maxLength();
	$var($ints, sel, l->getSelectedIndexes());
	$set(this, selected, $new($ints, $nc(sel)->length));
	for (int32_t i = 0; i < sel->length; ++i) {
		$nc(this->selected)->set(i, sel->get(i));
	}
	if (sel->length > 0) {
		setFocusIndex(sel->get(sel->length - 1));
	} else {
		setFocusIndex(0);
	}
	this->multipleSelections = l->isMultipleMode();
}

void XListPeer::createVerScrollbar() {
	$set(this, vsb, $new($XVerticalScrollbar, this));
	$nc(this->vsb)->setValues(0, 0, 0, 0, 1, 1);
}

void XListPeer::createHorScrollbar() {
	$set(this, hsb, $new($XHorizontalScrollbar, this));
	$nc(this->hsb)->setValues(0, 0, 0, 0, XListPeer::HORIZ_SCROLL_AMT, XListPeer::HORIZ_SCROLL_AMT);
}

void XListPeer::add($String* item, int32_t index) {
	addItem(item, index);
}

void XListPeer::removeAll() {
	clear();
	this->maxLength$ = 0;
}

void XListPeer::setMultipleMode(bool b) {
	setMultipleSelections(b);
}

$Dimension* XListPeer::getMinimumSize() {
	return getMinimumSize(XListPeer::DEFAULT_VISIBLE_ROWS);
}

$Dimension* XListPeer::getPreferredSize(int32_t rows) {
	return getMinimumSize(rows);
}

$Dimension* XListPeer::getMinimumSize(int32_t rows) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getFont())));
	initFontMetrics();
	int32_t var$0 = 20 + $nc(fm)->stringWidth("0123456789abcde"_s);
	return $new($Dimension, var$0, getItemHeight() * rows + (2 * XListPeer::MARGIN));
}

void XListPeer::initFontMetrics() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getFont())));
	this->fontHeight = $nc(fm)->getHeight();
	this->fontAscent = fm->getAscent();
	this->fontLeading = fm->getLeading();
}

int32_t XListPeer::maxLength() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getFont())));
	int32_t m = 0;
	int32_t end = $nc(this->items)->size();
	for (int32_t i = 0; i < end; ++i) {
		int32_t l = $nc(fm)->stringWidth($cast($String, $($nc(this->items)->elementAt(i))));
		m = $Math::max(m, l);
	}
	return m;
}

int32_t XListPeer::getItemWidth(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getFont())));
	return $nc(fm)->stringWidth($cast($String, $($nc(this->items)->elementAt(i))));
}

int32_t XListPeer::stringLength($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(this->target)->getFont())));
	return $nc(fm)->stringWidth(str);
}

void XListPeer::setForeground($Color* c) {
	this->fgColorSet = true;
	$XComponentPeer::setForeground(c);
}

void XListPeer::setBackground($Color* c) {
	this->bgColorSet = true;
	$XComponentPeer::setBackground(c);
}

$Color* XListPeer::getListBackground($ColorArray* colors) {
	if (this->bgColorSet) {
		return $nc(colors)->get($XComponentPeer::BACKGROUND_COLOR);
	} else {
		$init($SystemColor);
		return $SystemColor::text;
	}
}

$Color* XListPeer::getListForeground($ColorArray* colors) {
	if (this->fgColorSet) {
		return $nc(colors)->get($XComponentPeer::FOREGROUND_COLOR);
	} else {
		$init($SystemColor);
		return $SystemColor::textText;
	}
}

$Rectangle* XListPeer::getVScrollBarRec() {
	return $new($Rectangle, this->width - (XListPeer::SCROLLBAR_WIDTH), 0, XListPeer::SCROLLBAR_WIDTH + 1, this->height);
}

$Rectangle* XListPeer::getHScrollBarRec() {
	return $new($Rectangle, 0, this->height - XListPeer::SCROLLBAR_WIDTH, this->width, XListPeer::SCROLLBAR_WIDTH);
}

int32_t XListPeer::getFirstVisibleItem() {
	if (this->vsbVis) {
		return $nc(this->vsb)->getValue();
	} else {
		return 0;
	}
}

int32_t XListPeer::getLastVisibleItem() {
	if (this->vsbVis) {
		int32_t var$0 = $nc(this->items)->size() - 1;
		int32_t var$1 = $nc(this->vsb)->getValue();
		return $Math::min(var$0, var$1 + itemsInWindow() - 1);
	} else {
		int32_t var$2 = $nc(this->items)->size() - 1;
		return $Math::min(var$2, itemsInWindow() - 1);
	}
}

void XListPeer::repaintScrollbarRequest($XScrollbar* scrollbar) {
	if ($equals(scrollbar, this->hsb)) {
		repaint(XListPeer::PAINT_HSCROLL);
	} else if ($equals(scrollbar, this->vsb)) {
		repaint(XListPeer::PAINT_VSCROLL);
	}
}

void XListPeer::repaint() {
	int32_t var$0 = getFirstVisibleItem();
	repaint(var$0, getLastVisibleItem(), XListPeer::PAINT_ALL);
}

void XListPeer::repaint(int32_t options) {
	int32_t var$0 = getFirstVisibleItem();
	repaint(var$0, getLastVisibleItem(), options);
}

void XListPeer::repaint(int32_t firstItem, int32_t lastItem, int32_t options) {
	repaint(firstItem, lastItem, options, nullptr, nullptr);
}

void XListPeer::repaint(int32_t firstItem, int32_t lastItem, int32_t options, $Rectangle* source, $Point* distance) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->painter)->paint(g, firstItem, lastItem, options, source, distance);
				$var($Component, var$1, this->target);
				int32_t var$2 = getWidth();
				postPaintEvent(var$1, 0, 0, var$2, getHeight());
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XListPeer::paintPeer($Graphics* g) {
	$var($Graphics, var$0, g);
	int32_t var$1 = getFirstVisibleItem();
	$nc(this->painter)->paint(var$0, var$1, getLastVisibleItem(), XListPeer::PAINT_ALL);
}

bool XListPeer::isFocusable() {
	return true;
}

void XListPeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	repaint(XListPeer::PAINT_FOCUS);
}

void XListPeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	repaint(XListPeer::PAINT_FOCUS);
}

void XListPeer::layout() {
	int32_t vis = 0;
	int32_t maximum = 0;
	bool vsbWasVisible = false;
	int32_t origVSBVal = 0;
	if (!XListPeer::$assertionsDisabled && !(this->target != nullptr)) {
		$throwNew($AssertionError);
	}
	origVSBVal = $nc(this->vsb)->getValue();
	vis = itemsInWindow(false);
	maximum = $nc(this->items)->size() < vis ? vis : $nc(this->items)->size();
	int32_t var$0 = $nc(this->vsb)->getValue();
	int32_t var$1 = vis;
	$nc(this->vsb)->setValues(var$0, var$1, $nc(this->vsb)->getMinimum(), maximum);
	this->vsbVis = (vsbWasVisible = vsbIsVisible(false));
	this->listHeight = this->height;
	this->listWidth = getListWidth();
	vis = this->listWidth - ((2 * XListPeer::SPACE) + (2 * XListPeer::MARGIN));
	maximum = this->maxLength$ < vis ? vis : this->maxLength$;
	int32_t var$2 = $nc(this->hsb)->getValue();
	int32_t var$3 = vis;
	$nc(this->hsb)->setValues(var$2, var$3, $nc(this->hsb)->getMinimum(), maximum);
	this->hsbVis = hsbIsVisible(this->vsbVis);
	if (this->hsbVis) {
		this->listHeight = this->height - XListPeer::SCROLLBAR_AREA;
		vis = itemsInWindow(true);
		maximum = $nc(this->items)->size() < vis ? vis : $nc(this->items)->size();
		$nc(this->vsb)->setValues(origVSBVal, vis, $nc(this->vsb)->getMinimum(), maximum);
		this->vsbVis = vsbIsVisible(true);
	}
	if (vsbWasVisible != this->vsbVis) {
		this->listWidth = getListWidth();
		vis = this->listWidth - ((2 * XListPeer::SPACE) + (2 * XListPeer::MARGIN));
		maximum = this->maxLength$ < vis ? 0 : this->maxLength$;
		int32_t var$4 = $nc(this->hsb)->getValue();
		int32_t var$5 = vis;
		$nc(this->hsb)->setValues(var$4, var$5, $nc(this->hsb)->getMinimum(), maximum);
		this->hsbVis = hsbIsVisible(this->vsbVis);
	}
	$nc(this->vsb)->setSize(XListPeer::SCROLLBAR_WIDTH, this->listHeight);
	$nc(this->hsb)->setSize(this->listWidth, XListPeer::SCROLLBAR_WIDTH);
	$nc(this->vsb)->setBlockIncrement(itemsInWindow());
	$nc(this->hsb)->setBlockIncrement(this->width - ((2 * XListPeer::SPACE) + (2 * XListPeer::MARGIN) + (this->vsbVis ? XListPeer::SCROLLBAR_AREA : 0)));
}

int32_t XListPeer::getItemWidth() {
	return this->width - ((2 * XListPeer::MARGIN) + (this->vsbVis ? XListPeer::SCROLLBAR_AREA : 0));
}

int32_t XListPeer::getItemHeight() {
	return (this->fontHeight - this->fontLeading) + (2 * XListPeer::SPACE);
}

int32_t XListPeer::getItemX() {
	return XListPeer::MARGIN + XListPeer::SPACE;
}

int32_t XListPeer::getItemY(int32_t item) {
	return index2y(item);
}

int32_t XListPeer::getFocusIndex() {
	return this->focusIndex;
}

void XListPeer::setFocusIndex(int32_t value) {
	this->focusIndex = value;
}

$Rectangle* XListPeer::getFocusRect() {
	$var($Rectangle, focusRect, $new($Rectangle));
	focusRect->x = 1;
	focusRect->width = getListWidth() - 3;
	if (isIndexDisplayed(getFocusIndex())) {
		focusRect->y = index2y(getFocusIndex()) - 2;
		focusRect->height = getItemHeight() + 1;
	} else {
		focusRect->y = 1;
		focusRect->height = this->hsbVis ? this->height - XListPeer::SCROLLBAR_AREA : this->height;
		focusRect->height -= 3;
	}
	return focusRect;
}

void XListPeer::handleConfigureNotifyEvent($XEvent* xev) {
	$XComponentPeer::handleConfigureNotifyEvent(xev);
	$nc(this->painter)->invalidate();
}

bool XListPeer::handlesWheelScrolling() {
	return true;
}

void XListPeer::handleJavaMouseEvent($MouseEvent* e) {
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

void XListPeer::handleJavaMouseWheelEvent($MouseWheelEvent* e) {
	if ($ListHelper::doWheelScroll(this->vsbVis ? this->vsb : ($XVerticalScrollbar*)nullptr, this->hsbVis ? this->hsb : ($XHorizontalScrollbar*)nullptr, e)) {
		repaint();
	}
}

void XListPeer::mousePressed($MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XListPeer::log)->finer($$str({$($nc(mouseEvent)->toString()), ", hsb "_s, $$str(this->hsbVis), ", vsb "_s, $$str(this->vsbVis)}));
	}
	bool var$0 = isEnabled();
	if (var$0 && $nc(mouseEvent)->getButton() == $MouseEvent::BUTTON1) {
		int32_t var$1 = mouseEvent->getX();
		if (inWindow(var$1, mouseEvent->getY())) {
			if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XListPeer::log)->fine("Mouse press in items area"_s);
			}
			this->active = XListPeer::WINDOW;
			int32_t i = y2index(mouseEvent->getY());
			if (i >= 0) {
				if (this->multipleSelections) {
					if (isSelected(i)) {
						deselectItem(i);
						this->eventIndex = i;
						this->eventType = $ItemEvent::DESELECTED;
					} else {
						selectItem(i);
						this->eventIndex = i;
						this->eventType = $ItemEvent::SELECTED;
					}
				} else {
					selectItem(i);
					this->eventIndex = i;
					this->eventType = $ItemEvent::SELECTED;
				}
				setFocusIndex(i);
				repaint(XListPeer::PAINT_FOCUS);
			} else {
				this->currentIndex = -1;
			}
		} else {
			int32_t var$3 = mouseEvent->getX();
			if (inVerticalScrollbar(var$3, mouseEvent->getY())) {
				if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(XListPeer::log)->fine("Mouse press in vertical scrollbar"_s);
				}
				this->active = XListPeer::VERSCROLLBAR;
				int32_t var$4 = mouseEvent->getID();
				int32_t var$5 = mouseEvent->getModifiers();
				int32_t var$6 = mouseEvent->getX() - (this->width - XListPeer::SCROLLBAR_WIDTH);
				$nc(this->vsb)->handleMouseEvent(var$4, var$5, var$6, mouseEvent->getY());
			} else {
				int32_t var$8 = mouseEvent->getX();
				if (inHorizontalScrollbar(var$8, mouseEvent->getY())) {
					if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XListPeer::log)->fine("Mouse press in horizontal scrollbar"_s);
					}
					this->active = XListPeer::HORSCROLLBAR;
					int32_t var$9 = mouseEvent->getID();
					int32_t var$10 = mouseEvent->getModifiers();
					int32_t var$11 = mouseEvent->getX();
					$nc(this->hsb)->handleMouseEvent(var$9, var$10, var$11, mouseEvent->getY() - (this->height - XListPeer::SCROLLBAR_WIDTH));
				}
			}
		}
		this->isMousePressed = true;
	}
}

void XListPeer::mouseReleased($MouseEvent* mouseEvent) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isEnabled();
	if (var$0 && $nc(mouseEvent)->getButton() == $MouseEvent::BUTTON1) {
		int32_t clickCount = mouseEvent->getClickCount();
		if (this->active == XListPeer::VERSCROLLBAR) {
			int32_t var$1 = mouseEvent->getID();
			int32_t var$2 = mouseEvent->getModifiers();
			int32_t var$3 = mouseEvent->getX() - (this->width - XListPeer::SCROLLBAR_WIDTH);
			$nc(this->vsb)->handleMouseEvent(var$1, var$2, var$3, mouseEvent->getY());
		} else if (this->active == XListPeer::HORSCROLLBAR) {
			int32_t var$4 = mouseEvent->getID();
			int32_t var$5 = mouseEvent->getModifiers();
			int32_t var$6 = mouseEvent->getX();
			$nc(this->hsb)->handleMouseEvent(var$4, var$5, var$6, mouseEvent->getY() - (this->height - XListPeer::SCROLLBAR_WIDTH));
		} else if ((this->currentIndex >= 0) && (clickCount >= 2) && (clickCount % 2 == 0)) {
			$var($Object, var$7, $of(this->target));
			$var($String, var$8, $cast($String, $nc(this->items)->elementAt(this->currentIndex)));
			int64_t var$9 = mouseEvent->getWhen();
			postEvent($$new($ActionEvent, var$7, $ActionEvent::ACTION_PERFORMED, var$8, var$9, mouseEvent->getModifiers()));
		} else if (this->active == XListPeer::WINDOW) {
			trackMouseReleasedScroll();
			if (this->eventType == $ItemEvent::DESELECTED) {
				if (!XListPeer::$assertionsDisabled && !this->multipleSelections) {
					$throwNew($AssertionError, $of("Shouldn\'t get a deselect for a single-select List"_s));
				}
				deselectItem(this->eventIndex);
			}
			if (this->eventType != XListPeer::NONE) {
				postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(this->eventIndex)), this->eventType));
			}
		}
		this->active = XListPeer::NONE;
		this->eventIndex = -1;
		this->eventType = XListPeer::NONE;
		this->isMousePressed = false;
	}
}

void XListPeer::mouseDragged($MouseEvent* mouseEvent) {
	bool var$0 = isEnabled();
	if (var$0 && ((int32_t)($nc(mouseEvent)->getModifiersEx() & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0) {
		if (this->active == XListPeer::VERSCROLLBAR) {
			int32_t var$1 = mouseEvent->getID();
			int32_t var$2 = mouseEvent->getModifiers();
			int32_t var$3 = mouseEvent->getX() - (this->width - XListPeer::SCROLLBAR_WIDTH);
			$nc(this->vsb)->handleMouseEvent(var$1, var$2, var$3, mouseEvent->getY());
		} else if (this->active == XListPeer::HORSCROLLBAR) {
			int32_t var$4 = mouseEvent->getID();
			int32_t var$5 = mouseEvent->getModifiers();
			int32_t var$6 = mouseEvent->getX();
			$nc(this->hsb)->handleMouseEvent(var$4, var$5, var$6, mouseEvent->getY() - (this->height - XListPeer::SCROLLBAR_WIDTH));
		} else if (this->active == XListPeer::WINDOW) {
			int32_t i = y2index(mouseEvent->getY());
			if (this->multipleSelections) {
				if (this->eventType == $ItemEvent::DESELECTED) {
					if (i != this->eventIndex) {
						this->eventType = XListPeer::NONE;
						this->eventIndex = -1;
					}
				}
			} else if (this->eventType == $ItemEvent::SELECTED) {
				trackMouseDraggedScroll(mouseEvent);
				if (i >= 0 && !isSelected(i)) {
					int32_t oldSel = this->eventIndex;
					selectItem(i);
					this->eventIndex = i;
					repaint(oldSel, this->eventIndex, XListPeer::PAINT_ITEMS);
				}
			}
			if (i >= 0) {
				setFocusIndex(i);
				repaint(XListPeer::PAINT_FOCUS);
			}
		}
	}
}

void XListPeer::trackMouseDraggedScroll($MouseEvent* mouseEvent) {
	int32_t var$0 = $nc(mouseEvent)->getX();
	if ($nc(this->vsb)->beforeThumb(var$0, mouseEvent->getY())) {
		$nc(this->vsb)->setMode($AdjustmentEvent::UNIT_DECREMENT);
	} else {
		$nc(this->vsb)->setMode($AdjustmentEvent::UNIT_INCREMENT);
	}
	bool var$1 = $nc(mouseEvent)->getY() < 0;
	if (var$1 || $nc(mouseEvent)->getY() >= this->listHeight) {
		if (!this->mouseDraggedOutVertically) {
			this->mouseDraggedOutVertically = true;
			$nc(this->vsb)->startScrollingInstance();
		}
	} else if (this->mouseDraggedOutVertically) {
		this->mouseDraggedOutVertically = false;
		$nc(this->vsb)->stopScrollingInstance();
	}
	int32_t var$2 = $nc(mouseEvent)->getX();
	if ($nc(this->hsb)->beforeThumb(var$2, mouseEvent->getY())) {
		$nc(this->hsb)->setMode($AdjustmentEvent::UNIT_DECREMENT);
	} else {
		$nc(this->hsb)->setMode($AdjustmentEvent::UNIT_INCREMENT);
	}
	bool var$3 = $nc(mouseEvent)->getX() < 0;
	if (var$3 || $nc(mouseEvent)->getX() >= this->listWidth) {
		if (!this->mouseDraggedOutHorizontally) {
			this->mouseDraggedOutHorizontally = true;
			$nc(this->hsb)->startScrollingInstance();
		}
	} else if (this->mouseDraggedOutHorizontally) {
		this->mouseDraggedOutHorizontally = false;
		$nc(this->hsb)->stopScrollingInstance();
	}
}

void XListPeer::trackMouseReleasedScroll() {
	if (this->mouseDraggedOutVertically) {
		this->mouseDraggedOutVertically = false;
		$nc(this->vsb)->stopScrollingInstance();
	}
	if (this->mouseDraggedOutHorizontally) {
		this->mouseDraggedOutHorizontally = false;
		$nc(this->hsb)->stopScrollingInstance();
	}
}

void XListPeer::handleJavaKeyEvent($KeyEvent* e) {
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		{
			if (!this->isMousePressed) {
				keyPressed(e);
			}
			break;
		}
	}
}

void XListPeer::keyPressed($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t keyCode = $nc(e)->getKeyCode();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XListPeer::log)->fine($(e->toString()));
	}
	{
		bool isSelected = false;
		switch (keyCode) {
		case $KeyEvent::VK_UP:
			{}
		case $KeyEvent::VK_KP_UP:
			{
				if (getFocusIndex() > 0) {
					setFocusIndex(getFocusIndex() - 1);
					repaint(XListPeer::PAINT_HIDEFOCUS);
					if (!this->multipleSelections) {
						selectItem(getFocusIndex());
						postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
					}
					if (isItemHidden(getFocusIndex())) {
						makeVisible(getFocusIndex());
					} else {
						repaint(XListPeer::PAINT_FOCUS);
					}
				}
				break;
			}
		case $KeyEvent::VK_DOWN:
			{}
		case $KeyEvent::VK_KP_DOWN:
			{
				int32_t var$0 = getFocusIndex();
				if (var$0 < $nc(this->items)->size() - 1) {
					setFocusIndex(getFocusIndex() + 1);
					repaint(XListPeer::PAINT_HIDEFOCUS);
					if (!this->multipleSelections) {
						selectItem(getFocusIndex());
						postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
					}
					if (isItemHidden(getFocusIndex())) {
						makeVisible(getFocusIndex());
					} else {
						repaint(XListPeer::PAINT_FOCUS);
					}
				}
				break;
			}
		case $KeyEvent::VK_PAGE_UP:
			{
				{
					int32_t previousValue = $nc(this->vsb)->getValue();
					int32_t var$1 = $nc(this->vsb)->getValue();
					$nc(this->vsb)->setValue(var$1 - $nc(this->vsb)->getBlockIncrement());
					int32_t currentValue = $nc(this->vsb)->getValue();
					if (previousValue != currentValue) {
						int32_t var$2 = getFocusIndex();
						setFocusIndex($Math::max(var$2 - itemsInWindow(), 0));
						if (!this->multipleSelections) {
							selectItem(getFocusIndex());
							postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
						}
					}
					repaint();
					break;
				}
			}
		case $KeyEvent::VK_PAGE_DOWN:
			{
				{
					int32_t previousValue = $nc(this->vsb)->getValue();
					int32_t var$3 = $nc(this->vsb)->getValue();
					$nc(this->vsb)->setValue(var$3 + $nc(this->vsb)->getBlockIncrement());
					int32_t currentValue = $nc(this->vsb)->getValue();
					if (previousValue != currentValue) {
						int32_t var$5 = getFocusIndex();
						int32_t var$4 = var$5 + itemsInWindow();
						setFocusIndex($Math::min(var$4, $nc(this->items)->size() - 1));
						if (!this->multipleSelections) {
							selectItem(getFocusIndex());
							postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
						}
					}
					repaint();
					break;
				}
			}
		case $KeyEvent::VK_LEFT:
			{}
		case $KeyEvent::VK_KP_LEFT:
			{
				if (this->hsbVis & ($nc(this->hsb)->getValue() > 0)) {
					$nc(this->hsb)->setValue($nc(this->hsb)->getValue() - XListPeer::HORIZ_SCROLL_AMT);
					repaint();
				}
				break;
			}
		case $KeyEvent::VK_RIGHT:
			{}
		case $KeyEvent::VK_KP_RIGHT:
			{
				if (this->hsbVis) {
					$nc(this->hsb)->setValue($nc(this->hsb)->getValue() + XListPeer::HORIZ_SCROLL_AMT);
					repaint();
				}
				break;
			}
		case $KeyEvent::VK_HOME:
			{
				bool var$6 = !e->isControlDown();
				if (var$6 || $nc(($cast($List, this->target)))->getItemCount() <= 0) {
					break;
				}
				if (this->vsbVis) {
					$nc(this->vsb)->setValue($nc(this->vsb)->getMinimum());
				}
				setFocusIndex(0);
				if (!this->multipleSelections) {
					selectItem(getFocusIndex());
					postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
				}
				repaint();
				break;
			}
		case $KeyEvent::VK_END:
			{
				bool var$7 = !e->isControlDown();
				if (var$7 || $nc(($cast($List, this->target)))->getItemCount() <= 0) {
					break;
				}
				if (this->vsbVis) {
					$nc(this->vsb)->setValue($nc(this->vsb)->getMaximum());
				}
				setFocusIndex($nc(this->items)->size() - 1);
				if (!this->multipleSelections) {
					selectItem(getFocusIndex());
					postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
				}
				repaint();
				break;
			}
		case $KeyEvent::VK_SPACE:
			{
				bool var$8 = getFocusIndex() < 0;
				if (var$8 || $nc(($cast($List, this->target)))->getItemCount() <= 0) {
					break;
				}
				isSelected = this->isSelected(getFocusIndex());
				if (this->multipleSelections && isSelected) {
					deselectItem(getFocusIndex());
					postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::DESELECTED));
				} else if (!isSelected) {
					selectItem(getFocusIndex());
					postEvent($$new($ItemEvent, $cast($List, this->target), $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(getFocusIndex())), $ItemEvent::SELECTED));
				}
				break;
			}
		case $KeyEvent::VK_ENTER:
			{
				if ($nc(this->selected)->length > 0) {
					$var($Object, var$9, $cast($List, this->target));
					$var($String, var$10, $cast($String, $nc(this->items)->elementAt(getFocusIndex())));
					int64_t var$11 = e->getWhen();
					postEvent($$new($ActionEvent, var$9, $ActionEvent::ACTION_PERFORMED, var$10, var$11, e->getModifiers()));
				}
				break;
			}
		}
	}
}

void XListPeer::notifyValue($XScrollbar* obj, int32_t type, int32_t v, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XListPeer::log)->fine($$str({"Notify value changed on "_s, obj, " to "_s, $$str(v)}));
	}
	int32_t value = $nc(obj)->getValue();
	if ($equals(obj, this->vsb)) {
		scrollVertical(v - value);
		int32_t oldSel = this->eventIndex;
		int32_t newSel = this->eventIndex + v - value;
		if (this->mouseDraggedOutVertically && !isSelected(newSel)) {
			selectItem(newSel);
			this->eventIndex = newSel;
			repaint(oldSel, this->eventIndex, XListPeer::PAINT_ITEMS);
			setFocusIndex(newSel);
			repaint(XListPeer::PAINT_FOCUS);
		}
	} else if ($cast($XHorizontalScrollbar, obj) == this->hsb) {
		scrollHorizontal(v - value);
	}
}

void XListPeer::deselectAllItems() {
	$set(this, selected, $new($ints, 0));
	repaint(XListPeer::PAINT_ITEMS);
}

void XListPeer::setMultipleSelections(bool v) {
	if (this->multipleSelections != v) {
		if (!v) {
			int32_t selPos = (isSelected(this->focusIndex)) ? this->focusIndex : -1;
			deselectAllItems();
			if (selPos != -1) {
				selectItem(selPos);
			}
		}
		this->multipleSelections = v;
	}
}

void XListPeer::addItem($String* item, int32_t i) {
	$useLocalCurrentObjectStackCache();
	int32_t oldMaxLength = this->maxLength$;
	bool hsbWasVis = this->hsbVis;
	bool vsbWasVis = this->vsbVis;
	int32_t addedIndex = 0;
	if (i < 0 || i >= $nc(this->items)->size()) {
		i = -1;
	}
	this->currentIndex = -1;
	if (i == -1) {
		$nc(this->items)->addElement(item);
		i = 0;
		addedIndex = $nc(this->items)->size() - 1;
	} else {
		$nc(this->items)->insertElementAt(item, i);
		addedIndex = i;
		for (int32_t j = 0; j < $nc(this->selected)->length; ++j) {
			if ($nc(this->selected)->get(j) >= i) {
				(*$nc(this->selected))[j] += 1;
			}
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XListPeer::log)->finer($$str({"Adding item \'"_s, item, "\' to "_s, $$str(addedIndex)}));
	}
	bool repaintItems = !isItemHidden(addedIndex);
	this->maxLength$ = $Math::max(this->maxLength$, getItemWidth(addedIndex));
	layout();
	int32_t options = 0;
	if (this->vsbVis != vsbWasVis || this->hsbVis != hsbWasVis) {
		options = XListPeer::PAINT_ALL;
	} else {
		options = ((repaintItems ? (XListPeer::PAINT_ITEMS) : 0) | ((this->maxLength$ != oldMaxLength || (hsbWasVis ^ this->hsbVis)) ? (XListPeer::PAINT_HSCROLL) : 0)) | (($nc(this->vsb)->needsRepaint()) ? (XListPeer::PAINT_VSCROLL) : 0);
	}
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XListPeer::log)->finest($$str({"Last visible: "_s, $$str(getLastVisibleItem()), ", hsb changed : "_s, $$str((hsbWasVis ^ this->hsbVis)), ", items changed "_s, $$str(repaintItems)}));
	}
	repaint(addedIndex, getLastVisibleItem(), options);
}

void XListPeer::delItems(int32_t s, int32_t e) {
	$useLocalCurrentObjectStackCache();
	bool hsbWasVisible = this->hsbVis;
	bool vsbWasVisible = this->vsbVis;
	int32_t oldLastDisplayed = lastItemDisplayed();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XListPeer::log)->fine($$str({"Deleting from "_s, $$str(s), " to "_s, $$str(e)}));
	}
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$var($String, var$0, $$str({"Last displayed item: "_s, $$str(oldLastDisplayed), ", items in window "_s, $$str(itemsInWindow()), ", size "_s}));
		$nc(XListPeer::log)->finest($$concat(var$0, $$str($nc(this->items)->size())));
	}
	if ($nc(this->items)->size() == 0) {
		return;
	}
	if (s > e) {
		int32_t tmp = s;
		s = e;
		e = tmp;
	}
	if (s < 0) {
		s = 0;
	}
	if (e >= $nc(this->items)->size()) {
		e = $nc(this->items)->size() - 1;
	}
	bool var$1 = s >= getFirstVisibleItem();
	bool repaintNeeded = (var$1 && s <= getLastVisibleItem());
	for (int32_t i = s; i <= e; ++i) {
		$nc(this->items)->removeElementAt(s);
		int32_t j = posInSel(i);
		if (j != -1) {
			$var($ints, newsel, $new($ints, $nc(this->selected)->length - 1));
			$System::arraycopy(this->selected, 0, newsel, 0, j);
			$System::arraycopy(this->selected, j + 1, newsel, j, $nc(this->selected)->length - (j + 1));
			$set(this, selected, newsel);
		}
	}
	int32_t diff = (e - s) + 1;
	for (int32_t i = 0; i < $nc(this->selected)->length; ++i) {
		if ($nc(this->selected)->get(i) > e) {
			(*$nc(this->selected))[i] -= diff;
		}
	}
	int32_t options = XListPeer::PAINT_VSCROLL;
	if (getFocusIndex() > e) {
		setFocusIndex(getFocusIndex() - (e - s + 1));
		options |= XListPeer::PAINT_FOCUS;
	} else {
		bool var$3 = getFocusIndex() >= s;
		if (var$3 && getFocusIndex() <= e) {
			int32_t focusBound = ($nc(this->items)->size() > 0) ? 0 : -1;
			setFocusIndex($Math::max(s - 1, focusBound));
			options |= XListPeer::PAINT_FOCUS;
		}
	}
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XListPeer::log)->finest($$str({"Multiple selections: "_s, $$str(this->multipleSelections)}));
	}
	if ($nc(this->vsb)->getValue() >= s) {
		if ($nc(this->vsb)->getValue() <= e) {
			$nc(this->vsb)->setValue(e + 1 - diff);
		} else {
			$nc(this->vsb)->setValue($nc(this->vsb)->getValue() - diff);
		}
	}
	int32_t oldMaxLength = this->maxLength$;
	this->maxLength$ = maxLength();
	if (this->maxLength$ != oldMaxLength) {
		options |= XListPeer::PAINT_HSCROLL;
	}
	layout();
	repaintNeeded |= (vsbWasVisible ^ this->vsbVis) || (hsbWasVisible ^ this->hsbVis);
	if (repaintNeeded) {
		options |= XListPeer::PAINT_ALL;
	}
	repaint(s, oldLastDisplayed, options);
}

void XListPeer::select(int32_t index) {
	setFocusIndex(index);
	repaint(XListPeer::PAINT_FOCUS);
	selectItem(index);
}

void XListPeer::selectItem(int32_t index) {
	this->currentIndex = index;
	if (isSelected(index)) {
		return;
	}
	if (!this->multipleSelections) {
		if ($nc(this->selected)->length == 0) {
			$set(this, selected, $new($ints, 1));
			$nc(this->selected)->set(0, index);
		} else {
			int32_t oldSel = $nc(this->selected)->get(0);
			$nc(this->selected)->set(0, index);
			if (!isItemHidden(oldSel)) {
				repaint(oldSel, oldSel, XListPeer::PAINT_ITEMS);
			}
		}
	} else {
		$var($ints, newsel, $new($ints, $nc(this->selected)->length + 1));
		int32_t i = 0;
		while (i < $nc(this->selected)->length && index > $nc(this->selected)->get(i)) {
			newsel->set(i, $nc(this->selected)->get(i));
			++i;
		}
		newsel->set(i, index);
		$System::arraycopy(this->selected, i, newsel, i + 1, $nc(this->selected)->length - i);
		$set(this, selected, newsel);
	}
	if (!isItemHidden(index)) {
		repaint(index, index, XListPeer::PAINT_ITEMS);
	}
}

void XListPeer::deselect(int32_t index) {
	deselectItem(index);
}

void XListPeer::deselectItem(int32_t index) {
	if (!isSelected(index)) {
		return;
	}
	if (!this->multipleSelections) {
		$set(this, selected, $new($ints, 0));
	} else {
		int32_t i = posInSel(index);
		$var($ints, newsel, $new($ints, $nc(this->selected)->length - 1));
		$System::arraycopy(this->selected, 0, newsel, 0, i);
		$System::arraycopy(this->selected, i + 1, newsel, i, $nc(this->selected)->length - (i + 1));
		$set(this, selected, newsel);
	}
	this->currentIndex = index;
	if (!isItemHidden(index)) {
		repaint(index, index, XListPeer::PAINT_ITEMS);
	}
}

void XListPeer::makeVisible(int32_t index) {
	if (index < 0 || index >= $nc(this->items)->size()) {
		return;
	}
	if (isItemHidden(index)) {
		if (index < $nc(this->vsb)->getValue()) {
			scrollVertical(index - $nc(this->vsb)->getValue());
		} else if (index > lastItemDisplayed()) {
			int32_t val = index - lastItemDisplayed();
			scrollVertical(val);
		}
	}
}

void XListPeer::clear() {
	$set(this, selected, $new($ints, 0));
	$set(this, items, $new($Vector));
	this->currentIndex = -1;
	setFocusIndex(-1);
	$nc(this->vsb)->setValue(0);
	this->maxLength$ = 0;
	layout();
	repaint();
}

$ints* XListPeer::getSelectedIndexes() {
	return this->selected;
}

int32_t XListPeer::index2y(int32_t index) {
	int32_t h = getItemHeight();
	return XListPeer::MARGIN + ((index - $nc(this->vsb)->getValue()) * h) + XListPeer::SPACE;
}

bool XListPeer::validY(int32_t y) {
	int32_t shown = itemsDisplayed();
	int32_t lastY = shown * getItemHeight() + XListPeer::MARGIN;
	if (shown == itemsInWindow()) {
		lastY += XListPeer::MARGIN;
	}
	if (y < 0 || y >= lastY) {
		return false;
	}
	return true;
}

int32_t XListPeer::posInSel(int32_t index) {
	for (int32_t i = 0; i < $nc(this->selected)->length; ++i) {
		if (index == $nc(this->selected)->get(i)) {
			return i;
		}
	}
	return -1;
}

bool XListPeer::isIndexDisplayed(int32_t idx) {
	int32_t lastDisplayed = lastItemDisplayed();
	return idx <= lastDisplayed && idx >= $Math::max(0, lastDisplayed - itemsInWindow() + 1);
}

int32_t XListPeer::lastItemDisplayed() {
	int32_t n = itemsInWindow();
	int32_t var$0 = $nc(this->items)->size() - 1;
	return ($Math::min(var$0, ($nc(this->vsb)->getValue() + n) - 1));
}

bool XListPeer::isItemHidden(int32_t index) {
	bool var$0 = index < $nc(this->vsb)->getValue();
	if (!var$0) {
		int32_t var$1 = index;
		int32_t var$3 = $nc(this->vsb)->getValue();
		int32_t var$2 = var$3 + itemsInWindow();
		var$0 = var$1 >= var$2;
	}
	return var$0;
}

int32_t XListPeer::getListWidth() {
	return this->vsbVis ? this->width - XListPeer::SCROLLBAR_AREA : this->width;
}

int32_t XListPeer::itemsDisplayed() {
	int32_t var$1 = $nc(this->items)->size();
	int32_t var$0 = var$1 - $nc(this->vsb)->getValue();
	return ($Math::min(var$0, itemsInWindow()));
}

void XListPeer::scrollVertical(int32_t y) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XListPeer::log)->fine($$str({"Scrolling vertically by "_s, $$str(y)}));
	}
	int32_t itemsInWin = itemsInWindow();
	int32_t h = getItemHeight();
	int32_t pixelsToScroll = y * h;
	if ($nc(this->vsb)->getValue() < -y) {
		y = -$nc(this->vsb)->getValue();
	}
	$nc(this->vsb)->setValue($nc(this->vsb)->getValue() + y);
	$var($Rectangle, source, nullptr);
	$var($Point, distance, nullptr);
	int32_t firstItem = 0;
	int32_t lastItem = 0;
	int32_t options = ((XListPeer::PAINT_HIDEFOCUS | XListPeer::PAINT_ITEMS) | XListPeer::PAINT_VSCROLL) | XListPeer::PAINT_FOCUS;
	if (y > 0) {
		if (y < itemsInWin) {
			$assign(source, $new($Rectangle, XListPeer::MARGIN, XListPeer::MARGIN + pixelsToScroll, this->width - XListPeer::SCROLLBAR_AREA, h * (itemsInWin - y - 1) - 1));
			$assign(distance, $new($Point, 0, -pixelsToScroll));
			options |= XListPeer::COPY_AREA;
		}
		firstItem = $nc(this->vsb)->getValue() + itemsInWin - y - 1;
		lastItem = $nc(this->vsb)->getValue() + itemsInWin - 1;
	} else if (y < 0) {
		if (y + itemsInWindow() > 0) {
			$assign(source, $new($Rectangle, XListPeer::MARGIN, XListPeer::MARGIN, this->width - XListPeer::SCROLLBAR_AREA, h * (itemsInWin + y)));
			$assign(distance, $new($Point, 0, -pixelsToScroll));
			options |= XListPeer::COPY_AREA;
		}
		firstItem = $nc(this->vsb)->getValue();
		int32_t var$0 = getLastVisibleItem();
		lastItem = $Math::min(var$0, $nc(this->vsb)->getValue() + -y);
	}
	repaint(firstItem, lastItem, options, source, distance);
}

void XListPeer::scrollHorizontal(int32_t x) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XListPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XListPeer::log)->fine($$str({"Scrolling horizontally by "_s, $$str(this->y)}));
	}
	int32_t w = getListWidth();
	w -= ((2 * XListPeer::SPACE) + (2 * XListPeer::MARGIN));
	int32_t h = this->height - (XListPeer::SCROLLBAR_AREA + (2 * XListPeer::MARGIN));
	$nc(this->hsb)->setValue($nc(this->hsb)->getValue() + x);
	int32_t options = XListPeer::PAINT_ITEMS | XListPeer::PAINT_HSCROLL;
	$var($Rectangle, source, nullptr);
	$var($Point, distance, nullptr);
	if (x < 0) {
		$assign(source, $new($Rectangle, XListPeer::MARGIN + XListPeer::SPACE, XListPeer::MARGIN, w + x, h));
		$assign(distance, $new($Point, -x, 0));
		options |= XListPeer::COPY_AREA;
	} else if (x > 0) {
		$assign(source, $new($Rectangle, XListPeer::MARGIN + XListPeer::SPACE + x, XListPeer::MARGIN, w - x, h));
		$assign(distance, $new($Point, -x, 0));
		options |= XListPeer::COPY_AREA;
	}
	int32_t var$0 = $nc(this->vsb)->getValue();
	repaint(var$0, lastItemDisplayed(), options, source, distance);
}

int32_t XListPeer::y2index(int32_t y) {
	if (!validY(y)) {
		return -1;
	}
	int32_t var$0 = $div((y - XListPeer::MARGIN), getItemHeight());
	int32_t i = var$0 + $nc(this->vsb)->getValue();
	int32_t last = lastItemDisplayed();
	if (i > last) {
		i = last;
	}
	return i;
}

bool XListPeer::isSelected(int32_t index) {
	if (this->eventType == $ItemEvent::SELECTED && index == this->eventIndex) {
		return true;
	}
	for (int32_t i = 0; i < $nc(this->selected)->length; ++i) {
		if ($nc(this->selected)->get(i) == index) {
			return true;
		}
	}
	return false;
}

int32_t XListPeer::itemsInWindow(bool scrollbarVisible) {
	int32_t h = 0;
	if (scrollbarVisible) {
		h = this->height - ((2 * XListPeer::MARGIN) + XListPeer::SCROLLBAR_AREA);
	} else {
		h = this->height - 2 * XListPeer::MARGIN;
	}
	return ($div(h, getItemHeight()));
}

int32_t XListPeer::itemsInWindow() {
	return itemsInWindow(this->hsbVis);
}

bool XListPeer::inHorizontalScrollbar(int32_t x, int32_t y) {
	int32_t w = getListWidth();
	int32_t h = this->height - XListPeer::SCROLLBAR_WIDTH;
	return (this->hsbVis && (x >= 0) && (x <= w) && (y > h));
}

bool XListPeer::inVerticalScrollbar(int32_t x, int32_t y) {
	int32_t w = this->width - XListPeer::SCROLLBAR_WIDTH;
	int32_t h = this->hsbVis ? this->height - XListPeer::SCROLLBAR_AREA : this->height;
	return (this->vsbVis && (x > w) && (y >= 0) && (y <= h));
}

bool XListPeer::inWindow(int32_t x, int32_t y) {
	int32_t w = getListWidth();
	int32_t h = this->hsbVis ? this->height - XListPeer::SCROLLBAR_AREA : this->height;
	return ((x >= 0) && (x <= w)) && ((y >= 0) && (y <= h));
}

bool XListPeer::vsbIsVisible(bool hsbVisible) {
	int32_t var$0 = $nc(this->items)->size();
	return (var$0 > itemsInWindow(hsbVisible));
}

bool XListPeer::hsbIsVisible(bool vsbVisible) {
	int32_t w = this->width - ((2 * XListPeer::SPACE) + (2 * XListPeer::MARGIN) + (vsbVisible ? XListPeer::SCROLLBAR_AREA : 0));
	return (this->maxLength$ > w);
}

bool XListPeer::prePostEvent($AWTEvent* e) {
	if ($instanceOf($MouseEvent, e)) {
		return prePostMouseEvent($cast($MouseEvent, e));
	}
	return $XComponentPeer::prePostEvent(e);
}

bool XListPeer::prePostMouseEvent($MouseEvent* me) {
	if ($nc($(getToplevelXWindow()))->isModalBlocked()) {
		return false;
	}
	int32_t eventId = $nc(me)->getID();
	if (eventId == $MouseEvent::MOUSE_MOVED) {
	} else if ((eventId == $MouseEvent::MOUSE_DRAGGED || eventId == $MouseEvent::MOUSE_RELEASED) && this->isScrollBarOriginated) {
		if (eventId == $MouseEvent::MOUSE_RELEASED) {
			this->isScrollBarOriginated = false;
		}
		handleJavaMouseEventOnEDT(me);
		return true;
	} else {
		bool var$4 = (eventId == $MouseEvent::MOUSE_PRESSED || eventId == $MouseEvent::MOUSE_CLICKED);
		if (var$4) {
			int32_t var$6 = me->getX();
			bool var$5 = inVerticalScrollbar(var$6, me->getY());
			if (!var$5) {
				int32_t var$7 = me->getX();
				var$5 = inHorizontalScrollbar(var$7, me->getY());
			}
			var$4 = (var$5);
		}
		if (var$4) {
			if (eventId == $MouseEvent::MOUSE_PRESSED) {
				this->isScrollBarOriginated = true;
			}
			handleJavaMouseEventOnEDT(me);
			return true;
		}
	}
	return false;
}

void XListPeer::handleJavaMouseEventOnEDT($MouseEvent* me) {
	$useLocalCurrentObjectStackCache();
	$var($InvocationEvent, ev, $new($InvocationEvent, this->target, $$new($XListPeer$1, this, me)));
	postEvent(ev);
}

void XListPeer::setFont($Font* f) {
	if (!$Objects::equals($(getFont()), f)) {
		$XComponentPeer::setFont(f);
		initFontMetrics();
		layout();
		repaint();
	}
}

void clinit$XListPeer($Class* class$) {
	XListPeer::$assertionsDisabled = !XListPeer::class$->desiredAssertionStatus();
	$assignStatic(XListPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XListPeer"_s));
}

XListPeer::XListPeer() {
}

$Class* XListPeer::load$($String* name, bool initialize) {
	$loadClass(XListPeer, name, initialize, &_XListPeer_ClassInfo_, clinit$XListPeer, allocate$XListPeer);
	return class$;
}

$Class* XListPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun