#include <sun/awt/windows/WFileDialogPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/FileDialog.h>
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
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$FileDialogAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WFileDialogPeer$1.h>
#include <sun/awt/windows/WFileDialogPeer$2.h>
#include <sun/awt/windows/WFileDialogPeer$3.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $FileDialog = ::java::awt::FileDialog;
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
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$FileDialogAccessor = ::sun::awt::AWTAccessor$FileDialogAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WFileDialogPeer$1 = ::sun::awt::windows::WFileDialogPeer$1;
using $WFileDialogPeer$2 = ::sun::awt::windows::WFileDialogPeer$2;
using $WFileDialogPeer$3 = ::sun::awt::windows::WFileDialogPeer$3;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

class WFileDialogPeer$$Lambda$_show : public $Runnable {
	$class(WFileDialogPeer$$Lambda$_show, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WFileDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->_show();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WFileDialogPeer$$Lambda$_show>());
	}
	WFileDialogPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WFileDialogPeer$$Lambda$_show::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WFileDialogPeer$$Lambda$_show, inst$)},
	{}
};
$MethodInfo WFileDialogPeer$$Lambda$_show::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WFileDialogPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(WFileDialogPeer$$Lambda$_show::*)(WFileDialogPeer*)>(&WFileDialogPeer$$Lambda$_show::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WFileDialogPeer$$Lambda$_show::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WFileDialogPeer$$Lambda$_show",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WFileDialogPeer$$Lambda$_show::load$($String* name, bool initialize) {
	$loadClass(WFileDialogPeer$$Lambda$_show, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WFileDialogPeer$$Lambda$_show::class$ = nullptr;

$FieldInfo _WFileDialogPeer_FieldInfo_[] = {
	{"parent", "Lsun/awt/windows/WComponentPeer;", nullptr, $PRIVATE, $field(WFileDialogPeer, parent)},
	{"fileFilter", "Ljava/io/FilenameFilter;", nullptr, $PRIVATE, $field(WFileDialogPeer, fileFilter)},
	{"blockedWindows", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/windows/WWindowPeer;>;", $PRIVATE, $field(WFileDialogPeer, blockedWindows)},
	{}
};

$MethodInfo _WFileDialogPeer_MethodInfo_[] = {
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/FileDialog;)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)($FileDialog*)>(&WFileDialogPeer::init$))},
	{"_dispose", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFileDialogPeer::*)()>(&WFileDialogPeer::_dispose))},
	{"_hide", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFileDialogPeer::*)()>(&WFileDialogPeer::_hide))},
	{"_show", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFileDialogPeer::*)()>(&WFileDialogPeer::_show))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC},
	{"blockWindow", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)($WWindowPeer*)>(&WFileDialogPeer::blockWindow))},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"checkCreation", "()V", nullptr, $PROTECTED},
	{"checkFilenameFilter", "(Ljava/lang/String;)Z", nullptr, 0, $method(static_cast<bool(WFileDialogPeer::*)($String*)>(&WFileDialogPeer::checkFilenameFilter))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"createScreenSurface", "(Z)V", nullptr, $PUBLIC},
	{"disable", "()V", nullptr, 0},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"enable", "()V", nullptr, 0},
	{"endValidate", "()V", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"handleCancel", "()V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)()>(&WFileDialogPeer::handleCancel))},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC, $method(static_cast<bool(WFileDialogPeer::*)($Event*)>(&WFileDialogPeer::handleEvent))},
	{"handleSelected", "([C)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)($chars*)>(&WFileDialogPeer::handleSelected))},
	{"hide", "()V", nullptr, 0},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WFileDialogPeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"invalidate", "(IIII)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&WFileDialogPeer::invalidate))},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isMultipleMode", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(WFileDialogPeer::*)()>(&WFileDialogPeer::isMultipleMode))},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE},
	{"requestFocus", "(ZZ)Z", nullptr, $PUBLIC, $method(static_cast<bool(WFileDialogPeer::*)(bool,bool)>(&WFileDialogPeer::requestFocus))},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC},
	{"setFilterString", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&WFileDialogPeer::setFilterString))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setHWnd", "(J)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)(int64_t)>(&WFileDialogPeer::setHWnd))},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, 0},
	{"toBack", "()V", nullptr, $PUBLIC | $NATIVE},
	{"toFront", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unblockWindow", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, 0, $method(static_cast<void(WFileDialogPeer::*)($WWindowPeer*)>(&WFileDialogPeer::unblockWindow))},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"updateWindow", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(WFileDialogPeer::*)($BufferedImage*)>(&WFileDialogPeer::updateWindow))},
	{}
};

