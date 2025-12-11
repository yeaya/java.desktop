#include <sun/lwawt/macosx/CPlatformView.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/CGraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CFLayer.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CWrapper$NSView.h>
#include <sun/lwawt/macosx/CocoaConstants.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $CGraphicsEnvironment = ::sun::awt::CGraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CFLayer = ::sun::lwawt::macosx::CFLayer;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CWrapper$NSView = ::sun::lwawt::macosx::CWrapper$NSView;
using $CocoaConstants = ::sun::lwawt::macosx::CocoaConstants;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformView$$Lambda$lambda$setBounds$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$setBounds$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t x, int32_t y, int32_t width, int32_t height) {
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$setBounds$0(x, y, width, height, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$setBounds$0>());
	}
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$setBounds$0::fieldInfos[5] = {
	{"x", "I", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setBounds$0, x)},
	{"y", "I", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setBounds$0, y)},
	{"width", "I", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setBounds$0, width)},
	{"height", "I", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setBounds$0, height)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$setBounds$0::methodInfos[3] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$setBounds$0::*)(int32_t,int32_t,int32_t,int32_t)>(&CPlatformView$$Lambda$lambda$setBounds$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$setBounds$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$setBounds$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$setBounds$0::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$setBounds$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$setBounds$0::class$ = nullptr;

class CPlatformView$$Lambda$lambda$setToolTip$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$setToolTip$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($String* msg) {
		$set(this, msg, msg);
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$setToolTip$1(msg, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$setToolTip$1$1>());
	}
	$String* msg = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$setToolTip$1$1::fieldInfos[2] = {
	{"msg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setToolTip$1$1, msg)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$setToolTip$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$setToolTip$1$1::*)($String*)>(&CPlatformView$$Lambda$lambda$setToolTip$1$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$setToolTip$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$setToolTip$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$setToolTip$1$1::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$setToolTip$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$setToolTip$1$1::class$ = nullptr;

class CPlatformView$$Lambda$lambda$setAutoResizable$2$2 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$setAutoResizable$2$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(bool toResize) {
		this->toResize = toResize;
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$setAutoResizable$2(toResize, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$setAutoResizable$2$2>());
	}
	bool toResize = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$setAutoResizable$2$2::fieldInfos[2] = {
	{"toResize", "Z", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$setAutoResizable$2$2, toResize)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$setAutoResizable$2$2::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$setAutoResizable$2$2::*)(bool)>(&CPlatformView$$Lambda$lambda$setAutoResizable$2$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$setAutoResizable$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$setAutoResizable$2$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$setAutoResizable$2$2::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$setAutoResizable$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$setAutoResizable$2$2::class$ = nullptr;

class CPlatformView$$Lambda$lambda$isUnderMouse$3$3 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$isUnderMouse$3$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicBoolean* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$isUnderMouse$3(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$isUnderMouse$3$3>());
	}
	$AtomicBoolean* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$isUnderMouse$3$3::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$isUnderMouse$3$3, ref)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$isUnderMouse$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$isUnderMouse$3$3::*)($AtomicBoolean*)>(&CPlatformView$$Lambda$lambda$isUnderMouse$3$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$isUnderMouse$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$isUnderMouse$3$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$isUnderMouse$3$3::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$isUnderMouse$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$isUnderMouse$3$3::class$ = nullptr;

class CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicInteger* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$getGraphicsDevice$4(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4>());
	}
	$AtomicInteger* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4, ref)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::*)($AtomicInteger*)>(&CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::class$ = nullptr;

class CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicReference* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformView::lambda$getLocationOnScreen$5(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5>());
	}
	$AtomicReference* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5, ref)},
	{}
};
$MethodInfo CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::*)($AtomicReference*)>(&CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::load$($String* name, bool initialize) {
	$loadClass(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::class$ = nullptr;

$FieldInfo _CPlatformView_FieldInfo_[] = {
	{"peer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE, $field(CPlatformView, peer)},
	{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, $PRIVATE, $field(CPlatformView, surfaceData)},
	{"windowLayer", "Lsun/lwawt/macosx/CFLayer;", nullptr, $PRIVATE, $field(CPlatformView, windowLayer)},
	{"responder", "Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PRIVATE, $field(CPlatformView, responder)},
	{}
};

$MethodInfo _CPlatformView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformView::*)()>(&CPlatformView::init$))},
	{"createCGLayer", "()Lsun/java2d/opengl/CGLLayer;", nullptr, $PUBLIC},
	{"createMTLLayer", "()Lsun/java2d/metal/MTLLayer;", nullptr, $PUBLIC},
	{"deliverKeyEvent", "(Lsun/lwawt/macosx/NSEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformView::*)($NSEvent*)>(&CPlatformView::deliverKeyEvent))},
	{"deliverMouseEvent", "(Lsun/lwawt/macosx/NSEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformView::*)($NSEvent*)>(&CPlatformView::deliverMouseEvent))},
	{"deliverResize", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformView::*)(int32_t,int32_t,int32_t,int32_t)>(&CPlatformView::deliverResize))},
	{"deliverWindowDidExposeEvent", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformView::*)()>(&CPlatformView::deliverWindowDidExposeEvent))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getAWTView", "()J", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getWindowLayerPtr", "()J", nullptr, $PUBLIC},
	{"initialize", "(Lsun/lwawt/LWWindowPeer;Lsun/lwawt/macosx/CPlatformResponder;)V", nullptr, $PUBLIC},
	{"initializeBase", "(Lsun/lwawt/LWWindowPeer;Lsun/lwawt/macosx/CPlatformResponder;)V", nullptr, $PROTECTED},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC},
	{"lambda$getGraphicsDevice$4", "(Ljava/util/concurrent/atomic/AtomicInteger;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicInteger*,int64_t)>(&CPlatformView::lambda$getGraphicsDevice$4))},
	{"lambda$getLocationOnScreen$5", "(Ljava/util/concurrent/atomic/AtomicReference;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicReference*,int64_t)>(&CPlatformView::lambda$getLocationOnScreen$5))},
	{"lambda$isUnderMouse$3", "(Ljava/util/concurrent/atomic/AtomicBoolean;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicBoolean*,int64_t)>(&CPlatformView::lambda$isUnderMouse$3))},
	{"lambda$setAutoResizable$2", "(ZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,int64_t)>(&CPlatformView::lambda$setAutoResizable$2))},
	{"lambda$setBounds$0", "(IIIIJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&CPlatformView::lambda$setBounds$0))},
	{"lambda$setToolTip$1", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,int64_t)>(&CPlatformView::lambda$setToolTip$1))},
	{"nativeCreateView", "(IIIIJ)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CPlatformView::*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&CPlatformView::nativeCreateView))},
	{"nativeGetLocationOnScreen", "(J)Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Rectangle2D*(*)(int64_t)>(&CPlatformView::nativeGetLocationOnScreen))},
	{"nativeGetNSViewDisplayID", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&CPlatformView::nativeGetNSViewDisplayID))},
	{"nativeIsViewUnderMouse", "(J)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&CPlatformView::nativeIsViewUnderMouse))},
	{"nativeSetAutoResizable", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool)>(&CPlatformView::nativeSetAutoResizable))},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"setAutoResizable", "(Z)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeCreateView 23
#define _METHOD_INDEX_nativeGetLocationOnScreen 24
#define _METHOD_INDEX_nativeGetNSViewDisplayID 25
#define _METHOD_INDEX_nativeIsViewUnderMouse 26
#define _METHOD_INDEX_nativeSetAutoResizable 27

$ClassInfo _CPlatformView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformView",
	"sun.lwawt.macosx.CFRetainedResource",
	nullptr,
	_CPlatformView_FieldInfo_,
	_CPlatformView_MethodInfo_
};

$Object* allocate$CPlatformView($Class* clazz) {
	return $of($alloc(CPlatformView));
}

int64_t CPlatformView::nativeCreateView(int32_t x, int32_t y, int32_t width, int32_t height, int64_t windowLayerPtr) {
	int64_t $ret = 0;
	$prepareNative(CPlatformView, nativeCreateView, int64_t, int32_t x, int32_t y, int32_t width, int32_t height, int64_t windowLayerPtr);
	$ret = $invokeNative(x, y, width, height, windowLayerPtr);
	$finishNative();
	return $ret;
}

void CPlatformView::nativeSetAutoResizable(int64_t awtView, bool toResize) {
	$init(CPlatformView);
	$prepareNativeStatic(CPlatformView, nativeSetAutoResizable, void, int64_t awtView, bool toResize);
	$invokeNativeStatic(awtView, toResize);
	$finishNativeStatic();
}

int32_t CPlatformView::nativeGetNSViewDisplayID(int64_t awtView) {
	$init(CPlatformView);
	int32_t $ret = 0;
	$prepareNativeStatic(CPlatformView, nativeGetNSViewDisplayID, int32_t, int64_t awtView);
	$ret = $invokeNativeStatic(awtView);
	$finishNativeStatic();
	return $ret;
}

$Rectangle2D* CPlatformView::nativeGetLocationOnScreen(int64_t awtView) {
	$init(CPlatformView);
	$var($Rectangle2D, $ret, nullptr);
	$prepareNativeStatic(CPlatformView, nativeGetLocationOnScreen, $Rectangle2D*, int64_t awtView);
	$assign($ret, $invokeNativeStaticObject(awtView));
	$finishNativeStatic();
	return $ret;
}

bool CPlatformView::nativeIsViewUnderMouse(int64_t ptr) {
	$init(CPlatformView);
	bool $ret = false;
	$prepareNativeStatic(CPlatformView, nativeIsViewUnderMouse, bool, int64_t ptr);
	$ret = $invokeNativeStatic(ptr);
	$finishNativeStatic();
	return $ret;
}

void CPlatformView::init$() {
	$CFRetainedResource::init$(0, true);
}

void CPlatformView::initialize($LWWindowPeer* peer, $CPlatformResponder* responder) {
	initializeBase(peer, responder);
	$set(this, windowLayer, $CGraphicsDevice::usingMetalPipeline() ? static_cast<$CFLayer*>(createMTLLayer()) : static_cast<$CFLayer*>(createCGLayer()));
	setPtr(nativeCreateView(0, 0, 0, 0, getWindowLayerPtr()));
}

$CGLLayer* CPlatformView::createCGLayer() {
	return $new($CGLLayer, this->peer);
}

$MTLLayer* CPlatformView::createMTLLayer() {
	return $new($MTLLayer, this->peer);
}

void CPlatformView::initializeBase($LWWindowPeer* peer, $CPlatformResponder* responder) {
	$set(this, peer, peer);
	$set(this, responder, responder);
}

int64_t CPlatformView::getAWTView() {
	return this->ptr;
}

void CPlatformView::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$setBounds$0, x, y, width, height)));
}

