#ifndef _sun_java2d_loops_PixelWriterDrawHandler_h_
#define _sun_java2d_loops_PixelWriterDrawHandler_h_
//$ class sun.java2d.loops.PixelWriterDrawHandler
//$ extends sun.java2d.loops.ProcessPath$DrawHandler

#include <sun/java2d/loops/ProcessPath$DrawHandler.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class PixelWriter;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class PixelWriterDrawHandler : public ::sun::java2d::loops::ProcessPath$DrawHandler {
	$class(PixelWriterDrawHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$DrawHandler)
public:
	PixelWriterDrawHandler();
	void init$(::sun::java2d::SurfaceData* sData, ::sun::java2d::loops::PixelWriter* pw, ::sun::java2d::pipe::Region* clip, int32_t strokeHint);
	virtual void drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1) override;
	virtual void drawPixel(int32_t x0, int32_t y0) override;
	virtual void drawScanline(int32_t x0, int32_t x1, int32_t y0) override;
	::sun::java2d::loops::PixelWriter* pw = nullptr;
	::sun::java2d::SurfaceData* sData = nullptr;
	::sun::java2d::pipe::Region* clip = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_PixelWriterDrawHandler_h_