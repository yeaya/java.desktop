#include <sun/java2d/d3d/D3DGraphicsConfig$D3DBufferCaps.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DGraphicsConfig$D3DBufferCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D3DGraphicsConfig$D3DBufferCaps::*)()>(&D3DGraphicsConfig$D3DBufferCaps::init$))},
	{"isMultiBufferAvailable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DGraphicsConfig$D3DBufferCaps_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DGraphicsConfig$D3DBufferCaps", "sun.java2d.d3d.D3DGraphicsConfig", "D3DBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _D3DGraphicsConfig$D3DBufferCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DGraphicsConfig$D3DBufferCaps",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_D3DGraphicsConfig$D3DBufferCaps_MethodInfo_,
	nullptr,
	nullptr,
	_D3DGraphicsConfig$D3DBufferCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DGraphicsConfig"
};

$Object* allocate$D3DGraphicsConfig$D3DBufferCaps($Class* clazz) {
	return $of($alloc(D3DGraphicsConfig$D3DBufferCaps));
}

void D3DGraphicsConfig$D3DBufferCaps::init$() {
	$init($D3DGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($D3DGraphicsConfig::imageCaps, $D3DGraphicsConfig::imageCaps, $BufferCapabilities$FlipContents::UNDEFINED);
}

bool D3DGraphicsConfig$D3DBufferCaps::isMultiBufferAvailable() {
	return true;
}

D3DGraphicsConfig$D3DBufferCaps::D3DGraphicsConfig$D3DBufferCaps() {
}

$Class* D3DGraphicsConfig$D3DBufferCaps::load$($String* name, bool initialize) {
	$loadClass(D3DGraphicsConfig$D3DBufferCaps, name, initialize, &_D3DGraphicsConfig$D3DBufferCaps_ClassInfo_, allocate$D3DGraphicsConfig$D3DBufferCaps);
	return class$;
}

$Class* D3DGraphicsConfig$D3DBufferCaps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun