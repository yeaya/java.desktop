#include <sun/java2d/SurfaceManagerFactory.h>

#include <java/lang/IllegalStateException.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;

namespace sun {
	namespace java2d {

$FieldInfo _SurfaceManagerFactory_FieldInfo_[] = {
	{"instance", "Lsun/java2d/SurfaceManagerFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceManagerFactory, instance)},
	{}
};

$MethodInfo _SurfaceManagerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceManagerFactory::*)()>(&SurfaceManagerFactory::init$))},
	{"createVolatileManager", "(Lsun/awt/image/SunVolatileImage;Ljava/lang/Object;)Lsun/awt/image/VolatileSurfaceManager;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstance", "()Lsun/java2d/SurfaceManagerFactory;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<SurfaceManagerFactory*(*)()>(&SurfaceManagerFactory::getInstance))},
	{"setInstance", "(Lsun/java2d/SurfaceManagerFactory;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(SurfaceManagerFactory*)>(&SurfaceManagerFactory::setInstance))},
	{}
};

$ClassInfo _SurfaceManagerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.SurfaceManagerFactory",
	"java.lang.Object",
	nullptr,
	_SurfaceManagerFactory_FieldInfo_,
	_SurfaceManagerFactory_MethodInfo_
};

$Object* allocate$SurfaceManagerFactory($Class* clazz) {
	return $of($alloc(SurfaceManagerFactory));
}

SurfaceManagerFactory* SurfaceManagerFactory::instance = nullptr;

void SurfaceManagerFactory::init$() {
}

SurfaceManagerFactory* SurfaceManagerFactory::getInstance() {
	$load(SurfaceManagerFactory);
	$synchronized(class$) {
		$init(SurfaceManagerFactory);
		if (SurfaceManagerFactory::instance == nullptr) {
			$throwNew($IllegalStateException, "No SurfaceManagerFactory set."_s);
		}
		return SurfaceManagerFactory::instance;
	}
}

void SurfaceManagerFactory::setInstance(SurfaceManagerFactory* factory) {
	$load(SurfaceManagerFactory);
	$synchronized(class$) {
		if (factory == nullptr) {
			$throwNew($IllegalArgumentException, "factory must be non-null"_s);
		}
		$init(SurfaceManagerFactory);
		if (SurfaceManagerFactory::instance != nullptr) {
			$throwNew($IllegalStateException, "The surface manager factory is already initialized"_s);
		}
		$assignStatic(SurfaceManagerFactory::instance, factory);
	}
}

SurfaceManagerFactory::SurfaceManagerFactory() {
}

$Class* SurfaceManagerFactory::load$($String* name, bool initialize) {
	$loadClass(SurfaceManagerFactory, name, initialize, &_SurfaceManagerFactory_ClassInfo_, allocate$SurfaceManagerFactory);
	return class$;
}

$Class* SurfaceManagerFactory::class$ = nullptr;

	} // java2d
} // sun