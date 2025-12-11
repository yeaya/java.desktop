#include <sun/lwawt/LWGraphicsConfig.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _LWGraphicsConfig_MethodInfo_[] = {
	{"assertOperationSupported", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createBackBuffer", "(Lsun/lwawt/LWComponentPeer;)Ljava/awt/Image;", "(Lsun/lwawt/LWComponentPeer<**>;)Ljava/awt/Image;", $PUBLIC | $ABSTRACT},
	{"destroyBackBuffer", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"flip", "(Lsun/lwawt/LWComponentPeer;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", "(Lsun/lwawt/LWComponentPeer<**>;Ljava/awt/Image;IIIILjava/awt/BufferCapabilities$FlipContents;)V", $PUBLIC | $ABSTRACT},
	{"getMaxTextureHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxTextureWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LWGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.LWGraphicsConfig",
	nullptr,
	nullptr,
	nullptr,
	_LWGraphicsConfig_MethodInfo_
};

$Object* allocate$LWGraphicsConfig($Class* clazz) {
	return $of($alloc(LWGraphicsConfig));
}

$Class* LWGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(LWGraphicsConfig, name, initialize, &_LWGraphicsConfig_ClassInfo_, allocate$LWGraphicsConfig);
	return class$;
}

$Class* LWGraphicsConfig::class$ = nullptr;

	} // lwawt
} // sun