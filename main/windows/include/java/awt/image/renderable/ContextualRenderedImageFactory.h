#ifndef _java_awt_image_renderable_ContextualRenderedImageFactory_h_
#define _java_awt_image_renderable_ContextualRenderedImageFactory_h_
//$ interface java.awt.image.renderable.ContextualRenderedImageFactory
//$ extends java.awt.image.renderable.RenderedImageFactory

#include <java/awt/image/renderable/RenderedImageFactory.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class RenderedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			namespace renderable {
				class ParameterBlock;
				class RenderContext;
				class RenderableImage;
			}
		}
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $import ContextualRenderedImageFactory : public ::java::awt::image::renderable::RenderedImageFactory {
	$interface(ContextualRenderedImageFactory, $NO_CLASS_INIT, ::java::awt::image::renderable::RenderedImageFactory)
public:
	using ::java::awt::image::renderable::RenderedImageFactory::create;
	virtual ::java::awt::image::RenderedImage* create(::java::awt::image::renderable::RenderContext* renderContext, ::java::awt::image::renderable::ParameterBlock* paramBlock) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::renderable::ParameterBlock* paramBlock) {return nullptr;}
	virtual $Object* getProperty(::java::awt::image::renderable::ParameterBlock* paramBlock, $String* name) {return nullptr;}
	virtual $StringArray* getPropertyNames() {return nullptr;}
	virtual bool isDynamic() {return false;}
	virtual ::java::awt::image::renderable::RenderContext* mapRenderContext(int32_t i, ::java::awt::image::renderable::RenderContext* renderContext, ::java::awt::image::renderable::ParameterBlock* paramBlock, ::java::awt::image::renderable::RenderableImage* image) {return nullptr;}
};

			} // renderable
		} // image
	} // awt
} // java

#endif // _java_awt_image_renderable_ContextualRenderedImageFactory_h_