#include <sun/awt/windows/WDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef MODELESS

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDialogPeer_FieldInfo_[] = {
	{"defaultBackground", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(WDialogPeer, defaultBackground)},
	{}
};

$MethodInfo _WDialogPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, 0, $method(static_cast<void(WDialogPeer::*)($Dialog*)>(&WDialogPeer::init$))},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"createAwtDialog", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE, $method(static_cast<void(WDialogPeer::*)($WComponentPeer*)>(&WDialogPeer::createAwtDialog))},
	{"endModal", "()V", nullptr, $NATIVE, $method(static_cast<void(WDialogPeer::*)()>(&WDialogPeer::endModal))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, 0},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isTargetUndecorated", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"notifyIMMOptionChange", "()V", nullptr, 0, $method(static_cast<void(WDialogPeer::*)()>(&WDialogPeer::notifyIMMOptionChange))},
	{"pSetIMMOption", "(Ljava/lang/String;)V", nullptr, $NATIVE, $method(static_cast<void(WDialogPeer::*)($String*)>(&WDialogPeer::pSetIMMOption))},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"realShow", "()V", nullptr, $PROTECTED},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"showModal", "()V", nullptr, $NATIVE, $method(static_cast<void(WDialogPeer::*)()>(&WDialogPeer::showModal))},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toBack", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createAwtDialog 30
#define _METHOD_INDEX_endModal 31
#define _METHOD_INDEX_pSetIMMOption 41
#define _METHOD_INDEX_showModal 61

$ClassInfo _WDialogPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDialogPeer",
	"sun.awt.windows.WWindowPeer",
	"java.awt.peer.DialogPeer",
	_WDialogPeer_FieldInfo_,
	_WDialogPeer_MethodInfo_
};

$Object* allocate$WDialogPeer($Class* clazz) {
	return $of($alloc(WDialogPeer));
}

void WDialogPeer::toFront() {
	this->$WWindowPeer::toFront();
}

void WDialogPeer::toBack() {
	this->$WWindowPeer::toBack();
}

void WDialogPeer::updateAlwaysOnTopState() {
	this->$WWindowPeer::updateAlwaysOnTopState();
}

void WDialogPeer::updateFocusableWindowState() {
	this->$WWindowPeer::updateFocusableWindowState();
}

void WDialogPeer::setTitle($String* title) {
	this->$WWindowPeer::setTitle(title);
}

void WDialogPeer::setResizable(bool resizable) {
	this->$WWindowPeer::setResizable(resizable);
}

void WDialogPeer::updateMinimumSize() {
	this->$WWindowPeer::updateMinimumSize();
}

void WDialogPeer::updateIconImages() {
	this->$WWindowPeer::updateIconImages();
}

void WDialogPeer::setModalBlocked($Dialog* dialog, bool blocked) {
	this->$WWindowPeer::setModalBlocked(dialog, blocked);
}

void WDialogPeer::repositionSecurityWarning() {
	this->$WWindowPeer::repositionSecurityWarning();
}

void WDialogPeer::print($Graphics* g) {
	this->$WWindowPeer::print(g);
}

void WDialogPeer::setBackground($Color* c) {
	this->$WWindowPeer::setBackground(c);
}

void WDialogPeer::setOpacity(float opacity) {
	this->$WWindowPeer::setOpacity(opacity);
}

void WDialogPeer::setOpaque(bool isOpaque) {
	this->$WWindowPeer::setOpaque(isOpaque);
}

void WDialogPeer::updateWindow() {
	this->$WWindowPeer::updateWindow();
}

$Insets* WDialogPeer::getInsets() {
	 return this->$WWindowPeer::getInsets();
}

void WDialogPeer::paint($Graphics* g) {
	this->$WWindowPeer::paint(g);
}

bool WDialogPeer::isObscured() {
	 return this->$WWindowPeer::isObscured();
}

bool WDialogPeer::canDetermineObscurity() {
	 return this->$WWindowPeer::canDetermineObscurity();
}