$Rectangle* CPlatformView::getBounds() {
	return $nc(this->peer)->getBounds();
}

void CPlatformView::setToolTip($String* msg) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$setToolTip$1$1, msg)));
}

$SurfaceData* CPlatformView::replaceSurfaceData() {
	$set(this, surfaceData, $nc(this->windowLayer)->replaceSurfaceData());
	return this->surfaceData;
}

$SurfaceData* CPlatformView::getSurfaceData() {
	return this->surfaceData;
}

void CPlatformView::dispose() {
	$nc(this->windowLayer)->dispose();
	$CFRetainedResource::dispose();
}

int64_t CPlatformView::getWindowLayerPtr() {
	return $nc(this->windowLayer)->getPointer();
}

void CPlatformView::setAutoResizable(bool toResize) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$setAutoResizable$2$2, toResize)));
}

bool CPlatformView::isUnderMouse() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicBoolean, ref, $new($AtomicBoolean));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$isUnderMouse$3$3, ref)));
	return ref->get();
}

$GraphicsDevice* CPlatformView::getGraphicsDevice() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($CGraphicsEnvironment, cge, $cast($CGraphicsEnvironment, ge));
	$var($AtomicInteger, ref, $new($AtomicInteger));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4, ref)));
	$var($GraphicsDevice, gd, $nc(cge)->getScreenDevice(ref->get()));
	if (gd == nullptr) {
		$assign(gd, $nc(ge)->getDefaultScreenDevice());
	}
	return gd;
}

