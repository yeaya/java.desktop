#include <sun/java2d/opengl/OGLContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLContext_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(static_cast<void(OGLContext::*)($RenderQueue*)>(&OGLContext::init$))},
	{"getOGLIdString", "()Ljava/lang/String;", nullptr, $STATIC | $FINAL | $NATIVE, $method(static_cast<$String*(*)()>(&OGLContext::getOGLIdString))},
	{"invalidateCurrentContext", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&OGLContext::invalidateCurrentContext))},
	{"setScratchSurface", "(Lsun/java2d/opengl/OGLGraphicsConfig;)V", nullptr, $STATIC, $method(static_cast<void(*)($OGLGraphicsConfig*)>(&OGLContext::setScratchSurface))},
	{"setScratchSurface", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&OGLContext::setScratchSurface))},
	{}
};

#define _METHOD_INDEX_getOGLIdString 1

$InnerClassInfo _OGLContext_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLContext$OGLContextCaps", "sun.java2d.opengl.OGLContext", "OGLContextCaps", $STATIC},
	{}
};

$ClassInfo _OGLContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.opengl.OGLContext",
	"sun.java2d.pipe.BufferedContext",
	nullptr,
	nullptr,
	_OGLContext_MethodInfo_,
	nullptr,
	nullptr,
	_OGLContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLContext$OGLContextCaps"
};

$Object* allocate$OGLContext($Class* clazz) {
	return $of($alloc(OGLContext));
}

void OGLContext::init$($RenderQueue* rq) {
	$BufferedContext::init$(rq);
}

void OGLContext::setScratchSurface($OGLGraphicsConfig* gc) {
	$init(OGLContext);
	setScratchSurface($nc(gc)->getNativeConfigInfo());
}

void OGLContext::setScratchSurface(int64_t pConfigInfo) {
	$init(OGLContext);
	$init($BufferedContext);
	$assignStatic($BufferedContext::currentContext, nullptr);
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(12, 4);
	$nc(buf)->putInt(71);
	buf->putLong(pConfigInfo);
}

void OGLContext::invalidateCurrentContext() {
	$init(OGLContext);
	$init($BufferedContext);
	if ($BufferedContext::currentContext != nullptr) {
		$nc($BufferedContext::currentContext)->invalidateContext();
		$assignStatic($BufferedContext::currentContext, nullptr);
	}
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->ensureCapacity(4);
	$nc($(rq->getBuffer()))->putInt(75);
	rq->flushNow();
}

$String* OGLContext::getOGLIdString() {
	$init(OGLContext);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(OGLContext, getOGLIdString, $String*);
	$assign($ret, $invokeNativeStatic(OGLContext, getOGLIdString));
	$finishNativeStatic();
	return $ret;
}

OGLContext::OGLContext() {
}

$Class* OGLContext::load$($String* name, bool initialize) {
	$loadClass(OGLContext, name, initialize, &_OGLContext_ClassInfo_, allocate$OGLContext);
	return class$;
}

$Class* OGLContext::class$ = nullptr;

		} // opengl
	} // java2d
} // sun