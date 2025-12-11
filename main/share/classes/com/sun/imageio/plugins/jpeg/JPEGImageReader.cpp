#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>

#include <com/sun/imageio/plugins/jpeg/ImageTypeIterator.h>
#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbRGB.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$1.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$2.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$JPEGReaderDisposerRecord.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadata.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/color/CMMException.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorConvertOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGImageReadParam.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef APP0
#undef APP1
#undef APP10
#undef APP11
#undef APP12
#undef APP13
#undef APP14
#undef APP15
#undef APP2
#undef APP3
#undef APP4
#undef APP5
#undef APP6
#undef APP7
#undef APP8
#undef APP9
#undef COM
#undef DAC
#undef DHP
#undef DHT
#undef DNL
#undef DQT
#undef DRI
#undef EOI
#undef EXP
#undef IOOBE
#undef JCS_GRAYSCALE
#undef JCS_RGB
#undef JPG
#undef MAX_VALUE
#undef MAX_WARNING
#undef MIN_ESTIMATED_PASSES
#undef NUM_JCS_CODES
#undef RST0
#undef RST1
#undef RST2
#undef RST3
#undef RST4
#undef RST5
#undef RST6
#undef RST7
#undef SOF0
#undef SOF1
#undef SOF10
#undef SOF11
#undef SOF13
#undef SOF14
#undef SOF15
#undef SOF2
#undef SOF3
#undef SOF5
#undef SOF6
#undef SOF7
#undef SOF9
#undef SOI
#undef SOS
#undef TEM
#undef TYPE_BYTE
#undef TYPE_GRAY
#undef TYPE_RGB
#undef UNKNOWN
#undef WARNING_IGNORE_INVALID_ICC
#undef WARNING_NO_EOI
#undef WARNING_NO_JFIF_IN_THUMB

using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $ImageTypeIterator = ::com::sun::imageio::plugins::jpeg::ImageTypeIterator;
using $ImageTypeProducer = ::com::sun::imageio::plugins::jpeg::ImageTypeProducer;
using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader$1 = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$1;
using $JPEGImageReader$2 = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$2;
using $JPEGImageReader$CallBackLock = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock;
using $JPEGImageReader$JPEGReaderDisposerRecord = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$JPEGReaderDisposerRecord;
using $JPEGMetadata = ::com::sun::imageio::plugins::jpeg::JPEGMetadata;
using $SOSMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $CMMException = ::java::awt::color::CMMException;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorConvertOp = ::java::awt::image::ColorConvertOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGImageReadParam = ::javax::imageio::plugins::jpeg::JPEGImageReadParam;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageReader_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE, $field(JPEGImageReader, debug)},
	{"structPointer", "J", nullptr, $PRIVATE, $field(JPEGImageReader, structPointer)},
	{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(JPEGImageReader, iis)},
	{"imagePositions", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Long;>;", $PRIVATE, $field(JPEGImageReader, imagePositions)},
	{"numImages", "I", nullptr, $PRIVATE, $field(JPEGImageReader, numImages)},
	{"WARNING_NO_EOI", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageReader, WARNING_NO_EOI)},
	{"WARNING_NO_JFIF_IN_THUMB", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageReader, WARNING_NO_JFIF_IN_THUMB)},
	{"WARNING_IGNORE_INVALID_ICC", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageReader, WARNING_IGNORE_INVALID_ICC)},
	{"MAX_WARNING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGImageReader, MAX_WARNING)},
	{"currentImage", "I", nullptr, $PRIVATE, $field(JPEGImageReader, currentImage)},
	{"width", "I", nullptr, $PRIVATE, $field(JPEGImageReader, width)},
	{"height", "I", nullptr, $PRIVATE, $field(JPEGImageReader, height)},
	{"colorSpaceCode", "I", nullptr, $PRIVATE, $field(JPEGImageReader, colorSpaceCode)},
	{"outColorSpaceCode", "I", nullptr, $PRIVATE, $field(JPEGImageReader, outColorSpaceCode)},
	{"numComponents", "I", nullptr, $PRIVATE, $field(JPEGImageReader, numComponents)},
	{"iccCS", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE, $field(JPEGImageReader, iccCS)},
	{"convert", "Ljava/awt/image/ColorConvertOp;", nullptr, $PRIVATE, $field(JPEGImageReader, convert)},
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(JPEGImageReader, image)},
	{"raster", "Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $field(JPEGImageReader, raster)},
	{"target", "Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $field(JPEGImageReader, target)},
	{"buffer", "Ljava/awt/image/DataBufferByte;", nullptr, $PRIVATE, $field(JPEGImageReader, buffer)},
	{"destROI", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(JPEGImageReader, destROI)},
	{"destinationBands", "[I", nullptr, $PRIVATE, $field(JPEGImageReader, destinationBands)},
	{"streamMetadata", "Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;", nullptr, $PRIVATE, $field(JPEGImageReader, streamMetadata)},
	{"imageMetadata", "Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;", nullptr, $PRIVATE, $field(JPEGImageReader, imageMetadata)},
	{"imageMetadataIndex", "I", nullptr, $PRIVATE, $field(JPEGImageReader, imageMetadataIndex)},
	{"haveSeeked", "Z", nullptr, $PRIVATE, $field(JPEGImageReader, haveSeeked)},
	{"abbrevQTables", "[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PRIVATE, $field(JPEGImageReader, abbrevQTables)},
	{"abbrevDCHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageReader, abbrevDCHuffmanTables)},
	{"abbrevACHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageReader, abbrevACHuffmanTables)},
	{"minProgressivePass", "I", nullptr, $PRIVATE, $field(JPEGImageReader, minProgressivePass)},
	{"maxProgressivePass", "I", nullptr, $PRIVATE, $field(JPEGImageReader, maxProgressivePass)},
	{"UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGImageReader, UNKNOWN)},
	{"MIN_ESTIMATED_PASSES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGImageReader, MIN_ESTIMATED_PASSES)},
	{"knownPassCount", "I", nullptr, $PRIVATE, $field(JPEGImageReader, knownPassCount)},
	{"pass", "I", nullptr, $PRIVATE, $field(JPEGImageReader, pass)},
	{"percentToDate", "F", nullptr, $PRIVATE, $field(JPEGImageReader, percentToDate)},
	{"previousPassPercentage", "F", nullptr, $PRIVATE, $field(JPEGImageReader, previousPassPercentage)},
	{"progInterval", "I", nullptr, $PRIVATE, $field(JPEGImageReader, progInterval)},
	{"tablesOnlyChecked", "Z", nullptr, $PRIVATE, $field(JPEGImageReader, tablesOnlyChecked)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JPEGImageReader, disposerReferent)},
	{"disposerRecord", "Lsun/java2d/DisposerRecord;", nullptr, $PRIVATE, $field(JPEGImageReader, disposerRecord)},
	{"theThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(JPEGImageReader, theThread)},
	{"theLockCount", "I", nullptr, $PRIVATE, $field(JPEGImageReader, theLockCount)},
	{"cbLock", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock;", nullptr, $PRIVATE, $field(JPEGImageReader, cbLock)},
	{}
};

$MethodInfo _JPEGImageReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageReader::*)($ImageReaderSpi*)>(&JPEGImageReader::init$))},
	{"abort", "()V", nullptr, $PUBLIC},
	{"abortRead", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::abortRead))},
	{"acceptPixels", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t,bool)>(&JPEGImageReader::acceptPixels))},
	{"canReadRaster", "()Z", nullptr, $PUBLIC},
	{"checkColorConversion", "(Ljava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)($BufferedImage*,$ImageReadParam*)>(&JPEGImageReader::checkColorConversion)), "javax.imageio.IIOException"},
	{"checkTablesOnly", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::checkTablesOnly)), "java.io.IOException"},
	{"clearNativeReadAbortFlag", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::clearNativeReadAbortFlag))},
	{"clearThreadLock", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::clearThreadLock))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeReader", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&JPEGImageReader::disposeReader))},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC},
	{"getHeight", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageType", "(I)Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;", nullptr, $PRIVATE, $method(static_cast<$ImageTypeProducer*(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::getImageType))},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageTypesOnThread", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PRIVATE, $method(static_cast<$Iterator*(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::getImageTypesOnThread)), "java.io.IOException"},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getNumImagesOnThread", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageReader::*)(bool)>(&JPEGImageReader::getNumImagesOnThread)), "java.io.IOException"},
	{"getNumThumbnails", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getRawImageType", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getThumbnailHeight", "(II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getThumbnailWidth", "(II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getWidth", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"gotoImage", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::gotoImage)), "java.io.IOException"},
	{"hasNextImage", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGImageReader::*)()>(&JPEGImageReader::hasNextImage)), "java.io.IOException"},
	{"initJPEGImageReader", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(JPEGImageReader::*)()>(&JPEGImageReader::initJPEGImageReader))},
	{"initProgressData", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::initProgressData))},
	{"initReaderIDs", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*,$Class*)>(&JPEGImageReader::initReaderIDs))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JPEGImageReader::initStatic))},
	{"passComplete", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::passComplete))},
	{"passStarted", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::passStarted))},
	{"pushBack", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::pushBack)), "java.io.IOException"},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readHeader", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t,bool)>(&JPEGImageReader::readHeader)), "java.io.IOException"},
	{"readImage", "(IJ[BI[I[IIIIIII[Ljavax/imageio/plugins/jpeg/JPEGQTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;IIZ)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(JPEGImageReader::*)(int32_t,int64_t,$bytes*,int32_t,$ints*,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$JPEGQTableArray*,$JPEGHuffmanTableArray*,$JPEGHuffmanTableArray*,int32_t,int32_t,bool)>(&JPEGImageReader::readImage))},
	{"readImageHeader", "(JZZ)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(JPEGImageReader::*)(int64_t,bool,bool)>(&JPEGImageReader::readImageHeader)), "java.io.IOException"},
	{"readInputData", "([BII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageReader::*)($bytes*,int32_t,int32_t)>(&JPEGImageReader::readInputData)), "java.io.IOException"},
	{"readInternal", "(ILjavax/imageio/ImageReadParam;Z)Ljava/awt/image/Raster;", nullptr, $PRIVATE, $method(static_cast<$Raster*(JPEGImageReader::*)(int32_t,$ImageReadParam*,bool)>(&JPEGImageReader::readInternal)), "java.io.IOException"},
	{"readNativeHeader", "(Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGImageReader::*)(bool)>(&JPEGImageReader::readNativeHeader)), "java.io.IOException"},
	{"readRaster", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readThumbnail", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readerSupportsThumbnails", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetInternalState", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::resetInternalState))},
	{"resetLibraryState", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::resetLibraryState))},
	{"resetReader", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::resetReader))},
	{"setImageData", "(IIIII[B)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t,int32_t,int32_t,int32_t,int32_t,$bytes*)>(&JPEGImageReader::setImageData))},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC},
	{"setOutColorSpace", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t,int32_t)>(&JPEGImageReader::setOutColorSpace))},
	{"setSource", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::setSource))},
	{"setThreadLock", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::setThreadLock))},
	{"skipImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)()>(&JPEGImageReader::skipImage)), "java.io.IOException"},
	{"skipInputBytes", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(JPEGImageReader::*)(int64_t)>(&JPEGImageReader::skipInputBytes)), "java.io.IOException"},
	{"skipPastImage", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader::*)(int32_t)>(&JPEGImageReader::skipPastImage))},
	{"thumbnailComplete", "()V", nullptr, 0},
	{"thumbnailProgress", "(F)V", nullptr, 0},
	{"thumbnailStarted", "(I)V", nullptr, 0},
	{"warningOccurred", "(I)V", nullptr, $PROTECTED},
	{"warningWithMessage", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_abortRead 2
#define _METHOD_INDEX_clearNativeReadAbortFlag 7
#define _METHOD_INDEX_disposeReader 10
#define _METHOD_INDEX_initJPEGImageReader 27
#define _METHOD_INDEX_initReaderIDs 29
#define _METHOD_INDEX_readImage 36
#define _METHOD_INDEX_readImageHeader 37
#define _METHOD_INDEX_resetLibraryState 46
#define _METHOD_INDEX_resetReader 47
#define _METHOD_INDEX_setOutColorSpace 50
#define _METHOD_INDEX_setSource 51

$InnerClassInfo _JPEGImageReader_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "JPEGReaderDisposerRecord", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$2", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader",
	"javax.imageio.ImageReader",
	nullptr,
	_JPEGImageReader_FieldInfo_,
	_JPEGImageReader_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock,com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State,com.sun.imageio.plugins.jpeg.JPEGImageReader$JPEGReaderDisposerRecord,com.sun.imageio.plugins.jpeg.JPEGImageReader$2,com.sun.imageio.plugins.jpeg.JPEGImageReader$1"
};

$Object* allocate$JPEGImageReader($Class* clazz) {
	return $of($alloc(JPEGImageReader));
}

void JPEGImageReader::initStatic() {
	$init(JPEGImageReader);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JPEGImageReader$1)));
	$load($ImageInputStream);
	$load($JPEGQTable);
	$load($JPEGHuffmanTable);
	initReaderIDs($ImageInputStream::class$, $JPEGQTable::class$, $JPEGHuffmanTable::class$);
}

void JPEGImageReader::initReaderIDs($Class* iisClass, $Class* qTableClass, $Class* huffClass) {
	$init(JPEGImageReader);
	$prepareNativeStatic(JPEGImageReader, initReaderIDs, void, $Class* iisClass, $Class* qTableClass, $Class* huffClass);
	$invokeNativeStatic(iisClass, qTableClass, huffClass);
	$finishNativeStatic();
}

void JPEGImageReader::init$($ImageReaderSpi* originator) {
	$ImageReader::init$(originator);
	this->debug = false;
	this->structPointer = 0;
	$set(this, iis, nullptr);
	$set(this, imagePositions, nullptr);
	this->numImages = 0;
	this->currentImage = -1;
	$set(this, iccCS, nullptr);
	$set(this, convert, nullptr);
	$set(this, image, nullptr);
	$set(this, raster, nullptr);
	$set(this, target, nullptr);
	$set(this, buffer, nullptr);
	$set(this, destROI, nullptr);
	$set(this, destinationBands, nullptr);
	$set(this, streamMetadata, nullptr);
	$set(this, imageMetadata, nullptr);
	this->imageMetadataIndex = -1;
	this->haveSeeked = false;
	$set(this, abbrevQTables, nullptr);
	$set(this, abbrevDCHuffmanTables, nullptr);
	$set(this, abbrevACHuffmanTables, nullptr);
	this->minProgressivePass = 0;
	this->maxProgressivePass = $Integer::MAX_VALUE;
	this->knownPassCount = JPEGImageReader::UNKNOWN;
	this->pass = 0;
	this->percentToDate = 0.0f;
	this->previousPassPercentage = 0.0f;
	this->progInterval = 0;
	this->tablesOnlyChecked = false;
	$set(this, disposerReferent, $new($Object));
	$set(this, theThread, nullptr);
	this->theLockCount = 0;
	$set(this, cbLock, $new($JPEGImageReader$CallBackLock));
	this->structPointer = initJPEGImageReader();
	$set(this, disposerRecord, $new($JPEGImageReader$JPEGReaderDisposerRecord, this->structPointer));
	$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
}

