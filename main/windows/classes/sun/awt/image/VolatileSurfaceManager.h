#ifndef _sun_awt_image_VolatileSurfaceManager_h_
#define _sun_awt_image_VolatileSurfaceManager_h_
//$ class sun.awt.image.VolatileSurfaceManager
//$ extends sun.awt.image.SurfaceManager
//$ implements sun.awt.DisplayChangedListener

#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/image/SurfaceManager.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class ImageCapabilities;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SunVolatileImage;
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

class VolatileSurfaceManager : public ::sun::awt::image::SurfaceManager, public ::sun::awt::DisplayChangedListener {
	$class(VolatileSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::SurfaceManager, ::sun::awt::DisplayChangedListener)
public:
	VolatileSurfaceManager();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::image::SurfaceManager::flush;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::image::SunVolatileImage* vImg, Object$* context);
	virtual void acceleratedSurfaceLost() override;
	virtual bool contentsLost();
	virtual void displayChanged() override;
	virtual void flush() override;
	virtual ::sun::java2d::SurfaceData* getBackupSurface();
	virtual ::java::awt::ImageCapabilities* getCapabilities(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::sun::java2d::SurfaceData* getPrimarySurfaceData() override;
	virtual ::sun::java2d::SurfaceData* initAcceleratedSurface() {return nullptr;}
	virtual void initContents();
	virtual void initialize();
	virtual bool isAccelerationEnabled() {return false;}
	virtual bool isConfigValid(::java::awt::GraphicsConfiguration* gc);
	virtual void paletteChanged() override;
	virtual void restoreAcceleratedSurface();
	virtual ::sun::java2d::SurfaceData* restoreContents() override;
	virtual $String* toString() override;
	virtual int32_t validate(::java::awt::GraphicsConfiguration* gc);
	::sun::awt::image::SunVolatileImage* vImg = nullptr;
	::java::awt::geom::AffineTransform* atCurrent = nullptr;
	::sun::java2d::SurfaceData* sdAccel = nullptr;
	::sun::java2d::SurfaceData* sdBackup = nullptr;
	::sun::java2d::SurfaceData* sdCurrent = nullptr;
	::sun::java2d::SurfaceData* sdPrevious = nullptr;
	bool lostSurface = false;
	$Object* context = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_VolatileSurfaceManager_h_