#include <sun/java2d/opengl/OGLGraphicsConfig.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager$ProxiedGraphicsConfig = ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $AccelGraphicsConfig = ::sun::java2d::pipe::hw::AccelGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeConfigInfo", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OGLGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OGLGraphicsConfig_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.java2d.opengl.OGLGraphicsConfig",
	nullptr,
	"sun.java2d.pipe.hw.AccelGraphicsConfig,sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
	nullptr,
	_OGLGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_OGLGraphicsConfig_InnerClassesInfo_
};

$Object* allocate$OGLGraphicsConfig($Class* clazz) {
	return $of($alloc(OGLGraphicsConfig));
}

int32_t OGLGraphicsConfig::hashCode() {
	 return this->$AccelGraphicsConfig::hashCode();
}

bool OGLGraphicsConfig::equals(Object$* arg0) {
	 return this->$AccelGraphicsConfig::equals(arg0);
}

$Object* OGLGraphicsConfig::clone() {
	 return this->$AccelGraphicsConfig::clone();
}

$String* OGLGraphicsConfig::toString() {
	 return this->$AccelGraphicsConfig::toString();
}

void OGLGraphicsConfig::finalize() {
	this->$AccelGraphicsConfig::finalize();
}

$Class* OGLGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(OGLGraphicsConfig, name, initialize, &_OGLGraphicsConfig_ClassInfo_, allocate$OGLGraphicsConfig);
	return class$;
}

$Class* OGLGraphicsConfig::class$ = nullptr;

		} // opengl
	} // java2d
} // sun