#define _METHOD_INDEX__dispose 25
#define _METHOD_INDEX__hide 26
#define _METHOD_INDEX__show 27
#define _METHOD_INDEX_getLocationOnScreen 41
#define _METHOD_INDEX_initIDs 46
#define _METHOD_INDEX_setFilterString 69
#define _METHOD_INDEX_toBack 82
#define _METHOD_INDEX_toFront 83

$InnerClassInfo _WFileDialogPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WFileDialogPeer$3", nullptr, nullptr, 0},
	{"sun.awt.windows.WFileDialogPeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WFileDialogPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WFileDialogPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WFileDialogPeer",
	"sun.awt.windows.WWindowPeer",
	"java.awt.peer.FileDialogPeer",
	_WFileDialogPeer_FieldInfo_,
	_WFileDialogPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WFileDialogPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WFileDialogPeer$3,sun.awt.windows.WFileDialogPeer$2,sun.awt.windows.WFileDialogPeer$1"
};

$Object* allocate$WFileDialogPeer($Class* clazz) {
	return $of($alloc(WFileDialogPeer));
}

void WFileDialogPeer::setModalBlocked($Dialog* dialog, bool blocked) {
	this->$WWindowPeer::setModalBlocked(dialog, blocked);
}

void WFileDialogPeer::repositionSecurityWarning() {
	this->$WWindowPeer::repositionSecurityWarning();
}

void WFileDialogPeer::print($Graphics* g) {
	this->$WWindowPeer::print(g);
}

void WFileDialogPeer::updateWindow() {
	this->$WWindowPeer::updateWindow();
}

$Insets* WFileDialogPeer::getInsets() {
	 return this->$WWindowPeer::getInsets();
}

void WFileDialogPeer::paint($Graphics* g) {
	this->$WWindowPeer::paint(g);
}

bool WFileDialogPeer::isObscured() {
	 return this->$WWindowPeer::isObscured();
}

bool WFileDialogPeer::canDetermineObscurity() {
	 return this->$WWindowPeer::canDetermineObscurity();
}

void WFileDialogPeer::setVisible(bool b) {
	this->$WWindowPeer::setVisible(b);
}

void WFileDialogPeer::setEnabled(bool b) {
	this->$WWindowPeer::setEnabled(b);
}

void WFileDialogPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WWindowPeer::setBounds(x, y, width, height, op);
}

void WFileDialogPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WWindowPeer::coalescePaintEvent(e);
}

void WFileDialogPeer::handleEvent($AWTEvent* e) {
	this->$WWindowPeer::handleEvent(e);
}

$Dimension* WFileDialogPeer::getMinimumSize() {
	 return this->$WWindowPeer::getMinimumSize();
}

$Dimension* WFileDialogPeer::getPreferredSize() {
	 return this->$WWindowPeer::getPreferredSize();
}

void WFileDialogPeer::layout() {
	this->$WWindowPeer::layout();
}

bool WFileDialogPeer::isFocusable() {
	 return this->$WWindowPeer::isFocusable();
}

$GraphicsConfiguration* WFileDialogPeer::getGraphicsConfiguration() {
	 return this->$WWindowPeer::getGraphicsConfiguration();
}

