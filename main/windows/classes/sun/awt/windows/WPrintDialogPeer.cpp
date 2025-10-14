#include <sun/awt/windows/WPrintDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

class WPrintDialogPeer$$Lambda$lambda$show$0 : public $Runnable {
	$class(WPrintDialogPeer$$Lambda$lambda$show$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WPrintDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$show$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WPrintDialogPeer$$Lambda$lambda$show$0>());
	}
	WPrintDialogPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WPrintDialogPeer$$Lambda$lambda$show$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WPrintDialogPeer$$Lambda$lambda$show$0, inst$)},
	{}
};
$MethodInfo WPrintDialogPeer$$Lambda$lambda$show$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WPrintDialogPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(WPrintDialogPeer$$Lambda$lambda$show$0::*)(WPrintDialogPeer*)>(&WPrintDialogPeer$$Lambda$lambda$show$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WPrintDialogPeer$$Lambda$lambda$show$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WPrintDialogPeer$$Lambda$lambda$show$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WPrintDialogPeer$$Lambda$lambda$show$0::load$($String* name, bool initialize) {
	$loadClass(WPrintDialogPeer$$Lambda$lambda$show$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WPrintDialogPeer$$Lambda$lambda$show$0::class$ = nullptr;

$FieldInfo _WPrintDialogPeer_FieldInfo_[] = {
	{"parent", "Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $field(WPrintDialogPeer, parent)},
	{"blockedWindows", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/windows/WWindowPeer;>;", $PRIVATE, $field(WPrintDialogPeer, blockedWindows)},
	{}
};

$MethodInfo _WPrintDialogPeer_MethodInfo_[] = {
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC},
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/windows/WPrintDialog;)V", nullptr, 0, $method(static_cast<void(WPrintDialogPeer::*)($WPrintDialog*)>(&WPrintDialogPeer::init$))},
	{"_show", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WPrintDialogPeer::*)()>(&WPrintDialogPeer::_show))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC},
	{"blockWindow", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $SYNCHRONIZED},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"checkCreation", "()V", nullptr, $PROTECTED},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"createScreenSurface", "(Z)V", nullptr, $PUBLIC},
	{"disable", "()V", nullptr, 0},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"enable", "()V", nullptr, 0},
	{"endValidate", "()V", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, 0},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WPrintDialogPeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"invalidate", "(IIII)V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"lambda$show$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(WPrintDialogPeer::*)()>(&WPrintDialogPeer::lambda$show$0))},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE},
	{"requestFocus", "(ZZ)Z", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setHWnd", "(J)V", nullptr, $SYNCHRONIZED},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, 0},
	{"toBack", "()V", nullptr, $PUBLIC | $NATIVE},
	{"toFront", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unblockWindow", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $SYNCHRONIZED},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"updateWindow", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__show 26
#define _METHOD_INDEX_initIDs 41
#define _METHOD_INDEX_toBack 73
#define _METHOD_INDEX_toFront 74

$ClassInfo _WPrintDialogPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WPrintDialogPeer",
	"sun.awt.windows.WWindowPeer",
	"java.awt.peer.DialogPeer",
	_WPrintDialogPeer_FieldInfo_,
	_WPrintDialogPeer_MethodInfo_
};

$Object* allocate$WPrintDialogPeer($Class* clazz) {
	return $of($alloc(WPrintDialogPeer));
}

void WPrintDialogPeer::setTitle($String* title) {
	this->$WWindowPeer::setTitle(title);
}

void WPrintDialogPeer::setModalBlocked($Dialog* dialog, bool blocked) {
	this->$WWindowPeer::setModalBlocked(dialog, blocked);
}

void WPrintDialogPeer::repositionSecurityWarning() {
	this->$WWindowPeer::repositionSecurityWarning();
}

void WPrintDialogPeer::print($Graphics* g) {
	this->$WWindowPeer::print(g);
}

void WPrintDialogPeer::updateWindow() {
	this->$WWindowPeer::updateWindow();
}

$Insets* WPrintDialogPeer::getInsets() {
	 return this->$WWindowPeer::getInsets();
}

void WPrintDialogPeer::paint($Graphics* g) {
	this->$WWindowPeer::paint(g);
}

bool WPrintDialogPeer::isObscured() {
	 return this->$WWindowPeer::isObscured();
}

bool WPrintDialogPeer::canDetermineObscurity() {
	 return this->$WWindowPeer::canDetermineObscurity();
}

$Point* WPrintDialogPeer::getLocationOnScreen() {
	 return this->$WWindowPeer::getLocationOnScreen();
}

void WPrintDialogPeer::setVisible(bool b) {
	this->$WWindowPeer::setVisible(b);
}

void WPrintDialogPeer::setEnabled(bool b) {
	this->$WWindowPeer::setEnabled(b);
}

void WPrintDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WWindowPeer::setBounds(x, y, width, height, op);
}

void WPrintDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WWindowPeer::coalescePaintEvent(e);
}

void WPrintDialogPeer::handleEvent($AWTEvent* e) {
	this->$WWindowPeer::handleEvent(e);
}

$Dimension* WPrintDialogPeer::getMinimumSize() {
	 return this->$WWindowPeer::getMinimumSize();
}

$Dimension* WPrintDialogPeer::getPreferredSize() {
	 return this->$WWindowPeer::getPreferredSize();
}

void WPrintDialogPeer::layout() {
	this->$WWindowPeer::layout();
}

bool WPrintDialogPeer::isFocusable() {
	 return this->$WWindowPeer::isFocusable();
}

$GraphicsConfiguration* WPrintDialogPeer::getGraphicsConfiguration() {
	 return this->$WWindowPeer::getGraphicsConfiguration();
}

bool WPrintDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WWindowPeer::updateGraphicsData(gc);
}

$ColorModel* WPrintDialogPeer::getColorModel() {
	 return this->$WWindowPeer::getColorModel();
}

$Graphics* WPrintDialogPeer::getGraphics() {
	 return this->$WWindowPeer::getGraphics();
}

$FontMetrics* WPrintDialogPeer::getFontMetrics($Font* font) {
	 return this->$WWindowPeer::getFontMetrics(font);
}

void WPrintDialogPeer::updateCursorImmediately() {
	this->$WWindowPeer::updateCursorImmediately();
}

$Image* WPrintDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createImage(width, height);
}

$VolatileImage* WPrintDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createVolatileImage(width, height);
}

$String* WPrintDialogPeer::toString() {
	 return this->$WWindowPeer::toString();
}

void WPrintDialogPeer::beginLayout() {
	this->$WWindowPeer::beginLayout();
}

void WPrintDialogPeer::endLayout() {
	this->$WWindowPeer::endLayout();
}

bool WPrintDialogPeer::handlesWheelScrolling() {
	 return this->$WWindowPeer::handlesWheelScrolling();
}

void WPrintDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WWindowPeer::createBuffers(numBuffers, caps);
}

void WPrintDialogPeer::destroyBuffers() {
	this->$WWindowPeer::destroyBuffers();
}

void WPrintDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WWindowPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WPrintDialogPeer::getBackBuffer() {
	 return this->$WWindowPeer::getBackBuffer();
}

void WPrintDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WWindowPeer::reparent(newNativeParent);
}

bool WPrintDialogPeer::isReparentSupported() {
	 return this->$WWindowPeer::isReparentSupported();
}

void WPrintDialogPeer::dispose() {
	this->$WWindowPeer::dispose();
}

int32_t WPrintDialogPeer::hashCode() {
	 return this->$WWindowPeer::hashCode();
}

bool WPrintDialogPeer::equals(Object$* arg0) {
	 return this->$WWindowPeer::equals(arg0);
}

$Object* WPrintDialogPeer::clone() {
	 return this->$WWindowPeer::clone();
}

void WPrintDialogPeer::finalize() {
	this->$WWindowPeer::finalize();
}

void WPrintDialogPeer::init$($WPrintDialog* target) {
	$WWindowPeer::init$(target);
	$set(this, blockedWindows, $new($Vector));
}

void WPrintDialogPeer::create($WComponentPeer* parent) {
	$set(this, parent, parent);
}

void WPrintDialogPeer::checkCreation() {
}

void WPrintDialogPeer::disposeImpl() {
	$WToolkit::targetDisposedPeer(this->target, this);
}

bool WPrintDialogPeer::_show() {
	bool $ret = false;
	$prepareNative(WPrintDialogPeer, _show, bool);
	$ret = $invokeNative(WPrintDialogPeer, _show);
	$finishNative();
	return $ret;
}

void WPrintDialogPeer::show() {
	$var($Runnable, runnable, static_cast<$Runnable*>($new(WPrintDialogPeer$$Lambda$lambda$show$0, this)));
	$$new($Thread, nullptr, runnable, "PrintDialog"_s, 0, false)->start();
}

void WPrintDialogPeer::setHWnd(int64_t hwnd) {
	$synchronized(this) {
		this->hwnd = hwnd;
		{
			$var($Iterator, i$, $nc(this->blockedWindows)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($WWindowPeer, window, $cast($WWindowPeer, i$->next()));
				{
					if (hwnd != 0) {
						$nc(window)->modalDisable($cast($Dialog, this->target), hwnd);
					} else {
						$nc(window)->modalEnable($cast($Dialog, this->target));
					}
				}
			}
		}
	}
}

