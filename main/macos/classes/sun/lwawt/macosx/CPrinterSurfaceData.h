#ifndef _sun_lwawt_macosx_CPrinterSurfaceData_h_
#define _sun_lwawt_macosx_CPrinterSurfaceData_h_
//$ class sun.lwawt.macosx.CPrinterSurfaceData
//$ extends sun.java2d.OSXSurfaceData

#include <java/lang/Array.h>
#include <sun/java2d/OSXSurfaceData.h>

#pragma push_macro("DESC_INT_RGB_PQ")
#undef DESC_INT_RGB_PQ

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
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
	namespace lwawt {
		namespace macosx {

class CPrinterSurfaceData : public ::sun::java2d::OSXSurfaceData {
	$class(CPrinterSurfaceData, 0, ::sun::java2d::OSXSurfaceData)
public:
	CPrinterSurfaceData();
	using ::sun::java2d::OSXSurfaceData::copyArea;
	void init$(::java::awt::GraphicsConfiguration* gc, int64_t context);
	virtual void _flush();
	virtual ::java::awt::image::BufferedImage* copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::BufferedImage* dstImage) override;
	static ::sun::java2d::SurfaceData* createData(::java::awt::print::PageFormat* pf, int64_t context);
	virtual void enableFlushing();
	virtual $Object* getDestination() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	void initOps(int64_t context, ::java::nio::ByteBuffer* byteParameters, $ObjectArray* objectParameters, int32_t width, int32_t height);
	using ::sun::java2d::OSXSurfaceData::markDirty;
	virtual bool xorSurfacePixels(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::image::BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) override;
	static $String* DESC_INT_RGB_PQ;
	static ::sun::java2d::loops::SurfaceType* IntRgbPQ;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("DESC_INT_RGB_PQ")

#endif // _sun_lwawt_macosx_CPrinterSurfaceData_h_