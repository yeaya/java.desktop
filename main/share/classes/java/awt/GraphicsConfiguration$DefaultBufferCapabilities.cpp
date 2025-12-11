#include <java/awt/GraphicsConfiguration$DefaultBufferCapabilities.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/ImageCapabilities.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _GraphicsConfiguration$DefaultBufferCapabilities_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/ImageCapabilities;)V", nullptr, $PUBLIC, $method(static_cast<void(GraphicsConfiguration$DefaultBufferCapabilities::*)($ImageCapabilities*)>(&GraphicsConfiguration$DefaultBufferCapabilities::init$))},
	{}
};

$InnerClassInfo _GraphicsConfiguration$DefaultBufferCapabilities_InnerClassesInfo_[] = {
	{"java.awt.GraphicsConfiguration$DefaultBufferCapabilities", "java.awt.GraphicsConfiguration", "DefaultBufferCapabilities", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GraphicsConfiguration$DefaultBufferCapabilities_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.GraphicsConfiguration$DefaultBufferCapabilities",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_GraphicsConfiguration$DefaultBufferCapabilities_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsConfiguration$DefaultBufferCapabilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.GraphicsConfiguration"
};

$Object* allocate$GraphicsConfiguration$DefaultBufferCapabilities($Class* clazz) {
	return $of($alloc(GraphicsConfiguration$DefaultBufferCapabilities));
}

void GraphicsConfiguration$DefaultBufferCapabilities::init$($ImageCapabilities* imageCaps) {
	$BufferCapabilities::init$(imageCaps, imageCaps, nullptr);
}

GraphicsConfiguration$DefaultBufferCapabilities::GraphicsConfiguration$DefaultBufferCapabilities() {
}

$Class* GraphicsConfiguration$DefaultBufferCapabilities::load$($String* name, bool initialize) {
	$loadClass(GraphicsConfiguration$DefaultBufferCapabilities, name, initialize, &_GraphicsConfiguration$DefaultBufferCapabilities_ClassInfo_, allocate$GraphicsConfiguration$DefaultBufferCapabilities);
	return class$;
}

$Class* GraphicsConfiguration$DefaultBufferCapabilities::class$ = nullptr;

	} // awt
} // java