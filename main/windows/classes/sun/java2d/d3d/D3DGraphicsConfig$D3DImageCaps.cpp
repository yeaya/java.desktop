#include <sun/java2d/d3d/D3DGraphicsConfig$D3DImageCaps.h>

#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DGraphicsConfig$D3DImageCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DGraphicsConfig$D3DImageCaps::*)()>(&D3DGraphicsConfig$D3DImageCaps::init$))},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DGraphicsConfig$D3DImageCaps_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps", "sun.java2d.d3d.D3DGraphicsConfig", "D3DImageCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DGraphicsConfig$D3DImageCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsConfig$D3DImageCaps",
	"java.awt.ImageCapabilities",
	nullptr,
	nullptr,
	_D3DGraphicsConfig$D3DImageCaps_MethodInfo_,
	nullptr,
	nullptr,
	_D3DGraphicsConfig$D3DImageCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsConfig"
};

$Object* allocate$D3DGraphicsConfig$D3DImageCaps($Class* clazz) {
	return $of($alloc(D3DGraphicsConfig$D3DImageCaps));
}

void D3DGraphicsConfig$D3DImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool D3DGraphicsConfig$D3DImageCaps::isTrueVolatile() {
	return true;
}

D3DGraphicsConfig$D3DImageCaps::D3DGraphicsConfig$D3DImageCaps() {
}

$Class* D3DGraphicsConfig$D3DImageCaps::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsConfig$D3DImageCaps, name, initialize, &_D3DGraphicsConfig$D3DImageCaps_ClassInfo_, allocate$D3DGraphicsConfig$D3DImageCaps);
	return class$;
}

$Class* D3DGraphicsConfig$D3DImageCaps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun