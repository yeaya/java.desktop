#include <sun/java2d/metal/MTLContext.h>

#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLContext::*)($RenderQueue*)>(&MTLContext::init$))},
	{"setScratchSurface", "(Lsun/java2d/metal/MTLGraphicsConfig;)V", nullptr, $STATIC, $method(static_cast<void(*)($MTLGraphicsConfig*)>(&MTLContext::setScratchSurface))},
	{"setScratchSurface", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&MTLContext::setScratchSurface))},
	{}
};

$InnerClassInfo _MTLContext_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLContext$MTLContextCaps", "sun.java2d.metal.MTLContext", "MTLContextCaps", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MTLContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.metal.MTLContext",
	"sun.java2d.pipe.BufferedContext",
	nullptr,
	nullptr,
	_MTLContext_MethodInfo_,
	nullptr,
	nullptr,
	_MTLContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLContext$MTLContextCaps"
};

$Object* allocate$MTLContext($Class* clazz) {
	return $of($alloc(MTLContext));
}

void MTLContext::init$($RenderQueue* rq) {
	$BufferedContext::init$(rq);
}

void MTLContext::setScratchSurface($MTLGraphicsConfig* gc) {
	$init(MTLContext);
	setScratchSurface($nc(gc)->getNativeConfigInfo());
}

void MTLContext::setScratchSurface(int64_t pConfigInfo) {
	$init(MTLContext);
	$useLocalCurrentObjectStackCache();
	$init($BufferedContext);
	$assignStatic($BufferedContext::currentContext, nullptr);
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(12, 4);
	$nc(buf)->putInt(71);
	buf->putLong(pConfigInfo);
}

MTLContext::MTLContext() {
}

$Class* MTLContext::load$($String* name, bool initialize) {
	$loadClass(MTLContext, name, initialize, &_MTLContext_ClassInfo_, allocate$MTLContext);
	return class$;
}

$Class* MTLContext::class$ = nullptr;

		} // metal
	} // java2d
} // sun