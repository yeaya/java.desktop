#ifndef _java_awt_GraphicsEnvironment_h_
#define _java_awt_GraphicsEnvironment_h_
//$ class java.awt.GraphicsEnvironment
//$ extends java.lang.Object

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
	namespace lang {
		class Boolean;
		class Void;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace awt {

class $import GraphicsEnvironment : public ::java::lang::Object {
	$class(GraphicsEnvironment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GraphicsEnvironment();
	void init$();
	static void checkHeadless();
	virtual ::java::awt::Graphics2D* createGraphics(::java::awt::image::BufferedImage* img) {return nullptr;}
	virtual $Array<::java::awt::Font>* getAllFonts() {return nullptr;}
	virtual $StringArray* getAvailableFontFamilyNames() {return nullptr;}
	virtual $StringArray* getAvailableFontFamilyNames(::java::util::Locale* l) {return nullptr;}
	virtual ::java::awt::Point* getCenterPoint();
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() {return nullptr;}
	static $String* getHeadlessMessage();
	static bool getHeadlessProperty();
	static ::java::awt::GraphicsEnvironment* getLocalGraphicsEnvironment();
	virtual ::java::awt::Rectangle* getMaximumWindowBounds();
	virtual $Array<::java::awt::GraphicsDevice>* getScreenDevices() {return nullptr;}
	static bool isHeadless();
	virtual bool isHeadlessInstance();
	static ::java::lang::Void* lambda$getHeadlessProperty$0();
	virtual void preferLocaleFonts();
	virtual void preferProportionalFonts();
	virtual bool registerFont(::java::awt::Font* font);
	static ::java::lang::Boolean* headless;
	static ::java::lang::Boolean* defaultHeadless;
};

	} // awt
} // java

#endif // _java_awt_GraphicsEnvironment_h_