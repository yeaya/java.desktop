#ifndef _sun_awt_image_PNGImageDecoder$Chromaticities_h_
#define _sun_awt_image_PNGImageDecoder$Chromaticities_h_
//$ class sun.awt.image.PNGImageDecoder$Chromaticities
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace image {

class PNGImageDecoder$Chromaticities : public ::java::lang::Object {
	$class(PNGImageDecoder$Chromaticities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PNGImageDecoder$Chromaticities();
	void init$(int32_t wx, int32_t wy, int32_t rx, int32_t ry, int32_t gx, int32_t gy, int32_t bx, int32_t by);
	virtual $String* toString() override;
	float whiteX = 0.0;
	float whiteY = 0.0;
	float redX = 0.0;
	float redY = 0.0;
	float greenX = 0.0;
	float greenY = 0.0;
	float blueX = 0.0;
	float blueY = 0.0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PNGImageDecoder$Chromaticities_h_