int64_t JPEGImageReader::initJPEGImageReader() {
	int64_t $ret = 0;
	$prepareNative(JPEGImageReader, initJPEGImageReader, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void JPEGImageReader::warningOccurred(int32_t code) {
	$useLocalCurrentObjectStackCache();
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ((code < 0) || (code > JPEGImageReader::MAX_WARNING)) {
				$throwNew($InternalError, "Invalid warning index"_s);
			}
			processWarningOccurred("com.sun.imageio.plugins.jpeg.JPEGImageReaderResources"_s, $($Integer::toString(code)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::warningWithMessage($String* msg) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processWarningOccurred(msg);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
			this->ignoreMetadata = ignoreMetadata;
			resetInternalState();
			$set(this, iis, $cast($ImageInputStream, input));
			setSource(this->structPointer);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t JPEGImageReader::readInputData($bytes* buf, int32_t off, int32_t len) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $nc(this->iis)->read(buf, off, len);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t JPEGImageReader::skipInputBytes(int64_t n) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $nc(this->iis)->skipBytes(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void JPEGImageReader::setSource(int64_t structPointer) {
	$prepareNative(JPEGImageReader, setSource, void, int64_t structPointer);
	$invokeNative(structPointer);
	$finishNative();
}

void JPEGImageReader::checkTablesOnly() {
	$useLocalCurrentObjectStackCache();
	if (this->debug) {
		$nc($System::out)->println("Checking for tables-only image"_s);
	}
	int64_t savePos = $nc(this->iis)->getStreamPosition();
	if (this->debug) {
		$nc($System::out)->println($$str({"saved pos is "_s, $$str(savePos)}));
		$nc($System::out)->println($$str({"length is "_s, $$str($nc(this->iis)->length())}));
	}
	bool tablesOnly = readNativeHeader(true);
	if (tablesOnly) {
		if (this->debug) {
			$nc($System::out)->println("tables-only image found"_s);
			int64_t pos = $nc(this->iis)->getStreamPosition();
			$nc($System::out)->println($$str({"pos after return from native is "_s, $$str(pos)}));
		}
		if (this->ignoreMetadata == false) {
			$nc(this->iis)->seek(savePos);
			this->haveSeeked = true;
			$set(this, streamMetadata, $new($JPEGMetadata, true, false, this->iis, this));
			int64_t pos = $nc(this->iis)->getStreamPosition();
			if (this->debug) {
				$nc($System::out)->println($$str({"pos after constructing stream metadata is "_s, $$str(pos)}));
			}
		}
		if (hasNextImage()) {
			$nc(this->imagePositions)->add($($Long::valueOf($nc(this->iis)->getStreamPosition())));
		}
	} else {
		$nc(this->imagePositions)->add($($Long::valueOf(savePos)));
		this->currentImage = 0;
	}
	if (this->seekForwardOnly && !$nc(this->imagePositions)->isEmpty()) {
		$var($Long, pos, $cast($Long, $nc(this->imagePositions)->get($nc(this->imagePositions)->size() - 1)));
		$nc(this->iis)->flushBefore($nc(pos)->longValue());
	}
	this->tablesOnlyChecked = true;
}

int32_t JPEGImageReader::getNumImages(bool allowSearch) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			var$2 = getNumImagesOnThread(allowSearch);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void JPEGImageReader::skipPastImage(int32_t imageIndex) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				gotoImage(imageIndex);
				skipImage();
			} catch ($IOException& e) {
			} catch ($IndexOutOfBoundsException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t JPEGImageReader::getNumImagesOnThread(bool allowSearch) {
	if (this->numImages != 0) {
		return this->numImages;
	}
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, "Input not set"_s);
	}
	if (allowSearch == true) {
		if (this->seekForwardOnly) {
			$throwNew($IllegalStateException, "seekForwardOnly and allowSearch can\'t both be true!"_s);
		}
		if (!this->tablesOnlyChecked) {
			checkTablesOnly();
		}
		$nc(this->iis)->mark();
		gotoImage(0);
		$var($JPEGBuffer, buffer, $new($JPEGBuffer, this->iis));
		buffer->loadBuf(0);
		bool done = false;
		while (!done) {
			done = buffer->scanForFF(this);
			{
				int32_t length = 0;
				switch ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr) & (uint32_t)255)) {
				case $JPEG::SOI:
					{
						++this->numImages;
					}
				case 0:
					{}
				case $JPEG::RST0:
					{}
				case $JPEG::RST1:
					{}
				case $JPEG::RST2:
					{}
				case $JPEG::RST3:
					{}
				case $JPEG::RST4:
					{}
				case $JPEG::RST5:
					{}
				case $JPEG::RST6:
					{}
				case $JPEG::RST7:
					{}
				case $JPEG::EOI:
					{
						--buffer->bufAvail;
						++buffer->bufPtr;
						break;
					}
				default:
					{
						--buffer->bufAvail;
						++buffer->bufPtr;
						buffer->loadBuf(2);
						int32_t var$0 = (((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8);
						length = var$0 | ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255));
						buffer->bufAvail -= 2;
						length -= 2;
						buffer->skipData(length);
					}
				}
			}
		}
		$nc(this->iis)->reset();
		return this->numImages;
	}
	return -1;
}

void JPEGImageReader::gotoImage(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, "Input not set"_s);
	}
	if (imageIndex < this->minIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (!this->tablesOnlyChecked) {
		checkTablesOnly();
	}
	if ($nc(this->imagePositions)->isEmpty()) {
		$throwNew($IIOException, "No image data present to read"_s);
	}
	if (imageIndex < $nc(this->imagePositions)->size()) {
		$nc(this->iis)->seek($nc(($cast($Long, $($nc(this->imagePositions)->get(imageIndex)))))->longValue());
	} else {
		$var($Long, pos, $cast($Long, $nc(this->imagePositions)->get($nc(this->imagePositions)->size() - 1)));
		$nc(this->iis)->seek($nc(pos)->longValue());
		skipImage();
		for (int32_t index = $nc(this->imagePositions)->size(); index <= imageIndex; ++index) {
			if (!hasNextImage()) {
				$throwNew($IndexOutOfBoundsException);
			}
			$assign(pos, $Long::valueOf($nc(this->iis)->getStreamPosition()));
			$nc(this->imagePositions)->add(pos);
			if (this->seekForwardOnly) {
				$nc(this->iis)->flushBefore($nc(pos)->longValue());
			}
			if (index < imageIndex) {
				skipImage();
			}
		}
	}
	if (this->seekForwardOnly) {
		this->minIndex = imageIndex;
	}
	this->haveSeeked = true;
}

void JPEGImageReader::skipImage() {
	$useLocalCurrentObjectStackCache();
	if (this->debug) {
		$nc($System::out)->println("skipImage called"_s);
	}
	int32_t initialFF = $nc(this->iis)->read();
	if (initialFF == 255) {
		int32_t soiMarker = $nc(this->iis)->read();
		if (soiMarker != $JPEG::SOI) {
			$throwNew($IOException, "skipImage : Invalid image doesn\'t start with SOI marker"_s);
		}
	} else {
		$throwNew($IOException, "skipImage : Invalid image doesn\'t start with 0xff"_s);
	}
	bool foundFF = false;
	$var($String, IOOBE, "skipImage : Reached EOF before we got EOI marker"_s);
	int32_t markerLength = 2;
	for (int32_t byteval = $nc(this->iis)->read(); byteval != -1; byteval = $nc(this->iis)->read()) {
		if (foundFF == true) {
			{
				int32_t lengthHigherBits = 0;
				int32_t lengthLowerBits = 0;
				int32_t length = 0;
				do {
					if (byteval == $JPEG::EOI) {
						goto case$0;
					}
					if (byteval == $JPEG::SOI) {
						goto case$1;
					}
					if (byteval == 0) {
						goto case$2;
					}
					if (byteval == 255) {
						goto case$3;
					}
					if (byteval == $JPEG::RST0) {
						goto case$4;
					}
					if (byteval == $JPEG::RST1) {
						goto case$5;
					}
					if (byteval == $JPEG::RST2) {
						goto case$6;
					}
					if (byteval == $JPEG::RST3) {
						goto case$7;
					}
					if (byteval == $JPEG::RST4) {
						goto case$8;
					}
					if (byteval == $JPEG::RST5) {
						goto case$9;
					}
					if (byteval == $JPEG::RST6) {
						goto case$10;
					}
					if (byteval == $JPEG::RST7) {
						goto case$11;
					}
					if (byteval == $JPEG::TEM) {
						goto case$12;
					}
					if (byteval == $JPEG::SOF0) {
						goto case$13;
					}
					if (byteval == $JPEG::SOF1) {
						goto case$14;
					}
					if (byteval == $JPEG::SOF2) {
						goto case$15;
					}
					if (byteval == $JPEG::SOF3) {
						goto case$16;
					}
					if (byteval == $JPEG::DHT) {
						goto case$17;
					}
					if (byteval == $JPEG::SOF5) {
						goto case$18;
					}
					if (byteval == $JPEG::SOF6) {
						goto case$19;
					}
					if (byteval == $JPEG::SOF7) {
						goto case$20;
					}
					if (byteval == $JPEG::JPG) {
						goto case$21;
					}
					if (byteval == $JPEG::SOF9) {
						goto case$22;
					}
					if (byteval == $JPEG::SOF10) {
						goto case$23;
					}
					if (byteval == $JPEG::SOF11) {
						goto case$24;
					}
					if (byteval == $JPEG::DAC) {
						goto case$25;
					}
					if (byteval == $JPEG::SOF13) {
						goto case$26;
					}
					if (byteval == $JPEG::SOF14) {
						goto case$27;
					}
					if (byteval == $JPEG::SOF15) {
						goto case$28;
					}
					if (byteval == $JPEG::SOS) {
						goto case$29;
					}
					if (byteval == $JPEG::DQT) {
						goto case$30;
					}
					if (byteval == $JPEG::DNL) {
						goto case$31;
					}
					if (byteval == $JPEG::DRI) {
						goto case$32;
					}
					if (byteval == $JPEG::DHP) {
						goto case$33;
					}
					if (byteval == $JPEG::EXP) {
						goto case$34;
					}
					if (byteval == $JPEG::APP0) {
						goto case$35;
					}
					if (byteval == $JPEG::APP1) {
						goto case$36;
					}
					if (byteval == $JPEG::APP2) {
						goto case$37;
					}
					if (byteval == $JPEG::APP3) {
						goto case$38;
					}
					if (byteval == $JPEG::APP4) {
						goto case$39;
					}
					if (byteval == $JPEG::APP5) {
						goto case$40;
					}
					if (byteval == $JPEG::APP6) {
						goto case$41;
					}
					if (byteval == $JPEG::APP7) {
						goto case$42;
					}
					if (byteval == $JPEG::APP8) {
						goto case$43;
					}
					if (byteval == $JPEG::APP9) {
						goto case$44;
					}
					if (byteval == $JPEG::APP10) {
						goto case$45;
					}
					if (byteval == $JPEG::APP11) {
						goto case$46;
					}
					if (byteval == $JPEG::APP12) {
						goto case$47;
					}
					if (byteval == $JPEG::APP13) {
						goto case$48;
					}
					if (byteval == $JPEG::APP14) {
						goto case$49;
					}
					if (byteval == $JPEG::APP15) {
						goto case$50;
					}
					if (byteval == $JPEG::COM) {
						goto case$51;
					}
					if (byteval == (-1)) {
						goto case$52;
					}
					goto case$53;
case$0:
					// JPEG.EOI
					{
						if (this->debug) {
							$nc($System::out)->println($$str({"skipImage : Found EOI at "_s, $$str(($nc(this->iis)->getStreamPosition() - markerLength))}));
						}
						return;
					}
case$1:
					// JPEG.SOI
					{
						$throwNew($IOException, "skipImage : Found extra SOI marker before getting to EOI"_s);
					}
case$2:
					// 0
					{
					}
case$3:
					// 255
					{
					}
case$4:
					// JPEG.RST0
					{
					}
case$5:
					// JPEG.RST1
					{
					}
case$6:
					// JPEG.RST2
					{
					}
case$7:
					// JPEG.RST3
					{
					}
case$8:
					// JPEG.RST4
					{
					}
case$9:
					// JPEG.RST5
					{
					}
case$10:
					// JPEG.RST6
					{
					}
case$11:
					// JPEG.RST7
					{
					}
case$12:
					// JPEG.TEM
					{
						break;
					}
case$13:
					// JPEG.SOF0
					{
					}
case$14:
					// JPEG.SOF1
					{
					}
case$15:
					// JPEG.SOF2
					{
					}
case$16:
					// JPEG.SOF3
					{
					}
case$17:
					// JPEG.DHT
					{
					}
case$18:
					// JPEG.SOF5
					{
					}
case$19:
					// JPEG.SOF6
					{
					}
case$20:
					// JPEG.SOF7
					{
					}
case$21:
					// JPEG.JPG
					{
					}
case$22:
					// JPEG.SOF9
					{
					}
case$23:
					// JPEG.SOF10
					{
					}
case$24:
					// JPEG.SOF11
					{
					}
case$25:
					// JPEG.DAC
					{
					}
case$26:
					// JPEG.SOF13
					{
					}
case$27:
					// JPEG.SOF14
					{
					}
case$28:
					// JPEG.SOF15
					{
					}
case$29:
					// JPEG.SOS
					{
					}
case$30:
					// JPEG.DQT
					{
					}
case$31:
					// JPEG.DNL
					{
					}
case$32:
					// JPEG.DRI
					{
					}
case$33:
					// JPEG.DHP
					{
					}
case$34:
					// JPEG.EXP
					{
					}
case$35:
					// JPEG.APP0
					{
					}
case$36:
					// JPEG.APP1
					{
					}
case$37:
					// JPEG.APP2
					{
					}
case$38:
					// JPEG.APP3
					{
					}
case$39:
					// JPEG.APP4
					{
					}
case$40:
					// JPEG.APP5
					{
					}
case$41:
					// JPEG.APP6
					{
					}
case$42:
					// JPEG.APP7
					{
					}
case$43:
					// JPEG.APP8
					{
					}
case$44:
					// JPEG.APP9
					{
					}
case$45:
					// JPEG.APP10
					{
					}
case$46:
					// JPEG.APP11
					{
					}
case$47:
					// JPEG.APP12
					{
					}
case$48:
					// JPEG.APP13
					{
					}
case$49:
					// JPEG.APP14
					{
					}
case$50:
					// JPEG.APP15
					{
					}
case$51:
					// JPEG.COM
					{
						lengthHigherBits = $nc(this->iis)->read();
						if (lengthHigherBits != (-1)) {
							lengthLowerBits = $nc(this->iis)->read();
							if (lengthLowerBits != (-1)) {
								length = (lengthHigherBits << 8) | lengthLowerBits;
								length -= 2;
							} else {
								$throwNew($IndexOutOfBoundsException, IOOBE);
							}
						} else {
							$throwNew($IndexOutOfBoundsException, IOOBE);
						}
						$nc(this->iis)->skipBytes(length);
						break;
					}
case$52:
					// (-1)
					{
						$throwNew($IndexOutOfBoundsException, IOOBE);
					}
case$53:
					// default
					{
						$throwNew($IOException, $$str({"skipImage : Invalid marker starting with ff "_s, $($Integer::toHexString(byteval))}));
					}
				} while (false);
			}
		}
		foundFF = (byteval == 255);
	}
	$throwNew($IndexOutOfBoundsException, IOOBE);
}

bool JPEGImageReader::hasNextImage() {
	if (this->debug) {
		$nc($System::out)->print("hasNextImage called; returning "_s);
	}
	$nc(this->iis)->mark();
	bool foundFF = false;
	for (int32_t byteval = $nc(this->iis)->read(); byteval != -1; byteval = $nc(this->iis)->read()) {
		if (foundFF == true) {
			if (byteval == $JPEG::SOI) {
				$nc(this->iis)->reset();
				if (this->debug) {
					$nc($System::out)->println("true"_s);
				}
				return true;
			}
		}
		foundFF = (byteval == 255) ? true : false;
	}
	$nc(this->iis)->reset();
	if (this->debug) {
		$nc($System::out)->println("false"_s);
	}
	return false;
}

void JPEGImageReader::pushBack(int32_t num) {
	$useLocalCurrentObjectStackCache();
	if (this->debug) {
		$nc($System::out)->println($$str({"pushing back "_s, $$str(num), " bytes"_s}));
	}
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->iis)->seek($nc(this->iis)->getStreamPosition() - num);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::readHeader(int32_t imageIndex, bool reset) {
	gotoImage(imageIndex);
	readNativeHeader(reset);
	this->currentImage = imageIndex;
}

bool JPEGImageReader::readNativeHeader(bool reset) {
	bool retval = false;
	retval = readImageHeader(this->structPointer, this->haveSeeked, reset);
	this->haveSeeked = false;
	return retval;
}

bool JPEGImageReader::readImageHeader(int64_t structPointer, bool clearBuffer, bool reset) {
	bool $ret = false;
	$prepareNative(JPEGImageReader, readImageHeader, bool, int64_t structPointer, bool clearBuffer, bool reset);
	$ret = $invokeNative(structPointer, clearBuffer, reset);
	$finishNative();
	return $ret;
}

void JPEGImageReader::setImageData(int32_t width, int32_t height, int32_t colorSpaceCode, int32_t outColorSpaceCode, int32_t numComponents, $bytes* iccData) {
	$useLocalCurrentObjectStackCache();
	this->width = width;
	this->height = height;
	this->colorSpaceCode = colorSpaceCode;
	this->outColorSpaceCode = outColorSpaceCode;
	this->numComponents = numComponents;
	if (iccData == nullptr) {
		$set(this, iccCS, nullptr);
		return;
	}
	$var($ICC_Profile, newProfile, nullptr);
	try {
		$assign(newProfile, $ICC_Profile::getInstance(iccData));
	} catch ($IllegalArgumentException& e) {
		$set(this, iccCS, nullptr);
		warningOccurred(JPEGImageReader::WARNING_IGNORE_INVALID_ICC);
		return;
	}
	$var($bytes, newData, $nc(newProfile)->getData());
	$var($ICC_Profile, oldProfile, nullptr);
	if ($instanceOf($ICC_ColorSpace, this->iccCS)) {
		$assign(oldProfile, $nc(($cast($ICC_ColorSpace, this->iccCS)))->getProfile());
	}
	$var($bytes, oldData, nullptr);
	if (oldProfile != nullptr) {
		$assign(oldData, oldProfile->getData());
	}
	if (oldData == nullptr || !$Arrays::equals(oldData, newData)) {
		$set(this, iccCS, $new($ICC_ColorSpace, newProfile));
		try {
			$var($floats, colors, $nc(this->iccCS)->fromRGB($$new($floats, {
				1.0f,
				0.0f,
				0.0f
			})));
		} catch ($CMMException& e) {
			$set(this, iccCS, nullptr);
			$nc(this->cbLock)->lock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					warningOccurred(JPEGImageReader::WARNING_IGNORE_INVALID_ICC);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$nc(this->cbLock)->unlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

int32_t JPEGImageReader::getWidth(int32_t imageIndex) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->currentImage != imageIndex) {
				$nc(this->cbLock)->check();
				readHeader(imageIndex, true);
			}
			var$2 = this->width;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t JPEGImageReader::getHeight(int32_t imageIndex) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->currentImage != imageIndex) {
				$nc(this->cbLock)->check();
				readHeader(imageIndex, true);
			}
			var$2 = this->height;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ImageTypeProducer* JPEGImageReader::getImageType(int32_t code) {
	$var($ImageTypeProducer, ret, nullptr);
	if ((code > 0) && (code < $JPEG::NUM_JCS_CODES)) {
		$assign(ret, $ImageTypeProducer::getTypeProducer(code));
	}
	return ret;
}

$ImageTypeSpecifier* JPEGImageReader::getRawImageType(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ImageTypeSpecifier, var$2, nullptr);
		bool return$1 = false;
		try {
			if (this->currentImage != imageIndex) {
				$nc(this->cbLock)->check();
				readHeader(imageIndex, true);
			}
			$assign(var$2, $nc($(getImageType(this->colorSpaceCode)))->getType());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Iterator* JPEGImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Iterator, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getImageTypesOnThread(imageIndex));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Iterator* JPEGImageReader::getImageTypesOnThread(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->currentImage != imageIndex) {
		$nc(this->cbLock)->check();
		readHeader(imageIndex, true);
	}
	$var($ImageTypeProducer, raw, getImageType(this->colorSpaceCode));
	$var($ArrayList, list, $new($ArrayList, 1));
	switch (this->colorSpaceCode) {
	case $JPEG::JCS_GRAYSCALE:
		{
			list->add(raw);
			list->add($(getImageType($JPEG::JCS_RGB)));
			break;
		}
	case $JPEG::JCS_RGB:
		{
			list->add(raw);
			list->add($(getImageType($JPEG::JCS_GRAYSCALE)));
			break;
		}
	case $JPEG::JCS_YCbCr:
		{
			list->add($(getImageType($JPEG::JCS_RGB)));
			if (this->iccCS != nullptr) {
				list->add($$new($JPEGImageReader$2, this));
			}
			list->add($(getImageType($JPEG::JCS_GRAYSCALE)));
			break;
		}
	}
	return $new($ImageTypeIterator, $(list->iterator()));
}

void JPEGImageReader::checkColorConversion($BufferedImage* image, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	if (param != nullptr) {
		bool var$0 = (param->getSourceBands() != nullptr);
		if (var$0 || (param->getDestinationBands() != nullptr)) {
			return;
		}
	}
	$var($ColorModel, cm, $nc(image)->getColorModel());
	if ($instanceOf($IndexColorModel, cm)) {
		$throwNew($IIOException, "IndexColorModel not supported"_s);
	}
	$var($ColorSpace, cs, $nc(cm)->getColorSpace());
	int32_t csType = $nc(cs)->getType();
	$set(this, convert, nullptr);
	switch (this->outColorSpaceCode) {
	case $JPEG::JCS_GRAYSCALE:
		{
			if (csType == $ColorSpace::TYPE_RGB) {
				setOutColorSpace(this->structPointer, $JPEG::JCS_RGB);
				this->outColorSpaceCode = $JPEG::JCS_RGB;
				this->numComponents = 3;
			} else if (csType != $ColorSpace::TYPE_GRAY) {
				$throwNew($IIOException, "Incompatible color conversion"_s);
			}
			break;
		}
	case $JPEG::JCS_RGB:
		{
			if (csType == $ColorSpace::TYPE_GRAY) {
				if (this->colorSpaceCode == $JPEG::JCS_YCbCr) {
					setOutColorSpace(this->structPointer, $JPEG::JCS_GRAYSCALE);
					this->outColorSpaceCode = $JPEG::JCS_GRAYSCALE;
					this->numComponents = 1;
				}
			} else if ((this->iccCS != nullptr) && (cm->getNumComponents() == this->numComponents) && (cs != this->iccCS)) {
				$set(this, convert, $new($ColorConvertOp, this->iccCS, cs, nullptr));
			} else {
				bool var$2 = (this->iccCS == nullptr) && (!cs->isCS_sRGB());
				if (var$2 && (cm->getNumComponents() == this->numComponents)) {
					$init($JPEG);
					$set(this, convert, $new($ColorConvertOp, $JPEG::sRGB, cs, nullptr));
				} else if (csType != $ColorSpace::TYPE_RGB) {
					$throwNew($IIOException, "Incompatible color conversion"_s);
				}
			}
			break;
		}
	default:
		{
			$throwNew($IIOException, "Incompatible color conversion"_s);
		}
	}
}

void JPEGImageReader::setOutColorSpace(int64_t structPointer, int32_t id) {
	$prepareNative(JPEGImageReader, setOutColorSpace, void, int64_t structPointer, int32_t id);
	$invokeNative(structPointer, id);
	$finishNative();
}

$ImageReadParam* JPEGImageReader::getDefaultReadParam() {
	return $new($JPEGImageReadParam);
}

