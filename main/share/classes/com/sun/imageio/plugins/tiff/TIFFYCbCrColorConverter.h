#ifndef _com_sun_imageio_plugins_tiff_TIFFYCbCrColorConverter_h_
#define _com_sun_imageio_plugins_tiff_TIFFYCbCrColorConverter_h_
//$ class com.sun.imageio.plugins.tiff.TIFFYCbCrColorConverter
//$ extends com.sun.imageio.plugins.tiff.TIFFColorConverter

#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <java/lang/Array.h>

#pragma push_macro("CODING_RANGE_CB_CR")
#undef CODING_RANGE_CB_CR
#pragma push_macro("CODING_RANGE_Y")
#undef CODING_RANGE_Y

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFImageMetadata;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFYCbCrColorConverter : public ::com::sun::imageio::plugins::tiff::TIFFColorConverter {
	$class(TIFFYCbCrColorConverter, 0, ::com::sun::imageio::plugins::tiff::TIFFColorConverter)
public:
	TIFFYCbCrColorConverter();
	void init$(::com::sun::imageio::plugins::tiff::TIFFImageMetadata* metadata);
	virtual void fromRGB(float r, float g, float b, $floats* result) override;
	virtual void toRGB(float x0, float x1, float x2, $floats* rgb) override;
	static float CODING_RANGE_Y;
	static float CODING_RANGE_CB_CR;
	float lumaRed = 0.0;
	float lumaGreen = 0.0;
	float lumaBlue = 0.0;
	float referenceBlackY = 0.0;
	float referenceWhiteY = 0.0;
	float referenceBlackCb = 0.0;
	float referenceWhiteCb = 0.0;
	float referenceBlackCr = 0.0;
	float referenceWhiteCr = 0.0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("CODING_RANGE_CB_CR")
#pragma pop_macro("CODING_RANGE_Y")

#endif // _com_sun_imageio_plugins_tiff_TIFFYCbCrColorConverter_h_