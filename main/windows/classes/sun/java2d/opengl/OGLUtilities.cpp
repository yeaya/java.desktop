#include <sun/java2d/opengl/OGLUtilities.h>

#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Runnable.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

#undef FBOBJECT
#undef FLIP_BACKBUFFER
#undef TEXTURE
#undef UNDEFINED
#undef WINDOW

using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLUtilities_FieldInfo_[] = {
	{"UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLUtilities, UNDEFINED)},
	{"WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLUtilities, WINDOW)},
	{"TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLUtilities, TEXTURE)},
	{"FLIP_BACKBUFFER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLUtilities, FLIP_BACKBUFFER)},
	{"FBOBJECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OGLUtilities, FBOBJECT)},
	{}
};

$MethodInfo _OGLUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLUtilities::*)()>(&OGLUtilities::init$))},
	{"getOGLScissorBox", "(Ljava/awt/Graphics;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Graphics*)>(&OGLUtilities::getOGLScissorBox))},
	{"getOGLSurfaceIdentifier", "(Ljava/awt/Graphics;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Graphics*)>(&OGLUtilities::getOGLSurfaceIdentifier))},
	{"getOGLSurfaceType", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Graphics*)>(&OGLUtilities::getOGLSurfaceType))},
	{"getOGLTextureType", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Graphics*)>(&OGLUtilities::getOGLTextureType))},
	{"getOGLViewport", "(Ljava/awt/Graphics;II)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Graphics*,int32_t,int32_t)>(&OGLUtilities::getOGLViewport))},
	{"invokeWithOGLContextCurrent", "(Ljava/awt/Graphics;Ljava/lang/Runnable;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Graphics*,$Runnable*)>(&OGLUtilities::invokeWithOGLContextCurrent))},
	{"invokeWithOGLSharedContextCurrent", "(Ljava/awt/GraphicsConfiguration;Ljava/lang/Runnable;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($GraphicsConfiguration*,$Runnable*)>(&OGLUtilities::invokeWithOGLSharedContextCurrent))},
	{"isQueueFlusherThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&OGLUtilities::isQueueFlusherThread))},
	{}
};

$ClassInfo _OGLUtilities_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLUtilities",
	"java.lang.Object",
	nullptr,
	_OGLUtilities_FieldInfo_,
	_OGLUtilities_MethodInfo_
};

$Object* allocate$OGLUtilities($Class* clazz) {
	return $of($alloc(OGLUtilities));
}

void OGLUtilities::init$() {
}

bool OGLUtilities::isQueueFlusherThread() {
	return $OGLRenderQueue::isQueueFlusherThread();
}

bool OGLUtilities::invokeWithOGLContextCurrent($Graphics* g, $Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (g != nullptr) {
				if (!($instanceOf($SunGraphics2D, g))) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				$var($SurfaceData, sData, $nc(($cast($SunGraphics2D, g)))->surfaceData);
				if (!($instanceOf($OGLSurfaceData, sData))) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				$OGLContext::validateContext($cast($OGLSurfaceData, sData));
			}
			rq->flushAndInvokeNow(r);
			$OGLContext::invalidateCurrentContext();
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

bool OGLUtilities::invokeWithOGLSharedContextCurrent($GraphicsConfiguration* config, $Runnable* r) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($OGLGraphicsConfig, config))) {
		return false;
	}
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::setScratchSurface($cast($OGLGraphicsConfig, config));
			rq->flushAndInvokeNow(r);
			$OGLContext::invalidateCurrentContext();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return true;
}

$Rectangle* OGLUtilities::getOGLViewport($Graphics* g, int32_t componentWidth, int32_t componentHeight) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($SunGraphics2D, g))) {
		return nullptr;
	}
	$var($SunGraphics2D, sg2d, $cast($SunGraphics2D, g));
	$var($SurfaceData, sData, $nc(sg2d)->surfaceData);
	int32_t x0 = sg2d->transX;
	int32_t y0 = sg2d->transY;
	$var($Rectangle, surfaceBounds, $nc(sData)->getBounds());
	int32_t x1 = x0;
	int32_t y1 = $nc(surfaceBounds)->height - (y0 + componentHeight);
	return $new($Rectangle, x1, y1, componentWidth, componentHeight);
}

$Rectangle* OGLUtilities::getOGLScissorBox($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($SunGraphics2D, g))) {
		return nullptr;
	}
	$var($SunGraphics2D, sg2d, $cast($SunGraphics2D, g));
	$var($SurfaceData, sData, $nc(sg2d)->surfaceData);
	$var($Region, r, sg2d->getCompClip());
	if (!$nc(r)->isRectangular()) {
		return nullptr;
	}
	int32_t x0 = $nc(r)->getLoX();
	int32_t y0 = r->getLoY();
	int32_t w = r->getWidth();
	int32_t h = r->getHeight();
	$var($Rectangle, surfaceBounds, $nc(sData)->getBounds());
	int32_t x1 = x0;
	int32_t y1 = $nc(surfaceBounds)->height - (y0 + h);
	return $new($Rectangle, x1, y1, w, h);
}

$Object* OGLUtilities::getOGLSurfaceIdentifier($Graphics* g) {
	if (!($instanceOf($SunGraphics2D, g))) {
		return $of(nullptr);
	}
	return $of($nc(($cast($SunGraphics2D, g)))->surfaceData);
}

int32_t OGLUtilities::getOGLSurfaceType($Graphics* g) {
	if (!($instanceOf($SunGraphics2D, g))) {
		return OGLUtilities::UNDEFINED;
	}
	$var($SurfaceData, sData, $nc(($cast($SunGraphics2D, g)))->surfaceData);
	if (!($instanceOf($OGLSurfaceData, sData))) {
		return OGLUtilities::UNDEFINED;
	}
	return $nc(($cast($OGLSurfaceData, sData)))->getType();
}

int32_t OGLUtilities::getOGLTextureType($Graphics* g) {
	if (!($instanceOf($SunGraphics2D, g))) {
		return 0;
	}
	$var($SurfaceData, sData, $nc(($cast($SunGraphics2D, g)))->surfaceData);
	if (!($instanceOf($OGLSurfaceData, sData))) {
		return 0;
	}
	return $nc(($cast($OGLSurfaceData, sData)))->getTextureTarget();
}

OGLUtilities::OGLUtilities() {
}

$Class* OGLUtilities::load$($String* name, bool initialize) {
	$loadClass(OGLUtilities, name, initialize, &_OGLUtilities_ClassInfo_, allocate$OGLUtilities);
	return class$;
}

$Class* OGLUtilities::class$ = nullptr;

		} // opengl
	} // java2d
} // sun