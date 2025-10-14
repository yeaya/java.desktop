#ifndef _javax_imageio_ImageWriter_h_
#define _javax_imageio_ImageWriter_h_
//$ class javax.imageio.ImageWriter
//$ extends javax.imageio.ImageTranscoder

#include <java/lang/Array.h>
#include <javax/imageio/ImageTranscoder.h>

namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class Raster;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
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
		namespace event {
			class IIOWriteProgressListener;
			class IIOWriteWarningListener;
		}
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

class $import ImageWriter : public ::javax::imageio::ImageTranscoder {
	$class(ImageWriter, $NO_CLASS_INIT, ::javax::imageio::ImageTranscoder)
public:
	ImageWriter();
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) override {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) override {return nullptr;}
	void init$(::javax::imageio::spi::ImageWriterSpi* originatingProvider);
	virtual void abort();
	virtual bool abortRequested();
	virtual void addIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener);
	virtual void addIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener);
	virtual bool canInsertEmpty(int32_t imageIndex);
	virtual bool canInsertImage(int32_t imageIndex);
	virtual bool canRemoveImage(int32_t imageIndex);
	virtual bool canReplaceImageMetadata(int32_t imageIndex);
	virtual bool canReplacePixels(int32_t imageIndex);
	virtual bool canReplaceStreamMetadata();
	virtual bool canWriteEmpty();
	virtual bool canWriteRasters();
	virtual bool canWriteSequence();
	virtual void clearAbortRequest();
	virtual void dispose();
	virtual void endInsertEmpty();
	virtual void endReplacePixels();
	virtual void endWriteEmpty();
	virtual void endWriteSequence();
	virtual $Array<::java::util::Locale>* getAvailableLocales();
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultImageMetadata(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadata* getDefaultStreamMetadata(::javax::imageio::ImageWriteParam* param) {return nullptr;}
	virtual ::javax::imageio::ImageWriteParam* getDefaultWriteParam();
	virtual ::java::util::Locale* getLocale();
	virtual int32_t getNumThumbnailsSupported(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
	virtual ::javax::imageio::spi::ImageWriterSpi* getOriginatingProvider();
	virtual $Object* getOutput();
	virtual $Array<::java::awt::Dimension>* getPreferredThumbnailSizes(::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param, ::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
	virtual void prepareInsertEmpty(int32_t imageIndex, ::javax::imageio::ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ::javax::imageio::ImageWriteParam* param);
	virtual void prepareReplacePixels(int32_t imageIndex, ::java::awt::Rectangle* region);
	virtual void prepareWriteEmpty(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::ImageTypeSpecifier* imageType, int32_t width, int32_t height, ::javax::imageio::metadata::IIOMetadata* imageMetadata, ::java::util::List* thumbnails, ::javax::imageio::ImageWriteParam* param);
	virtual void prepareWriteSequence(::javax::imageio::metadata::IIOMetadata* streamMetadata);
	virtual void processImageComplete();
	virtual void processImageProgress(float percentageDone);
	virtual void processImageStarted(int32_t imageIndex);
	virtual void processThumbnailComplete();
	virtual void processThumbnailProgress(float percentageDone);
	virtual void processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex);
	virtual void processWarningOccurred(int32_t imageIndex, $String* warning);
	virtual void processWarningOccurred(int32_t imageIndex, $String* baseName, $String* keyword);
	virtual void processWriteAborted();
	virtual void removeAllIIOWriteProgressListeners();
	virtual void removeAllIIOWriteWarningListeners();
	virtual void removeIIOWriteProgressListener(::javax::imageio::event::IIOWriteProgressListener* listener);
	virtual void removeIIOWriteWarningListener(::javax::imageio::event::IIOWriteWarningListener* listener);
	virtual void removeImage(int32_t imageIndex);
	virtual void replaceImageMetadata(int32_t imageIndex, ::javax::imageio::metadata::IIOMetadata* imageMetadata);
	virtual void replacePixels(::java::awt::image::RenderedImage* image, ::javax::imageio::ImageWriteParam* param);
	virtual void replacePixels(::java::awt::image::Raster* raster, ::javax::imageio::ImageWriteParam* param);
	virtual void replaceStreamMetadata(::javax::imageio::metadata::IIOMetadata* streamMetadata);
	virtual void reset();
	virtual void setLocale(::java::util::Locale* locale);
	virtual void setOutput(Object$* output);
	void unsupported();
	virtual void write(::javax::imageio::metadata::IIOMetadata* streamMetadata, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param) {}
	virtual void write(::javax::imageio::IIOImage* image);
	virtual void write(::java::awt::image::RenderedImage* image);
	virtual void writeInsert(int32_t imageIndex, ::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param);
	virtual void writeToSequence(::javax::imageio::IIOImage* image, ::javax::imageio::ImageWriteParam* param);
	::javax::imageio::spi::ImageWriterSpi* originatingProvider = nullptr;
	$Object* output = nullptr;
	$Array<::java::util::Locale>* availableLocales = nullptr;
	::java::util::Locale* locale = nullptr;
	::java::util::List* warningListeners = nullptr;
	::java::util::List* warningLocales = nullptr;
	::java::util::List* progressListeners = nullptr;
	bool abortFlag = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageWriter_h_