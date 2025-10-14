#ifndef _com_sun_imageio_plugins_wbmp_WBMPImageWriter_h_
#define _com_sun_imageio_plugins_wbmp_WBMPImageWriter_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPImageWriter
//$ extends javax.imageio.ImageWriter

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriter.h>

namespace java {
	namespace awt {
		namespace image {
			class SampleModel;
		}
	}
}
namespace javax {
	namespace imageio {
		class IIOImage;
		class ImageTypeSpecifier;
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
namespace javax {
	namespace imageio {
		namespace spi {
			class ImageWriterSpi;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

class WBMPImageWriter : public ::javax::imageio::ImageWriter {
	$class(WBMPImageWriter, $NO_CLASS_INIT, ::javax::imageio::ImageWriter)
public:
	WBMPImageWriter();
	void init$(::javax::imageio::spi::ImageWriterSpi* originator);
	virtual bool canWriteRasters() override;
	void checkSampleModel(::java::awt::image::SampleModel* sm);
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* metadata, ::javax::imageio::ImageTypeSpecifier* type, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override;
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) override;
	static int32_t getNumBits(int32_t intValue);
	static $bytes* intToMultiByte(int32_t intValue);
	virtual void reset() override;
	virtual void setOutput(Object$* output) override;
	using ::javax::imageio::ImageWriter::write;
	virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) override;
	::javax::imageio::stream::ImageOutputStream* stream = nullptr;
};

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_wbmp_WBMPImageWriter_h_