$Point* WDialogPeer::getLocationOnScreen() {
	 return this->$WWindowPeer::getLocationOnScreen();
}

void WDialogPeer::setVisible(bool b) {
	this->$WWindowPeer::setVisible(b);
}

void WDialogPeer::setEnabled(bool b) {
	this->$WWindowPeer::setEnabled(b);
}

void WDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WWindowPeer::setBounds(x, y, width, height, op);
}

void WDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WWindowPeer::coalescePaintEvent(e);
}

void WDialogPeer::handleEvent($AWTEvent* e) {
	this->$WWindowPeer::handleEvent(e);
}

$Dimension* WDialogPeer::getPreferredSize() {
	 return this->$WWindowPeer::getPreferredSize();
}

void WDialogPeer::layout() {
	this->$WWindowPeer::layout();
}

bool WDialogPeer::isFocusable() {
	 return this->$WWindowPeer::isFocusable();
}

$GraphicsConfiguration* WDialogPeer::getGraphicsConfiguration() {
	 return this->$WWindowPeer::getGraphicsConfiguration();
}

bool WDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WWindowPeer::updateGraphicsData(gc);
}

$ColorModel* WDialogPeer::getColorModel() {
	 return this->$WWindowPeer::getColorModel();
}

$Graphics* WDialogPeer::getGraphics() {
	 return this->$WWindowPeer::getGraphics();
}

$FontMetrics* WDialogPeer::getFontMetrics($Font* font) {
	 return this->$WWindowPeer::getFontMetrics(font);
}

void WDialogPeer::setForeground($Color* c) {
	this->$WWindowPeer::setForeground(c);
}

void WDialogPeer::setFont($Font* f) {
	this->$WWindowPeer::setFont(f);
}

void WDialogPeer::updateCursorImmediately() {
	this->$WWindowPeer::updateCursorImmediately();
}

bool WDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WWindowPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createImage(width, height);
}

$VolatileImage* WDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createVolatileImage(width, height);
}

$String* WDialogPeer::toString() {
	 return this->$WWindowPeer::toString();
}

void WDialogPeer::beginLayout() {
	this->$WWindowPeer::beginLayout();
}

void WDialogPeer::endLayout() {
	this->$WWindowPeer::endLayout();
}

void WDialogPeer::beginValidate() {
	this->$WWindowPeer::beginValidate();
}

void WDialogPeer::endValidate() {
	this->$WWindowPeer::endValidate();
}

bool WDialogPeer::handlesWheelScrolling() {
	 return this->$WWindowPeer::handlesWheelScrolling();
}

void WDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WWindowPeer::createBuffers(numBuffers, caps);
}

void WDialogPeer::destroyBuffers() {
	this->$WWindowPeer::destroyBuffers();
}

void WDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WWindowPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WDialogPeer::getBackBuffer() {
	 return this->$WWindowPeer::getBackBuffer();
}

void WDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WWindowPeer::reparent(newNativeParent);
}

bool WDialogPeer::isReparentSupported() {
	 return this->$WWindowPeer::isReparentSupported();
}

void WDialogPeer::applyShape($Region* shape) {
	this->$WWindowPeer::applyShape(shape);
}

void WDialogPeer::setZOrder($ComponentPeer* above) {
	this->$WWindowPeer::setZOrder(above);
}

void WDialogPeer::dispose() {
	this->$WWindowPeer::dispose();
}

int32_t WDialogPeer::hashCode() {
	 return this->$WWindowPeer::hashCode();
}

bool WDialogPeer::equals(Object$* arg0) {
	 return this->$WWindowPeer::equals(arg0);
}

$Object* WDialogPeer::clone() {
	 return this->$WWindowPeer::clone();
}

void WDialogPeer::finalize() {
	this->$WWindowPeer::finalize();
}

$Color* WDialogPeer::defaultBackground = nullptr;

void WDialogPeer::init$($Dialog* target) {
	$useLocalCurrentObjectStackCache();
	$WWindowPeer::init$(target);
	$var($InputMethodManager, imm, $InputMethodManager::getInstance());
	$var($String, menuString, $nc(imm)->getTriggerMenuString());
	if (menuString != nullptr) {
		pSetIMMOption(menuString);
	}
}

