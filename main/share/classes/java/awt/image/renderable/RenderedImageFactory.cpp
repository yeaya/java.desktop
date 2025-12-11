#include <java/awt/image/renderable/RenderedImageFactory.h>

#include <java/awt/RenderingHints.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/ParameterBlock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$MethodInfo _RenderedImageFactory_MethodInfo_[] = {
	{"create", "(Ljava/awt/image/renderable/ParameterBlock;Ljava/awt/RenderingHints;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RenderedImageFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.renderable.RenderedImageFactory",
	nullptr,
	nullptr,
	nullptr,
	_RenderedImageFactory_MethodInfo_
};

$Object* allocate$RenderedImageFactory($Class* clazz) {
	return $of($alloc(RenderedImageFactory));
}

$Class* RenderedImageFactory::load$($String* name, bool initialize) {
	$loadClass(RenderedImageFactory, name, initialize, &_RenderedImageFactory_ClassInfo_, allocate$RenderedImageFactory);
	return class$;
}

$Class* RenderedImageFactory::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java