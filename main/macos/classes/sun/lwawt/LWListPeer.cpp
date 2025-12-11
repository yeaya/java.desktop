#include <sun/lwawt/LWListPeer.h>

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
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListSelectionModel.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef DEFAULT_VISIBLE_ROWS
#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION
#undef TEXT

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
using $List = ::java::awt::List;
using $Point = ::java::awt::Point;
using $SystemColor = ::java::awt::SystemColor;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWListPeer$ScrollableJList = ::sun::lwawt::LWListPeer$ScrollableJList;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWListPeer_FieldInfo_[] = {
	{"DEFAULT_VISIBLE_ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWListPeer, DEFAULT_VISIBLE_ROWS)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWListPeer, TEXT)},
	{}
};

$MethodInfo _LWListPeer_MethodInfo_[] = {
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
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/List;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWListPeer::*)($List*,$PlatformComponent*)>(&LWListPeer::init$))},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"createDelegate", "()Lsun/lwawt/LWListPeer$ScrollableJList;", nullptr, 0},
	{"delItems", "(II)V", nullptr, $PUBLIC},
	{"deselect", "(I)V", nullptr, $PUBLIC},
	{"getCellSize", "()Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(LWListPeer::*)()>(&LWListPeer::getCellSize))},
	{"getDelegateFocusOwner", "()Ljava/awt/Component;", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC},
	{"initializeImpl", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"makeVisible", "(I)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWListPeer::*)()>(&LWListPeer::revalidate))},
	{"select", "(I)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWListPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
	{}
};

$ClassInfo _LWListPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWListPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.ListPeer",
	_LWListPeer_FieldInfo_,
	_LWListPeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/List;Lsun/lwawt/LWListPeer$ScrollableJList;>;Ljava/awt/peer/ListPeer;",
	nullptr,
	_LWListPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWListPeer$ScrollableJList,sun.lwawt.LWListPeer$ScrollableJList$JListDelegate,sun.lwawt.LWListPeer$ScrollableJList$1"
};

$Object* allocate$LWListPeer($Class* clazz) {
	return $of($alloc(LWListPeer));
}

void LWListPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWListPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWListPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWListPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWListPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWListPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWListPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWListPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWListPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWListPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWListPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWListPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWListPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWListPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWListPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWListPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWListPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWListPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWListPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWListPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWListPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWListPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWListPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWListPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWListPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWListPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

void LWListPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWListPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWListPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWListPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWListPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWListPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWListPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWListPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWListPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWListPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWListPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWListPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

$String* LWListPeer::TEXT = nullptr;

void LWListPeer::init$($List* target, $PlatformComponent* platformComponent) {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::init$(target, platformComponent);
	if (!$nc(($cast($List, $(getTarget()))))->isBackgroundSet()) {
		$init($SystemColor);
		$nc(($cast($List, $(getTarget()))))->setBackground($SystemColor::text);
	}
}

$JComponent* LWListPeer::createDelegate() {
	return $new($LWListPeer$ScrollableJList, this);
}

void LWListPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	setMultipleMode($nc(($cast($List, $(getTarget()))))->isMultipleMode());
	makeVisible($nc(($cast($List, $(getTarget()))))->getVisibleIndex());
	$var($ints, selectedIndices, $nc(($cast($List, $(getTarget()))))->getSelectedIndexes());
	$synchronized(getDelegateLock()) {
		$nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->setSkipStateChangedEvent(true);
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->setSelectedIndices(selectedIndices);
		$nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->setSkipStateChangedEvent(false);
	}
}

bool LWListPeer::isFocusable() {
	return true;
}

$Component* LWListPeer::getDelegateFocusOwner() {
	return $nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView();
}

$ints* LWListPeer::getSelectedIndexes() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		return $nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->getSelectedIndices();
	}
}

void LWListPeer::add($String* item, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getModel()))->add(index, item);
		revalidate();
	}
}

void LWListPeer::delItems(int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getModel()))->removeRange(start, end);
		revalidate();
	}
}

void LWListPeer::removeAll() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getModel()))->removeAllElements();
		revalidate();
	}
}

void LWListPeer::select(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->setSkipStateChangedEvent(true);
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->setSelectedIndex(index);
		$nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->setSkipStateChangedEvent(false);
	}
}

void LWListPeer::deselect(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->getSelectionModel()))->removeSelectionInterval(index, index);
	}
}

void LWListPeer::makeVisible(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->ensureIndexIsVisible(index);
	}
}

void LWListPeer::setMultipleMode(bool m) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->setSelectionMode(m ? $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION : $ListSelectionModel::SINGLE_SELECTION);
	}
}

$Dimension* LWListPeer::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* LWListPeer::getMinimumSize() {
	return getMinimumSize(LWListPeer::DEFAULT_VISIBLE_ROWS);
}

$Dimension* LWListPeer::getPreferredSize(int32_t rows) {
	return getMinimumSize(rows);
}

$Dimension* LWListPeer::getMinimumSize(int32_t rows) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$var($Dimension, size, getCellSize());
		$nc(size)->height *= rows;
		$var($JScrollBar, vbar, $nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getVerticalScrollBar());
		size->width += vbar != nullptr ? $nc($($nc(vbar)->getMinimumSize()))->width : 0;
		$var($Insets, pi, $nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getInsets());
		$var($Insets, vi, $nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->getInsets());
		size->width += $nc(pi)->left + pi->right + $nc(vi)->left + vi->right;
		size->height += pi->top + pi->bottom + vi->top + vi->bottom;
		return size;
	}
}

$Dimension* LWListPeer::getCellSize() {
	$useLocalCurrentObjectStackCache();
	$var($JList, jList, $nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView());
	$var($ListCellRenderer, cr, $nc(jList)->getCellRenderer());
	$var($Component, cell, $nc(cr)->getListCellRendererComponent(jList, LWListPeer::TEXT, 0, false, false));
	return $nc(cell)->getPreferredSize();
}

void LWListPeer::revalidate() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->getView()))->invalidate();
		$nc(($cast($LWListPeer$ScrollableJList, $(getDelegate()))))->validate();
	}
}

LWListPeer::LWListPeer() {
}

void clinit$LWListPeer($Class* class$) {
	$assignStatic(LWListPeer::TEXT, "0123456789abcde"_s);
}

$Class* LWListPeer::load$($String* name, bool initialize) {
	$loadClass(LWListPeer, name, initialize, &_LWListPeer_ClassInfo_, clinit$LWListPeer, allocate$LWListPeer);
	return class$;
}

$Class* LWListPeer::class$ = nullptr;

	} // lwawt
} // sun