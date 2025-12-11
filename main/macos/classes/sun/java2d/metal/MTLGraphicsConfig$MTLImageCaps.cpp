#include <sun/java2d/metal/MTLGraphicsConfig$MTLImageCaps.h>

#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLGraphicsConfig$MTLImageCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLGraphicsConfig$MTLImageCaps::*)()>(&MTLGraphicsConfig$MTLImageCaps::init$))},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MTLGraphicsConfig$MTLImageCaps_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLImageCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLGraphicsConfig$MTLImageCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLGraphicsConfig$MTLImageCaps",
	"java.awt.ImageCapabilities",
	nullptr,
	nullptr,
	_MTLGraphicsConfig$MTLImageCaps_MethodInfo_,
	nullptr,
	nullptr,
	_MTLGraphicsConfig$MTLImageCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLGraphicsConfig"
};

$Object* allocate$MTLGraphicsConfig$MTLImageCaps($Class* clazz) {
	return $of($alloc(MTLGraphicsConfig$MTLImageCaps));
}

void MTLGraphicsConfig$MTLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool MTLGraphicsConfig$MTLImageCaps::isTrueVolatile() {
	return true;
}

MTLGraphicsConfig$MTLImageCaps::MTLGraphicsConfig$MTLImageCaps() {
}

$Class* MTLGraphicsConfig$MTLImageCaps::load$($String* name, bool initialize) {
	$loadClass(MTLGraphicsConfig$MTLImageCaps, name, initialize, &_MTLGraphicsConfig$MTLImageCaps_ClassInfo_, allocate$MTLGraphicsConfig$MTLImageCaps);
	return class$;
}

$Class* MTLGraphicsConfig$MTLImageCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun