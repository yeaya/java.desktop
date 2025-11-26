#ifndef _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFJPEGCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>

#pragma push_macro("CHROMA_SUBSAMPLING")
#undef CHROMA_SUBSAMPLING

namespace javax {
	namespace imageio {
		class ImageReader;
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

class TIFFJPEGCompressor : public ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor {
	$class(TIFFJPEGCompressor, $NO_CLASS_INIT, ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor)
public:
	TIFFJPEGCompressor();
	void init$(::javax::imageio::ImageWriteParam* param);
	static ::javax::imageio::ImageReader* getJPEGTablesReader();
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata) override;
	static const int32_t CHROMA_SUBSAMPLING = 2;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("CHROMA_SUBSAMPLING")

#endif // _com_sun_imageio_plugins_tiff_TIFFJPEGCompressor_h_