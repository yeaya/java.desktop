#include <sun/awt/windows/WListPeer.h>

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
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WListPeer$1.h>
#include <sun/awt/windows/WListPeer$2.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

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
using $List = ::java::awt::List;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WListPeer$1 = ::sun::awt::windows::WListPeer$1;
using $WListPeer$2 = ::sun::awt::windows::WListPeer$2;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WListPeer_FieldInfo_[] = {
	{"fm", "Ljava/awt/FontMetrics;", nullptr, $PRIVATE, $field(WListPeer, fm)},
	{}
};

$MethodInfo _WListPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/List;)V", nullptr, 0, $method(static_cast<void(WListPeer::*)($List*)>(&WListPeer::init$))},
	{"_setFont", "(Ljava/awt/Font;)V", nullptr, $SYNCHRONIZED},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addItem", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(WListPeer::*)($String*,int32_t)>(&WListPeer::addItem))},
	{"addItems", "([Ljava/lang/String;II)V", nullptr, $NATIVE, $method(static_cast<void(WListPeer::*)($StringArray*,int32_t,int32_t)>(&WListPeer::addItems))},
	{"clear", "()V", nullptr, $PUBLIC, $method(static_cast<void(WListPeer::*)()>(&WListPeer::clear))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"delItems", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"deselect", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"getMaxWidth", "()I", nullptr, $PUBLIC | $NATIVE, $method(static_cast<int32_t(WListPeer::*)()>(&WListPeer::getMaxWidth))},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC},
	{"handleAction", "(IJI)V", nullptr, 0, $method(static_cast<void(WListPeer::*)(int32_t,int64_t,int32_t)>(&WListPeer::handleAction))},
	{"handleListChanged", "(I)V", nullptr, 0, $method(static_cast<void(WListPeer::*)(int32_t)>(&WListPeer::handleListChanged))},
	{"initialize", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isSelected", "(I)Z", nullptr, $NATIVE, $method(static_cast<bool(WListPeer::*)(int32_t)>(&WListPeer::isSelected))},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"makeVisible", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"select", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC},
	{"setMultipleSelections", "(Z)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(WListPeer::*)(bool)>(&WListPeer::setMultipleSelections))},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateMaxItemWidth", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WListPeer::*)()>(&WListPeer::updateMaxItemWidth))},
	{}
};

#define _METHOD_INDEX_addItems 27
#define _METHOD_INDEX_create 29
#define _METHOD_INDEX_delItems 30
#define _METHOD_INDEX_deselect 31
#define _METHOD_INDEX_getMaxWidth 32
#define _METHOD_INDEX_isSelected 42
#define _METHOD_INDEX_makeVisible 44
#define _METHOD_INDEX_select 50
#define _METHOD_INDEX_setMultipleSelections 57
#define _METHOD_INDEX_updateMaxItemWidth 64

$InnerClassInfo _WListPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WListPeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WListPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WListPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WListPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.ListPeer",
	_WListPeer_FieldInfo_,
	_WListPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WListPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WListPeer$2,sun.awt.windows.WListPeer$1"
};

$Object* allocate$WListPeer($Class* clazz) {
	return $of($alloc(WListPeer));
}

bool WListPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WListPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WListPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WListPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WListPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WListPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WListPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WListPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WListPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WListPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WListPeer::getMinimumSize() {
	 return this->$WComponentPeer::getMinimumSize();
}

$Dimension* WListPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WListPeer::layout() {
	this->$WComponentPeer::layout();
}

$GraphicsConfiguration* WListPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WListPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WListPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WListPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WListPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WListPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WListPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WListPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WListPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WListPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WListPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WListPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WListPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WListPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WListPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WListPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WListPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WListPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WListPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WListPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WListPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WListPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WListPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WListPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WListPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WListPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WListPeer::finalize() {
	this->$WComponentPeer::finalize();
}

bool WListPeer::isFocusable() {
	return true;
}

$ints* WListPeer::getSelectedIndexes() {
	$var($List, l, $cast($List, this->target));
	int32_t len = $nc(l)->getItemCount();
	$var($ints, sel, $new($ints, len));
	int32_t nsel = 0;
	for (int32_t i = 0; i < len; ++i) {
		if (isSelected(i)) {
			sel->set(nsel++, i);
		}
	}
	$var($ints, selected, $new($ints, nsel));
	$System::arraycopy(sel, 0, selected, 0, nsel);
	return selected;
}

void WListPeer::add($String* item, int32_t index) {
	addItem(item, index);
}

void WListPeer::removeAll() {
	clear();
}

void WListPeer::setMultipleMode(bool b) {
	setMultipleSelections(b);
}

$Dimension* WListPeer::getPreferredSize(int32_t rows) {
	if (this->fm == nullptr) {
		$var($List, li, $cast($List, this->target));
		$set(this, fm, getFontMetrics($($nc(li)->getFont())));
	}
	$var($Dimension, d, getMinimumSize(rows));
	$nc(d)->width = $Math::max(d->width, getMaxWidth() + 20);
	return d;
}

