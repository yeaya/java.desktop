#include <sun/lwawt/LWTextAreaPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWTextAreaPeer$ScrollableJTextArea.h>
#include <sun/lwawt/LWTextComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef DEFAULT_COLUMNS
#undef DEFAULT_ROWS
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef SCROLLBARS_HORIZONTAL_ONLY
#undef SCROLLBARS_NONE
#undef SCROLLBARS_VERTICAL_ONLY
#undef TEXT_VALUE_CHANGED
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_NEVER

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Region = ::sun::java2d::pipe::Region;
using $LWTextAreaPeer$ScrollableJTextArea = ::sun::lwawt::LWTextAreaPeer$ScrollableJTextArea;
using $LWTextComponentPeer = ::sun::lwawt::LWTextComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWTextAreaPeer_FieldInfo_[] = {
	{"DEFAULT_COLUMNS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWTextAreaPeer, DEFAULT_COLUMNS)},
	{"DEFAULT_ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWTextAreaPeer, DEFAULT_ROWS)},
	{}
};

$MethodInfo _LWTextAreaPeer_MethodInfo_[] = {
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
	{"*getCaretPosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC | $FINAL},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getSelectionEnd", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getSelectionStart", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextArea;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWTextAreaPeer::*)($TextArea*,$PlatformComponent*)>(&LWTextAreaPeer::init$))},
	{"createDelegate", "()Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;", nullptr, 0},
	{"getCursor", "(Ljava/awt/Point;)Ljava/awt/Cursor;", nullptr, 0},
	{"getDelegateFocusOwner", "()Ljava/awt/Component;", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTextComponent", "()Ljavax/swing/JTextArea;", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*select", "(II)V", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setCaretPosition", "(I)V", nullptr, $PUBLIC | $FINAL},
	{"*setEditable", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setScrollBarVisibility", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(LWTextAreaPeer::*)(int32_t)>(&LWTextAreaPeer::setScrollBarVisibility))},
	{"*setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWTextAreaPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea", "sun.lwawt.LWTextAreaPeer", "ScrollableJTextArea", $FINAL},
	{}
};

$ClassInfo _LWTextAreaPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWTextAreaPeer",
	"sun.lwawt.LWTextComponentPeer",
	"java.awt.peer.TextAreaPeer",
	_LWTextAreaPeer_FieldInfo_,
	_LWTextAreaPeer_MethodInfo_,
	"Lsun/lwawt/LWTextComponentPeer<Ljava/awt/TextArea;Lsun/lwawt/LWTextAreaPeer$ScrollableJTextArea;>;Ljava/awt/peer/TextAreaPeer;",
	nullptr,
	_LWTextAreaPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWTextAreaPeer$ScrollableJTextArea,sun.lwawt.LWTextAreaPeer$ScrollableJTextArea$JTextAreaDelegate"
};

$Object* allocate$LWTextAreaPeer($Class* clazz) {
	return $of($alloc(LWTextAreaPeer));
}

void LWTextAreaPeer::setEditable(bool editable) {
	this->$LWTextComponentPeer::setEditable(editable);
}

$String* LWTextAreaPeer::getText() {
	 return this->$LWTextComponentPeer::getText();
}

void LWTextAreaPeer::setText($String* text) {
	this->$LWTextComponentPeer::setText(text);
}

int32_t LWTextAreaPeer::getSelectionStart() {
	 return this->$LWTextComponentPeer::getSelectionStart();
}

int32_t LWTextAreaPeer::getSelectionEnd() {
	 return this->$LWTextComponentPeer::getSelectionEnd();
}

void LWTextAreaPeer::select(int32_t selStart, int32_t selEnd) {
	this->$LWTextComponentPeer::select(selStart, selEnd);
}

void LWTextAreaPeer::setCaretPosition(int32_t pos) {
	this->$LWTextComponentPeer::setCaretPosition(pos);
}

int32_t LWTextAreaPeer::getCaretPosition() {
	 return this->$LWTextComponentPeer::getCaretPosition();
}

$InputMethodRequests* LWTextAreaPeer::getInputMethodRequests() {
	 return this->$LWTextComponentPeer::getInputMethodRequests();
}

bool LWTextAreaPeer::isFocusable() {
	 return this->$LWTextComponentPeer::isFocusable();
}

void LWTextAreaPeer::dispose() {
	this->$LWTextComponentPeer::dispose();
}

$GraphicsConfiguration* LWTextAreaPeer::getGraphicsConfiguration() {
	 return this->$LWTextComponentPeer::getGraphicsConfiguration();
}

bool LWTextAreaPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWTextComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWTextAreaPeer::getGraphics() {
	 return this->$LWTextComponentPeer::getGraphics();
}

$ColorModel* LWTextAreaPeer::getColorModel() {
	 return this->$LWTextComponentPeer::getColorModel();
}

void LWTextAreaPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWTextComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWTextAreaPeer::getBackBuffer() {
	 return this->$LWTextComponentPeer::getBackBuffer();
}

void LWTextAreaPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWTextComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWTextAreaPeer::destroyBuffers() {
	this->$LWTextComponentPeer::destroyBuffers();
}

void LWTextAreaPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWTextComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWTextAreaPeer::getLocationOnScreen() {
	 return this->$LWTextComponentPeer::getLocationOnScreen();
}

void LWTextAreaPeer::setBackground($Color* c) {
	this->$LWTextComponentPeer::setBackground(c);
}

void LWTextAreaPeer::setForeground($Color* c) {
	this->$LWTextComponentPeer::setForeground(c);
}

void LWTextAreaPeer::setFont($Font* f) {
	this->$LWTextComponentPeer::setFont(f);
}

$FontMetrics* LWTextAreaPeer::getFontMetrics($Font* f) {
	 return this->$LWTextComponentPeer::getFontMetrics(f);
}

void LWTextAreaPeer::setEnabled(bool e) {
	this->$LWTextComponentPeer::setEnabled(e);
}

void LWTextAreaPeer::setVisible(bool v) {
	this->$LWTextComponentPeer::setVisible(v);
}

void LWTextAreaPeer::paint($Graphics* g) {
	this->$LWTextComponentPeer::paint(g);
}

void LWTextAreaPeer::print($Graphics* g) {
	this->$LWTextComponentPeer::print(g);
}

void LWTextAreaPeer::reparent($ContainerPeer* newContainer) {
	this->$LWTextComponentPeer::reparent(newContainer);
}

bool LWTextAreaPeer::isReparentSupported() {
	 return this->$LWTextComponentPeer::isReparentSupported();
}

void LWTextAreaPeer::setZOrder($ComponentPeer* above) {
	this->$LWTextComponentPeer::setZOrder(above);
}

void LWTextAreaPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWTextComponentPeer::coalescePaintEvent(e);
}

void LWTextAreaPeer::layout() {
	this->$LWTextComponentPeer::layout();
}

bool LWTextAreaPeer::isObscured() {
	 return this->$LWTextComponentPeer::isObscured();
}

bool LWTextAreaPeer::canDetermineObscurity() {
	 return this->$LWTextComponentPeer::canDetermineObscurity();
}

void LWTextAreaPeer::updateCursorImmediately() {
	this->$LWTextComponentPeer::updateCursorImmediately();
}

bool LWTextAreaPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWTextComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWTextAreaPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWTextComponentPeer::createImage(width, height);
}

$VolatileImage* LWTextAreaPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWTextComponentPeer::createVolatileImage(w, h);
}

bool LWTextAreaPeer::handlesWheelScrolling() {
	 return this->$LWTextComponentPeer::handlesWheelScrolling();
}

void LWTextAreaPeer::applyShape($Region* shape) {
	this->$LWTextComponentPeer::applyShape(shape);
}

void LWTextAreaPeer::handleEvent($AWTEvent* e) {
	this->$LWTextComponentPeer::handleEvent(e);
}

int32_t LWTextAreaPeer::hashCode() {
	 return this->$LWTextComponentPeer::hashCode();
}

bool LWTextAreaPeer::equals(Object$* arg0) {
	 return this->$LWTextComponentPeer::equals(arg0);
}

$Object* LWTextAreaPeer::clone() {
	 return this->$LWTextComponentPeer::clone();
}

$String* LWTextAreaPeer::toString() {
	 return this->$LWTextComponentPeer::toString();
}

void LWTextAreaPeer::finalize() {
	this->$LWTextComponentPeer::finalize();
}

void LWTextAreaPeer::init$($TextArea* target, $PlatformComponent* platformComponent) {
	$LWTextComponentPeer::init$(target, platformComponent);
}

$JComponent* LWTextAreaPeer::createDelegate() {
	return $new($LWTextAreaPeer$ScrollableJTextArea, this);
}

void LWTextAreaPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWTextComponentPeer::initializeImpl();
	int32_t visibility = $nc(($cast($TextArea, $(getTarget()))))->getScrollbarVisibility();
	$synchronized(getDelegateLock()) {
		$nc($($cast($JTextArea, getTextComponent())))->setWrapStyleWord(true);
		setScrollBarVisibility(visibility);
	}
}

$JTextComponent* LWTextAreaPeer::getTextComponent() {
	return $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getView();
}

$Cursor* LWTextAreaPeer::getCursor($Point* p) {
	$useLocalCurrentObjectStackCache();
	bool isContains = false;
	$synchronized(getDelegateLock()) {
		isContains = $nc($($nc($($nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getViewport()))->getBounds()))->contains(p);
	}
	return isContains ? $LWTextComponentPeer::getCursor(p) : ($Cursor*)nullptr;
}

$Component* LWTextAreaPeer::getDelegateFocusOwner() {
	return getTextComponent();
}

$Dimension* LWTextAreaPeer::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* LWTextAreaPeer::getMinimumSize() {
	return getMinimumSize(LWTextAreaPeer::DEFAULT_ROWS, LWTextAreaPeer::DEFAULT_COLUMNS);
}

$Dimension* LWTextAreaPeer::getPreferredSize(int32_t rows, int32_t columns) {
	return getMinimumSize(rows, columns);
}

$Dimension* LWTextAreaPeer::getMinimumSize(int32_t rows, int32_t columns) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $LWTextComponentPeer::getMinimumSize(rows, columns));
	$synchronized(getDelegateLock()) {
		$var($Insets, pi, $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getInsets());
		$nc(size)->width += $nc(pi)->left + pi->right;
		size->height += pi->top + pi->bottom;
		int32_t vsbPolicy = $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getVerticalScrollBarPolicy();
		if (vsbPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS) {
			$var($JScrollBar, vbar, $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getVerticalScrollBar());
			size->width += vbar != nullptr ? $nc($($nc(vbar)->getMinimumSize()))->width : 0;
		}
		int32_t hsbPolicy = $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getHorizontalScrollBarPolicy();
		if (hsbPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS) {
			$var($JScrollBar, hbar, $nc(($cast($LWTextAreaPeer$ScrollableJTextArea, $(getDelegate()))))->getHorizontalScrollBar());
			size->height += hbar != nullptr ? $nc($($nc(hbar)->getMinimumSize()))->height : 0;
		}
	}
	return size;
}

