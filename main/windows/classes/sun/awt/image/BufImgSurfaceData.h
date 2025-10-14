#ifndef _sun_awt_image_BufImgSurfaceData_h_
#define _sun_awt_image_BufImgSurfaceData_h_
//$ class sun.awt.image.BufImgSurfaceData
//$ extends sun.java2d.SurfaceData

#include <java/lang/Array.h>
#include <sun/java2d/SurfaceData.h>

#pragma push_macro("CACHE_SIZE")
#undef CACHE_SIZE
#pragma push_macro("DCM_555X_BLUE_MASK")
#undef DCM_555X_BLUE_MASK
#pragma push_macro("DCM_555X_GREEN_MASK")
#undef DCM_555X_GREEN_MASK
#pragma push_macro("DCM_555X_RED_MASK")
#undef DCM_555X_RED_MASK
#pragma push_macro("DCM_ARGBBM_ALPHA_MASK")
#undef DCM_ARGBBM_ALPHA_MASK
#pragma push_macro("DCM_ARGBBM_BLUE_MASK")
#undef DCM_ARGBBM_BLUE_MASK
#pragma push_macro("DCM_ARGBBM_GREEN_MASK")
#undef DCM_ARGBBM_GREEN_MASK
#pragma push_macro("DCM_ARGBBM_RED_MASK")
#undef DCM_ARGBBM_RED_MASK
#pragma push_macro("DCM_RGBX_BLUE_MASK")
#undef DCM_RGBX_BLUE_MASK
#pragma push_macro("DCM_RGBX_GREEN_MASK")
#undef DCM_RGBX_GREEN_MASK
#pragma push_macro("DCM_RGBX_RED_MASK")
#undef DCM_RGBX_RED_MASK
#pragma push_macro("ICM")
#undef ICM

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class DataBuffer;
			class IndexColorModel;
			class Raster;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class BufferedImageGraphicsConfig;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class RenderLoops;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class BufImgSurfaceData : public ::sun::java2d::SurfaceData {
	$class(BufImgSurfaceData, 0, ::sun::java2d::SurfaceData)
public:
	BufImgSurfaceData();
	void init$(::java::awt::image::DataBuffer* db, ::java::awt::image::BufferedImage* bufImg, ::sun::java2d::loops::SurfaceType* sType, double scaleX, double scaleY);
	void init$(::sun::java2d::loops::SurfaceType* surfaceType, ::java::awt::image::ColorModel* cm);
	virtual void checkCustomComposite() override;
	static ::sun::java2d::SurfaceData* createData(::java::awt::image::BufferedImage* bufImg);
	static ::sun::java2d::SurfaceData* createData(::java::awt::image::BufferedImage* bufImg, double scaleX, double scaleY);
	static ::sun::java2d::SurfaceData* createData(::java::awt::image::Raster* ras, ::java::awt::image::ColorModel* cm);
	static ::sun::java2d::SurfaceData* createDataBC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, int32_t primaryBank, double scaleX, double scaleY);
	static ::sun::java2d::SurfaceData* createDataBP(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, double scaleX, double scaleY);
	static ::sun::java2d::SurfaceData* createDataIC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, double scaleX, double scaleY);
	static ::sun::java2d::SurfaceData* createDataSC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::IndexColorModel* icm, double scaleX, double scaleY);
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual double getDefaultScaleX() override;
	virtual double getDefaultScaleY() override;
	virtual $Object* getDestination() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::loops::RenderLoops* getRenderLoops(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	static ::sun::java2d::loops::RenderLoops* getSolidLoops(::sun::java2d::loops::SurfaceType* type);
	static void initIDs($Class* ICM, $Class* ICMColorData);
	virtual void initRaster(Object$* theArray, int32_t offset, int32_t bitoffset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, ::java::awt::image::IndexColorModel* icm);
	virtual void initSolidLoops();
	::java::awt::image::BufferedImage* bufImg = nullptr;
	::sun::awt::image::BufferedImageGraphicsConfig* graphicsConfig = nullptr;
	::sun::java2d::loops::RenderLoops* solidloops = nullptr;
	double scaleX = 0.0;
	double scaleY = 0.0;
	static const int32_t DCM_RGBX_RED_MASK = 0xFF000000;
	static const int32_t DCM_RGBX_GREEN_MASK = 0x00FF0000;
	static const int32_t DCM_RGBX_BLUE_MASK = 0x0000FF00;
	static const int32_t DCM_555X_RED_MASK = 0x0000F800;
	static const int32_t DCM_555X_GREEN_MASK = 1984;
	static const int32_t DCM_555X_BLUE_MASK = 62;
	static const int32_t DCM_4444_RED_MASK = 3840;
	static const int32_t DCM_4444_GREEN_MASK = 240;
	static const int32_t DCM_4444_BLUE_MASK = 15;
	static const int32_t DCM_4444_ALPHA_MASK = 0x0000F000;
	static const int32_t DCM_ARGBBM_ALPHA_MASK = 0x01000000;
	static const int32_t DCM_ARGBBM_RED_MASK = 0x00FF0000;
	static const int32_t DCM_ARGBBM_GREEN_MASK = 0x0000FF00;
	static const int32_t DCM_ARGBBM_BLUE_MASK = 255;
	static const int32_t CACHE_SIZE = 5;
	static $Array<::sun::java2d::loops::RenderLoops>* loopcache;
	static $Array<::sun::java2d::loops::SurfaceType>* typecache;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("CACHE_SIZE")
#pragma pop_macro("DCM_555X_BLUE_MASK")
#pragma pop_macro("DCM_555X_GREEN_MASK")
#pragma pop_macro("DCM_555X_RED_MASK")
#pragma pop_macro("DCM_ARGBBM_ALPHA_MASK")
#pragma pop_macro("DCM_ARGBBM_BLUE_MASK")
#pragma pop_macro("DCM_ARGBBM_GREEN_MASK")
#pragma pop_macro("DCM_ARGBBM_RED_MASK")
#pragma pop_macro("DCM_RGBX_BLUE_MASK")
#pragma pop_macro("DCM_RGBX_GREEN_MASK")
#pragma pop_macro("DCM_RGBX_RED_MASK")
#pragma pop_macro("ICM")

#endif // _sun_awt_image_BufImgSurfaceData_h_