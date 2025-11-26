#ifndef _java_awt_font_ImageGraphicAttribute_h_
#define _java_awt_font_ImageGraphicAttribute_h_
//$ class java.awt.font.ImageGraphicAttribute
//$ extends java.awt.font.GraphicAttribute

#include <java/awt/font/GraphicAttribute.h>

namespace java {
	namespace awt {
		class Graphics2D;
		class Image;
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
		namespace font {

class $import ImageGraphicAttribute : public ::java::awt::font::GraphicAttribute {
	$class(ImageGraphicAttribute, $NO_CLASS_INIT, ::java::awt::font::GraphicAttribute)
public:
	ImageGraphicAttribute();
	void init$(::java::awt::Image* image, int32_t alignment);
	void init$(::java::awt::Image* image, int32_t alignment, float originX, float originY);
	virtual void draw(::java::awt::Graphics2D* graphics, float x, float y) override;
	virtual bool equals(Object$* rhs) override;
	bool equals(::java::awt::font::ImageGraphicAttribute* rhs);
	virtual float getAdvance() override;
	virtual float getAscent() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds() override;
	virtual float getDescent() override;
	virtual int32_t hashCode() override;
	::java::awt::Image* fImage = nullptr;
	float fImageWidth = 0.0;
	float fImageHeight = 0.0;
	float fOriginX = 0.0;
	float fOriginY = 0.0;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_ImageGraphicAttribute_h_