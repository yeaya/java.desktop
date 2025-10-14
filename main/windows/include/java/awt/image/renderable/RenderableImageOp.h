#ifndef _java_awt_image_renderable_RenderableImageOp_h_
#define _java_awt_image_renderable_RenderableImageOp_h_
//$ class java.awt.image.renderable.RenderableImageOp
//$ extends java.awt.image.renderable.RenderableImage

#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Array.h>

#pragma push_macro("CRIF")
#undef CRIF

namespace java {
	namespace awt {
		class RenderingHints;
	}
}
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
				class ContextualRenderedImageFactory;
				class ParameterBlock;
				class RenderContext;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $import RenderableImageOp : public ::java::awt::image::renderable::RenderableImage {
	$class(RenderableImageOp, $NO_CLASS_INIT, ::java::awt::image::renderable::RenderableImage)
public:
	RenderableImageOp();
	void init$(::java::awt::image::renderable::ContextualRenderedImageFactory* CRIF, ::java::awt::image::renderable::ParameterBlock* paramBlock);
	virtual ::java::awt::image::RenderedImage* createDefaultRendering() override;
	virtual ::java::awt::image::RenderedImage* createRendering(::java::awt::image::renderable::RenderContext* renderContext) override;
	virtual ::java::awt::image::RenderedImage* createScaledRendering(int32_t w, int32_t h, ::java::awt::RenderingHints* hints) override;
	virtual float getHeight() override;
	virtual float getMinX() override;
	virtual float getMinY() override;
	virtual ::java::awt::image::renderable::ParameterBlock* getParameterBlock();
	virtual $Object* getProperty($String* name) override;
	virtual $StringArray* getPropertyNames() override;
	::java::util::Vector* getRenderableSources();
	virtual ::java::util::Vector* getSources() override;
	virtual float getWidth() override;
	virtual bool isDynamic() override;
	virtual ::java::awt::image::renderable::ParameterBlock* setParameterBlock(::java::awt::image::renderable::ParameterBlock* paramBlock);
	::java::awt::image::renderable::ParameterBlock* paramBlock = nullptr;
	::java::awt::image::renderable::ContextualRenderedImageFactory* myCRIF = nullptr;
	::java::awt::geom::Rectangle2D* boundingBox = nullptr;
};

			} // renderable
		} // image
	} // awt
} // java

#pragma pop_macro("CRIF")

#endif // _java_awt_image_renderable_RenderableImageOp_h_