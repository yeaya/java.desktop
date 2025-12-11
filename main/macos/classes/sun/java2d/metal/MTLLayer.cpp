#include <sun/java2d/metal/MTLLayer.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/NullSurfaceData.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CFLayer.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $NullSurfaceData = ::sun::java2d::NullSurfaceData;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CFLayer = ::sun::lwawt::macosx::CFLayer;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;

namespace sun {
	namespace java2d {
		namespace metal {

class MTLLayer$$Lambda$lambda$replaceSurfaceData$0 : public $CFRetainedResource$CFNativeAction {
	$class(MTLLayer$$Lambda$lambda$replaceSurfaceData$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($Insets* insets) {
		$set(this, insets, insets);
	}
	virtual void run(int64_t ptr) override {
		MTLLayer::lambda$replaceSurfaceData$0(insets, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLLayer$$Lambda$lambda$replaceSurfaceData$0>());
	}
	$Insets* insets = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MTLLayer$$Lambda$lambda$replaceSurfaceData$0::fieldInfos[2] = {
	{"insets", "Ljava/awt/Insets;", nullptr, $PUBLIC, $field(MTLLayer$$Lambda$lambda$replaceSurfaceData$0, insets)},
	{}
};
$MethodInfo MTLLayer$$Lambda$lambda$replaceSurfaceData$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLLayer$$Lambda$lambda$replaceSurfaceData$0::*)($Insets*)>(&MTLLayer$$Lambda$lambda$replaceSurfaceData$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLLayer$$Lambda$lambda$replaceSurfaceData$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLLayer$$Lambda$lambda$replaceSurfaceData$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* MTLLayer$$Lambda$lambda$replaceSurfaceData$0::load$($String* name, bool initialize) {
	$loadClass(MTLLayer$$Lambda$lambda$replaceSurfaceData$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLLayer$$Lambda$lambda$replaceSurfaceData$0::class$ = nullptr;

class MTLLayer$$Lambda$lambda$validate$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(MTLLayer$$Lambda$lambda$validate$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($MTLSurfaceData* mtlsd) {
		$set(this, mtlsd, mtlsd);
	}
	virtual void run(int64_t ptr) override {
		MTLLayer::lambda$validate$1(mtlsd, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLLayer$$Lambda$lambda$validate$1$1>());
	}
	$MTLSurfaceData* mtlsd = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MTLLayer$$Lambda$lambda$validate$1$1::fieldInfos[2] = {
	{"mtlsd", "Lsun/java2d/metal/MTLSurfaceData;", nullptr, $PUBLIC, $field(MTLLayer$$Lambda$lambda$validate$1$1, mtlsd)},
	{}
};
$MethodInfo MTLLayer$$Lambda$lambda$validate$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/metal/MTLSurfaceData;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLLayer$$Lambda$lambda$validate$1$1::*)($MTLSurfaceData*)>(&MTLLayer$$Lambda$lambda$validate$1$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLLayer$$Lambda$lambda$validate$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLLayer$$Lambda$lambda$validate$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* MTLLayer$$Lambda$lambda$validate$1$1::load$($String* name, bool initialize) {
	$loadClass(MTLLayer$$Lambda$lambda$validate$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLLayer$$Lambda$lambda$validate$1$1::class$ = nullptr;

class MTLLayer$$Lambda$lambda$setScale$2$2 : public $CFRetainedResource$CFNativeAction {
	$class(MTLLayer$$Lambda$lambda$setScale$2$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(MTLLayer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setScale$2(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLLayer$$Lambda$lambda$setScale$2$2>());
	}
	MTLLayer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MTLLayer$$Lambda$lambda$setScale$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MTLLayer$$Lambda$lambda$setScale$2$2, inst$)},
	{}
};
$MethodInfo MTLLayer$$Lambda$lambda$setScale$2$2::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/metal/MTLLayer;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLLayer$$Lambda$lambda$setScale$2$2::*)(MTLLayer*)>(&MTLLayer$$Lambda$lambda$setScale$2$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLLayer$$Lambda$lambda$setScale$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLLayer$$Lambda$lambda$setScale$2$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* MTLLayer$$Lambda$lambda$setScale$2$2::load$($String* name, bool initialize) {
	$loadClass(MTLLayer$$Lambda$lambda$setScale$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLLayer$$Lambda$lambda$setScale$2$2::class$ = nullptr;

class MTLLayer$$Lambda$lambda$drawInMTLContext$3$3 : public $CFRetainedResource$CFNativeAction {
	$class(MTLLayer$$Lambda$lambda$drawInMTLContext$3$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		MTLLayer::lambda$drawInMTLContext$3(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MTLLayer$$Lambda$lambda$drawInMTLContext$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::*)()>(&MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.metal.MTLLayer$$Lambda$lambda$drawInMTLContext$3$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::load$($String* name, bool initialize) {
	$loadClass(MTLLayer$$Lambda$lambda$drawInMTLContext$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::class$ = nullptr;

$FieldInfo _MTLLayer_FieldInfo_[] = {
	{"scale", "I", nullptr, $PRIVATE, $field(MTLLayer, scale)},
	{}
};

$MethodInfo _MTLLayer_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLLayer::*)($LWWindowPeer*)>(&MTLLayer::init$))},
	{"blitTexture", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&MTLLayer::blitTexture))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"drawInMTLContext", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLLayer::*)()>(&MTLLayer::drawInMTLContext))},
	{"lambda$drawInMTLContext$3", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&MTLLayer::lambda$drawInMTLContext$3))},
	{"lambda$replaceSurfaceData$0", "(Ljava/awt/Insets;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Insets*,int64_t)>(&MTLLayer::lambda$replaceSurfaceData$0))},
	{"lambda$setScale$2", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(MTLLayer::*)(int64_t)>(&MTLLayer::lambda$setScale$2))},
	{"lambda$validate$1", "(Lsun/java2d/metal/MTLSurfaceData;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($MTLSurfaceData*,int64_t)>(&MTLLayer::lambda$validate$1))},
	{"nativeCreateLayer", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MTLLayer::*)()>(&MTLLayer::nativeCreateLayer))},
	{"nativeSetInsets", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&MTLLayer::nativeSetInsets))},
	{"nativeSetScale", "(JD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,double)>(&MTLLayer::nativeSetScale))},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"setScale", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(MTLLayer::*)(int32_t)>(&MTLLayer::setScale))},
	{"validate", "(JLsun/java2d/metal/MTLSurfaceData;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$MTLSurfaceData*)>(&MTLLayer::validate))},
	{"validate", "(Lsun/java2d/metal/MTLSurfaceData;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_blitTexture 1
#define _METHOD_INDEX_nativeCreateLayer 8
#define _METHOD_INDEX_nativeSetInsets 9
#define _METHOD_INDEX_nativeSetScale 10
#define _METHOD_INDEX_validate 13

$ClassInfo _MTLLayer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLLayer",
	"sun.lwawt.macosx.CFLayer",
	nullptr,
	_MTLLayer_FieldInfo_,
	_MTLLayer_MethodInfo_
};

$Object* allocate$MTLLayer($Class* clazz) {
	return $of($alloc(MTLLayer));
}

int64_t MTLLayer::nativeCreateLayer() {
	int64_t $ret = 0;
	$prepareNative(MTLLayer, nativeCreateLayer, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void MTLLayer::nativeSetScale(int64_t layerPtr, double scale) {
	$init(MTLLayer);
	$prepareNativeStatic(MTLLayer, nativeSetScale, void, int64_t layerPtr, double scale);
	$invokeNativeStatic(layerPtr, scale);
	$finishNativeStatic();
}

void MTLLayer::nativeSetInsets(int64_t layerPtr, int32_t top, int32_t left) {
	$init(MTLLayer);
	$prepareNativeStatic(MTLLayer, nativeSetInsets, void, int64_t layerPtr, int32_t top, int32_t left);
	$invokeNativeStatic(layerPtr, top, left);
	$finishNativeStatic();
}

void MTLLayer::validate(int64_t layerPtr, $MTLSurfaceData* mtlsd) {
	$init(MTLLayer);
	$prepareNativeStatic(MTLLayer, validate, void, int64_t layerPtr, $MTLSurfaceData* mtlsd);
	$invokeNativeStatic(layerPtr, mtlsd);
	$finishNativeStatic();
}

void MTLLayer::blitTexture(int64_t layerPtr) {
	$init(MTLLayer);
	$prepareNativeStatic(MTLLayer, blitTexture, void, int64_t layerPtr);
	$invokeNativeStatic(layerPtr);
	$finishNativeStatic();
}

void MTLLayer::init$($LWWindowPeer* peer) {
	$CFLayer::init$(0, true);
	this->scale = 1;
	setPtr(nativeCreateLayer());
	$set(this, peer, peer);
}

$SurfaceData* MTLLayer::replaceSurfaceData() {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getBounds()))->isEmpty()) {
		$init($NullSurfaceData);
		$set(this, surfaceData, $NullSurfaceData::theInstance);
		return this->surfaceData;
	}
	$var($MTLGraphicsConfig, gc, $cast($MTLGraphicsConfig, getGraphicsConfiguration()));
	$set(this, surfaceData, $nc(gc)->createSurfaceData(this));
	setScale($nc($($cast($CGraphicsDevice, gc->getDevice())))->getScaleFactor());
	if (this->peer != nullptr) {
		$var($Insets, insets, $nc(this->peer)->getInsets());
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(MTLLayer$$Lambda$lambda$replaceSurfaceData$0, insets)));
	}
	if ($instanceOf($MTLSurfaceData, this->surfaceData)) {
		validate($cast($MTLSurfaceData, this->surfaceData));
	}
	return this->surfaceData;
}

void MTLLayer::validate($MTLSurfaceData* mtlsd) {
	$useLocalCurrentObjectStackCache();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(MTLLayer$$Lambda$lambda$validate$1$1, mtlsd)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MTLLayer::dispose() {
	validate(nullptr);
	$var($SurfaceData, oldData, this->surfaceData);
	$init($NullSurfaceData);
	$set(this, surfaceData, $NullSurfaceData::theInstance);
	if (oldData != nullptr) {
		oldData->flush();
	}
	$CFLayer::dispose();
}

void MTLLayer::setScale(int32_t _scale) {
	if (this->scale != _scale) {
		this->scale = _scale;
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(MTLLayer$$Lambda$lambda$setScale$2$2, this)));
	}
}

void MTLLayer::drawInMTLContext() {
	$useLocalCurrentObjectStackCache();
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(MTLLayer$$Lambda$lambda$drawInMTLContext$3$3)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MTLLayer::lambda$drawInMTLContext$3(int64_t ptr) {
	$init(MTLLayer);
	blitTexture(ptr);
}

void MTLLayer::lambda$setScale$2(int64_t ptr) {
	nativeSetScale(ptr, (double)this->scale);
}

void MTLLayer::lambda$validate$1($MTLSurfaceData* mtlsd, int64_t ptr) {
	$init(MTLLayer);
	validate(ptr, mtlsd);
}

void MTLLayer::lambda$replaceSurfaceData$0($Insets* insets, int64_t ptr) {
	$init(MTLLayer);
	nativeSetInsets(ptr, $nc(insets)->top, insets->left);
}

MTLLayer::MTLLayer() {
}

$Class* MTLLayer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MTLLayer$$Lambda$lambda$replaceSurfaceData$0::classInfo$.name)) {
			return MTLLayer$$Lambda$lambda$replaceSurfaceData$0::load$(name, initialize);
		}
		if (name->equals(MTLLayer$$Lambda$lambda$validate$1$1::classInfo$.name)) {
			return MTLLayer$$Lambda$lambda$validate$1$1::load$(name, initialize);
		}
		if (name->equals(MTLLayer$$Lambda$lambda$setScale$2$2::classInfo$.name)) {
			return MTLLayer$$Lambda$lambda$setScale$2$2::load$(name, initialize);
		}
		if (name->equals(MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::classInfo$.name)) {
			return MTLLayer$$Lambda$lambda$drawInMTLContext$3$3::load$(name, initialize);
		}
	}
	$loadClass(MTLLayer, name, initialize, &_MTLLayer_ClassInfo_, allocate$MTLLayer);
	return class$;
}

$Class* MTLLayer::class$ = nullptr;

		} // metal
	} // java2d
} // sun