$Point* CPlatformView::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReference, ref, $new($AtomicReference));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5, ref)));
	$var($Rectangle, r, $cast($Rectangle, ref->get()));
	if (r != nullptr) {
		return $new($Point, r->x, r->y);
	}
	return $new($Point, 0, 0);
}

void CPlatformView::deliverResize(int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->peer)->notifyReshape(x, y, w, h);
}

void CPlatformView::deliverMouseEvent($NSEvent* event) {
	int32_t x = $nc(event)->getX();
	int32_t var$0 = $nc($(getBounds()))->height;
	int32_t y = var$0 - event->getY();
	int32_t absX = event->getAbsX();
	int32_t absY = event->getAbsY();
	if (event->getType() == $CocoaConstants::NSScrollWheel) {
		int32_t var$1 = x;
		int32_t var$2 = y;
		int32_t var$3 = absX;
		int32_t var$4 = absY;
		int32_t var$5 = event->getModifierFlags();
		double var$6 = event->getScrollDeltaX();
		double var$7 = event->getScrollDeltaY();
		$nc(this->responder)->handleScrollEvent(var$1, var$2, var$3, var$4, var$5, var$6, var$7, event->getScrollPhase());
	} else {
		int32_t var$8 = event->getType();
		int32_t var$9 = event->getModifierFlags();
		int32_t var$10 = event->getButtonNumber();
		$nc(this->responder)->handleMouseEvent(var$8, var$9, var$10, event->getClickCount(), x, y, absX, absY);
	}
}

