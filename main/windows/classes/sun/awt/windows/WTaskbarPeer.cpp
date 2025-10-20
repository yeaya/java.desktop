#include <sun/awt/windows/WTaskbarPeer.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/awt/Taskbar$State.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WTaskbarPeer$1.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE
#undef WINDOWS_7

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $Taskbar$State = ::java::awt::Taskbar$State;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Callable = ::java::util::concurrent::Callable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$WindowsVersion = ::sun::awt::OSInfo$WindowsVersion;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WTaskbarPeer$1 = ::sun::awt::windows::WTaskbarPeer$1;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;

namespace sun {
	namespace awt {
		namespace windows {

class WTaskbarPeer$$Lambda$lambda$init$0 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Callable)
public:
	void init$() {
	}
	virtual $Object* call() override {
		 return $of(WTaskbarPeer::lambda$init$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WTaskbarPeer$$Lambda$lambda$init$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WTaskbarPeer$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WTaskbarPeer$$Lambda$lambda$init$0::*)()>(&WTaskbarPeer$$Lambda$lambda$init$0::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WTaskbarPeer$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	methodInfos
};
$Class* WTaskbarPeer$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(WTaskbarPeer$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$init$0::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, $ints* buffer, $Image* image) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		$set(this, buffer, buffer);
		$set(this, image, image);
	}
	virtual $Object* call() override {
		 return $nc(inst$)->lambda$setWindowIconBadge$1(wp, buffer, image);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1>());
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	$ints* buffer = nullptr;
	$Image* image = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, inst$)},
	{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, wp)},
	{"buffer", "[I", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, buffer)},
	{"image", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, image)},
	{}
};
$MethodInfo WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;[ILjava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::*)(WTaskbarPeer*,$WWindowPeer*,$ints*,$Image*)>(&WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::load$($String* name, bool initialize) {
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, int32_t value) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		this->value = value;
	}
	virtual $Object* call() override {
		 return $nc(inst$)->lambda$setWindowProgressValue$2(wp, value);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2>());
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	int32_t value = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, inst$)},
	{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, wp)},
	{"value", "I", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, value)},
	{}
};
$MethodInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;I)V", nullptr, $PUBLIC, $method(static_cast<void(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::*)(WTaskbarPeer*,$WWindowPeer*,int32_t)>(&WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::load$($String* name, bool initialize) {
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::class$ = nullptr;

class WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3 : public $Callable {
	$class(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, $NO_CLASS_INIT, $Callable)
public:
	void init$(WTaskbarPeer* inst, $WWindowPeer* wp, $Taskbar$State* state) {
		$set(this, inst$, inst);
		$set(this, wp, wp);
		$set(this, state, state);
	}
	virtual $Object* call() override {
		 return $nc(inst$)->lambda$setWindowProgressState$3(wp, state);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3>());
	}
	WTaskbarPeer* inst$ = nullptr;
	$WWindowPeer* wp = nullptr;
	$Taskbar$State* state = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, inst$)},
	{"wp", "Lsun/awt/windows/WWindowPeer;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, wp)},
	{"state", "Ljava/awt/Taskbar$State;", nullptr, $PUBLIC, $field(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, state)},
	{}
};
$MethodInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WTaskbarPeer;Lsun/awt/windows/WWindowPeer;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC, $method(static_cast<void(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::*)(WTaskbarPeer*,$WWindowPeer*,$Taskbar$State*)>(&WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::init$))},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	fieldInfos,
	methodInfos
};
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::load$($String* name, bool initialize) {
	$loadClass(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::class$ = nullptr;

$FieldInfo _WTaskbarPeer_FieldInfo_[] = {
	{"supported", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WTaskbarPeer, supported)},
	{"initExecuted", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WTaskbarPeer, initExecuted)},
	{}
};

