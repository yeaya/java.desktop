#ifndef _java_awt_image_renderable_RenderableImage_h_
#define _java_awt_image_renderable_RenderableImage_h_
//$ interface java.awt.image.renderable.RenderableImage
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HINTS_OBSERVED")
#undef HINTS_OBSERVED

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

class $import RenderableImage : public ::java::lang::Object {
	$interface(RenderableImage, 0, ::java::lang::Object)
public:
	virtual ::java::awt::image::RenderedImage* createDefaultRendering() {return nullptr;}
	virtual ::java::awt::image::RenderedImage* createRendering(::java::awt::image::renderable::RenderContext* renderContext) {return nullptr;}
	virtual ::java::awt::image::RenderedImage* createScaledRendering(int32_t w, int32_t h, ::java::awt::RenderingHints* hints) {return nullptr;}
	virtual float getHeight() {return 0.0;}
	virtual float getMinX() {return 0.0;}
	virtual float getMinY() {return 0.0;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual $StringArray* getPropertyNames() {return nullptr;}
	virtual ::java::util::Vector* getSources() {return nullptr;}
	virtual float getWidth() {return 0.0;}
	virtual bool isDynamic() {return false;}
	static $String* HINTS_OBSERVED;
};

			} // renderable
		} // image
	} // awt
} // java

#pragma pop_macro("HINTS_OBSERVED")

#endif // _java_awt_image_renderable_RenderableImage_h_