#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>

#include <java/awt/image/VolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedContextProvider = ::sun::java2d::pipe::hw::BufferedContextProvider;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$MethodInfo _AccelGraphicsConfig_MethodInfo_[] = {
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccelGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.hw.AccelGraphicsConfig",
	nullptr,
	"sun.java2d.pipe.hw.BufferedContextProvider",
	nullptr,
	_AccelGraphicsConfig_MethodInfo_
};

$Object* allocate$AccelGraphicsConfig($Class* clazz) {
	return $of($alloc(AccelGraphicsConfig));
}

$Class* AccelGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(AccelGraphicsConfig, name, initialize, &_AccelGraphicsConfig_ClassInfo_, allocate$AccelGraphicsConfig);
	return class$;
}

$Class* AccelGraphicsConfig::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun