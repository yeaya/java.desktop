#ifndef _sun_java2d_OSXOffScreenSurfaceData_h_
#define _sun_java2d_OSXOffScreenSurfaceData_h_
//$ class sun.java2d.OSXOffScreenSurfaceData
//$ extends sun.java2d.OSXSurfaceData

#include <java/awt/image/BufferedImage.h>
#include <sun/java2d/OSXSurfaceData.h>

#pragma push_macro("TYPE_3BYTE_RGB")
#undef TYPE_3BYTE_RGB
#pragma push_macro("TYPE_BYTE_INDEXED")
#undef TYPE_BYTE_INDEXED

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class DirectColorModel;
			class IndexColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class IntBuffer;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SunWritableRaster;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {

class OSXOffScreenSurfaceData : public ::sun::java2d::OSXSurfaceData {
	$class(OSXOffScreenSurfaceData, 0, ::sun::java2d::OSXSurfaceData)
public:
	OSXOffScreenSurfaceData();
	using ::sun::java2d::OSXSurfaceData::initRaster;
	void init$(::java::awt::image::BufferedImage* bufImg, ::sun::java2d::loops::SurfaceType* sType);
	virtual void cacheRasters(::java::awt::image::BufferedImage* bim);
	virtual void clearRect(::java::awt::image::BufferedImage* bim, int32_t w, int32_t h) override;
	virtual bool clearSurfacePixels(int32_t w, int32_t h);
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	virtual ::java::awt::image::BufferedImage* copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::BufferedImage* dstImage) override;
	static ::sun::java2d::SurfaceData* createData(::java::awt::image::BufferedImage* bufImg);
	static ::sun::java2d::SurfaceData* createData(::java::awt::image::Raster* ras, ::java::awt::image::ColorModel* cm);
	static ::sun::java2d::SurfaceData* createDataBC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, int32_t primaryBank, int32_t iType);
	static ::sun::java2d::SurfaceData* createDataBC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, int32_t primaryBank);
	static ::sun::java2d::SurfaceData* createDataBP(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, int32_t iType);
	static ::sun::java2d::SurfaceData* createDataIC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, int32_t iType);
	static ::sun::java2d::SurfaceData* createDataIC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType);
	static ::sun::java2d::SurfaceData* createDataSC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::IndexColorModel* icm, int32_t iType);
	static ::sun::java2d::SurfaceData* createDataSC(::java::awt::image::BufferedImage* bImg, ::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::IndexColorModel* icm);
	static ::sun::java2d::OSXOffScreenSurfaceData* createNewSurface(::java::awt::image::BufferedImage* bufImg);
	virtual ::sun::java2d::SurfaceData* getCopyWithBgColor(::java::awt::Color* bgColor);
	virtual $Object* getLockObject();
	static ::sun::java2d::SurfaceData* getSurfaceData(::java::awt::image::BufferedImage* bufImg);
	virtual void initCustomRaster(::java::nio::IntBuffer* buffer, int32_t width, int32_t height, ::java::nio::ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, ::java::nio::ByteBuffer* imageInfo);
	static void initIDs();
	virtual void initRaster(Object$* theArray, int32_t offset, int32_t width, int32_t height, int32_t pixStr, int32_t scanStr, ::java::awt::image::IndexColorModel* icm, int32_t type, ::java::nio::ByteBuffer* graphicsStates, Object$* graphicsStatesObjects, ::java::nio::ByteBuffer* imageInfo);
	using ::sun::java2d::OSXSurfaceData::markDirty;
	virtual void rasterRead();
	virtual void rasterWrite();
	static void setSurfaceData(::java::awt::image::BufferedImage* bufImg, ::sun::java2d::SurfaceData* sData);
	void syncFromCustom();
	void syncToCustom();
	void syncToJavaPixels();
	virtual bool xorSurfacePixels(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::image::BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) override;
	virtual bool xorSurfacePixels(::sun::java2d::SurfaceData* src, int32_t colorXOR, int32_t x, int32_t y, int32_t w, int32_t h);
	::java::awt::image::BufferedImage* bim = nullptr;
	::java::awt::image::BufferedImage* bimBackup = nullptr;
	static ::java::awt::image::DirectColorModel* dcmBackup;
	$Object* lock = nullptr;
	::java::awt::image::WritableRaster* bufImgRaster = nullptr;
	::sun::awt::image::SunWritableRaster* bufImgSunRaster = nullptr;
	static const int32_t TYPE_3BYTE_RGB = 14; // ::java::awt::image::BufferedImage::TYPE_BYTE_INDEXED + 1
	::java::nio::ByteBuffer* fImageInfo = nullptr;
	::java::nio::IntBuffer* fImageInfoInt = nullptr;
	static const int32_t kNeedToSyncFromJavaPixelsIndex = 0;
	static const int32_t kNativePixelsChangedIndex = 1;
	static const int32_t kImageStolenIndex = 2;
	static const int32_t kSizeOfParameters = 3; // kImageStolenIndex + 1
	::java::awt::image::BufferedImage* copyWithBgColor_cache = nullptr;
};

	} // java2d
} // sun

#pragma pop_macro("TYPE_3BYTE_RGB")
#pragma pop_macro("TYPE_BYTE_INDEXED")

#endif // _sun_java2d_OSXOffScreenSurfaceData_h_