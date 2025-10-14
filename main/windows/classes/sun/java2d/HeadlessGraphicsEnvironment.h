#ifndef _sun_java2d_HeadlessGraphicsEnvironment_h_
#define _sun_java2d_HeadlessGraphicsEnvironment_h_
//$ class sun.java2d.HeadlessGraphicsEnvironment
//$ extends java.awt.GraphicsEnvironment

#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
		class Graphics2D;
		class GraphicsDevice;
		class Point;
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
namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace java2d {

class HeadlessGraphicsEnvironment : public ::java::awt::GraphicsEnvironment {
	$class(HeadlessGraphicsEnvironment, $NO_CLASS_INIT, ::java::awt::GraphicsEnvironment)
public:
	HeadlessGraphicsEnvironment();
	void init$(::java::awt::GraphicsEnvironment* ge);
	virtual ::java::awt::Graphics2D* createGraphics(::java::awt::image::BufferedImage* img) override;
	virtual $Array<::java::awt::Font>* getAllFonts() override;
	virtual $StringArray* getAvailableFontFamilyNames() override;
	virtual $StringArray* getAvailableFontFamilyNames(::java::util::Locale* l) override;
	virtual ::java::awt::Point* getCenterPoint() override;
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() override;
	virtual ::java::awt::Rectangle* getMaximumWindowBounds() override;
	virtual $Array<::java::awt::GraphicsDevice>* getScreenDevices() override;
	::java::awt::GraphicsEnvironment* ge = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_HeadlessGraphicsEnvironment_h_