bool WFileDialogPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WWindowPeer::updateGraphicsData(gc);
}

$ColorModel* WFileDialogPeer::getColorModel() {
	 return this->$WWindowPeer::getColorModel();
}

$Graphics* WFileDialogPeer::getGraphics() {
	 return this->$WWindowPeer::getGraphics();
}

$FontMetrics* WFileDialogPeer::getFontMetrics($Font* font) {
	 return this->$WWindowPeer::getFontMetrics(font);
}

void WFileDialogPeer::updateCursorImmediately() {
	this->$WWindowPeer::updateCursorImmediately();
}

$Image* WFileDialogPeer::createImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createImage(width, height);
}

$VolatileImage* WFileDialogPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createVolatileImage(width, height);
}

$String* WFileDialogPeer::toString() {
	 return this->$WWindowPeer::toString();
}

void WFileDialogPeer::beginLayout() {
	this->$WWindowPeer::beginLayout();
}

void WFileDialogPeer::endLayout() {
	this->$WWindowPeer::endLayout();
}

bool WFileDialogPeer::handlesWheelScrolling() {
	 return this->$WWindowPeer::handlesWheelScrolling();
}

void WFileDialogPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WWindowPeer::createBuffers(numBuffers, caps);
}

void WFileDialogPeer::destroyBuffers() {
	this->$WWindowPeer::destroyBuffers();
}

void WFileDialogPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WWindowPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WFileDialogPeer::getBackBuffer() {
	 return this->$WWindowPeer::getBackBuffer();
}

void WFileDialogPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WWindowPeer::reparent(newNativeParent);
}

bool WFileDialogPeer::isReparentSupported() {
	 return this->$WWindowPeer::isReparentSupported();
}

void WFileDialogPeer::dispose() {
	this->$WWindowPeer::dispose();
}

int32_t WFileDialogPeer::hashCode() {
	 return this->$WWindowPeer::hashCode();
}

bool WFileDialogPeer::equals(Object$* arg0) {
	 return this->$WWindowPeer::equals(arg0);
}

$Object* WFileDialogPeer::clone() {
	 return this->$WWindowPeer::clone();
}

void WFileDialogPeer::finalize() {
	this->$WWindowPeer::finalize();
}

void WFileDialogPeer::setFilterString($String* allFilter) {
	$init(WFileDialogPeer);
	$prepareNativeStatic(WFileDialogPeer, setFilterString, void, $String* allFilter);
	$invokeNativeStatic(WFileDialogPeer, setFilterString, allFilter);
	$finishNativeStatic();
}

void WFileDialogPeer::setFilenameFilter($FilenameFilter* filter) {
	$set(this, fileFilter, filter);
}

bool WFileDialogPeer::checkFilenameFilter($String* filename) {
	$var($FileDialog, fileDialog, $cast($FileDialog, this->target));
	if (this->fileFilter == nullptr) {
		return true;
	}
	$var($File, file, $new($File, filename));
	$var($File, var$0, $new($File, $(file->getParent())));
	return $nc(this->fileFilter)->accept(var$0, $(file->getName()));
}

void WFileDialogPeer::init$($FileDialog* target) {
	$WWindowPeer::init$(target);
	$set(this, blockedWindows, $new($Vector));
}

void WFileDialogPeer::create($WComponentPeer* parent) {
	$set(this, parent, parent);
}

void WFileDialogPeer::checkCreation() {
}

void WFileDialogPeer::initialize() {
	setFilenameFilter($($nc(($cast($FileDialog, this->target)))->getFilenameFilter()));
}

void WFileDialogPeer::_dispose() {
	$prepareNative(WFileDialogPeer, _dispose, void);
	$invokeNative(WFileDialogPeer, _dispose);
	$finishNative();
}

void WFileDialogPeer::disposeImpl() {
	$WToolkit::targetDisposedPeer(this->target, this);
	_dispose();
}

void WFileDialogPeer::_show() {
	$prepareNative(WFileDialogPeer, _show, void);
	$invokeNative(WFileDialogPeer, _show);
	$finishNative();
}

void WFileDialogPeer::_hide() {
	$prepareNative(WFileDialogPeer, _hide, void);
	$invokeNative(WFileDialogPeer, _hide);
	$finishNative();
}

void WFileDialogPeer::show() {
	$$new($Thread, nullptr, static_cast<$Runnable*>($$new(WFileDialogPeer$$Lambda$_show, this)), "FileDialog"_s, 0, false)->start();
}

void WFileDialogPeer::hide() {
	_hide();
}

void WFileDialogPeer::setHWnd(int64_t hwnd) {
	if (this->hwnd == hwnd) {
		return;
	}
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

void WFileDialogPeer::handleSelected($chars* buffer) {
	$var($StringArray, wFiles, ($$new($String, buffer))->split($cstr({'\0'})));
	bool multiple = (wFiles->length > 1);
	$var($String, jDirectory, nullptr);
	$var($String, jFile, nullptr);
	$var($FileArray, jFiles, nullptr);
	if (multiple) {
		$assign(jDirectory, wFiles->get(0));
		int32_t filesNumber = wFiles->length - 1;
		$assign(jFiles, $new($FileArray, filesNumber));
		for (int32_t i = 0; i < filesNumber; ++i) {
			jFiles->set(i, $$new($File, jDirectory, wFiles->get(i + 1)));
		}
		$assign(jFile, wFiles->get(1));
	} else {
		$init($File);
		int32_t index = $nc(wFiles->get(0))->lastIndexOf((int32_t)$File::separatorChar);
		if (index == -1) {
			$assign(jDirectory, $str({"."_s, $File::separator}));
			$assign(jFile, wFiles->get(0));
		} else {
			$assign(jDirectory, $nc(wFiles->get(0))->substring(0, index + 1));
			$assign(jFile, $nc(wFiles->get(0))->substring(index + 1));
		}
		$assign(jFiles, $new($FileArray, {$$new($File, jDirectory, jFile)}));
	}
	$var($FileDialog, fileDialog, $cast($FileDialog, this->target));
	$var($AWTAccessor$FileDialogAccessor, fileDialogAccessor, $AWTAccessor::getFileDialogAccessor());
	$nc(fileDialogAccessor)->setDirectory(fileDialog, jDirectory);
	fileDialogAccessor->setFile(fileDialog, jFile);
	fileDialogAccessor->setFiles(fileDialog, jFiles);
	$WToolkit::executeOnEventHandlerThread(fileDialog, $$new($WFileDialogPeer$1, this, fileDialog));
}

void WFileDialogPeer::handleCancel() {
	$var($FileDialog, fileDialog, $cast($FileDialog, this->target));
	$nc($($AWTAccessor::getFileDialogAccessor()))->setFile(fileDialog, nullptr);
	$nc($($AWTAccessor::getFileDialogAccessor()))->setFiles(fileDialog, nullptr);
	$nc($($AWTAccessor::getFileDialogAccessor()))->setDirectory(fileDialog, nullptr);
	$WToolkit::executeOnEventHandlerThread(fileDialog, $$new($WFileDialogPeer$2, this, fileDialog));
}

void WFileDialogPeer::blockWindow($WWindowPeer* window) {
	$nc(this->blockedWindows)->add(window);
	if (this->hwnd != 0) {
		$nc(window)->modalDisable($cast($Dialog, this->target), this->hwnd);
	}
}

void WFileDialogPeer::unblockWindow($WWindowPeer* window) {
	$nc(this->blockedWindows)->remove($of(window));
	if (this->hwnd != 0) {
		$nc(window)->modalEnable($cast($Dialog, this->target));
	}
}

void WFileDialogPeer::blockWindows($List* toBlock) {
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

void WFileDialogPeer::toFront() {
	$prepareNative(WFileDialogPeer, toFront, void);
	$invokeNative(WFileDialogPeer, toFront);
	$finishNative();
}

void WFileDialogPeer::toBack() {
	$prepareNative(WFileDialogPeer, toBack, void);
	$invokeNative(WFileDialogPeer, toBack);
	$finishNative();
}

void WFileDialogPeer::updateAlwaysOnTopState() {
}

void WFileDialogPeer::setDirectory($String* dir) {
}

void WFileDialogPeer::setFile($String* file) {
}

void WFileDialogPeer::setTitle($String* title) {
}

void WFileDialogPeer::setResizable(bool resizable) {
}

void WFileDialogPeer::enable() {
}

void WFileDialogPeer::disable() {
}

void WFileDialogPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
}

bool WFileDialogPeer::handleEvent($Event* e) {
	return false;
}

void WFileDialogPeer::setForeground($Color* c) {
}

void WFileDialogPeer::setBackground($Color* c) {
}

void WFileDialogPeer::setFont($Font* f) {
}

void WFileDialogPeer::updateMinimumSize() {
}

void WFileDialogPeer::updateIconImages() {
}

bool WFileDialogPeer::requestFocus(bool temporary, bool focusedWindowChangeAllowed) {
	return false;
}

bool WFileDialogPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return false;
}

