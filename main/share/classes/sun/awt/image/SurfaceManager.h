#ifndef _sun_awt_image_SurfaceManager_h_
#define _sun_awt_image_SurfaceManager_h_
//$ class sun.awt.image.SurfaceManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
		class ImageCapabilities;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SurfaceManager$ImageAccessor;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class SurfaceManager : public ::java::lang::Object {
	$class(SurfaceManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SurfaceManager();
	void init$();
	virtual void acceleratedSurfaceLost();
	virtual void flush();
	virtual void flush(bool deaccelerate);
	virtual $Object* getCacheData(Object$* key);
	virtual ::java::awt::ImageCapabilities* getCapabilities(::java::awt::GraphicsConfiguration* gc);
	static double getImageScaleX(::java::awt::Image* img);
	static double getImageScaleY(::java::awt::Image* img);
	static ::sun::awt::image::SurfaceManager* getManager(::java::awt::Image* img);
	virtual ::sun::java2d::SurfaceData* getPrimarySurfaceData() {return nullptr;}
	virtual ::sun::java2d::SurfaceData* restoreContents() {return nullptr;}
	virtual void setAccelerationPriority(float priority);
	virtual void setCacheData(Object$* key, Object$* value);
	static void setImageAccessor(::sun::awt::image::SurfaceManager$ImageAccessor* ia);
	static void setManager(::java::awt::Image* img, ::sun::awt::image::SurfaceManager* mgr);
	static ::sun::awt::image::SurfaceManager$ImageAccessor* imgaccessor;
	::java::util::concurrent::ConcurrentHashMap* cacheMap = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SurfaceManager_h_