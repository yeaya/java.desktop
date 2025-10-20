#include <sun/java2d/d3d/D3DContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DContext_FieldInfo_[] = {
	{"device", "Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(D3DContext, device)},
	{}
};

$MethodInfo _D3DContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;Lsun/java2d/d3d/D3DGraphicsDevice;)V", nullptr, 0, $method(static_cast<void(D3DContext::*)($RenderQueue*,$D3DGraphicsDevice*)>(&D3DContext::init$))},
	{"getDevice", "()Lsun/java2d/d3d/D3DGraphicsDevice;", nullptr, 0, $method(static_cast<$D3DGraphicsDevice*(D3DContext::*)()>(&D3DContext::getDevice))},
	{"invalidateCurrentContext", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&D3DContext::invalidateCurrentContext))},
	{"setScratchSurface", "(Lsun/java2d/d3d/D3DContext;)V", nullptr, $STATIC, $method(static_cast<void(*)(D3DContext*)>(&D3DContext::setScratchSurface))},
	{}
};

$InnerClassInfo _D3DContext_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DContext$D3DContextCaps", "sun.java2d.d3d.D3DContext", "D3DContextCaps", $STATIC},
	{}
};

$ClassInfo _D3DContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.d3d.D3DContext",
	"sun.java2d.pipe.BufferedContext",
	nullptr,
	_D3DContext_FieldInfo_,
	_D3DContext_MethodInfo_,
	nullptr,
	nullptr,
	_D3DContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DContext$D3DContextCaps"
};

$Object* allocate$D3DContext($Class* clazz) {
	return $of($alloc(D3DContext));
}

void D3DContext::init$($RenderQueue* rq, $D3DGraphicsDevice* device) {
	$BufferedContext::init$(rq);
	$set(this, device, device);
}

void D3DContext::invalidateCurrentContext() {
	$init(D3DContext);
	$useLocalCurrentObjectStackCache();
	$init($BufferedContext);
	if ($BufferedContext::currentContext != nullptr) {
		$nc($BufferedContext::currentContext)->invalidateContext();
		$assignStatic($BufferedContext::currentContext, nullptr);
	}
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$nc(rq)->ensureCapacity(4);
	$nc($(rq->getBuffer()))->putInt(75);
	rq->flushNow();
}

void D3DContext::setScratchSurface(D3DContext* d3dc) {
	$init(D3DContext);
	$useLocalCurrentObjectStackCache();
	$init($BufferedContext);
	if (!$equals(d3dc, $BufferedContext::currentContext)) {
		$assignStatic($BufferedContext::currentContext, nullptr);
	}
	$var($D3DRenderQueue, rq, $D3DRenderQueue::getInstance());
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacity(8);
	$nc(buf)->putInt(71);
	buf->putInt($nc($($nc(d3dc)->getDevice()))->getScreen());
}

$D3DGraphicsDevice* D3DContext::getDevice() {
	return this->device;
}

D3DContext::D3DContext() {
}

$Class* D3DContext::load$($String* name, bool initialize) {
	$loadClass(D3DContext, name, initialize, &_D3DContext_ClassInfo_, allocate$D3DContext);
	return class$;
}

$Class* D3DContext::class$ = nullptr;

		} // d3d
	} // java2d
} // sun