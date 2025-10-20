#include <sun/awt/image/SurfaceManager$ImageCapabilitiesGc.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/ImageCapabilities.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/SurfaceManager$ProxiedGraphicsConfig.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SurfaceManager$ProxiedGraphicsConfig = ::sun::awt::image::SurfaceManager$ProxiedGraphicsConfig;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _SurfaceManager$ImageCapabilitiesGc_FieldInfo_[] = {
	{"this$0", "Lsun/awt/image/SurfaceManager;", nullptr, $FINAL | $SYNTHETIC, $field(SurfaceManager$ImageCapabilitiesGc, this$0)},
	{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(SurfaceManager$ImageCapabilitiesGc, gc)},
	{}
};

$MethodInfo _SurfaceManager$ImageCapabilitiesGc_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/SurfaceManager;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceManager$ImageCapabilitiesGc::*)($SurfaceManager*,$GraphicsConfiguration*)>(&SurfaceManager$ImageCapabilitiesGc::init$))},
	{"isAccelerated", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SurfaceManager$ImageCapabilitiesGc_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ImageCapabilitiesGc", "sun.awt.image.SurfaceManager", "ImageCapabilitiesGc", 0},
	{}
};

$ClassInfo _SurfaceManager$ImageCapabilitiesGc_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.SurfaceManager$ImageCapabilitiesGc",
	"java.awt.ImageCapabilities",
	nullptr,
	_SurfaceManager$ImageCapabilitiesGc_FieldInfo_,
	_SurfaceManager$ImageCapabilitiesGc_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceManager$ImageCapabilitiesGc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.SurfaceManager"
};

$Object* allocate$SurfaceManager$ImageCapabilitiesGc($Class* clazz) {
	return $of($alloc(SurfaceManager$ImageCapabilitiesGc));
}

void SurfaceManager$ImageCapabilitiesGc::init$($SurfaceManager* this$0, $GraphicsConfiguration* gc) {
	$set(this, this$0, this$0);
	$ImageCapabilities::init$(false);
	$set(this, gc, gc);
}

bool SurfaceManager$ImageCapabilitiesGc::isAccelerated() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, tmpGc, this->gc);
	if (tmpGc == nullptr) {
		$assign(tmpGc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	if ($instanceOf($SurfaceManager$ProxiedGraphicsConfig, tmpGc)) {
		$var($Object, proxyKey, $nc(($cast($SurfaceManager$ProxiedGraphicsConfig, tmpGc)))->getProxyKey());
		if (proxyKey != nullptr) {
			$var($SurfaceDataProxy, sdp, $cast($SurfaceDataProxy, this->this$0->getCacheData(proxyKey)));
			return (sdp != nullptr && sdp->isAccelerated());
		}
	}
	return false;
}

SurfaceManager$ImageCapabilitiesGc::SurfaceManager$ImageCapabilitiesGc() {
}

$Class* SurfaceManager$ImageCapabilitiesGc::load$($String* name, bool initialize) {
	$loadClass(SurfaceManager$ImageCapabilitiesGc, name, initialize, &_SurfaceManager$ImageCapabilitiesGc_ClassInfo_, allocate$SurfaceManager$ImageCapabilitiesGc);
	return class$;
}

$Class* SurfaceManager$ImageCapabilitiesGc::class$ = nullptr;

		} // image
	} // awt
} // sun