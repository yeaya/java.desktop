#ifndef _java_awt_SplashScreen_h_
#define _java_awt_SplashScreen_h_
//$ class java.awt.SplashScreen
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics2D;
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
	namespace net {
		class URL;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $export SplashScreen : public ::java::lang::Object {
	$class(SplashScreen, 0, ::java::lang::Object)
public:
	SplashScreen();
	void init$(int64_t ptr);
	static void _close(int64_t splashPtr);
	static ::java::awt::Rectangle* _getBounds(int64_t splashPtr);
	static $String* _getImageFileName(int64_t splashPtr);
	static $String* _getImageJarName(int64_t SplashPtr);
	static int64_t _getInstance();
	static float _getScaleFactor(int64_t SplashPtr);
	static bool _isVisible(int64_t splashPtr);
	static bool _setImageData(int64_t SplashPtr, $bytes* data);
	static void _update(int64_t splashPtr, $ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t scanlineStride);
	void checkVisible();
	void close();
	::java::awt::Graphics2D* createGraphics();
	::java::awt::Rectangle* getBounds();
	::java::net::URL* getImageURL();
	::java::awt::Dimension* getSize();
	static ::java::awt::SplashScreen* getSplashScreen();
	bool isVisible();
	static void markClosed();
	void setImageURL(::java::net::URL* imageURL);
	void update();
	static bool $assertionsDisabled;
	::java::awt::image::BufferedImage* image = nullptr;
	int64_t splashPtr = 0;
	static bool wasClosed;
	::java::net::URL* imageURL = nullptr;
	static ::java::awt::SplashScreen* theInstance;
	static ::sun::util::logging::PlatformLogger* log;
};

	} // awt
} // java

#endif // _java_awt_SplashScreen_h_