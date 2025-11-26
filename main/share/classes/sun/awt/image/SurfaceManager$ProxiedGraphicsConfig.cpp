#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>

#include <sun/awt/image/SurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _SurfaceManager$ProxiedGraphicsConfig_MethodInfo_[] = {
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SurfaceManager$ProxiedGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SurfaceManager$ProxiedGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
	nullptr,
	nullptr,
	nullptr,
	_SurfaceManager$ProxiedGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceManager$ProxiedGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.SurfaceManager"
};

$Object* allocate$SurfaceManager$ProxiedGraphicsConfig($Class* clazz) {
	return $of($alloc(SurfaceManager$ProxiedGraphicsConfig));
}

$Class* SurfaceManager$ProxiedGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(SurfaceManager$ProxiedGraphicsConfig, name, initialize, &_SurfaceManager$ProxiedGraphicsConfig_ClassInfo_, allocate$SurfaceManager$ProxiedGraphicsConfig);
	return class$;
}

$Class* SurfaceManager$ProxiedGraphicsConfig::class$ = nullptr;

		} // image
	} // awt
} // sun