void WDialogPeer::createAwtDialog($WComponentPeer* parent) {
	$prepareNative(WDialogPeer, createAwtDialog, void, $WComponentPeer* parent);
	$invokeNative(WDialogPeer, createAwtDialog, parent);
	$finishNative();
}

void WDialogPeer::create($WComponentPeer* parent) {
	preCreate(parent);
	createAwtDialog(parent);
}

void WDialogPeer::showModal() {
	$prepareNative(WDialogPeer, showModal, void);
	$invokeNative(WDialogPeer, showModal);
	$finishNative();
}

void WDialogPeer::endModal() {
	$prepareNative(WDialogPeer, endModal, void);
	$invokeNative(WDialogPeer, endModal);
	$finishNative();
}

void WDialogPeer::initialize() {
	$useLocalCurrentObjectStackCache();
	$var($Dialog, target, $cast($Dialog, this->target));
	if (!$nc(target)->isBackgroundSet()) {
		target->setBackground(WDialogPeer::defaultBackground);
	}
	$WWindowPeer::initialize();
	if ($nc(target)->getTitle() != nullptr) {
		setTitle($(target->getTitle()));
	}
	setResizable($nc(target)->isResizable());
}

void WDialogPeer::realShow() {
	$var($Dialog, dlg, $cast($Dialog, this->target));
	$init($Dialog$ModalityType);
	if ($nc(dlg)->getModalityType() != $Dialog$ModalityType::MODELESS) {
		showModal();
	} else {
		$WWindowPeer::realShow();
	}
}

void WDialogPeer::hide() {
	$var($Dialog, dlg, $cast($Dialog, this->target));
	$init($Dialog$ModalityType);
	if ($nc(dlg)->getModalityType() != $Dialog$ModalityType::MODELESS) {
		endModal();
	} else {
		$WWindowPeer::hide();
	}
}

void WDialogPeer::blockWindows($List* toBlock) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(toBlock)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Window, w, $cast($Window, i$->next()));
			{
				$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
				if (wp != nullptr) {
					wp->setModalBlocked($cast($Dialog, this->target), true);
				}
			}
		}
	}
}

$Dimension* WDialogPeer::getMinimumSize() {
	if ($nc(($cast($Dialog, this->target)))->isUndecorated()) {
		return $WWindowPeer::getMinimumSize();
	}
	$var($GraphicsConfiguration, var$0, getGraphicsConfiguration());
	int32_t var$1 = getSysMinWidth();
	return $SunGraphicsEnvironment::toUserSpace(var$0, var$1, getSysMinHeight());
}

bool WDialogPeer::isTargetUndecorated() {
	return $nc(($cast($Dialog, this->target)))->isUndecorated();
}

void WDialogPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	if ($nc(($cast($Dialog, this->target)))->isUndecorated()) {
		$WWindowPeer::reshape(x, y, width, height);
	} else {
		reshapeFrame(x, y, width, height);
	}
}

void WDialogPeer::pSetIMMOption($String* option) {
	$prepareNative(WDialogPeer, pSetIMMOption, void, $String* option);
	$invokeNative(WDialogPeer, pSetIMMOption, option);
	$finishNative();
}

void WDialogPeer::notifyIMMOptionChange() {
	$nc($($InputMethodManager::getInstance()))->notifyChangeRequest($cast($Component, this->target));
}

void clinit$WDialogPeer($Class* class$) {
	$init($SystemColor);
	$assignStatic(WDialogPeer::defaultBackground, $SystemColor::control);
}

WDialogPeer::WDialogPeer() {
}

$Class* WDialogPeer::load$($String* name, bool initialize) {
	$loadClass(WDialogPeer, name, initialize, &_WDialogPeer_ClassInfo_, clinit$WDialogPeer, allocate$WDialogPeer);
	return class$;
}

$Class* WDialogPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun