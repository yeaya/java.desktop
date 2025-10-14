#ifndef _com_sun_imageio_plugins_tiff_TIFFExifJPEGCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFExifJPEGCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFExifJPEGCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>

namespace javax {
	namespace imageio {
		class ImageWriteParam;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFExifJPEGCompressor : public ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor {
	$class(TIFFExifJPEGCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor)
public:
	TIFFExifJPEGCompressor();
	void init$(::javax::imageio::ImageWriteParam* param);
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata) override;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFExifJPEGCompressor_h_