#include <sun/awt/image/VolatileSurfaceManager$AcceleratedImageCapabilities.h>

#include <java/awt/ImageCapabilities.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/VolatileSurfaceManager.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VolatileSurfaceManager = ::sun::awt::image::VolatileSurfaceManager;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _VolatileSurfaceManager$AcceleratedImageCapabilities_FieldInfo_[] = {
	{"this$0", "Lsun/awt/image/VolatileSurfaceManager;", nullptr, $FINAL | $SYNTHETIC, $field(VolatileSurfaceManager$AcceleratedImageCapabilities, this$0)},
	{}
};

$MethodInfo _VolatileSurfaceManager$AcceleratedImageCapabilities_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/VolatileSurfaceManager;)V", nullptr, 0, $method(static_cast<void(VolatileSurfaceManager$AcceleratedImageCapabilities::*)($VolatileSurfaceManager*)>(&VolatileSurfaceManager$AcceleratedImageCapabilities::init$))},
	{"isAccelerated", "()Z", nullptr, $PUBLIC},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VolatileSurfaceManager$AcceleratedImageCapabilities_InnerClassesInfo_[] = {
	{"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities", "sun.awt.image.VolatileSurfaceManager", "AcceleratedImageCapabilities", $PRIVATE},
	{}
};

$ClassInfo _VolatileSurfaceManager$AcceleratedImageCapabilities_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.VolatileSurfaceManager$AcceleratedImageCapabilities",
	"java.awt.ImageCapabilities",
	nullptr,
	_VolatileSurfaceManager$AcceleratedImageCapabilities_FieldInfo_,
	_VolatileSurfaceManager$AcceleratedImageCapabilities_MethodInfo_,
	nullptr,
	nullptr,
	_VolatileSurfaceManager$AcceleratedImageCapabilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.VolatileSurfaceManager"
};

$Object* allocate$VolatileSurfaceManager$AcceleratedImageCapabilities($Class* clazz) {
	return $of($alloc(VolatileSurfaceManager$AcceleratedImageCapabilities));
}

void VolatileSurfaceManager$AcceleratedImageCapabilities::init$($VolatileSurfaceManager* this$0) {
	$set(this, this$0, this$0);
	$ImageCapabilities::init$(false);
}

bool VolatileSurfaceManager$AcceleratedImageCapabilities::isAccelerated() {
	return (this->this$0->sdCurrent == this->this$0->sdAccel);
}

bool VolatileSurfaceManager$AcceleratedImageCapabilities::isTrueVolatile() {
	return isAccelerated();
}

VolatileSurfaceManager$AcceleratedImageCapabilities::VolatileSurfaceManager$AcceleratedImageCapabilities() {
}

$Class* VolatileSurfaceManager$AcceleratedImageCapabilities::load$($String* name, bool initialize) {
	$loadClass(VolatileSurfaceManager$AcceleratedImageCapabilities, name, initialize, &_VolatileSurfaceManager$AcceleratedImageCapabilities_ClassInfo_, allocate$VolatileSurfaceManager$AcceleratedImageCapabilities);
	return class$;
}

$Class* VolatileSurfaceManager$AcceleratedImageCapabilities::class$ = nullptr;

		} // image
	} // awt
} // sun