#ifndef _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor_h_
#define _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor_h_
//$ class com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor
//$ extends com.sun.imageio.plugins.tiff.TIFFCompressor

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <java/lang/Array.h>

#pragma push_macro("IMAGE_METADATA_NAME")
#undef IMAGE_METADATA_NAME
#pragma push_macro("STREAM_METADATA_NAME")
#undef STREAM_METADATA_NAME

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFBaseJPEGCompressor$IIOByteArrayOutputStream;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		class ImageWriteParam;
		class ImageWriter;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
			class IIOMetadataNode;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {
				class JPEGImageWriteParam;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFBaseJPEGCompressor : public ::com::sun::imageio::plugins::tiff::TIFFCompressor {
	$class(TIFFBaseJPEGCompressor, $HAS_FINALIZE, ::com::sun::imageio::plugins::tiff::TIFFCompressor)
public:
	TIFFBaseJPEGCompressor();
	void init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless, ::javax::imageio::ImageWriteParam* param);
	virtual int32_t encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) override;
	virtual void finalize() override;
	static ::java::util::List* getAllNodes(::javax::imageio::metadata::IIOMetadataNode* root, ::java::util::List* nodes);
	::javax::imageio::metadata::IIOMetadata* getImageMetadata(bool pruneTables);
	virtual void initJPEGWriter(bool supportsStreamMetadata, bool supportsImageMetadata);
	static void pruneNodes(::org::w3c::dom::Node* tree, bool pruneTables);
	static $String* STREAM_METADATA_NAME;
	static $String* IMAGE_METADATA_NAME;
	::javax::imageio::ImageWriteParam* param = nullptr;
	::javax::imageio::plugins::jpeg::JPEGImageWriteParam* JPEGParam = nullptr;
	::javax::imageio::ImageWriter* JPEGWriter = nullptr;
	bool writeAbbreviatedStream = false;
	::javax::imageio::metadata::IIOMetadata* JPEGStreamMetadata = nullptr;
	::javax::imageio::metadata::IIOMetadata* JPEGImageMetadata = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor$IIOByteArrayOutputStream* baos = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("IMAGE_METADATA_NAME")
#pragma pop_macro("STREAM_METADATA_NAME")

#endif // _com_sun_imageio_plugins_tiff_TIFFBaseJPEGCompressor_h_