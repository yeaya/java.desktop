#include <sun/java2d/metal/MTLGraphicsConfig$MTLBufferCaps.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLGraphicsConfig$MTLBufferCaps_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(MTLGraphicsConfig$MTLBufferCaps::*)(bool)>(&MTLGraphicsConfig$MTLBufferCaps::init$))},
	{}
};

$InnerClassInfo _MTLGraphicsConfig$MTLBufferCaps_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLGraphicsConfig$MTLBufferCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_MTLGraphicsConfig$MTLBufferCaps_MethodInfo_,
	nullptr,
	nullptr,
	_MTLGraphicsConfig$MTLBufferCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLGraphicsConfig"
};

$Object* allocate$MTLGraphicsConfig$MTLBufferCaps($Class* clazz) {
	return $of($alloc(MTLGraphicsConfig$MTLBufferCaps));
}

void MTLGraphicsConfig$MTLBufferCaps::init$(bool dblBuf) {
	$init($MTLGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($MTLGraphicsConfig::imageCaps, $MTLGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

MTLGraphicsConfig$MTLBufferCaps::MTLGraphicsConfig$MTLBufferCaps() {
}

$Class* MTLGraphicsConfig$MTLBufferCaps::load$($String* name, bool initialize) {
	$loadClass(MTLGraphicsConfig$MTLBufferCaps, name, initialize, &_MTLGraphicsConfig$MTLBufferCaps_ClassInfo_, allocate$MTLGraphicsConfig$MTLBufferCaps);
	return class$;
}

$Class* MTLGraphicsConfig$MTLBufferCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun