#ifndef _sun_font_ColorGlyphSurfaceData_h_
#define _sun_font_ColorGlyphSurfaceData_h_
//$ class sun.font.ColorGlyphSurfaceData
//$ extends sun.java2d.SurfaceData

#include <sun/java2d/SurfaceData.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class Raster;
		}
	}
}

namespace sun {
	namespace font {

class ColorGlyphSurfaceData : public ::sun::java2d::SurfaceData {
	$class(ColorGlyphSurfaceData, $NO_CLASS_INIT, ::sun::java2d::SurfaceData)
public:
	ColorGlyphSurfaceData();
	void init$();
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $Object* getDestination() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	void initOps();
	virtual void setCurrentGlyph(int64_t imgPtr);
};

	} // font
} // sun

#endif // _sun_font_ColorGlyphSurfaceData_h_