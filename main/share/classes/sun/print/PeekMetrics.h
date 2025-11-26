#ifndef _sun_print_PeekMetrics_h_
#define _sun_print_PeekMetrics_h_
//$ class sun.print.PeekMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Composite;
		class Graphics2D;
		class Image;
		class Paint;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextLayout;
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
				class RenderableImage;
			}
		}
	}
}

namespace sun {
	namespace print {

class PeekMetrics : public ::java::lang::Object {
	$class(PeekMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PeekMetrics();
	void init$();
	void checkAlpha(::java::awt::Composite* composite);
	void checkDrawingMode(::java::awt::Graphics2D* g);
	void checkPaint(::java::awt::Paint* paint);
	virtual void clear(::java::awt::Graphics2D* g);
	virtual void draw(::java::awt::Graphics2D* g);
	virtual void drawImage(::java::awt::Graphics2D* g, ::java::awt::Image* image);
	virtual void drawImage(::java::awt::Graphics2D* g, ::java::awt::image::RenderedImage* image);
	virtual void drawImage(::java::awt::Graphics2D* g, ::java::awt::image::renderable::RenderableImage* image);
	virtual void drawText(::java::awt::Graphics2D* g);
	virtual void drawText(::java::awt::Graphics2D* g, ::java::awt::font::TextLayout* textLayout);
	virtual void fill(::java::awt::Graphics2D* g);
	virtual bool hasCompositing();
	virtual bool hasImages();
	virtual bool hasNonSolidColors();
	virtual bool hasText();
	bool mHasNonSolidColors = false;
	bool mHasCompositing = false;
	bool mHasText = false;
	bool mHasImages = false;
};

	} // print
} // sun

#endif // _sun_print_PeekMetrics_h_