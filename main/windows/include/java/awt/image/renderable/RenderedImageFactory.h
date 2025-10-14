#ifndef _java_awt_image_renderable_RenderedImageFactory_h_
#define _java_awt_image_renderable_RenderedImageFactory_h_
//$ interface java.awt.image.renderable.RenderedImageFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class RenderingHints;
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
			}
		}
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $import RenderedImageFactory : public ::java::lang::Object {
	$interface(RenderedImageFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::image::RenderedImage* create(::java::awt::image::renderable::ParameterBlock* paramBlock, ::java::awt::RenderingHints* hints) {return nullptr;}
};

			} // renderable
		} // image
	} // awt
} // java

#endif // _java_awt_image_renderable_RenderedImageFactory_h_