void WPrintDialogPeer::blockWindow($WWindowPeer* window) {
	$synchronized(this) {
		$nc(this->blockedWindows)->add(window);
		if (this->hwnd != 0) {
			$nc(window)->modalDisable($cast($Dialog, this->target), this->hwnd);
		}
	}
}

void WPrintDialogPeer::unblockWindow($WWindowPeer* window) {
	$synchronized(this) {
		$nc(this->blockedWindows)->remove($of(window));
		if (this->hwnd != 0) {
			$nc(window)->modalEnable($cast($Dialog, this->target));
		}
	}
}

void WPrintDialogPeer::blockWindows($List* toBlock) {
	{
		$var($Iterator, i$, $nc(toBlock)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Window, w, $cast($Window, i$->next()));
			{
				$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
				if (wp != nullptr) {
					blockWindow(wp);
				}
			}
		}
	}
}

void WPrintDialogPeer::toFront() {
	$prepareNative(WPrintDialogPeer, toFront, void);
	$invokeNative(WPrintDialogPeer, toFront);
	$finishNative();
}

void WPrintDialogPeer::toBack() {
	$prepareNative(WPrintDialogPeer, toBack, void);
	$invokeNative(WPrintDialogPeer, toBack);
	$finishNative();
}

void WPrintDialogPeer::initialize() {
}

void WPrintDialogPeer::updateAlwaysOnTopState() {
}

void WPrintDialogPeer::setResizable(bool resizable) {
}

void WPrintDialogPeer::hide() {
}

void WPrintDialogPeer::enable() {
}

void WPrintDialogPeer::disable() {
}

void WPrintDialogPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
}

bool WPrintDialogPeer::handleEvent($Event* e) {
	return false;
}

void WPrintDialogPeer::setForeground($Color* c) {
}

void WPrintDialogPeer::setBackground($Color* c) {
}

void WPrintDialogPeer::setFont($Font* f) {
}

void WPrintDialogPeer::updateMinimumSize() {
}

void WPrintDialogPeer::updateIconImages() {
}

bool WPrintDialogPeer::requestFocus(bool temporary, bool focusedWindowChangeAllowed) {
	return false;
}

bool WPrintDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return false;
}

void WPrintDialogPeer::updateFocusableWindowState() {
}

void WPrintDialogPeer::start() {
}

void WPrintDialogPeer::beginValidate() {
}

void WPrintDialogPeer::endValidate() {
}

void WPrintDialogPeer::invalidate(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void WPrintDialogPeer::addDropTarget($DropTarget* dt) {
}

void WPrintDialogPeer::removeDropTarget($DropTarget* dt) {
}

void WPrintDialogPeer::setZOrder($ComponentPeer* above) {
}

void WPrintDialogPeer::initIDs() {
	$init(WPrintDialogPeer);
	$prepareNativeStatic(WPrintDialogPeer, initIDs, void);
	$invokeNativeStatic(WPrintDialogPeer, initIDs);
	$finishNativeStatic();
}

void WPrintDialogPeer::applyShape($Region* shape) {
}

void WPrintDialogPeer::setOpacity(float opacity) {
}

void WPrintDialogPeer::setOpaque(bool isOpaque) {
}

void WPrintDialogPeer::updateWindow($BufferedImage* backBuffer) {
}

void WPrintDialogPeer::createScreenSurface(bool isResize) {
}

void WPrintDialogPeer::replaceSurfaceData() {
}

void WPrintDialogPeer::lambda$show$0() {
	try {
		$nc(($cast($WPrintDialog, this->target)))->setRetVal(_show());
	} catch ($Exception&) {
		$catch();
	}
	$nc(($cast($WPrintDialog, this->target)))->setVisible(false);
}

void clinit$WPrintDialogPeer($Class* class$) {
	{
		WPrintDialogPeer::initIDs();
	}
}

WPrintDialogPeer::WPrintDialogPeer() {
}

$Class* WPrintDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WPrintDialogPeer$$Lambda$lambda$show$0::classInfo$.name)) {
			return WPrintDialogPeer$$Lambda$lambda$show$0::load$(name, initialize);
		}
	}
	$loadClass(WPrintDialogPeer, name, initialize, &_WPrintDialogPeer_ClassInfo_, clinit$WPrintDialogPeer, allocate$WPrintDialogPeer);
	return class$;
}

$Class* WPrintDialogPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun