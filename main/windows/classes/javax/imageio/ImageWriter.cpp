#include <javax/imageio/ImageWriter.h>

#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/event/IIOWriteProgressListener.h>
#include <javax/imageio/event/IIOWriteWarningListener.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <jcpp.h>

using $DimensionArray = $Array<::java::awt::Dimension>;
using $LocaleArray = $Array<::java::util::Locale>;
using $Rectangle = ::java::awt::Rectangle;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $IIOImage = ::javax::imageio::IIOImage;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTranscoder = ::javax::imageio::ImageTranscoder;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $IIOWriteProgressListener = ::javax::imageio::event::IIOWriteProgressListener;
using $IIOWriteWarningListener = ::javax::imageio::event::IIOWriteWarningListener;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;

namespace javax {
	namespace imageio {

$FieldInfo _ImageWriter_FieldInfo_[] = {
	{"originatingProvider", "Ljavax/imageio/spi/ImageWriterSpi;", nullptr, $PROTECTED, $field(ImageWriter, originatingProvider)},
	{"output", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(ImageWriter, output)},
	{"availableLocales", "[Ljava/util/Locale;", nullptr, $PROTECTED, $field(ImageWriter, availableLocales)},
	{"locale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(ImageWriter, locale)},
	{"warningListeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/event/IIOWriteWarningListener;>;", $PROTECTED, $field(ImageWriter, warningListeners)},
	{"warningLocales", "Ljava/util/List;", "Ljava/util/List<Ljava/util/Locale;>;", $PROTECTED, $field(ImageWriter, warningLocales)},
	{"progressListeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/event/IIOWriteProgressListener;>;", $PROTECTED, $field(ImageWriter, progressListeners)},
	{"abortFlag", "Z", nullptr, $PRIVATE, $field(ImageWriter, abortFlag)},
	{}
};

$MethodInfo _ImageWriter_MethodInfo_[] = {
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PROTECTED, $method(static_cast<void(ImageWriter::*)($ImageWriterSpi*)>(&ImageWriter::init$))},
	{"abort", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"abortRequested", "()Z", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"addIIOWriteProgressListener", "(Ljavax/imageio/event/IIOWriteProgressListener;)V", nullptr, $PUBLIC},
	{"addIIOWriteWarningListener", "(Ljavax/imageio/event/IIOWriteWarningListener;)V", nullptr, $PUBLIC},
	{"canInsertEmpty", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canInsertImage", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canRemoveImage", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canReplaceImageMetadata", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canReplacePixels", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canReplaceStreamMetadata", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canWriteEmpty", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canWriteRasters", "()Z", nullptr, $PUBLIC},
	{"canWriteSequence", "()Z", nullptr, $PUBLIC},
	{"clearAbortRequest", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"endInsertEmpty", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endReplacePixels", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endWriteEmpty", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endWriteSequence", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getNumThumbnailsSupported", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)I", nullptr, $PUBLIC},
	{"getOriginatingProvider", "()Ljavax/imageio/spi/ImageWriterSpi;", nullptr, $PUBLIC},
	{"getOutput", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPreferredThumbnailSizes", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)[Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"prepareInsertEmpty", "(ILjavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List;Ljavax/imageio/ImageWriteParam;)V", "(ILjavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/ImageWriteParam;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareReplacePixels", "(ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareWriteEmpty", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List;Ljavax/imageio/ImageWriteParam;)V", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/ImageWriteParam;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareWriteSequence", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"processImageComplete", "()V", nullptr, $PROTECTED},
	{"processImageProgress", "(F)V", nullptr, $PROTECTED},
	{"processImageStarted", "(I)V", nullptr, $PROTECTED},
	{"processThumbnailComplete", "()V", nullptr, $PROTECTED},
	{"processThumbnailProgress", "(F)V", nullptr, $PROTECTED},
	{"processThumbnailStarted", "(II)V", nullptr, $PROTECTED},
	{"processWarningOccurred", "(ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"processWarningOccurred", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"processWriteAborted", "()V", nullptr, $PROTECTED},
	{"removeAllIIOWriteProgressListeners", "()V", nullptr, $PUBLIC},
	{"removeAllIIOWriteWarningListeners", "()V", nullptr, $PUBLIC},
	{"removeIIOWriteProgressListener", "(Ljavax/imageio/event/IIOWriteProgressListener;)V", nullptr, $PUBLIC},
	{"removeIIOWriteWarningListener", "(Ljavax/imageio/event/IIOWriteWarningListener;)V", nullptr, $PUBLIC},
	{"removeImage", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"replaceImageMetadata", "(ILjavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"replacePixels", "(Ljava/awt/image/RenderedImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"replacePixels", "(Ljava/awt/image/Raster;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"replaceStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"unsupported", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageWriter::*)()>(&ImageWriter::unsupported))},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/IIOImage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/awt/image/RenderedImage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeInsert", "(ILjavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeToSequence", "(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.ImageWriter",
	"java.lang.Object",
	"javax.imageio.ImageTranscoder",
	_ImageWriter_FieldInfo_,
	_ImageWriter_MethodInfo_
};

$Object* allocate$ImageWriter($Class* clazz) {
	return $of($alloc(ImageWriter));
}

void ImageWriter::init$($ImageWriterSpi* originatingProvider) {
	$set(this, originatingProvider, nullptr);
	$set(this, output, nullptr);
	$set(this, availableLocales, nullptr);
	$set(this, locale, nullptr);
	$set(this, warningListeners, nullptr);
	$set(this, warningLocales, nullptr);
	$set(this, progressListeners, nullptr);
	this->abortFlag = false;
	$set(this, originatingProvider, originatingProvider);
}

$ImageWriterSpi* ImageWriter::getOriginatingProvider() {
	return this->originatingProvider;
}

void ImageWriter::setOutput(Object$* output) {
	if (output != nullptr) {
		$var($ImageWriterSpi, provider, getOriginatingProvider());
		if (provider != nullptr) {
			$var($ClassArray, classes, provider->getOutputTypes());
			bool found = false;
			for (int32_t i = 0; i < $nc(classes)->length; ++i) {
				if ($nc(classes->get(i))->isInstance(output)) {
					found = true;
					break;
				}
			}
			if (!found) {
				$throwNew($IllegalArgumentException, "Illegal output type!"_s);
			}
		}
	}
	$set(this, output, output);
}

$Object* ImageWriter::getOutput() {
	return $of(this->output);
}

$LocaleArray* ImageWriter::getAvailableLocales() {
	return (this->availableLocales == nullptr) ? ($LocaleArray*)nullptr : $cast($LocaleArray, $nc(this->availableLocales)->clone());
}

void ImageWriter::setLocale($Locale* locale) {
	if (locale != nullptr) {
		$var($LocaleArray, locales, getAvailableLocales());
		bool found = false;
		if (locales != nullptr) {
			for (int32_t i = 0; i < locales->length; ++i) {
				if (locale->equals(locales->get(i))) {
					found = true;
					break;
				}
			}
		}
		if (!found) {
			$throwNew($IllegalArgumentException, "Invalid locale!"_s);
		}
	}
	$set(this, locale, locale);
}

$Locale* ImageWriter::getLocale() {
	return this->locale;
}

$ImageWriteParam* ImageWriter::getDefaultWriteParam() {
	return $new($ImageWriteParam, $(getLocale()));
}

int32_t ImageWriter::getNumThumbnailsSupported($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $IIOMetadata* streamMetadata, $IIOMetadata* imageMetadata) {
	return 0;
}

$DimensionArray* ImageWriter::getPreferredThumbnailSizes($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $IIOMetadata* streamMetadata, $IIOMetadata* imageMetadata) {
	return nullptr;
}

bool ImageWriter::canWriteRasters() {
	return false;
}

void ImageWriter::write($IIOImage* image) {
	write(nullptr, image, nullptr);
}

void ImageWriter::write($RenderedImage* image) {
	write(nullptr, $$new($IIOImage, image, ($List*)nullptr, ($IIOMetadata*)nullptr), nullptr);
}

void ImageWriter::unsupported() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	$throwNew($UnsupportedOperationException, "Unsupported write variant!"_s);
}

bool ImageWriter::canWriteSequence() {
	return false;
}

void ImageWriter::prepareWriteSequence($IIOMetadata* streamMetadata) {
	unsupported();
}

void ImageWriter::writeToSequence($IIOImage* image, $ImageWriteParam* param) {
	unsupported();
}

void ImageWriter::endWriteSequence() {
	unsupported();
}

bool ImageWriter::canReplaceStreamMetadata() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::replaceStreamMetadata($IIOMetadata* streamMetadata) {
	unsupported();
}

bool ImageWriter::canReplaceImageMetadata(int32_t imageIndex) {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::replaceImageMetadata(int32_t imageIndex, $IIOMetadata* imageMetadata) {
	unsupported();
}

bool ImageWriter::canInsertImage(int32_t imageIndex) {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::writeInsert(int32_t imageIndex, $IIOImage* image, $ImageWriteParam* param) {
	unsupported();
}

bool ImageWriter::canRemoveImage(int32_t imageIndex) {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::removeImage(int32_t imageIndex) {
	unsupported();
}

bool ImageWriter::canWriteEmpty() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::prepareWriteEmpty($IIOMetadata* streamMetadata, $ImageTypeSpecifier* imageType, int32_t width, int32_t height, $IIOMetadata* imageMetadata, $List* thumbnails, $ImageWriteParam* param) {
	unsupported();
}

void ImageWriter::endWriteEmpty() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	$throwNew($IllegalStateException, "No call to prepareWriteEmpty!"_s);
}

bool ImageWriter::canInsertEmpty(int32_t imageIndex) {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::prepareInsertEmpty(int32_t imageIndex, $ImageTypeSpecifier* imageType, int32_t width, int32_t height, $IIOMetadata* imageMetadata, $List* thumbnails, $ImageWriteParam* param) {
	unsupported();
}

void ImageWriter::endInsertEmpty() {
	unsupported();
}

bool ImageWriter::canReplacePixels(int32_t imageIndex) {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return false;
}

void ImageWriter::prepareReplacePixels(int32_t imageIndex, $Rectangle* region) {
	unsupported();
}

void ImageWriter::replacePixels($RenderedImage* image, $ImageWriteParam* param) {
	unsupported();
}

void ImageWriter::replacePixels($Raster* raster, $ImageWriteParam* param) {
	unsupported();
}

void ImageWriter::endReplacePixels() {
	unsupported();
}

void ImageWriter::abort() {
	$synchronized(this) {
		this->abortFlag = true;
	}
}

bool ImageWriter::abortRequested() {
	$synchronized(this) {
		return this->abortFlag;
	}
}

void ImageWriter::clearAbortRequest() {
	$synchronized(this) {
		this->abortFlag = false;
	}
}

void ImageWriter::addIIOWriteWarningListener($IIOWriteWarningListener* listener) {
	if (listener == nullptr) {
		return;
	}
	$set(this, warningListeners, $ImageReader::addToList(this->warningListeners, listener));
	$set(this, warningLocales, $ImageReader::addToList(this->warningLocales, $(getLocale())));
}

void ImageWriter::removeIIOWriteWarningListener($IIOWriteWarningListener* listener) {
	if (listener == nullptr || this->warningListeners == nullptr) {
		return;
	}
	int32_t index = $nc(this->warningListeners)->indexOf(listener);
	if (index != -1) {
		$nc(this->warningListeners)->remove(index);
		$nc(this->warningLocales)->remove(index);
		if ($nc(this->warningListeners)->size() == 0) {
			$set(this, warningListeners, nullptr);
			$set(this, warningLocales, nullptr);
		}
	}
}

void ImageWriter::removeAllIIOWriteWarningListeners() {
	$set(this, warningListeners, nullptr);
	$set(this, warningLocales, nullptr);
}

void ImageWriter::addIIOWriteProgressListener($IIOWriteProgressListener* listener) {
	if (listener == nullptr) {
		return;
	}
	$set(this, progressListeners, $ImageReader::addToList(this->progressListeners, listener));
}

void ImageWriter::removeIIOWriteProgressListener($IIOWriteProgressListener* listener) {
	if (listener == nullptr || this->progressListeners == nullptr) {
		return;
	}
	$set(this, progressListeners, $ImageReader::removeFromList(this->progressListeners, listener));
}

void ImageWriter::removeAllIIOWriteProgressListeners() {
	$set(this, progressListeners, nullptr);
}

void ImageWriter::processImageStarted(int32_t imageIndex) {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageStarted(this, imageIndex);
	}
}

void ImageWriter::processImageProgress(float percentageDone) {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageProgress(this, percentageDone);
	}
}

void ImageWriter::processImageComplete() {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageComplete(this);
	}
}

void ImageWriter::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex) {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailStarted(this, imageIndex, thumbnailIndex);
	}
}

void ImageWriter::processThumbnailProgress(float percentageDone) {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailProgress(this, percentageDone);
	}
}

void ImageWriter::processThumbnailComplete() {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailComplete(this);
	}
}

void ImageWriter::processWriteAborted() {
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteProgressListener, listener, $cast($IIOWriteProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->writeAborted(this);
	}
}

void ImageWriter::processWarningOccurred(int32_t imageIndex, $String* warning) {
	if (this->warningListeners == nullptr) {
		return;
	}
	if (warning == nullptr) {
		$throwNew($IllegalArgumentException, "warning == null!"_s);
	}
	int32_t numListeners = $nc(this->warningListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteWarningListener, listener, $cast($IIOWriteWarningListener, $nc(this->warningListeners)->get(i)));
		$nc(listener)->warningOccurred(this, imageIndex, warning);
	}
}

void ImageWriter::processWarningOccurred(int32_t imageIndex, $String* baseName, $String* keyword) {
	$beforeCallerSensitive();
	if (this->warningListeners == nullptr) {
		return;
	}
	if (baseName == nullptr) {
		$throwNew($IllegalArgumentException, "baseName == null!"_s);
	}
	if (keyword == nullptr) {
		$throwNew($IllegalArgumentException, "keyword == null!"_s);
	}
	int32_t numListeners = $nc(this->warningListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOWriteWarningListener, listener, $cast($IIOWriteWarningListener, $nc(this->warningListeners)->get(i)));
		$var($Locale, locale, $cast($Locale, $nc(this->warningLocales)->get(i)));
		if (locale == nullptr) {
			$assign(locale, $Locale::getDefault());
		}
		$var($ResourceBundle, bundle, nullptr);
		try {
			$assign(bundle, $ResourceBundle::getBundle(baseName, locale, $($of(this)->getClass()->getModule())));
		} catch ($MissingResourceException&) {
			$var($MissingResourceException, mre, $catch());
			$throwNew($IllegalArgumentException, "Bundle not found!"_s, mre);
		}
		$var($String, warning, nullptr);
		try {
			$assign(warning, $nc(bundle)->getString(keyword));
		} catch ($ClassCastException&) {
			$var($ClassCastException, cce, $catch());
			$throwNew($IllegalArgumentException, "Resource is not a String!"_s, cce);
		} catch ($MissingResourceException&) {
			$var($MissingResourceException, mre, $catch());
			$throwNew($IllegalArgumentException, "Resource is missing!"_s, mre);
		}
		$nc(listener)->warningOccurred(this, imageIndex, warning);
	}
}

void ImageWriter::reset() {
	setOutput(nullptr);
	setLocale(nullptr);
	removeAllIIOWriteWarningListeners();
	removeAllIIOWriteProgressListeners();
	clearAbortRequest();
}

void ImageWriter::dispose() {
}

ImageWriter::ImageWriter() {
}

$Class* ImageWriter::load$($String* name, bool initialize) {
	$loadClass(ImageWriter, name, initialize, &_ImageWriter_ClassInfo_, allocate$ImageWriter);
	return class$;
}

$Class* ImageWriter::class$ = nullptr;

	} // imageio
} // javax