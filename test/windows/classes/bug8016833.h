#ifndef _bug8016833_h_
#define _bug8016833_h_
//$ class bug8016833
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Style;
		}
	}
}

class $export bug8016833 : public ::java::lang::Object {
	$class(bug8016833, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8016833();
	void init$();
	virtual void assertTrue(bool b);
	virtual ::java::awt::image::BufferedImage* createImage();
	virtual void drawText(::java::awt::Graphics* g, bool underline, bool strikethrough, bool background);
	virtual void drawText(::java::awt::Graphics* g, $String* text, bool underline, bool strikethrough, bool background);
	virtual int32_t getEmptyPixel();
	virtual ::java::awt::Rectangle* getPixelsOutline(::java::awt::image::BufferedImage* img);
	virtual bool isLineEmpty(::java::awt::image::BufferedImage* img, int32_t coord, bool isHorizontal);
	virtual bool isPixelEmpty(int32_t argb);
	static void main($StringArray* args);
	virtual void setNormalStyle(::javax::swing::text::Style* style);
	virtual ::java::awt::image::BufferedImage* subImages(::java::awt::image::BufferedImage* img1, ::java::awt::image::BufferedImage* img2);
	virtual int32_t subPixels(int32_t pix1, int32_t pix2);
	static void testNormalScript();
	virtual void testStrikthrough();
	static void testSubScript();
	static void testSuperScript();
	virtual void testUnderline();
};

#endif // _bug8016833_h_