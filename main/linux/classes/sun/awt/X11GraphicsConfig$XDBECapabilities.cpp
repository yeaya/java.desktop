#include <sun/awt/X11GraphicsConfig$XDBECapabilities.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;

namespace sun {
	namespace awt {

$MethodInfo _X11GraphicsConfig$XDBECapabilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X11GraphicsConfig$XDBECapabilities::*)()>(&X11GraphicsConfig$XDBECapabilities::init$))},
	{}
};

$InnerClassInfo _X11GraphicsConfig$XDBECapabilities_InnerClassesInfo_[] = {
	{"sun.awt.X11GraphicsConfig$XDBECapabilities", "sun.awt.X11GraphicsConfig", "XDBECapabilities", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11GraphicsConfig$XDBECapabilities_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11GraphicsConfig$XDBECapabilities",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_X11GraphicsConfig$XDBECapabilities_MethodInfo_,
	nullptr,
	nullptr,
	_X11GraphicsConfig$XDBECapabilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsConfig"
};

$Object* allocate$X11GraphicsConfig$XDBECapabilities($Class* clazz) {
	return $of($alloc(X11GraphicsConfig$XDBECapabilities));
}

void X11GraphicsConfig$XDBECapabilities::init$() {
	$init($X11GraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($X11GraphicsConfig::imageCaps, $X11GraphicsConfig::imageCaps, $BufferCapabilities$FlipContents::UNDEFINED);
}

X11GraphicsConfig$XDBECapabilities::X11GraphicsConfig$XDBECapabilities() {
}

$Class* X11GraphicsConfig$XDBECapabilities::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsConfig$XDBECapabilities, name, initialize, &_X11GraphicsConfig$XDBECapabilities_ClassInfo_, allocate$X11GraphicsConfig$XDBECapabilities);
	return class$;
}

$Class* X11GraphicsConfig$XDBECapabilities::class$ = nullptr;

	} // awt
} // sun