$MethodInfo _WTaskbarPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WTaskbarPeer::*)()>(&WTaskbarPeer::init$))},
	{"flashWindow", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WTaskbarPeer::*)(int64_t)>(&WTaskbarPeer::flashWindow))},
	{"imageToArray", "(Ljava/awt/Image;)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($Image*)>(&WTaskbarPeer::imageToArray))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&WTaskbarPeer::init))},
	{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC},
	{"isTaskbarSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&WTaskbarPeer::isTaskbarSupported))},
	{"lambda$init$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&WTaskbarPeer::lambda$init$0)), "java.lang.Exception"},
	{"lambda$setWindowIconBadge$1", "(Lsun/awt/windows/WWindowPeer;[ILjava/awt/Image;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(WTaskbarPeer::*)($WWindowPeer*,$ints*,$Image*)>(&WTaskbarPeer::lambda$setWindowIconBadge$1)), "java.lang.Exception"},
	{"lambda$setWindowProgressState$3", "(Lsun/awt/windows/WWindowPeer;Ljava/awt/Taskbar$State;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(WTaskbarPeer::*)($WWindowPeer*,$Taskbar$State*)>(&WTaskbarPeer::lambda$setWindowProgressState$3)), "java.lang.Exception"},
	{"lambda$setWindowProgressValue$2", "(Lsun/awt/windows/WWindowPeer;I)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(WTaskbarPeer::*)($WWindowPeer*,int32_t)>(&WTaskbarPeer::lambda$setWindowProgressValue$2)), "java.lang.Exception"},
	{"nativeInit", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&WTaskbarPeer::nativeInit))},
	{"requestWindowUserAttention", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"setOverlayIcon", "(J[III)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WTaskbarPeer::*)(int64_t,$ints*,int32_t,int32_t)>(&WTaskbarPeer::setOverlayIcon))},
	{"setProgressState", "(JLjava/awt/Taskbar$State;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WTaskbarPeer::*)(int64_t,$Taskbar$State*)>(&WTaskbarPeer::setProgressState))},
	{"setProgressValue", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WTaskbarPeer::*)(int64_t,int32_t)>(&WTaskbarPeer::setProgressValue))},
	{"setWindowIconBadge", "(Ljava/awt/Window;Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setWindowProgressState", "(Ljava/awt/Window;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC},
	{"setWindowProgressValue", "(Ljava/awt/Window;I)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_flashWindow 1
#define _METHOD_INDEX_nativeInit 10
#define _METHOD_INDEX_setOverlayIcon 12
#define _METHOD_INDEX_setProgressState 13
#define _METHOD_INDEX_setProgressValue 14

$InnerClassInfo _WTaskbarPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WTaskbarPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WTaskbarPeer",
	"java.lang.Object",
	"java.awt.peer.TaskbarPeer",
	_WTaskbarPeer_FieldInfo_,
	_WTaskbarPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WTaskbarPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WTaskbarPeer$1"
};

$Object* allocate$WTaskbarPeer($Class* clazz) {
	return $of($alloc(WTaskbarPeer));
}

bool WTaskbarPeer::supported = false;
bool WTaskbarPeer::initExecuted = false;

void WTaskbarPeer::init() {
	$load(WTaskbarPeer);
	$synchronized(class$) {
		$init(WTaskbarPeer);
		$useLocalCurrentObjectStackCache();
		if (!WTaskbarPeer::initExecuted) {
			$init($OSInfo);
			bool var$0 = $nc($($OSInfo::getWindowsVersion()))->compareTo($OSInfo::WINDOWS_7) >= 0;
			WTaskbarPeer::supported = var$0 && $nc(($cast($Boolean, $($ShellFolder::invoke(static_cast<$Callable*>($$new(WTaskbarPeer$$Lambda$lambda$init$0)))))))->booleanValue();
		}
		WTaskbarPeer::initExecuted = true;
	}
}

bool WTaskbarPeer::isTaskbarSupported() {
	$init(WTaskbarPeer);
	init();
	return WTaskbarPeer::supported;
}

void WTaskbarPeer::init$() {
	init();
}

bool WTaskbarPeer::isSupported($Taskbar$Feature* feature) {
	$init($WTaskbarPeer$1);
	switch ($nc($WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->get($nc((feature))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{
			return WTaskbarPeer::supported;
		}
	case 4:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

$ints* WTaskbarPeer::imageToArray($Image* image) {
	$init(WTaskbarPeer);
	$useLocalCurrentObjectStackCache();
	if (image == nullptr) {
		return nullptr;
	}
	int32_t w = $nc(image)->getWidth(nullptr);
	int32_t h = image->getHeight(nullptr);
	if (w < 0 || h < 0) {
		return nullptr;
	}
	$var($BufferedImage, bimg, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics2D, g2, bimg->createGraphics());
	$init($AlphaComposite);
	$nc(g2)->setComposite($AlphaComposite::Src);
	g2->drawImage(image, 0, 0, nullptr);
	g2->dispose();
	return $nc(($cast($DataBufferInt, $($nc($(bimg->getRaster()))->getDataBuffer()))))->getData();
}

void WTaskbarPeer::setWindowIconBadge($Window* window, $Image* image) {
	$useLocalCurrentObjectStackCache();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window)));
	if (wp != nullptr) {
		$var($ints, buffer, imageToArray(image));
		$ShellFolder::invoke(static_cast<$Callable*>($$new(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1, this, wp, buffer, image)));
	}
}

void WTaskbarPeer::requestWindowUserAttention($Window* window) {
	$useLocalCurrentObjectStackCache();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window)));
	if (wp != nullptr) {
		flashWindow(wp->getHWnd());
	}
}

void WTaskbarPeer::setWindowProgressValue($Window* window, int32_t value) {
	$useLocalCurrentObjectStackCache();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window)));
	if (wp != nullptr) {
		$ShellFolder::invoke(static_cast<$Callable*>($$new(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2, this, wp, value)));
	}
}

void WTaskbarPeer::setWindowProgressState($Window* window, $Taskbar$State* state) {
	$useLocalCurrentObjectStackCache();
	$var($WWindowPeer, wp, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window)));
	if (wp != nullptr) {
		$ShellFolder::invoke(static_cast<$Callable*>($$new(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3, this, wp, state)));
	}
}

bool WTaskbarPeer::nativeInit() {
	$init(WTaskbarPeer);
	bool $ret = false;
	$prepareNativeStatic(WTaskbarPeer, nativeInit, bool);
	$ret = $invokeNativeStatic(WTaskbarPeer, nativeInit);
	$finishNativeStatic();
	return $ret;
}

void WTaskbarPeer::setProgressValue(int64_t hwnd, int32_t value) {
	$prepareNative(WTaskbarPeer, setProgressValue, void, int64_t hwnd, int32_t value);
	$invokeNative(WTaskbarPeer, setProgressValue, hwnd, value);
	$finishNative();
}

void WTaskbarPeer::setProgressState(int64_t hwnd, $Taskbar$State* state) {
	$prepareNative(WTaskbarPeer, setProgressState, void, int64_t hwnd, $Taskbar$State* state);
	$invokeNative(WTaskbarPeer, setProgressState, hwnd, state);
	$finishNative();
}

void WTaskbarPeer::setOverlayIcon(int64_t hwnd, $ints* badge, int32_t width, int32_t height) {
	$prepareNative(WTaskbarPeer, setOverlayIcon, void, int64_t hwnd, $ints* badge, int32_t width, int32_t height);
	$invokeNative(WTaskbarPeer, setOverlayIcon, hwnd, badge, width, height);
	$finishNative();
}

void WTaskbarPeer::flashWindow(int64_t hWnd) {
	$prepareNative(WTaskbarPeer, flashWindow, void, int64_t hWnd);
	$invokeNative(WTaskbarPeer, flashWindow, hWnd);
	$finishNative();
}

$Object* WTaskbarPeer::lambda$setWindowProgressState$3($WWindowPeer* wp, $Taskbar$State* state) {
	setProgressState($nc(wp)->getHWnd(), state);
	return $of(nullptr);
}

$Object* WTaskbarPeer::lambda$setWindowProgressValue$2($WWindowPeer* wp, int32_t value) {
	setProgressValue($nc(wp)->getHWnd(), value);
	return $of(nullptr);
}

$Object* WTaskbarPeer::lambda$setWindowIconBadge$1($WWindowPeer* wp, $ints* buffer, $Image* image) {
	int64_t var$0 = $nc(wp)->getHWnd();
	$var($ints, var$1, buffer);
	int32_t var$2 = buffer != nullptr ? $nc(image)->getWidth(nullptr) : 0;
	setOverlayIcon(var$0, var$1, var$2, buffer != nullptr ? image->getHeight(nullptr) : 0);
	return $of(nullptr);
}

$Boolean* WTaskbarPeer::lambda$init$0() {
	$init(WTaskbarPeer);
	return $Boolean::valueOf(nativeInit());
}

void clinit$WTaskbarPeer($Class* class$) {
	WTaskbarPeer::supported = false;
	WTaskbarPeer::initExecuted = false;
}

WTaskbarPeer::WTaskbarPeer() {
}

$Class* WTaskbarPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WTaskbarPeer$$Lambda$lambda$init$0::classInfo$.name)) {
			return WTaskbarPeer$$Lambda$lambda$init$0::load$(name, initialize);
		}
		if (name->equals(WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::classInfo$.name)) {
			return WTaskbarPeer$$Lambda$lambda$setWindowIconBadge$1$1::load$(name, initialize);
		}
		if (name->equals(WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::classInfo$.name)) {
			return WTaskbarPeer$$Lambda$lambda$setWindowProgressValue$2$2::load$(name, initialize);
		}
		if (name->equals(WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::classInfo$.name)) {
			return WTaskbarPeer$$Lambda$lambda$setWindowProgressState$3$3::load$(name, initialize);
		}
	}
	$loadClass(WTaskbarPeer, name, initialize, &_WTaskbarPeer_ClassInfo_, clinit$WTaskbarPeer, allocate$WTaskbarPeer);
	return class$;
}

$Class* WTaskbarPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun