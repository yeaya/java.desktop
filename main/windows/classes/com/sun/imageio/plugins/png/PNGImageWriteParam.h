#ifndef _com_sun_imageio_plugins_png_PNGImageWriteParam_h_
#define _com_sun_imageio_plugins_png_PNGImageWriteParam_h_
//$ class com.sun.imageio.plugins.png.PNGImageWriteParam
//$ extends javax.imageio.ImageWriteParam

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriteParam.h>

#pragma push_macro("DEFAULT_QUALITY")
#undef DEFAULT_QUALITY

namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class PNGImageWriteParam : public ::javax::imageio::ImageWriteParam {
	$class(PNGImageWriteParam, 0, ::javax::imageio::ImageWriteParam)
public:
	PNGImageWriteParam();
	void init$(::java::util::Locale* locale);
	virtual $StringArray* getCompressionQualityDescriptions() override;
	virtual $floats* getCompressionQualityValues() override;
	virtual bool isCompressionLossless() override;
	virtual void unsetCompression() override;
	static float DEFAULT_QUALITY;
	static $StringArray* compressionNames;
	static $floats* qualityVals;
	static $StringArray* qualityDescs;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DEFAULT_QUALITY")

#endif // _com_sun_imageio_plugins_png_PNGImageWriteParam_h_