void CPlatformView::deliverKeyEvent($NSEvent* event) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(event)->getType();
	int32_t var$1 = event->getModifierFlags();
	$var($String, var$2, event->getCharacters());
	$var($String, var$3, event->getCharactersIgnoringModifiers());
	$nc(this->responder)->handleKeyEvent(var$0, var$1, var$2, var$3, event->getKeyCode(), true, false);
}

void CPlatformView::deliverWindowDidExposeEvent() {
	$nc(this->peer)->notifyExpose($($nc(this->peer)->getSize()));
}

void CPlatformView::lambda$getLocationOnScreen$5($AtomicReference* ref, int64_t ptr) {
	$init(CPlatformView);
	$useLocalCurrentObjectStackCache();
	$nc(ref)->set($($nc($(nativeGetLocationOnScreen(ptr)))->getBounds()));
}

void CPlatformView::lambda$getGraphicsDevice$4($AtomicInteger* ref, int64_t ptr) {
	$init(CPlatformView);
	$nc(ref)->set(nativeGetNSViewDisplayID(ptr));
}

void CPlatformView::lambda$isUnderMouse$3($AtomicBoolean* ref, int64_t ptr) {
	$init(CPlatformView);
	$nc(ref)->set(nativeIsViewUnderMouse(ptr));
}

void CPlatformView::lambda$setAutoResizable$2(bool toResize, int64_t ptr) {
	$init(CPlatformView);
	nativeSetAutoResizable(ptr, toResize);
}

void CPlatformView::lambda$setToolTip$1($String* msg, int64_t ptr) {
	$init(CPlatformView);
	$CWrapper$NSView::setToolTip(ptr, msg);
}

void CPlatformView::lambda$setBounds$0(int32_t x, int32_t y, int32_t width, int32_t height, int64_t ptr) {
	$init(CPlatformView);
	$CWrapper$NSView::setFrame(ptr, x, y, width, height);
}

CPlatformView::CPlatformView() {
}

$Class* CPlatformView::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPlatformView$$Lambda$lambda$setBounds$0::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$setBounds$0::load$(name, initialize);
		}
		if (name->equals(CPlatformView$$Lambda$lambda$setToolTip$1$1::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$setToolTip$1$1::load$(name, initialize);
		}
		if (name->equals(CPlatformView$$Lambda$lambda$setAutoResizable$2$2::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$setAutoResizable$2$2::load$(name, initialize);
		}
		if (name->equals(CPlatformView$$Lambda$lambda$isUnderMouse$3$3::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$isUnderMouse$3$3::load$(name, initialize);
		}
		if (name->equals(CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$getGraphicsDevice$4$4::load$(name, initialize);
		}
		if (name->equals(CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::classInfo$.name)) {
			return CPlatformView$$Lambda$lambda$getLocationOnScreen$5$5::load$(name, initialize);
		}
	}
	$loadClass(CPlatformView, name, initialize, &_CPlatformView_ClassInfo_, allocate$CPlatformView);
	return class$;
}

$Class* CPlatformView::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun