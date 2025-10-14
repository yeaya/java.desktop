#ifndef _javax_imageio_ImageReader_h_
#define _javax_imageio_ImageReader_h_
//$ class javax.imageio.ImageReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Locale;
		class Set;
	}
}
namespace javax {
	namespace imageio {
		class IIOImage;
		class ImageReadParam;
		class ImageTypeSpecifier;
	}
}
namespace javax {
	namespace imageio {
		namespace event {
			class IIOReadProgressListener;
			class IIOReadUpdateListener;
			class IIOReadWarningListener;
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
			class ImageReaderSpi;
		}
	}
}

namespace javax {
	namespace imageio {

class $export ImageReader : public ::java::lang::Object {
	$class(ImageReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageReader();
	void init$(::javax::imageio::spi::ImageReaderSpi* originatingProvider);
	virtual void abort();
	virtual bool abortRequested();
	virtual void addIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener);
	virtual void addIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener);
	virtual void addIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener);
	static ::java::util::List* addToList(::java::util::List* l, Object$* elt);
	virtual bool canReadRaster();
	static void checkReadParamBandSettings(::javax::imageio::ImageReadParam* param, int32_t numSrcBands, int32_t numDstBands);
	virtual void clearAbortRequest();
	static void computeRegions(::javax::imageio::ImageReadParam* param, int32_t srcWidth, int32_t srcHeight, ::java::awt::image::BufferedImage* image, ::java::awt::Rectangle* srcRegion, ::java::awt::Rectangle* destRegion);
	virtual void dispose();
	virtual float getAspectRatio(int32_t imageIndex);
	virtual $Array<::java::util::Locale>* getAvailableLocales();
	virtual ::javax::imageio::ImageReadParam* getDefaultReadParam();
	static ::java::awt::image::BufferedImage* getDestination(::javax::imageio::ImageReadParam* param, ::java::util::Iterator* imageTypes, int32_t width, int32_t height);
	virtual $String* getFormatName();
	virtual int32_t getHeight(int32_t imageIndex) {return 0;}
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex) {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadata* getImageMetadata(int32_t imageIndex, $String* formatName, ::java::util::Set* nodeNames);
	virtual ::java::util::Iterator* getImageTypes(int32_t imageIndex) {return nullptr;}
	virtual $Object* getInput();
	virtual ::java::util::Locale* getLocale();
	::javax::imageio::metadata::IIOMetadata* getMetadata($String* formatName, ::java::util::Set* nodeNames, bool wantStream, int32_t imageIndex);
	virtual int32_t getMinIndex();
	virtual int32_t getNumImages(bool allowSearch) {return 0;}
	virtual int32_t getNumThumbnails(int32_t imageIndex);
	virtual ::javax::imageio::spi::ImageReaderSpi* getOriginatingProvider();
	virtual ::javax::imageio::ImageTypeSpecifier* getRawImageType(int32_t imageIndex);
	static ::java::awt::Rectangle* getSourceRegion(::javax::imageio::ImageReadParam* param, int32_t srcWidth, int32_t srcHeight);
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata() {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadata* getStreamMetadata($String* formatName, ::java::util::Set* nodeNames);
	virtual int32_t getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex);
	virtual int32_t getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex);
	virtual int32_t getTileGridXOffset(int32_t imageIndex);
	virtual int32_t getTileGridYOffset(int32_t imageIndex);
	virtual int32_t getTileHeight(int32_t imageIndex);
	virtual int32_t getTileWidth(int32_t imageIndex);
	virtual int32_t getWidth(int32_t imageIndex) {return 0;}
	virtual bool hasThumbnails(int32_t imageIndex);
	virtual bool isIgnoringMetadata();
	virtual bool isImageTiled(int32_t imageIndex);
	virtual bool isRandomAccessEasy(int32_t imageIndex);
	virtual bool isSeekForwardOnly();
	virtual void processImageComplete();
	virtual void processImageProgress(float percentageDone);
	virtual void processImageStarted(int32_t imageIndex);
	virtual void processImageUpdate(::java::awt::image::BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands);
	virtual void processPassComplete(::java::awt::image::BufferedImage* theImage);
	virtual void processPassStarted(::java::awt::image::BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands);
	virtual void processReadAborted();
	virtual void processSequenceComplete();
	virtual void processSequenceStarted(int32_t minIndex);
	virtual void processThumbnailComplete();
	virtual void processThumbnailPassComplete(::java::awt::image::BufferedImage* theThumbnail);
	virtual void processThumbnailPassStarted(::java::awt::image::BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands);
	virtual void processThumbnailProgress(float percentageDone);
	virtual void processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex);
	virtual void processThumbnailUpdate(::java::awt::image::BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands);
	virtual void processWarningOccurred($String* warning);
	virtual void processWarningOccurred($String* baseName, $String* keyword);
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex);
	virtual ::java::awt::image::BufferedImage* read(int32_t imageIndex, ::javax::imageio::ImageReadParam* param) {return nullptr;}
	virtual ::javax::imageio::IIOImage* readAll(int32_t imageIndex, ::javax::imageio::ImageReadParam* param);
	virtual ::java::util::Iterator* readAll(::java::util::Iterator* params);
	virtual ::java::awt::image::RenderedImage* readAsRenderedImage(int32_t imageIndex, ::javax::imageio::ImageReadParam* param);
	virtual ::java::awt::image::Raster* readRaster(int32_t imageIndex, ::javax::imageio::ImageReadParam* param);
	virtual ::java::awt::image::BufferedImage* readThumbnail(int32_t imageIndex, int32_t thumbnailIndex);
	virtual ::java::awt::image::BufferedImage* readTile(int32_t imageIndex, int32_t tileX, int32_t tileY);
	virtual ::java::awt::image::Raster* readTileRaster(int32_t imageIndex, int32_t tileX, int32_t tileY);
	virtual bool readerSupportsThumbnails();
	virtual void removeAllIIOReadProgressListeners();
	virtual void removeAllIIOReadUpdateListeners();
	virtual void removeAllIIOReadWarningListeners();
	static ::java::util::List* removeFromList(::java::util::List* l, Object$* elt);
	virtual void removeIIOReadProgressListener(::javax::imageio::event::IIOReadProgressListener* listener);
	virtual void removeIIOReadUpdateListener(::javax::imageio::event::IIOReadUpdateListener* listener);
	virtual void removeIIOReadWarningListener(::javax::imageio::event::IIOReadWarningListener* listener);
	virtual void reset();
	virtual void setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata);
	virtual void setInput(Object$* input, bool seekForwardOnly);
	virtual void setInput(Object$* input);
	virtual void setLocale(::java::util::Locale* locale);
	::javax::imageio::spi::ImageReaderSpi* originatingProvider = nullptr;
	$Object* input = nullptr;
	bool seekForwardOnly = false;
	bool ignoreMetadata = false;
	int32_t minIndex = 0;
	$Array<::java::util::Locale>* availableLocales = nullptr;
	::java::util::Locale* locale = nullptr;
	::java::util::List* warningListeners = nullptr;
	::java::util::List* warningLocales = nullptr;
	::java::util::List* progressListeners = nullptr;
	::java::util::List* updateListeners = nullptr;
	bool abortFlag = false;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageReader_h_