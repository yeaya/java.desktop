#include <java/awt/image/renderable/ContextualRenderedImageFactory.h>

#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/ParameterBlock.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$MethodInfo _ContextualRenderedImageFactory_MethodInfo_[] = {
	{"create", "(Ljava/awt/image/renderable/RenderContext;Ljava/awt/image/renderable/ParameterBlock;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds2D", "(Ljava/awt/image/renderable/ParameterBlock;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/awt/image/renderable/ParameterBlock;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDynamic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"mapRenderContext", "(ILjava/awt/image/renderable/RenderContext;Ljava/awt/image/renderable/ParameterBlock;Ljava/awt/image/renderable/RenderableImage;)Ljava/awt/image/renderable/RenderContext;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContextualRenderedImageFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.renderable.ContextualRenderedImageFactory",
	nullptr,
	"java.awt.image.renderable.RenderedImageFactory",
	nullptr,
	_ContextualRenderedImageFactory_MethodInfo_
};

$Object* allocate$ContextualRenderedImageFactory($Class* clazz) {
	return $of($alloc(ContextualRenderedImageFactory));
}

$Class* ContextualRenderedImageFactory::load$($String* name, bool initialize) {
	$loadClass(ContextualRenderedImageFactory, name, initialize, &_ContextualRenderedImageFactory_ClassInfo_, allocate$ContextualRenderedImageFactory);
	return class$;
}

$Class* ContextualRenderedImageFactory::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java