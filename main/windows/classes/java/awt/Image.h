#ifndef _java_awt_Image_h_
#define _java_awt_Image_h_
//$ class java.awt.Image
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SCALE_AREA_AVERAGING")
#undef SCALE_AREA_AVERAGING
#pragma push_macro("SCALE_DEFAULT")
#undef SCALE_DEFAULT
#pragma push_macro("SCALE_FAST")
#undef SCALE_FAST
#pragma push_macro("SCALE_REPLICATE")
#undef SCALE_REPLICATE
#pragma push_macro("SCALE_SMOOTH")
#undef SCALE_SMOOTH

namespace java {
	namespace awt {
		class Graphics;
		class GraphicsConfiguration;
		class ImageCapabilities;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
			class ImageProducer;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SurfaceManager;
		}
	}
}

namespace java {
	namespace awt {

class $export Image : public ::java::lang::Object {
	$class(Image, 0, ::java::lang::Object)
public:
	Image();
	void init$();
	virtual void flush();
	virtual float getAccelerationPriority();
	virtual ::java::awt::ImageCapabilities* getCapabilities(::java::awt::GraphicsConfiguration* gc);
	virtual ::java::awt::Graphics* getGraphics() {return nullptr;}
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) {return 0;}
	virtual $Object* getProperty($String* name, ::java::awt::image::ImageObserver* observer) {return nullptr;}
	virtual ::java::awt::Image* getScaledInstance(int32_t width, int32_t height, int32_t hints);
	virtual ::java::awt::image::ImageProducer* getSource() {return nullptr;}
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) {return 0;}
	virtual void setAccelerationPriority(float priority);
	static ::java::awt::ImageCapabilities* defaultImageCaps;
	float accelerationPriority = 0.0;
	static $Object* UndefinedProperty;
	static const int32_t SCALE_DEFAULT = 1;
	static const int32_t SCALE_FAST = 2;
	static const int32_t SCALE_SMOOTH = 4;
	static const int32_t SCALE_REPLICATE = 8;
	static const int32_t SCALE_AREA_AVERAGING = 16;
	::sun::awt::image::SurfaceManager* surfaceManager = nullptr;
};

	} // awt
} // java

#pragma pop_macro("SCALE_AREA_AVERAGING")
#pragma pop_macro("SCALE_DEFAULT")
#pragma pop_macro("SCALE_FAST")
#pragma pop_macro("SCALE_REPLICATE")
#pragma pop_macro("SCALE_SMOOTH")

#endif // _java_awt_Image_h_