$IIOMetadata* JPEGImageReader::getStreamMetadata() {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($IIOMetadata, var$2, nullptr);
		bool return$1 = false;
		try {
			if (!this->tablesOnlyChecked) {
				$nc(this->cbLock)->check();
				checkTablesOnly();
			}
			$assign(var$2, this->streamMetadata);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$IIOMetadata* JPEGImageReader::getImageMetadata(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($IIOMetadata, var$2, nullptr);
		bool return$1 = false;
		try {
			if ((this->imageMetadataIndex == imageIndex) && (this->imageMetadata != nullptr)) {
				$assign(var$2, this->imageMetadata);
				return$1 = true;
				goto $finally;
			}
			$nc(this->cbLock)->check();
			gotoImage(imageIndex);
			$set(this, imageMetadata, $new($JPEGMetadata, false, false, this->iis, this));
			this->imageMetadataIndex = imageIndex;
			$assign(var$2, this->imageMetadata);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$BufferedImage* JPEGImageReader::read(int32_t imageIndex, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($BufferedImage, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			try {
				readInternal(imageIndex, param, false);
			} catch ($RuntimeException& e) {
				resetLibraryState(this->structPointer);
				$throw(e);
			} catch ($IOException& e) {
				resetLibraryState(this->structPointer);
				$throw(e);
			}
			$var($BufferedImage, ret, this->image);
			$set(this, image, nullptr);
			$assign(var$2, ret);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Raster* JPEGImageReader::readInternal(int32_t imageIndex, $ImageReadParam* param, bool wantRaster) {
	$useLocalCurrentObjectStackCache();
	readHeader(imageIndex, false);
	$var($WritableRaster, imRas, nullptr);
	int32_t numImageBands = 0;
	if (!wantRaster) {
		$var($Iterator, imageTypes, getImageTypes(imageIndex));
		if ($nc(imageTypes)->hasNext() == false) {
			$throwNew($IIOException, "Unsupported Image Type"_s);
		}
		$set(this, image, getDestination(param, imageTypes, this->width, this->height));
		$assign(imRas, $nc(this->image)->getRaster());
		numImageBands = $nc($($nc(this->image)->getSampleModel()))->getNumBands();
		checkColorConversion(this->image, param);
		checkReadParamBandSettings(param, this->numComponents, numImageBands);
	} else {
		setOutColorSpace(this->structPointer, this->colorSpaceCode);
		$set(this, image, nullptr);
	}
	$init($JPEG);
	$var($ints, srcBands, $nc($JPEG::bandOffsets)->get(this->numComponents - 1));
	int32_t numRasterBands = (wantRaster ? this->numComponents : numImageBands);
	$set(this, destinationBands, nullptr);
	$var($Rectangle, srcROI, $new($Rectangle, 0, 0, 0, 0));
	$set(this, destROI, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(param, this->width, this->height, this->image, srcROI, this->destROI);
	int32_t periodX = 1;
	int32_t periodY = 1;
	this->minProgressivePass = 0;
	this->maxProgressivePass = $Integer::MAX_VALUE;
	if (param != nullptr) {
		periodX = param->getSourceXSubsampling();
		periodY = param->getSourceYSubsampling();
		$var($ints, sBands, param->getSourceBands());
		if (sBands != nullptr) {
			$assign(srcBands, sBands);
			numRasterBands = srcBands->length;
		}
		if (!wantRaster) {
			$set(this, destinationBands, param->getDestinationBands());
		}
		this->minProgressivePass = param->getSourceMinProgressivePass();
		this->maxProgressivePass = param->getSourceMaxProgressivePass();
		if ($instanceOf($JPEGImageReadParam, param)) {
			$var($JPEGImageReadParam, jparam, $cast($JPEGImageReadParam, param));
			if (jparam->areTablesSet()) {
				$set(this, abbrevQTables, jparam->getQTables());
				$set(this, abbrevDCHuffmanTables, jparam->getDCHuffmanTables());
				$set(this, abbrevACHuffmanTables, jparam->getACHuffmanTables());
			}
		}
	}
	int32_t lineSize = $nc(this->destROI)->width * numRasterBands;
	$set(this, buffer, $new($DataBufferByte, lineSize));
	$var($ints, bandOffs, $nc($JPEG::bandOffsets)->get(numRasterBands - 1));
	$set(this, raster, $Raster::createInterleavedRaster(static_cast<$DataBuffer*>(this->buffer), $nc(this->destROI)->width, 1, lineSize, numRasterBands, bandOffs, ($Point*)nullptr));
	if (wantRaster) {
		$set(this, target, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, $nc(this->destROI)->width, $nc(this->destROI)->height, lineSize, numRasterBands, bandOffs, ($Point*)nullptr));
	} else {
		$set(this, target, imRas);
	}
	$var($ints, bandSizes, $nc($($nc(this->target)->getSampleModel()))->getSampleSize());
	for (int32_t i = 0; i < $nc(bandSizes)->length; ++i) {
		if (bandSizes->get(i) <= 0 || bandSizes->get(i) > 8) {
			$throwNew($IIOException, "Illegal band size: should be 0 < size <= 8"_s);
		}
	}
	bool callbackUpdates = ((this->updateListeners != nullptr) || (this->progressListeners != nullptr));
	initProgressData();
	if (imageIndex == this->imageMetadataIndex) {
		this->knownPassCount = 0;
		{
			$var($Iterator, iter, $nc($nc(this->imageMetadata)->markerSequence)->iterator());
			for (; $nc(iter)->hasNext();) {
				if ($instanceOf($SOSMarkerSegment, $(iter->next()))) {
					++this->knownPassCount;
				}
			}
		}
	}
	this->progInterval = $Math::max(($nc(this->target)->getHeight() - 1) / 20, 1);
	if (this->knownPassCount > 0) {
		this->progInterval *= this->knownPassCount;
	} else if (this->maxProgressivePass != $Integer::MAX_VALUE) {
		this->progInterval *= (this->maxProgressivePass - this->minProgressivePass + 1);
	}
	if (this->debug) {
		$nc($System::out)->println("**** Read Data *****"_s);
		$nc($System::out)->println($$str({"numRasterBands is "_s, $$str(numRasterBands)}));
		$nc($System::out)->print("srcBands:"_s);
		for (int32_t i = 0; i < $nc(srcBands)->length; ++i) {
			$nc($System::out)->print($$str({" "_s, $$str(srcBands->get(i))}));
		}
		$nc($System::out)->println();
		$nc($System::out)->println($$str({"destination bands is "_s, this->destinationBands}));
		if (this->destinationBands != nullptr) {
			for (int32_t i = 0; i < $nc(this->destinationBands)->length; ++i) {
				$nc($System::out)->print($$str({" "_s, $$str($nc(this->destinationBands)->get(i))}));
			}
			$nc($System::out)->println();
		}
		$nc($System::out)->println($$str({"sourceROI is "_s, srcROI}));
		$nc($System::out)->println($$str({"destROI is "_s, this->destROI}));
		$nc($System::out)->println($$str({"periodX is "_s, $$str(periodX)}));
		$nc($System::out)->println($$str({"periodY is "_s, $$str(periodY)}));
		$nc($System::out)->println($$str({"minProgressivePass is "_s, $$str(this->minProgressivePass)}));
		$nc($System::out)->println($$str({"maxProgressivePass is "_s, $$str(this->maxProgressivePass)}));
		$nc($System::out)->println($$str({"callbackUpdates is "_s, $$str(callbackUpdates)}));
	}
	clearNativeReadAbortFlag(this->structPointer);
	processImageStarted(this->currentImage);
	bool aborted = readImage(imageIndex, this->structPointer, $($nc(this->buffer)->getData()), numRasterBands, srcBands, bandSizes, srcROI->x, srcROI->y, srcROI->width, srcROI->height, periodX, periodY, this->abbrevQTables, this->abbrevDCHuffmanTables, this->abbrevACHuffmanTables, this->minProgressivePass, this->maxProgressivePass, callbackUpdates);
	if (aborted) {
		processReadAborted();
	} else {
		processImageComplete();
	}
	return this->target;
}

void JPEGImageReader::acceptPixels(int32_t y, bool progressive) {
	$useLocalCurrentObjectStackCache();
	if (this->convert != nullptr) {
		$nc(this->convert)->filter(static_cast<$Raster*>(this->raster), this->raster);
	}
	$nc(this->target)->setRect($nc(this->destROI)->x, $nc(this->destROI)->y + y, this->raster);
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processImageUpdate(this->image, $nc(this->destROI)->x, $nc(this->destROI)->y + y, $nc(this->raster)->getWidth(), 1, 1, 1, this->destinationBands);
			if ((y > 0) && ($mod(y, this->progInterval) == 0)) {
				int32_t height = $nc(this->target)->getHeight() - 1;
				float percentOfPass = ((float)y) / height;
				if (progressive) {
					if (this->knownPassCount != JPEGImageReader::UNKNOWN) {
						processImageProgress((this->pass + percentOfPass) * 100.0f / this->knownPassCount);
					} else if (this->maxProgressivePass != $Integer::MAX_VALUE) {
						processImageProgress((this->pass + percentOfPass) * 100.0f / (this->maxProgressivePass - this->minProgressivePass + 1));
					} else {
						int32_t remainingPasses = $Math::max(2, JPEGImageReader::MIN_ESTIMATED_PASSES - this->pass);
						int32_t totalPasses = this->pass + remainingPasses - 1;
						this->progInterval = $Math::max(height / 20 * totalPasses, totalPasses);
						if ($mod(y, this->progInterval) == 0) {
							this->percentToDate = this->previousPassPercentage + (1.0f - this->previousPassPercentage) * (percentOfPass) / remainingPasses;
							if (this->debug) {
								$nc($System::out)->print($$str({"pass= "_s, $$str(this->pass)}));
								$nc($System::out)->print($$str({", y= "_s, $$str(y)}));
								$nc($System::out)->print($$str({", progInt= "_s, $$str(this->progInterval)}));
								$nc($System::out)->print($$str({", % of pass: "_s, $$str(percentOfPass)}));
								$nc($System::out)->print($$str({", rem. passes: "_s, $$str(remainingPasses)}));
								$nc($System::out)->print($$str({", prev%: "_s, $$str(this->previousPassPercentage)}));
								$nc($System::out)->print($$str({", %ToDate: "_s, $$str(this->percentToDate)}));
								$nc($System::out)->print(" "_s);
							}
							processImageProgress(this->percentToDate * 100.0f);
						}
					}
				} else {
					processImageProgress(percentOfPass * 100.0f);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::initProgressData() {
	this->knownPassCount = JPEGImageReader::UNKNOWN;
	this->pass = 0;
	this->percentToDate = 0.0f;
	this->previousPassPercentage = 0.0f;
	this->progInterval = 0;
}

void JPEGImageReader::passStarted(int32_t pass) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->pass = pass;
			this->previousPassPercentage = this->percentToDate;
			processPassStarted(this->image, pass, this->minProgressivePass, this->maxProgressivePass, 0, 0, 1, 1, this->destinationBands);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::passComplete() {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processPassComplete(this->image);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::thumbnailStarted(int32_t thumbnailIndex) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processThumbnailStarted(this->currentImage, thumbnailIndex);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::thumbnailProgress(float percentageDone) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processThumbnailProgress(percentageDone);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::thumbnailComplete() {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processThumbnailComplete();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool JPEGImageReader::readImage(int32_t imageIndex, int64_t structPointer, $bytes* buffer, int32_t numRasterBands, $ints* srcBands, $ints* bandSizes, int32_t sourceXOffset, int32_t sourceYOffset, int32_t sourceWidth, int32_t sourceHeight, int32_t periodX, int32_t periodY, $JPEGQTableArray* abbrevQTables, $JPEGHuffmanTableArray* abbrevDCHuffmanTables, $JPEGHuffmanTableArray* abbrevACHuffmanTables, int32_t minProgressivePass, int32_t maxProgressivePass, bool wantUpdates) {
	bool $ret = false;
	$prepareNative(JPEGImageReader, readImage, bool, int32_t imageIndex, int64_t structPointer, $bytes* buffer, int32_t numRasterBands, $ints* srcBands, $ints* bandSizes, int32_t sourceXOffset, int32_t sourceYOffset, int32_t sourceWidth, int32_t sourceHeight, int32_t periodX, int32_t periodY, $JPEGQTableArray* abbrevQTables, $JPEGHuffmanTableArray* abbrevDCHuffmanTables, $JPEGHuffmanTableArray* abbrevACHuffmanTables, int32_t minProgressivePass, int32_t maxProgressivePass, bool wantUpdates);
	$ret = $invokeNative(imageIndex, structPointer, buffer, numRasterBands, srcBands, bandSizes, sourceXOffset, sourceYOffset, sourceWidth, sourceHeight, periodX, periodY, abbrevQTables, abbrevDCHuffmanTables, abbrevACHuffmanTables, minProgressivePass, maxProgressivePass, wantUpdates);
	$finishNative();
	return $ret;
}

void JPEGImageReader::clearNativeReadAbortFlag(int64_t structPointer) {
	$prepareNative(JPEGImageReader, clearNativeReadAbortFlag, void, int64_t structPointer);
	$invokeNative(structPointer);
	$finishNative();
}

void JPEGImageReader::abort() {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$ImageReader::abort();
			abortRead(this->structPointer);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::abortRead(int64_t structPointer) {
	$prepareNative(JPEGImageReader, abortRead, void, int64_t structPointer);
	$invokeNative(structPointer);
	$finishNative();
}

void JPEGImageReader::resetLibraryState(int64_t structPointer) {
	$prepareNative(JPEGImageReader, resetLibraryState, void, int64_t structPointer);
	$invokeNative(structPointer);
	$finishNative();
}

bool JPEGImageReader::canReadRaster() {
	return true;
}

$Raster* JPEGImageReader::readRaster(int32_t imageIndex, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	$var($Raster, retval, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->cbLock)->check();
				$var($Point, saveDestOffset, nullptr);
				if (param != nullptr) {
					$assign(saveDestOffset, param->getDestinationOffset());
					param->setDestinationOffset($$new($Point, 0, 0));
				}
				$assign(retval, readInternal(imageIndex, param, true));
				if (saveDestOffset != nullptr) {
					$set(this, target, $nc(this->target)->createWritableTranslatedChild(saveDestOffset->x, saveDestOffset->y));
				}
			} catch ($RuntimeException& e) {
				resetLibraryState(this->structPointer);
				$throw(e);
			} catch ($IOException& e) {
				resetLibraryState(this->structPointer);
				$throw(e);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return retval;
}

bool JPEGImageReader::readerSupportsThumbnails() {
	return true;
}

int32_t JPEGImageReader::getNumThumbnails(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			getImageMetadata(imageIndex);
			$load($JFIFMarkerSegment);
			$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, $nc(this->imageMetadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
			int32_t retval = 0;
			if (jfif != nullptr) {
				retval = (jfif->thumb == nullptr) ? 0 : 1;
				retval += $nc(jfif->extSegments)->size();
			}
			var$2 = retval;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t JPEGImageReader::getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			if ((thumbnailIndex < 0) || (thumbnailIndex >= getNumThumbnails(imageIndex))) {
				$throwNew($IndexOutOfBoundsException, "No such thumbnail"_s);
			}
			$load($JFIFMarkerSegment);
			$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, $nc(this->imageMetadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
			var$2 = $nc(jfif)->getThumbnailWidth(thumbnailIndex);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t JPEGImageReader::getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			if ((thumbnailIndex < 0) || (thumbnailIndex >= getNumThumbnails(imageIndex))) {
				$throwNew($IndexOutOfBoundsException, "No such thumbnail"_s);
			}
			$load($JFIFMarkerSegment);
			$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, $nc(this->imageMetadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
			var$2 = $nc(jfif)->getThumbnailHeight(thumbnailIndex);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$BufferedImage* JPEGImageReader::readThumbnail(int32_t imageIndex, int32_t thumbnailIndex) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($BufferedImage, var$2, nullptr);
		bool return$1 = false;
		try {
			$nc(this->cbLock)->check();
			if ((thumbnailIndex < 0) || (thumbnailIndex >= getNumThumbnails(imageIndex))) {
				$throwNew($IndexOutOfBoundsException, "No such thumbnail"_s);
			}
			$load($JFIFMarkerSegment);
			$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, $nc(this->imageMetadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
			$assign(var$2, $nc(jfif)->getThumbnail(this->iis, thumbnailIndex, this));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void JPEGImageReader::resetInternalState() {
	resetReader(this->structPointer);
	this->numImages = 0;
	$set(this, imagePositions, $new($ArrayList));
	this->currentImage = -1;
	$set(this, image, nullptr);
	$set(this, raster, nullptr);
	$set(this, target, nullptr);
	$set(this, buffer, nullptr);
	$set(this, destROI, nullptr);
	$set(this, destinationBands, nullptr);
	$set(this, streamMetadata, nullptr);
	$set(this, imageMetadata, nullptr);
	this->imageMetadataIndex = -1;
	this->haveSeeked = false;
	this->tablesOnlyChecked = false;
	$set(this, iccCS, nullptr);
	initProgressData();
}

void JPEGImageReader::reset() {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			$ImageReader::reset();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::resetReader(int64_t structPointer) {
	$prepareNative(JPEGImageReader, resetReader, void, int64_t structPointer);
	$invokeNative(structPointer);
	$finishNative();
}

void JPEGImageReader::dispose() {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			if (this->structPointer != 0) {
				$nc(this->disposerRecord)->dispose();
				this->structPointer = 0;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			clearThreadLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JPEGImageReader::disposeReader(int64_t structPointer) {
	$init(JPEGImageReader);
	$prepareNativeStatic(JPEGImageReader, disposeReader, void, int64_t structPointer);
	$invokeNativeStatic(structPointer);
	$finishNativeStatic();
}

void JPEGImageReader::setThreadLock() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Thread, currThread, $Thread::currentThread());
		if (this->theThread != nullptr) {
			if (this->theThread != currThread) {
				$throwNew($IllegalStateException, $$str({"Attempt to use instance of "_s, this, " locked on thread "_s, this->theThread, " from thread "_s, currThread}));
			} else {
				++this->theLockCount;
			}
		} else {
			$set(this, theThread, currThread);
			this->theLockCount = 1;
		}
	}
}

void JPEGImageReader::clearThreadLock() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Thread, currThread, $Thread::currentThread());
		if (this->theThread == nullptr || this->theThread != currThread) {
			$throwNew($IllegalStateException, $$str({"Attempt to clear thread lock  form wrong thread. Locked thread: "_s, this->theThread, "; current thread: "_s, currThread}));
		}
		--this->theLockCount;
		if (this->theLockCount == 0) {
			$set(this, theThread, nullptr);
		}
	}
}

void clinit$JPEGImageReader($Class* class$) {
	{
		JPEGImageReader::initStatic();
	}
}

JPEGImageReader::JPEGImageReader() {
}

$Class* JPEGImageReader::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReader, name, initialize, &_JPEGImageReader_ClassInfo_, clinit$JPEGImageReader, allocate$JPEGImageReader);
	return class$;
}

$Class* JPEGImageReader::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com