void WFileDialogPeer::start() {
}

void WFileDialogPeer::beginValidate() {
}

void WFileDialogPeer::endValidate() {
}

void WFileDialogPeer::invalidate(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void WFileDialogPeer::addDropTarget($DropTarget* dt) {
}

void WFileDialogPeer::removeDropTarget($DropTarget* dt) {
}

void WFileDialogPeer::updateFocusableWindowState() {
}

void WFileDialogPeer::setZOrder($ComponentPeer* above) {
}

void WFileDialogPeer::initIDs() {
	$init(WFileDialogPeer);
	$prepareNativeStatic(WFileDialogPeer, initIDs, void);
	$invokeNativeStatic(WFileDialogPeer, initIDs);
	$finishNativeStatic();
}

void WFileDialogPeer::applyShape($Region* shape) {
}

void WFileDialogPeer::setOpacity(float opacity) {
}

void WFileDialogPeer::setOpaque(bool isOpaque) {
}

void WFileDialogPeer::updateWindow($BufferedImage* backBuffer) {
}

void WFileDialogPeer::createScreenSurface(bool isResize) {
}

void WFileDialogPeer::replaceSurfaceData() {
}

bool WFileDialogPeer::isMultipleMode() {
	$var($FileDialog, fileDialog, $cast($FileDialog, this->target));
	return $nc($($AWTAccessor::getFileDialogAccessor()))->isMultipleMode(fileDialog);
}

$Point* WFileDialogPeer::getLocationOnScreen() {
	$var($Point, $ret, nullptr);
	$prepareNative(WFileDialogPeer, getLocationOnScreen, $Point*);
	$assign($ret, $invokeNative(WFileDialogPeer, getLocationOnScreen));
	$finishNative();
	return $ret;
}

void clinit$WFileDialogPeer($Class* class$) {
	$beforeCallerSensitive();
	{
		WFileDialogPeer::initIDs();
	}
	{
		$var($String, filterString, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WFileDialogPeer$3)))));
		WFileDialogPeer::setFilterString(filterString);
	}
}

WFileDialogPeer::WFileDialogPeer() {
}

$Class* WFileDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WFileDialogPeer$$Lambda$_show::classInfo$.name)) {
			return WFileDialogPeer$$Lambda$_show::load$(name, initialize);
		}
	}
	$loadClass(WFileDialogPeer, name, initialize, &_WFileDialogPeer_ClassInfo_, clinit$WFileDialogPeer, allocate$WFileDialogPeer);
	return class$;
}

$Class* WFileDialogPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun