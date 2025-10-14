#ifndef _com_sun_imageio_plugins_tiff_TIFFCIELabColorConverter_h_
#define _com_sun_imageio_plugins_tiff_TIFFCIELabColorConverter_h_
//$ class com.sun.imageio.plugins.tiff.TIFFCIELabColorConverter
//$ extends com.sun.imageio.plugins.tiff.TIFFColorConverter

#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <java/lang/Array.h>

#pragma push_macro("THRESHOLD")
#undef THRESHOLD

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFCIELabColorConverter : public ::com::sun::imageio::plugins::tiff::TIFFColorConverter {
	$class(TIFFCIELabColorConverter, 0, ::com::sun::imageio::plugins::tiff::TIFFColorConverter)
public:
	TIFFCIELabColorConverter();
	void init$();
	float clamp(float x);
	float clamp2(float x);
	virtual void fromRGB(float r, float g, float b, $floats* result) override;
	virtual void toRGB(float x0, float x1, float x2, $floats* rgb) override;
	static float Xn;
	static float Yn;
	static float Zn;
	static float THRESHOLD;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("THRESHOLD")

#endif // _com_sun_imageio_plugins_tiff_TIFFCIELabColorConverter_h_