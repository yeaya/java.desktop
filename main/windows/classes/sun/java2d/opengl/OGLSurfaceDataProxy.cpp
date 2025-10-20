#include <sun/java2d/opengl/OGLSurfaceDataProxy.h>

#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

#undef OPAQUE
#undef UNCACHED

using $Color = ::java::awt::Color;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLSurfaceDataProxy_FieldInfo_[] = {
	{"oglgc", "Lsun/java2d/opengl/OGLGraphicsConfig;", nullptr, 0, $field(OGLSurfaceDataProxy, oglgc)},
	{"transparency", "I", nullptr, 0, $field(OGLSurfaceDataProxy, transparency)},
	{}
};

$MethodInfo _OGLSurfaceDataProxy_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/OGLGraphicsConfig;I)V", nullptr, $PUBLIC, $method(static_cast<void(OGLSurfaceDataProxy::*)($OGLGraphicsConfig*,int32_t)>(&OGLSurfaceDataProxy::init$))},
	{"createProxy", "(Lsun/java2d/SurfaceData;Lsun/java2d/opengl/OGLGraphicsConfig;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceDataProxy*(*)($SurfaceData*,$OGLGraphicsConfig*)>(&OGLSurfaceDataProxy::createProxy))},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OGLSurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.OGLSurfaceDataProxy",
	"sun.java2d.SurfaceDataProxy",
	nullptr,
	_OGLSurfaceDataProxy_FieldInfo_,
	_OGLSurfaceDataProxy_MethodInfo_
};

$Object* allocate$OGLSurfaceDataProxy($Class* clazz) {
	return $of($alloc(OGLSurfaceDataProxy));
}

$SurfaceDataProxy* OGLSurfaceDataProxy::createProxy($SurfaceData* srcData, $OGLGraphicsConfig* dstConfig) {
	$init(OGLSurfaceDataProxy);
	if ($instanceOf($OGLSurfaceData, srcData)) {
		$init($SurfaceDataProxy);
		return $SurfaceDataProxy::UNCACHED;
	}
	return $new(OGLSurfaceDataProxy, dstConfig, $nc(srcData)->getTransparency());
}

void OGLSurfaceDataProxy::init$($OGLGraphicsConfig* oglgc, int32_t transparency) {
	$SurfaceDataProxy::init$();
	$set(this, oglgc, oglgc);
	this->transparency = transparency;
}

$SurfaceData* OGLSurfaceDataProxy::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData$renamed, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, cachedData, cachedData$renamed);
	if (cachedData == nullptr) {
		try {
			$assign(cachedData, $nc(this->oglgc)->createManagedSurface(w, h, this->transparency));
		} catch ($OutOfMemoryError&) {
			$var($OutOfMemoryError, er, $catch());
			return nullptr;
		}
	}
	return cachedData;
}

bool OGLSurfaceDataProxy::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	$init($CompositeType);
	return $nc(comp)->isDerivedFrom($CompositeType::AnyAlpha) && (bgColor == nullptr || this->transparency == $Transparency::OPAQUE);
}

OGLSurfaceDataProxy::OGLSurfaceDataProxy() {
}

$Class* OGLSurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(OGLSurfaceDataProxy, name, initialize, &_OGLSurfaceDataProxy_ClassInfo_, allocate$OGLSurfaceDataProxy);
	return class$;
}

$Class* OGLSurfaceDataProxy::class$ = nullptr;

		} // opengl
	} // java2d
} // sun