void LWTextAreaPeer::insert($String* text, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($LWTextAreaPeer$ScrollableJTextArea, pane, $cast($LWTextAreaPeer$ScrollableJTextArea, getDelegate()));
	$synchronized(getDelegateLock()) {
		$var($JTextArea, area, $nc(pane)->getView());
		bool var$0 = pos >= $nc($($nc(area)->getDocument()))->getLength();
		bool doScroll = var$0 && $nc($(area->getDocument()))->getLength() != 0;
		area->insert(text, pos);
		revalidate();
		if (doScroll) {
			$var($JScrollBar, vbar, pane->getVerticalScrollBar());
			if (vbar != nullptr) {
				int32_t var$1 = vbar->getMaximum();
				vbar->setValue(var$1 - vbar->getVisibleAmount());
			}
		}
	}
	repaintPeer();
}

void LWTextAreaPeer::replaceRange($String* text, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$var($Document, document, $nc($($cast($JTextArea, getTextComponent())))->getDocument());
		$nc(document)->removeDocumentListener(this);
		$nc($($cast($JTextArea, getTextComponent())))->replaceRange(text, start, end);
		revalidate();
		postEvent($$new($TextEvent, $(getTarget()), $TextEvent::TEXT_VALUE_CHANGED));
		document->addDocumentListener(this);
	}
	repaintPeer();
}

void LWTextAreaPeer::setScrollBarVisibility(int32_t visibility) {
	$useLocalCurrentObjectStackCache();
	$var($LWTextAreaPeer$ScrollableJTextArea, pane, $cast($LWTextAreaPeer$ScrollableJTextArea, getDelegate()));
	$var($JTextArea, view, $nc(pane)->getView());
	$nc(view)->setLineWrap(false);
	switch (visibility) {
	case $TextArea::SCROLLBARS_NONE:
		{
			pane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER);
			pane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER);
			view->setLineWrap(true);
			break;
		}
	case $TextArea::SCROLLBARS_VERTICAL_ONLY:
		{
			pane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER);
			pane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS);
			view->setLineWrap(true);
			break;
		}
	case $TextArea::SCROLLBARS_HORIZONTAL_ONLY:
		{
			pane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER);
			pane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS);
			break;
		}
	default:
		{
			pane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS);
			pane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS);
			break;
		}
	}
}

LWTextAreaPeer::LWTextAreaPeer() {
}

$Class* LWTextAreaPeer::load$($String* name, bool initialize) {
	$loadClass(LWTextAreaPeer, name, initialize, &_LWTextAreaPeer_ClassInfo_, allocate$LWTextAreaPeer);
	return class$;
}

$Class* LWTextAreaPeer::class$ = nullptr;

	} // lwawt
} // sun