$Dimension* WListPeer::getMinimumSize(int32_t rows) {
	int32_t var$0 = 20 + $nc(this->fm)->stringWidth("0123456789abcde"_s);
	return $new($Dimension, var$0, ($nc(this->fm)->getHeight() * rows) + 4);
}

void WListPeer::addItem($String* item, int32_t index) {
	addItems($$new($StringArray, {item}), index, $nc(this->fm)->stringWidth(item));
}

void WListPeer::addItems($StringArray* items, int32_t index, int32_t width) {
	$prepareNative(WListPeer, addItems, void, $StringArray* items, int32_t index, int32_t width);
	$invokeNative(WListPeer, addItems, items, index, width);
	$finishNative();
}

void WListPeer::delItems(int32_t start, int32_t end) {
	$prepareNative(WListPeer, delItems, void, int32_t start, int32_t end);
	$invokeNative(WListPeer, delItems, start, end);
	$finishNative();
}

void WListPeer::clear() {
	$var($List, l, $cast($List, this->target));
	delItems(0, $nc(l)->getItemCount());
}

void WListPeer::select(int32_t index) {
	$prepareNative(WListPeer, select, void, int32_t index);
	$invokeNative(WListPeer, select, index);
	$finishNative();
}

void WListPeer::deselect(int32_t index) {
	$prepareNative(WListPeer, deselect, void, int32_t index);
	$invokeNative(WListPeer, deselect, index);
	$finishNative();
}

void WListPeer::makeVisible(int32_t index) {
	$prepareNative(WListPeer, makeVisible, void, int32_t index);
	$invokeNative(WListPeer, makeVisible, index);
	$finishNative();
}

void WListPeer::setMultipleSelections(bool v) {
	$prepareNative(WListPeer, setMultipleSelections, void, bool v);
	$invokeNative(WListPeer, setMultipleSelections, v);
	$finishNative();
}

int32_t WListPeer::getMaxWidth() {
	int32_t $ret = 0;
	$prepareNative(WListPeer, getMaxWidth, int32_t);
	$ret = $invokeNative(WListPeer, getMaxWidth);
	$finishNative();
	return $ret;
}

void WListPeer::init$($List* target) {
	$WComponentPeer::init$(target);
}

void WListPeer::create($WComponentPeer* parent) {
	$prepareNative(WListPeer, create, void, $WComponentPeer* parent);
	$invokeNative(WListPeer, create, parent);
	$finishNative();
}

void WListPeer::initialize() {
	$var($List, li, $cast($List, this->target));
	$set(this, fm, getFontMetrics($($nc(li)->getFont())));
	$var($Font, f, $nc(li)->getFont());
	if (f != nullptr) {
		setFont(f);
	}
	int32_t nitems = li->getItemCount();
	if (nitems > 0) {
		$var($StringArray, items, $new($StringArray, nitems));
		int32_t maxWidth = 0;
		int32_t width = 0;
		for (int32_t i = 0; i < nitems; ++i) {
			items->set(i, $(li->getItem(i)));
			width = $nc(this->fm)->stringWidth(items->get(i));
			if (width > maxWidth) {
				maxWidth = width;
			}
		}
		addItems(items, 0, maxWidth);
	}
	setMultipleSelections(li->isMultipleMode());
	$var($ints, sel, li->getSelectedIndexes());
	for (int32_t i = 0; i < $nc(sel)->length; ++i) {
		select(sel->get(i));
	}
	int32_t index = li->getVisibleIndex();
	if (index < 0 && $nc(sel)->length > 0) {
		index = sel->get(0);
	}
	if (index >= 0) {
		makeVisible(index);
	}
	$WComponentPeer::initialize();
}

bool WListPeer::shouldClearRectBeforePaint() {
	return false;
}

void WListPeer::updateMaxItemWidth() {
	$prepareNative(WListPeer, updateMaxItemWidth, void);
	$invokeNative(WListPeer, updateMaxItemWidth);
	$finishNative();
}

bool WListPeer::isSelected(int32_t index) {
	bool $ret = false;
	$prepareNative(WListPeer, isSelected, bool, int32_t index);
	$ret = $invokeNative(WListPeer, isSelected, index);
	$finishNative();
	return $ret;
}

void WListPeer::_setFont($Font* f) {
	$synchronized(this) {
		$WComponentPeer::_setFont(f);
		$set(this, fm, getFontMetrics($($nc(($cast($List, this->target)))->getFont())));
		updateMaxItemWidth();
	}
}

void WListPeer::handleAction(int32_t index, int64_t when, int32_t modifiers) {
	$var($List, l, $cast($List, this->target));
	$WToolkit::executeOnEventHandlerThread(l, $$new($WListPeer$1, this, l, index, when, modifiers));
}

void WListPeer::handleListChanged(int32_t index) {
	$var($List, l, $cast($List, this->target));
	$WToolkit::executeOnEventHandlerThread(l, $$new($WListPeer$2, this, l, index));
}

WListPeer::WListPeer() {
}

$Class* WListPeer::load$($String* name, bool initialize) {
	$loadClass(WListPeer, name, initialize, &_WListPeer_ClassInfo_, allocate$WListPeer);
	return class$;
}

$Class* WListPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun