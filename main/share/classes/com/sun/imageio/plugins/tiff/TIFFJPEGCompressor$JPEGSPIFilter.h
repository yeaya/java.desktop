#ifndef _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor$JPEGSPIFilter_h_
#define _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor$JPEGSPIFilter_h_
//$ class com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter
//$ extends javax.imageio.spi.ServiceRegistry$Filter

#include <javax/imageio/spi/ServiceRegistry$Filter.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFJPEGCompressor$JPEGSPIFilter : public ::javax::imageio::spi::ServiceRegistry$Filter {
	$class(TIFFJPEGCompressor$JPEGSPIFilter, $NO_CLASS_INIT, ::javax::imageio::spi::ServiceRegistry$Filter)
public:
	TIFFJPEGCompressor$JPEGSPIFilter();
	void init$();
	virtual bool filter(Object$* provider) override;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor$JPEGSPIFilter_h_