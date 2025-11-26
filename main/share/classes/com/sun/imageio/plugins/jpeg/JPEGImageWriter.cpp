#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>

#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/jpeg/AdobeMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable.h>
#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable.h>
#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DRIMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$1.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$JPEGWriterDisposerRecord.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadata.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
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
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGImageWriteParam.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef ADOBE_IMPOSSIBLE
#undef ADOBE_UNKNOWN
#undef ADOBE_YCC
#undef JCS_CMYK
#undef JCS_GRAYSCALE
#undef JCS_RGB
#undef JCS_UNKNOWN
#undef JCS_YCCK
#undef MAX_COMPS_PER_SCAN
#undef MAX_VALUE
#undef MAX_WARNING
#undef MODE_COPY_FROM_METADATA
#undef MODE_DEFAULT
#undef MODE_DISABLED
#undef MODE_EXPLICIT
#undef OPAQUE
#undef SCAN_SIZE
#undef SOF2
#undef TYPE_CMYK
#undef TYPE_GRAY
#undef TYPE_RGB
#undef WARNING_DEST_IGNORED
#undef WARNING_DEST_METADATA_ADOBE_MISMATCH
#undef WARNING_DEST_METADATA_COMP_MISMATCH
#undef WARNING_DEST_METADATA_JFIF_MISMATCH
#undef WARNING_FORCING_JFIF
#undef WARNING_IGNORING_THUMBS
#undef WARNING_ILLEGAL_THUMBNAIL
#undef WARNING_IMAGE_METADATA_ADOBE_MISMATCH
#undef WARNING_IMAGE_METADATA_JFIF_MISMATCH
#undef WARNING_METADATA_ADJUSTED_FOR_THUMB
#undef WARNING_METADATA_NOT_JPEG_FOR_RASTER
#undef WARNING_NO_BANDS_ON_INDEXED
#undef WARNING_NO_GRAY_THUMB_AS_INDEXED
#undef WARNING_NO_RGB_THUMB_AS_INDEXED
#undef WARNING_STREAM_METADATA_IGNORED
#undef WARNING_THUMB_CLIPPED

using $DHTMarkerSegment$HtableArray = $Array<::com::sun::imageio::plugins::jpeg::DHTMarkerSegment$Htable>;
using $SOFMarkerSegment$ComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>;
using $SOSMarkerSegment$ScanComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec>;
using $DimensionArray = $Array<::java::awt::Dimension>;
using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $intArray2 = $Array<int32_t, 2>;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $AdobeMarkerSegment = ::com::sun::imageio::plugins::jpeg::AdobeMarkerSegment;
using $DHTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment;
using $DHTMarkerSegment$Htable = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment$Htable;
using $DQTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment;
using $DQTMarkerSegment$Qtable = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable;
using $DRIMarkerSegment = ::com::sun::imageio::plugins::jpeg::DRIMarkerSegment;
using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$ICCMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$ICCMarkerSegment;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGImageWriter$1 = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter$1;
using $JPEGImageWriter$CallBackLock = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter$CallBackLock;
using $JPEGImageWriter$JPEGWriterDisposerRecord = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter$JPEGWriterDisposerRecord;
using $JPEGMetadata = ::com::sun::imageio::plugins::jpeg::JPEGMetadata;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment;
using $SOFMarkerSegment$ComponentSpec = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec;
using $SOSMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment;
using $SOSMarkerSegment$ScanComponentSpec = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
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
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGImageWriteParam = ::javax::imageio::plugins::jpeg::JPEGImageWriteParam;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageWriter_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, debug)},
	{"structPointer", "J", nullptr, $PRIVATE, $field(JPEGImageWriter, structPointer)},
	{"ios", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE, $field(JPEGImageWriter, ios)},
	{"srcRas", "Ljava/awt/image/Raster;", nullptr, $PRIVATE, $field(JPEGImageWriter, srcRas)},
	{"raster", "Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $field(JPEGImageWriter, raster)},
	{"indexed", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, indexed)},
	{"indexCM", "Ljava/awt/image/IndexColorModel;", nullptr, $PRIVATE, $field(JPEGImageWriter, indexCM)},
	{"convertTosRGB", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, convertTosRGB)},
	{"converted", "Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $field(JPEGImageWriter, converted)},
	{"isAlphaPremultiplied", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, isAlphaPremultiplied)},
	{"srcCM", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(JPEGImageWriter, srcCM)},
	{"thumbnails", "Ljava/util/List;", "Ljava/util/List<+Ljava/awt/image/BufferedImage;>;", $PRIVATE, $field(JPEGImageWriter, thumbnails)},
	{"iccProfile", "Ljava/awt/color/ICC_Profile;", nullptr, $PRIVATE, $field(JPEGImageWriter, iccProfile)},
	{"sourceXOffset", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, sourceXOffset)},
	{"sourceYOffset", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, sourceYOffset)},
	{"sourceWidth", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, sourceWidth)},
	{"srcBands", "[I", nullptr, $PRIVATE, $field(JPEGImageWriter, srcBands)},
	{"sourceHeight", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, sourceHeight)},
	{"currentImage", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, currentImage)},
	{"convertOp", "Ljava/awt/image/ColorConvertOp;", nullptr, $PRIVATE, $field(JPEGImageWriter, convertOp)},
	{"streamQTables", "[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PRIVATE, $field(JPEGImageWriter, streamQTables)},
	{"streamDCHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageWriter, streamDCHuffmanTables)},
	{"streamACHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageWriter, streamACHuffmanTables)},
	{"ignoreJFIF", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, ignoreJFIF)},
	{"forceJFIF", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, forceJFIF)},
	{"ignoreAdobe", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, ignoreAdobe)},
	{"newAdobeTransform", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, newAdobeTransform)},
	{"writeDefaultJFIF", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, writeDefaultJFIF)},
	{"writeAdobe", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, writeAdobe)},
	{"metadata", "Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;", nullptr, $PRIVATE, $field(JPEGImageWriter, metadata)},
	{"sequencePrepared", "Z", nullptr, $PRIVATE, $field(JPEGImageWriter, sequencePrepared)},
	{"numScans", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, numScans)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JPEGImageWriter, disposerReferent)},
	{"disposerRecord", "Lsun/java2d/DisposerRecord;", nullptr, $PRIVATE, $field(JPEGImageWriter, disposerRecord)},
	{"WARNING_DEST_IGNORED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_DEST_IGNORED)},
	{"WARNING_STREAM_METADATA_IGNORED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_STREAM_METADATA_IGNORED)},
	{"WARNING_DEST_METADATA_COMP_MISMATCH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_DEST_METADATA_COMP_MISMATCH)},
	{"WARNING_DEST_METADATA_JFIF_MISMATCH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_DEST_METADATA_JFIF_MISMATCH)},
	{"WARNING_DEST_METADATA_ADOBE_MISMATCH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_DEST_METADATA_ADOBE_MISMATCH)},
	{"WARNING_IMAGE_METADATA_JFIF_MISMATCH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_IMAGE_METADATA_JFIF_MISMATCH)},
	{"WARNING_IMAGE_METADATA_ADOBE_MISMATCH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_IMAGE_METADATA_ADOBE_MISMATCH)},
	{"WARNING_METADATA_NOT_JPEG_FOR_RASTER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_METADATA_NOT_JPEG_FOR_RASTER)},
	{"WARNING_NO_BANDS_ON_INDEXED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_NO_BANDS_ON_INDEXED)},
	{"WARNING_ILLEGAL_THUMBNAIL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_ILLEGAL_THUMBNAIL)},
	{"WARNING_IGNORING_THUMBS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_IGNORING_THUMBS)},
	{"WARNING_FORCING_JFIF", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_FORCING_JFIF)},
	{"WARNING_THUMB_CLIPPED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_THUMB_CLIPPED)},
	{"WARNING_METADATA_ADJUSTED_FOR_THUMB", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_METADATA_ADJUSTED_FOR_THUMB)},
	{"WARNING_NO_RGB_THUMB_AS_INDEXED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_NO_RGB_THUMB_AS_INDEXED)},
	{"WARNING_NO_GRAY_THUMB_AS_INDEXED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(JPEGImageWriter, WARNING_NO_GRAY_THUMB_AS_INDEXED)},
	{"MAX_WARNING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGImageWriter, MAX_WARNING)},
	{"preferredThumbSizes", "[Ljava/awt/Dimension;", nullptr, $STATIC | $FINAL, $staticField(JPEGImageWriter, preferredThumbSizes)},
	{"theThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(JPEGImageWriter, theThread)},
	{"theLockCount", "I", nullptr, $PRIVATE, $field(JPEGImageWriter, theLockCount)},
	{"cbLock", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock;", nullptr, $PRIVATE, $field(JPEGImageWriter, cbLock)},
	{}
};

$MethodInfo _JPEGImageWriter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageWriter::*)($ImageWriterSpi*)>(&JPEGImageWriter::init$))},
	{"abort", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"abortWrite", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageWriter::*)(int64_t)>(&JPEGImageWriter::abortWrite))},
	{"canWriteRasters", "()Z", nullptr, $PUBLIC},
	{"canWriteSequence", "()Z", nullptr, $PUBLIC},
	{"checkAdobe", "(Lcom/sun/imageio/plugins/jpeg/AdobeMarkerSegment;Ljavax/imageio/ImageTypeSpecifier;Z)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($AdobeMarkerSegment*,$ImageTypeSpecifier*,bool)>(&JPEGImageWriter::checkAdobe))},
	{"checkJFIF", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljavax/imageio/ImageTypeSpecifier;Z)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($JFIFMarkerSegment*,$ImageTypeSpecifier*,bool)>(&JPEGImageWriter::checkJFIF))},
	{"checkSOFBands", "(Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($SOFMarkerSegment*,int32_t)>(&JPEGImageWriter::checkSOFBands)), "javax.imageio.IIOException"},
	{"clearAbortRequest", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"clearThreadLock", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JPEGImageWriter::*)()>(&JPEGImageWriter::clearThreadLock))},
	{"collectHTablesFromMetadata", "(Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;Z)[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $method(static_cast<$JPEGHuffmanTableArray*(JPEGImageWriter::*)($JPEGMetadata*,bool)>(&JPEGImageWriter::collectHTablesFromMetadata)), "javax.imageio.IIOException"},
	{"collectQTablesFromMetadata", "(Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;)[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PRIVATE, $method(static_cast<$JPEGQTableArray*(JPEGImageWriter::*)($JPEGMetadata*)>(&JPEGImageWriter::collectQTablesFromMetadata))},
	{"collectScans", "(Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(JPEGImageWriter::*)($JPEGMetadata*,$SOFMarkerSegment*)>(&JPEGImageWriter::collectScans))},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertImageMetadataOnThread", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadata*(JPEGImageWriter::*)($IIOMetadata*,$ImageTypeSpecifier*,$ImageWriteParam*)>(&JPEGImageWriter::convertImageMetadataOnThread))},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeWriter", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&JPEGImageWriter::disposeWriter))},
	{"endWriteSequence", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDefaultDestCSType", "(Ljavax/imageio/ImageTypeSpecifier;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($ImageTypeSpecifier*)>(&JPEGImageWriter::getDefaultDestCSType))},
	{"getDefaultDestCSType", "(Ljava/awt/image/RenderedImage;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($RenderedImage*)>(&JPEGImageWriter::getDefaultDestCSType))},
	{"getDefaultDestCSType", "(Ljava/awt/image/ColorModel;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($ColorModel*)>(&JPEGImageWriter::getDefaultDestCSType))},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"getDestCSType", "(Ljavax/imageio/ImageTypeSpecifier;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($ImageTypeSpecifier*)>(&JPEGImageWriter::getDestCSType))},
	{"getNumThumbnailsSupported", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)I", nullptr, $PUBLIC},
	{"getPreferredThumbnailSizes", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)[Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSrcCSType", "(Ljavax/imageio/ImageTypeSpecifier;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($ImageTypeSpecifier*)>(&JPEGImageWriter::getSrcCSType))},
	{"getSrcCSType", "(Ljava/awt/image/RenderedImage;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($RenderedImage*)>(&JPEGImageWriter::getSrcCSType))},
	{"getSrcCSType", "(Ljava/awt/image/ColorModel;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGImageWriter::*)($ColorModel*)>(&JPEGImageWriter::getSrcCSType))},
	{"grabPixels", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)(int32_t)>(&JPEGImageWriter::grabPixels))},
	{"initJPEGImageWriter", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(JPEGImageWriter::*)()>(&JPEGImageWriter::initJPEGImageWriter))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JPEGImageWriter::initStatic))},
	{"initWriterIDs", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*)>(&JPEGImageWriter::initWriterIDs))},
	{"isSubsampled", "([Lcom/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGImageWriter::*)($SOFMarkerSegment$ComponentSpecArray*)>(&JPEGImageWriter::isSubsampled))},
	{"jfifOK", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGImageWriter::*)($ImageTypeSpecifier*,$ImageWriteParam*,$IIOMetadata*,$IIOMetadata*)>(&JPEGImageWriter::jfifOK))},
	{"prepareWriteSequence", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareWriteSequenceOnThread", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($IIOMetadata*)>(&JPEGImageWriter::prepareWriteSequenceOnThread)), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetInternalState", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)()>(&JPEGImageWriter::resetInternalState))},
	{"resetWriter", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageWriter::*)(int64_t)>(&JPEGImageWriter::resetWriter))},
	{"setDest", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageWriter::*)(int64_t)>(&JPEGImageWriter::setDest))},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setThreadLock", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(JPEGImageWriter::*)()>(&JPEGImageWriter::setThreadLock))},
	{"thumbnailComplete", "()V", nullptr, 0},
	{"thumbnailProgress", "(F)V", nullptr, 0},
	{"thumbnailStarted", "(I)V", nullptr, 0},
	{"warningOccurred", "(I)V", nullptr, 0},
	{"warningWithMessage", "(Ljava/lang/String;)V", nullptr, 0},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeImage", "(J[BIII[IIIIII[Ljavax/imageio/plugins/jpeg/JPEGQTable;Z[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;ZZZI[I[I[I[I[IZI)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(JPEGImageWriter::*)(int64_t,$bytes*,int32_t,int32_t,int32_t,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t,$JPEGQTableArray*,bool,$JPEGHuffmanTableArray*,$JPEGHuffmanTableArray*,bool,bool,bool,int32_t,$ints*,$ints*,$ints*,$ints*,$ints*,bool,int32_t)>(&JPEGImageWriter::writeImage))},
	{"writeMetadata", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)()>(&JPEGImageWriter::writeMetadata)), "java.io.IOException"},
	{"writeOnThread", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($IIOMetadata*,$IIOImage*,$ImageWriteParam*)>(&JPEGImageWriter::writeOnThread)), "java.io.IOException"},
	{"writeOutputData", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter::*)($bytes*,int32_t,int32_t)>(&JPEGImageWriter::writeOutputData)), "java.io.IOException"},
	{"writeTables", "(J[Ljavax/imageio/plugins/jpeg/JPEGQTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageWriter::*)(int64_t,$JPEGQTableArray*,$JPEGHuffmanTableArray*,$JPEGHuffmanTableArray*)>(&JPEGImageWriter::writeTables))},
	{"writeToSequence", "(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_abortWrite 2
#define _METHOD_INDEX_disposeWriter 17
#define _METHOD_INDEX_initJPEGImageWriter 32
#define _METHOD_INDEX_initWriterIDs 34
#define _METHOD_INDEX_resetWriter 41
#define _METHOD_INDEX_setDest 42
#define _METHOD_INDEX_writeImage 51
#define _METHOD_INDEX_writeTables 55

$InnerClassInfo _JPEGImageWriter_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "JPEGWriterDisposerRecord", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter",
	"javax.imageio.ImageWriter",
	nullptr,
	_JPEGImageWriter_FieldInfo_,
	_JPEGImageWriter_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock,com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State,com.sun.imageio.plugins.jpeg.JPEGImageWriter$JPEGWriterDisposerRecord,com.sun.imageio.plugins.jpeg.JPEGImageWriter$1"
};

$Object* allocate$JPEGImageWriter($Class* clazz) {
	return $of($alloc(JPEGImageWriter));
}

$DimensionArray* JPEGImageWriter::preferredThumbSizes = nullptr;

void JPEGImageWriter::initStatic() {
	$init(JPEGImageWriter);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JPEGImageWriter$1)));
	$load($JPEGQTable);
	$load($JPEGHuffmanTable);
	initWriterIDs($JPEGQTable::class$, $JPEGHuffmanTable::class$);
}

void JPEGImageWriter::init$($ImageWriterSpi* originator) {
	$ImageWriter::init$(originator);
	this->debug = false;
	this->structPointer = 0;
	$set(this, ios, nullptr);
	$set(this, srcRas, nullptr);
	$set(this, raster, nullptr);
	this->indexed = false;
	$set(this, indexCM, nullptr);
	this->convertTosRGB = false;
	$set(this, converted, nullptr);
	this->isAlphaPremultiplied = false;
	$set(this, srcCM, nullptr);
	$set(this, thumbnails, nullptr);
	$set(this, iccProfile, nullptr);
	this->sourceXOffset = 0;
	this->sourceYOffset = 0;
	this->sourceWidth = 0;
	$set(this, srcBands, nullptr);
	this->sourceHeight = 0;
	this->currentImage = 0;
	$set(this, convertOp, nullptr);
	$set(this, streamQTables, nullptr);
	$set(this, streamDCHuffmanTables, nullptr);
	$set(this, streamACHuffmanTables, nullptr);
	this->ignoreJFIF = false;
	this->forceJFIF = false;
	this->ignoreAdobe = false;
	this->newAdobeTransform = $JPEG::ADOBE_IMPOSSIBLE;
	this->writeDefaultJFIF = false;
	this->writeAdobe = false;
	$set(this, metadata, nullptr);
	this->sequencePrepared = false;
	this->numScans = 0;
	$set(this, disposerReferent, $new($Object));
	$set(this, theThread, nullptr);
	this->theLockCount = 0;
	$set(this, cbLock, $new($JPEGImageWriter$CallBackLock));
	this->structPointer = initJPEGImageWriter();
	$set(this, disposerRecord, $new($JPEGImageWriter$JPEGWriterDisposerRecord, this->structPointer));
	$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
}

void JPEGImageWriter::setOutput(Object$* output) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			$ImageWriter::setOutput(output);
			resetInternalState();
			$set(this, ios, $cast($ImageOutputStream, output));
			setDest(this->structPointer);
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

$ImageWriteParam* JPEGImageWriter::getDefaultWriteParam() {
	return $new($JPEGImageWriteParam, nullptr);
}

$IIOMetadata* JPEGImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($IIOMetadata, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($JPEGMetadata, param, this));
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

$IIOMetadata* JPEGImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($IIOMetadata, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($JPEGMetadata, imageType, param, this));
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

$IIOMetadata* JPEGImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	if ($instanceOf($JPEGMetadata, inData)) {
		$var($JPEGMetadata, jpegData, $cast($JPEGMetadata, inData));
		if ($nc(jpegData)->isStream) {
			return inData;
		}
	}
	return nullptr;
}

$IIOMetadata* JPEGImageWriter::convertImageMetadata($IIOMetadata* inData, $ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($IIOMetadata, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, convertImageMetadataOnThread(inData, imageType, param));
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

$IIOMetadata* JPEGImageWriter::convertImageMetadataOnThread($IIOMetadata* inData, $ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JPEGMetadata, inData)) {
		$var($JPEGMetadata, jpegData, $cast($JPEGMetadata, inData));
		if (!$nc(jpegData)->isStream) {
			return inData;
		} else {
			return nullptr;
		}
	}
	if ($nc(inData)->isStandardMetadataFormatSupported()) {
		$init($IIOMetadataFormatImpl);
		$var($String, formatName, $IIOMetadataFormatImpl::standardMetadataFormatName);
		$var($Node, tree, inData->getAsTree(formatName));
		if (tree != nullptr) {
			$var($JPEGMetadata, jpegData, $new($JPEGMetadata, imageType, param, this));
			try {
				jpegData->setFromTree(formatName, tree);
			} catch ($IIOInvalidTreeException& e) {
				return nullptr;
			}
			return jpegData;
		}
	}
	return nullptr;
}

int32_t JPEGImageWriter::getNumThumbnailsSupported($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $IIOMetadata* streamMetadata, $IIOMetadata* imageMetadata) {
	if (imageType == nullptr && imageMetadata == nullptr) {
		return -1;
	}
	if (jfifOK(imageType, param, streamMetadata, imageMetadata)) {
		return $Integer::MAX_VALUE;
	}
	return 0;
}

$DimensionArray* JPEGImageWriter::getPreferredThumbnailSizes($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $IIOMetadata* streamMetadata, $IIOMetadata* imageMetadata) {
	if (jfifOK(imageType, param, streamMetadata, imageMetadata)) {
		return $cast($DimensionArray, $nc(JPEGImageWriter::preferredThumbSizes)->clone());
	}
	return nullptr;
}

bool JPEGImageWriter::jfifOK($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $IIOMetadata* streamMetadata, $IIOMetadata* imageMetadata) {
	if ((imageType != nullptr) && (!$JPEG::isJFIFcompliant(imageType, true))) {
		return false;
	}
	if (imageMetadata != nullptr) {
		$var($JPEGMetadata, metadata, nullptr);
		if ($instanceOf($JPEGMetadata, imageMetadata)) {
			$assign(metadata, $cast($JPEGMetadata, imageMetadata));
		} else {
			$assign(metadata, $cast($JPEGMetadata, convertImageMetadata(imageMetadata, imageType, param)));
		}
		$load($JFIFMarkerSegment);
		if ($nc(metadata)->findMarkerSegment($JFIFMarkerSegment::class$, true) == nullptr) {
			return false;
		}
	}
	return true;
}

bool JPEGImageWriter::canWriteRasters() {
	return true;
}

void JPEGImageWriter::write($IIOMetadata* streamMetadata, $IIOImage* image, $ImageWriteParam* param) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			writeOnThread(streamMetadata, image, param);
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

void JPEGImageWriter::writeOnThread($IIOMetadata* streamMetadata, $IIOImage* image, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (this->ios == nullptr) {
		$throwNew($IllegalStateException, "Output has not been set!"_s);
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image is null!"_s);
	}
	if (streamMetadata != nullptr) {
		warningOccurred(JPEGImageWriter::WARNING_STREAM_METADATA_IGNORED);
	}
	bool rasterOnly = $nc(image)->hasRaster();
	$var($RenderedImage, rimage, nullptr);
	if (rasterOnly) {
		$set(this, srcRas, image->getRaster());
	} else {
		$assign(rimage, image->getRenderedImage());
		if ($instanceOf($BufferedImage, rimage)) {
			$set(this, srcRas, $nc(($cast($BufferedImage, rimage)))->getRaster());
		} else {
			bool var$1 = $nc(rimage)->getNumXTiles() == 1;
			if (var$1 && rimage->getNumYTiles() == 1) {
				int32_t var$2 = rimage->getMinTileX();
				$set(this, srcRas, rimage->getTile(var$2, rimage->getMinTileY()));
				int32_t var$4 = $nc(this->srcRas)->getWidth();
				bool var$3 = var$4 != rimage->getWidth();
				if (!var$3) {
					int32_t var$5 = $nc(this->srcRas)->getHeight();
					var$3 = var$5 != rimage->getHeight();
				}
				if (var$3) {
					int32_t var$6 = $nc(this->srcRas)->getMinX();
					int32_t var$7 = $nc(this->srcRas)->getMinY();
					int32_t var$8 = rimage->getWidth();
					int32_t var$9 = rimage->getHeight();
					int32_t var$10 = $nc(this->srcRas)->getMinX();
					$set(this, srcRas, $nc(this->srcRas)->createChild(var$6, var$7, var$8, var$9, var$10, $nc(this->srcRas)->getMinY(), nullptr));
				}
			} else {
				$set(this, srcRas, rimage->getData());
			}
		}
	}
	int32_t numSrcBands = $nc(this->srcRas)->getNumBands();
	this->indexed = false;
	$set(this, indexCM, nullptr);
	$var($ColorModel, cm, nullptr);
	$var($ColorSpace, cs, nullptr);
	this->isAlphaPremultiplied = false;
	$set(this, srcCM, nullptr);
	if (!rasterOnly) {
		$assign(cm, $nc(rimage)->getColorModel());
		if (cm != nullptr) {
			$assign(cs, cm->getColorSpace());
			if ($instanceOf($IndexColorModel, cm)) {
				this->indexed = true;
				$set(this, indexCM, $cast($IndexColorModel, cm));
				numSrcBands = cm->getNumComponents();
			}
			if (cm->isAlphaPremultiplied()) {
				this->isAlphaPremultiplied = true;
				$set(this, srcCM, cm);
			}
		}
	}
	$init($JPEG);
	$set(this, srcBands, $nc($JPEG::bandOffsets)->get(numSrcBands - 1));
	int32_t numBandsUsed = numSrcBands;
	if (param != nullptr) {
		$var($ints, sBands, param->getSourceBands());
		if (sBands != nullptr) {
			if (this->indexed) {
				warningOccurred(JPEGImageWriter::WARNING_NO_BANDS_ON_INDEXED);
			} else {
				$set(this, srcBands, sBands);
				numBandsUsed = $nc(this->srcBands)->length;
				if (numBandsUsed > numSrcBands) {
					$throwNew($IIOException, "ImageWriteParam specifies too many source bands"_s);
				}
			}
		}
	}
	bool usingBandSubset = (numBandsUsed != numSrcBands);
	bool fullImage = ((!rasterOnly) && (!usingBandSubset));
	$var($ints, bandSizes, nullptr);
	if (!this->indexed) {
		$assign(bandSizes, $nc($($nc(this->srcRas)->getSampleModel()))->getSampleSize());
		if (usingBandSubset) {
			$var($ints, temp, $new($ints, numBandsUsed));
			for (int32_t i = 0; i < numBandsUsed; ++i) {
				temp->set(i, $nc(bandSizes)->get($nc(this->srcBands)->get(i)));
			}
			$assign(bandSizes, temp);
		}
	} else {
		$var($ints, tempSize, $nc($($nc(this->srcRas)->getSampleModel()))->getSampleSize());
		$assign(bandSizes, $new($ints, numSrcBands));
		for (int32_t i = 0; i < numSrcBands; ++i) {
			bandSizes->set(i, $nc(tempSize)->get(0));
		}
	}
	for (int32_t i = 0; i < $nc(bandSizes)->length; ++i) {
		if (bandSizes->get(i) <= 0 || bandSizes->get(i) > 8) {
			$throwNew($IIOException, "Illegal band size: should be 0 < size <= 8"_s);
		}
		if (this->indexed) {
			bandSizes->set(i, 8);
		}
	}
	if (this->debug) {
		$nc($System::out)->println($$str({"numSrcBands is "_s, $$str(numSrcBands)}));
		$nc($System::out)->println($$str({"numBandsUsed is "_s, $$str(numBandsUsed)}));
		$nc($System::out)->println($$str({"usingBandSubset is "_s, $$str(usingBandSubset)}));
		$nc($System::out)->println($$str({"fullImage is "_s, $$str(fullImage)}));
		$nc($System::out)->print("Band sizes:"_s);
		for (int32_t i = 0; i < $nc(bandSizes)->length; ++i) {
			$nc($System::out)->print($$str({" "_s, $$str(bandSizes->get(i))}));
		}
		$nc($System::out)->println();
	}
	$var($ImageTypeSpecifier, destType, nullptr);
	if (param != nullptr) {
		$assign(destType, param->getDestinationType());
		if ((fullImage) && (destType != nullptr)) {
			warningOccurred(JPEGImageWriter::WARNING_DEST_IGNORED);
			$assign(destType, nullptr);
		}
	}
	this->sourceXOffset = $nc(this->srcRas)->getMinX();
	this->sourceYOffset = $nc(this->srcRas)->getMinY();
	int32_t imageWidth = $nc(this->srcRas)->getWidth();
	int32_t imageHeight = $nc(this->srcRas)->getHeight();
	this->sourceWidth = imageWidth;
	this->sourceHeight = imageHeight;
	int32_t periodX = 1;
	int32_t periodY = 1;
	int32_t gridX = 0;
	int32_t gridY = 0;
	$var($JPEGQTableArray, qTables, nullptr);
	$var($JPEGHuffmanTableArray, DCHuffmanTables, nullptr);
	$var($JPEGHuffmanTableArray, ACHuffmanTables, nullptr);
	bool optimizeHuffman = false;
	$var($JPEGImageWriteParam, jparam, nullptr);
	int32_t progressiveMode = $ImageWriteParam::MODE_DISABLED;
	if (param != nullptr) {
		$var($Rectangle, sourceRegion, param->getSourceRegion());
		if (sourceRegion != nullptr) {
			$var($Rectangle, imageBounds, $new($Rectangle, this->sourceXOffset, this->sourceYOffset, this->sourceWidth, this->sourceHeight));
			$assign(sourceRegion, sourceRegion->intersection(imageBounds));
			this->sourceXOffset = $nc(sourceRegion)->x;
			this->sourceYOffset = sourceRegion->y;
			this->sourceWidth = sourceRegion->width;
			this->sourceHeight = sourceRegion->height;
		}
		if (this->sourceWidth + this->sourceXOffset > imageWidth) {
			this->sourceWidth = imageWidth - this->sourceXOffset;
		}
		if (this->sourceHeight + this->sourceYOffset > imageHeight) {
			this->sourceHeight = imageHeight - this->sourceYOffset;
		}
		periodX = param->getSourceXSubsampling();
		periodY = param->getSourceYSubsampling();
		gridX = param->getSubsamplingXOffset();
		gridY = param->getSubsamplingYOffset();
		{
			float quality = 0;
			switch (param->getCompressionMode()) {
			case $ImageWriteParam::MODE_DISABLED:
				{
					$throwNew($IIOException, "JPEG compression cannot be disabled"_s);
				}
			case $ImageWriteParam::MODE_EXPLICIT:
				{
					quality = param->getCompressionQuality();
					quality = $JPEG::convertToLinearQuality(quality);
					$assign(qTables, $new($JPEGQTableArray, 2));
					$init($JPEGQTable);
					$nc(qTables)->set(0, $($nc($JPEGQTable::K1Luminance)->getScaledInstance(quality, true)));
					$init($JPEGQTable);
					$nc(qTables)->set(1, $($nc($JPEGQTable::K2Chrominance)->getScaledInstance(quality, true)));
					break;
				}
			case $ImageWriteParam::MODE_DEFAULT:
				{
					$assign(qTables, $new($JPEGQTableArray, 2));
					$init($JPEGQTable);
					$nc(qTables)->set(0, $JPEGQTable::K1Div2Luminance);
					$init($JPEGQTable);
					$nc(qTables)->set(1, $JPEGQTable::K2Div2Chrominance);
					break;
				}
			}
		}
		progressiveMode = param->getProgressiveMode();
		if ($instanceOf($JPEGImageWriteParam, param)) {
			$assign(jparam, $cast($JPEGImageWriteParam, param));
			optimizeHuffman = jparam->getOptimizeHuffmanTables();
		}
	}
	$var($IIOMetadata, mdata, image->getMetadata());
	if (mdata != nullptr) {
		if ($instanceOf($JPEGMetadata, mdata)) {
			$set(this, metadata, $cast($JPEGMetadata, mdata));
			if (this->debug) {
				$nc($System::out)->println("We have metadata, and it\'s JPEG metadata"_s);
			}
		} else if (!rasterOnly) {
			$var($ImageTypeSpecifier, type, destType);
			if (type == nullptr) {
				$assign(type, $new($ImageTypeSpecifier, rimage));
			}
			$set(this, metadata, $cast($JPEGMetadata, convertImageMetadata(mdata, type, param)));
		} else {
			warningOccurred(JPEGImageWriter::WARNING_METADATA_NOT_JPEG_FOR_RASTER);
		}
	}
	this->ignoreJFIF = false;
	this->ignoreAdobe = false;
	this->newAdobeTransform = $JPEG::ADOBE_IMPOSSIBLE;
	this->writeDefaultJFIF = false;
	this->writeAdobe = false;
	int32_t inCsType = $JPEG::JCS_UNKNOWN;
	int32_t outCsType = $JPEG::JCS_UNKNOWN;
	$var($JFIFMarkerSegment, jfif, nullptr);
	$var($AdobeMarkerSegment, adobe, nullptr);
	$var($SOFMarkerSegment, sof, nullptr);
	if (this->metadata != nullptr) {
		$load($JFIFMarkerSegment);
		$assign(jfif, $cast($JFIFMarkerSegment, $nc(this->metadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
		$load($AdobeMarkerSegment);
		$assign(adobe, $cast($AdobeMarkerSegment, $nc(this->metadata)->findMarkerSegment($AdobeMarkerSegment::class$, true)));
		$load($SOFMarkerSegment);
		$assign(sof, $cast($SOFMarkerSegment, $nc(this->metadata)->findMarkerSegment($SOFMarkerSegment::class$, true)));
	}
	$set(this, iccProfile, nullptr);
	this->convertTosRGB = false;
	$set(this, converted, nullptr);
	if (destType != nullptr) {
		if (numBandsUsed != destType->getNumBands()) {
			$throwNew($IIOException, "Number of source bands != number of destination bands"_s);
		}
		$assign(cs, $nc($(destType->getColorModel()))->getColorSpace());
		if (this->metadata != nullptr) {
			checkSOFBands(sof, numBandsUsed);
			checkJFIF(jfif, destType, false);
			if ((jfif != nullptr) && (this->ignoreJFIF == false)) {
				if ($ImageUtil::isNonStandardICCColorSpace(cs)) {
					$set(this, iccProfile, $nc(($cast($ICC_ColorSpace, cs)))->getProfile());
				}
			}
			checkAdobe(adobe, destType, false);
		} else {
			if ($JPEG::isJFIFcompliant(destType, false)) {
				this->writeDefaultJFIF = true;
				if ($ImageUtil::isNonStandardICCColorSpace(cs)) {
					$set(this, iccProfile, $nc(($cast($ICC_ColorSpace, cs)))->getProfile());
				}
			} else {
				int32_t transform = $JPEG::transformForType(destType, false);
				if (transform != $JPEG::ADOBE_IMPOSSIBLE) {
					this->writeAdobe = true;
					this->newAdobeTransform = transform;
				}
			}
			$set(this, metadata, $new($JPEGMetadata, destType, nullptr, this));
		}
		inCsType = getSrcCSType(destType);
		outCsType = getDefaultDestCSType(destType);
	} else if (this->metadata == nullptr) {
		if (fullImage) {
			$set(this, metadata, $new($JPEGMetadata, $$new($ImageTypeSpecifier, rimage), param, this));
			$load($JFIFMarkerSegment);
			if ($nc(this->metadata)->findMarkerSegment($JFIFMarkerSegment::class$, true) != nullptr) {
				$assign(cs, $nc($($nc(rimage)->getColorModel()))->getColorSpace());
				if ($ImageUtil::isNonStandardICCColorSpace(cs)) {
					$set(this, iccProfile, $nc(($cast($ICC_ColorSpace, cs)))->getProfile());
				}
			}
			inCsType = getSrcCSType(rimage);
			outCsType = getDefaultDestCSType(rimage);
		}
	} else {
		checkSOFBands(sof, numBandsUsed);
		if (fullImage) {
			$var($ImageTypeSpecifier, inputType, $new($ImageTypeSpecifier, rimage));
			inCsType = getSrcCSType(rimage);
			if (cm != nullptr) {
				bool alpha = cm->hasAlpha();
				switch ($nc(cs)->getType()) {
				case $ColorSpace::TYPE_GRAY:
					{
						if (!alpha) {
							outCsType = $JPEG::JCS_GRAYSCALE;
						} else if (jfif != nullptr) {
							this->ignoreJFIF = true;
							warningOccurred(JPEGImageWriter::WARNING_IMAGE_METADATA_JFIF_MISMATCH);
						}
						if ((adobe != nullptr) && (adobe->transform != $JPEG::ADOBE_UNKNOWN)) {
							this->newAdobeTransform = $JPEG::ADOBE_UNKNOWN;
							warningOccurred(JPEGImageWriter::WARNING_IMAGE_METADATA_ADOBE_MISMATCH);
						}
						break;
					}
				case $ColorSpace::TYPE_RGB:
					{
						if (jfif != nullptr) {
							outCsType = $JPEG::JCS_YCbCr;
							if ($ImageUtil::isNonStandardICCColorSpace(cs) || (($instanceOf($ICC_ColorSpace, cs)) && (jfif->iccSegment != nullptr))) {
								$set(this, iccProfile, $nc(($cast($ICC_ColorSpace, cs)))->getProfile());
							}
						} else if (adobe != nullptr) {
							switch (adobe->transform) {
							case $JPEG::ADOBE_UNKNOWN:
								{
									outCsType = $JPEG::JCS_RGB;
									break;
								}
							case $JPEG::ADOBE_YCC:
								{
									outCsType = $JPEG::JCS_YCbCr;
									break;
								}
							default:
								{
									warningOccurred(JPEGImageWriter::WARNING_IMAGE_METADATA_ADOBE_MISMATCH);
									this->newAdobeTransform = $JPEG::ADOBE_UNKNOWN;
									outCsType = $JPEG::JCS_RGB;
									break;
								}
							}
						} else {
							int32_t outCS = $nc(sof)->getIDencodedCSType();
							if (outCS != $JPEG::JCS_UNKNOWN) {
								outCsType = outCS;
							} else {
								bool subsampled = isSubsampled(sof->componentSpecs);
								if (subsampled) {
									outCsType = $JPEG::JCS_YCbCr;
								} else {
									outCsType = $JPEG::JCS_RGB;
								}
							}
						}
						break;
					}
				}
			}
		}
	}
	bool metadataProgressive = false;
	$var($ints, scans, nullptr);
	if (this->metadata != nullptr) {
		if (sof == nullptr) {
			$load($SOFMarkerSegment);
			$assign(sof, $cast($SOFMarkerSegment, $nc(this->metadata)->findMarkerSegment($SOFMarkerSegment::class$, true)));
		}
		if ((sof != nullptr) && (sof->tag == $JPEG::SOF2)) {
			metadataProgressive = true;
			if (progressiveMode == $ImageWriteParam::MODE_COPY_FROM_METADATA) {
				$assign(scans, collectScans(this->metadata, sof));
			} else {
				this->numScans = 0;
			}
		}
		if (jfif == nullptr) {
			$load($JFIFMarkerSegment);
			$assign(jfif, $cast($JFIFMarkerSegment, $nc(this->metadata)->findMarkerSegment($JFIFMarkerSegment::class$, true)));
		}
	}
	$set(this, thumbnails, image->getThumbnails());
	int32_t numThumbs = image->getNumThumbnails();
	this->forceJFIF = false;
	if (!this->writeDefaultJFIF) {
		if (this->metadata == nullptr) {
			$set(this, thumbnails, nullptr);
			if (numThumbs != 0) {
				warningOccurred(JPEGImageWriter::WARNING_IGNORING_THUMBS);
			}
		} else if (fullImage == false) {
			if (jfif == nullptr) {
				$set(this, thumbnails, nullptr);
				if (numThumbs != 0) {
					warningOccurred(JPEGImageWriter::WARNING_IGNORING_THUMBS);
				}
			}
		} else if (jfif == nullptr) {
			if ((outCsType == $JPEG::JCS_GRAYSCALE) || (outCsType == $JPEG::JCS_YCbCr)) {
				if (numThumbs != 0) {
					this->forceJFIF = true;
					warningOccurred(JPEGImageWriter::WARNING_FORCING_JFIF);
				}
			} else {
				$set(this, thumbnails, nullptr);
				if (numThumbs != 0) {
					warningOccurred(JPEGImageWriter::WARNING_IGNORING_THUMBS);
				}
			}
		}
	}
	bool haveMetadata = ((this->metadata != nullptr) || this->writeDefaultJFIF || this->writeAdobe);
	bool writeDQT = true;
	bool writeDHT = true;
	$var($DQTMarkerSegment, dqt, nullptr);
	$var($DHTMarkerSegment, dht, nullptr);
	int32_t restartInterval = 0;
	if (this->metadata != nullptr) {
		$load($DQTMarkerSegment);
		$assign(dqt, $cast($DQTMarkerSegment, $nc(this->metadata)->findMarkerSegment($DQTMarkerSegment::class$, true)));
		$load($DHTMarkerSegment);
		$assign(dht, $cast($DHTMarkerSegment, $nc(this->metadata)->findMarkerSegment($DHTMarkerSegment::class$, true)));
		$load($DRIMarkerSegment);
		$var($DRIMarkerSegment, dri, $cast($DRIMarkerSegment, $nc(this->metadata)->findMarkerSegment($DRIMarkerSegment::class$, true)));
		if (dri != nullptr) {
			restartInterval = dri->restartInterval;
		}
		if (dqt == nullptr) {
			writeDQT = false;
		}
		if (dht == nullptr) {
			writeDHT = false;
		}
	}
	if (qTables == nullptr) {
		if (dqt != nullptr) {
			$assign(qTables, collectQTablesFromMetadata(this->metadata));
		} else if (this->streamQTables != nullptr) {
			$assign(qTables, this->streamQTables);
		} else if ((jparam != nullptr) && (jparam->areTablesSet())) {
			$assign(qTables, jparam->getQTables());
		} else {
			$assign(qTables, $JPEG::getDefaultQTables());
		}
	}
	if (optimizeHuffman == false) {
		if ((dht != nullptr) && (metadataProgressive == false)) {
			$assign(DCHuffmanTables, collectHTablesFromMetadata(this->metadata, true));
			$assign(ACHuffmanTables, collectHTablesFromMetadata(this->metadata, false));
		} else if (this->streamDCHuffmanTables != nullptr) {
			$assign(DCHuffmanTables, this->streamDCHuffmanTables);
			$assign(ACHuffmanTables, this->streamACHuffmanTables);
		} else if ((jparam != nullptr) && (jparam->areTablesSet())) {
			$assign(DCHuffmanTables, jparam->getDCHuffmanTables());
			$assign(ACHuffmanTables, jparam->getACHuffmanTables());
		} else {
			$assign(DCHuffmanTables, $JPEG::getDefaultHuffmanTables(true));
			$assign(ACHuffmanTables, $JPEG::getDefaultHuffmanTables(false));
		}
	}
	$var($ints, componentIds, $new($ints, numBandsUsed));
	$var($ints, HsamplingFactors, $new($ints, numBandsUsed));
	$var($ints, VsamplingFactors, $new($ints, numBandsUsed));
	$var($ints, QtableSelectors, $new($ints, numBandsUsed));
	for (int32_t i = 0; i < numBandsUsed; ++i) {
		componentIds->set(i, i + 1);
		HsamplingFactors->set(i, 1);
		VsamplingFactors->set(i, 1);
		QtableSelectors->set(i, 0);
	}
	if (sof != nullptr) {
		for (int32_t i = 0; i < numBandsUsed; ++i) {
			if (this->forceJFIF == false) {
				componentIds->set(i, $nc($nc(sof->componentSpecs)->get(i))->componentId);
			}
			HsamplingFactors->set(i, $nc($nc(sof->componentSpecs)->get(i))->HsamplingFactor);
			VsamplingFactors->set(i, $nc($nc(sof->componentSpecs)->get(i))->VsamplingFactor);
			QtableSelectors->set(i, $nc($nc(sof->componentSpecs)->get(i))->QtableSelector);
		}
	}
	this->sourceXOffset += gridX;
	this->sourceWidth -= gridX;
	this->sourceYOffset += gridY;
	this->sourceHeight -= gridY;
	int32_t destWidth = $div((this->sourceWidth + periodX - 1), periodX);
	int32_t destHeight = $div((this->sourceHeight + periodY - 1), periodY);
	int32_t lineSize = this->sourceWidth * numBandsUsed;
	$var($DataBufferByte, buffer, $new($DataBufferByte, lineSize));
	$var($ints, bandOffs, $nc($JPEG::bandOffsets)->get(numBandsUsed - 1));
	$set(this, raster, $Raster::createInterleavedRaster(static_cast<$DataBuffer*>(buffer), this->sourceWidth, 1, lineSize, numBandsUsed, bandOffs, ($Point*)nullptr));
	clearAbortRequest();
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$11, nullptr);
		try {
			processImageStarted(this->currentImage);
		} catch ($Throwable& var$12) {
			$assign(var$11, var$12);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$11 != nullptr) {
			$throw(var$11);
		}
	}
	bool aborted = false;
	if (this->debug) {
		$nc($System::out)->println($$str({"inCsType: "_s, $$str(inCsType)}));
		$nc($System::out)->println($$str({"outCsType: "_s, $$str(outCsType)}));
	}
	aborted = writeImage(this->structPointer, $(buffer->getData()), inCsType, outCsType, numBandsUsed, bandSizes, this->sourceWidth, destWidth, destHeight, periodX, periodY, qTables, writeDQT, DCHuffmanTables, ACHuffmanTables, writeDHT, optimizeHuffman, (progressiveMode != $ImageWriteParam::MODE_DISABLED), this->numScans, scans, componentIds, HsamplingFactors, VsamplingFactors, QtableSelectors, haveMetadata, restartInterval);
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$13, nullptr);
		try {
			if (aborted) {
				processWriteAborted();
			} else {
				processImageComplete();
			}
			$nc(this->ios)->flush();
		} catch ($Throwable& var$14) {
			$assign(var$13, var$14);
		} /*finally*/ {
			$nc(this->cbLock)->unlock();
		}
		if (var$13 != nullptr) {
			$throw(var$13);
		}
	}
	++this->currentImage;
}

bool JPEGImageWriter::canWriteSequence() {
	return true;
}

void JPEGImageWriter::prepareWriteSequence($IIOMetadata* streamMetadata) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			prepareWriteSequenceOnThread(streamMetadata);
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

void JPEGImageWriter::prepareWriteSequenceOnThread($IIOMetadata* streamMetadata) {
	$useLocalCurrentObjectStackCache();
	if (this->ios == nullptr) {
		$throwNew($IllegalStateException, "Output has not been set!"_s);
	}
	if (streamMetadata != nullptr) {
		if ($instanceOf($JPEGMetadata, streamMetadata)) {
			$var($JPEGMetadata, jmeta, $cast($JPEGMetadata, streamMetadata));
			if (jmeta->isStream == false) {
				$throwNew($IllegalArgumentException, "Invalid stream metadata object."_s);
			}
			if (this->currentImage != 0) {
				$throwNew($IIOException, "JPEG Stream metadata must precede all images"_s);
			}
			if (this->sequencePrepared == true) {
				$throwNew($IIOException, "Stream metadata already written!"_s);
			}
			$set(this, streamQTables, collectQTablesFromMetadata(jmeta));
			if (this->debug) {
				$nc($System::out)->println($$str({"after collecting from stream metadata, streamQTables.length is "_s, $$str($nc(this->streamQTables)->length)}));
			}
			if (this->streamQTables == nullptr) {
				$set(this, streamQTables, $JPEG::getDefaultQTables());
			}
			$set(this, streamDCHuffmanTables, collectHTablesFromMetadata(jmeta, true));
			if (this->streamDCHuffmanTables == nullptr) {
				$set(this, streamDCHuffmanTables, $JPEG::getDefaultHuffmanTables(true));
			}
			$set(this, streamACHuffmanTables, collectHTablesFromMetadata(jmeta, false));
			if (this->streamACHuffmanTables == nullptr) {
				$set(this, streamACHuffmanTables, $JPEG::getDefaultHuffmanTables(false));
			}
			writeTables(this->structPointer, this->streamQTables, this->streamDCHuffmanTables, this->streamACHuffmanTables);
		} else {
			$throwNew($IIOException, "Stream metadata must be JPEG metadata"_s);
		}
	}
	this->sequencePrepared = true;
}

void JPEGImageWriter::writeToSequence($IIOImage* image, $ImageWriteParam* param) {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			if (this->sequencePrepared == false) {
				$throwNew($IllegalStateException, "sequencePrepared not called!"_s);
			}
			write(nullptr, image, param);
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

void JPEGImageWriter::endWriteSequence() {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			if (this->sequencePrepared == false) {
				$throwNew($IllegalStateException, "sequencePrepared not called!"_s);
			}
			this->sequencePrepared = false;
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

void JPEGImageWriter::abort() {
	$synchronized(this) {
		setThreadLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$ImageWriter::abort();
				abortWrite(this->structPointer);
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
}

void JPEGImageWriter::clearAbortRequest() {
	$synchronized(this) {
		setThreadLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->cbLock)->check();
				if (abortRequested()) {
					$ImageWriter::clearAbortRequest();
					resetWriter(this->structPointer);
					setDest(this->structPointer);
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
}

void JPEGImageWriter::resetInternalState() {
	resetWriter(this->structPointer);
	$set(this, srcRas, nullptr);
	$set(this, raster, nullptr);
	this->convertTosRGB = false;
	this->currentImage = 0;
	this->numScans = 0;
	$set(this, metadata, nullptr);
}

void JPEGImageWriter::reset() {
	setThreadLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->cbLock)->check();
			$ImageWriter::reset();
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

void JPEGImageWriter::dispose() {
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

void JPEGImageWriter::warningOccurred(int32_t code) {
	$useLocalCurrentObjectStackCache();
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ((code < 0) || (code > JPEGImageWriter::MAX_WARNING)) {
				$throwNew($InternalError, "Invalid warning index"_s);
			}
			processWarningOccurred(this->currentImage, "com.sun.imageio.plugins.jpeg.JPEGImageWriterResources"_s, $($Integer::toString(code)));
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

void JPEGImageWriter::warningWithMessage($String* msg) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			processWarningOccurred(this->currentImage, msg);
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

void JPEGImageWriter::thumbnailStarted(int32_t thumbnailIndex) {
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

void JPEGImageWriter::thumbnailProgress(float percentageDone) {
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

void JPEGImageWriter::thumbnailComplete() {
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

void JPEGImageWriter::checkSOFBands($SOFMarkerSegment* sof, int32_t numBandsUsed) {
	if (sof != nullptr) {
		if ($nc(sof->componentSpecs)->length != numBandsUsed) {
			$throwNew($IIOException, "Metadata components != number of destination bands"_s);
		}
	}
}

void JPEGImageWriter::checkJFIF($JFIFMarkerSegment* jfif, $ImageTypeSpecifier* type, bool input) {
	if (jfif != nullptr) {
		if (!$JPEG::isJFIFcompliant(type, input)) {
			this->ignoreJFIF = true;
			warningOccurred(input ? JPEGImageWriter::WARNING_IMAGE_METADATA_JFIF_MISMATCH : JPEGImageWriter::WARNING_DEST_METADATA_JFIF_MISMATCH);
		}
	}
}

void JPEGImageWriter::checkAdobe($AdobeMarkerSegment* adobe, $ImageTypeSpecifier* type, bool input) {
	if (adobe != nullptr) {
		int32_t rightTransform = $JPEG::transformForType(type, input);
		if (adobe->transform != rightTransform) {
			warningOccurred(input ? JPEGImageWriter::WARNING_IMAGE_METADATA_ADOBE_MISMATCH : JPEGImageWriter::WARNING_DEST_METADATA_ADOBE_MISMATCH);
			if (rightTransform == $JPEG::ADOBE_IMPOSSIBLE) {
				this->ignoreAdobe = true;
			} else {
				this->newAdobeTransform = rightTransform;
			}
		}
	}
}

$ints* JPEGImageWriter::collectScans($JPEGMetadata* metadata, $SOFMarkerSegment* sof) {
	$useLocalCurrentObjectStackCache();
	$var($List, segments, $new($ArrayList));
	int32_t SCAN_SIZE = 9;
	int32_t MAX_COMPS_PER_SCAN = 4;
	{
		$var($Iterator, iter, $nc($nc(metadata)->markerSequence)->iterator());
		for (; $nc(iter)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
			if ($instanceOf($SOSMarkerSegment, seg)) {
				segments->add($cast($SOSMarkerSegment, seg));
			}
		}
	}
	$var($ints, retval, nullptr);
	this->numScans = 0;
	if (!segments->isEmpty()) {
		this->numScans = segments->size();
		$assign(retval, $new($ints, this->numScans * SCAN_SIZE));
		int32_t index = 0;
		for (int32_t i = 0; i < this->numScans; ++i) {
			$var($SOSMarkerSegment, sos, $cast($SOSMarkerSegment, segments->get(i)));
			retval->set(index++, $nc($nc(sos)->componentSpecs)->length);
			for (int32_t j = 0; j < MAX_COMPS_PER_SCAN; ++j) {
				if (j < $nc(sos->componentSpecs)->length) {
					int32_t compSel = $nc($nc(sos->componentSpecs)->get(j))->componentSelector;
					for (int32_t k = 0; k < $nc($nc(sof)->componentSpecs)->length; ++k) {
						if (compSel == $nc($nc(sof->componentSpecs)->get(k))->componentId) {
							retval->set(index++, k);
							break;
						}
					}
				} else {
					retval->set(index++, 0);
				}
			}
			retval->set(index++, sos->startSpectralSelection);
			retval->set(index++, sos->endSpectralSelection);
			retval->set(index++, sos->approxHigh);
			retval->set(index++, sos->approxLow);
		}
	}
	return retval;
}

$JPEGQTableArray* JPEGImageWriter::collectQTablesFromMetadata($JPEGMetadata* metadata) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, tables, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($nc(metadata)->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($DQTMarkerSegment, seg)) {
					$var($DQTMarkerSegment, dqt, $cast($DQTMarkerSegment, seg));
					tables->addAll($nc(dqt)->tables);
				}
			}
		}
	}
	$var($JPEGQTableArray, retval, nullptr);
	if (tables->size() != 0) {
		$assign(retval, $new($JPEGQTableArray, tables->size()));
		for (int32_t i = 0; i < retval->length; ++i) {
			retval->set(i, $$new($JPEGQTable, $nc(($cast($DQTMarkerSegment$Qtable, $(tables->get(i)))))->data));
		}
	}
	return retval;
}

$JPEGHuffmanTableArray* JPEGImageWriter::collectHTablesFromMetadata($JPEGMetadata* metadata, bool wantDC) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, tables, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($nc(metadata)->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($DHTMarkerSegment, seg)) {
					$var($DHTMarkerSegment, dht, $cast($DHTMarkerSegment, seg));
					for (int32_t i = 0; i < $nc($nc(dht)->tables)->size(); ++i) {
						$var($DHTMarkerSegment$Htable, htable, $cast($DHTMarkerSegment$Htable, $nc(dht->tables)->get(i)));
						if ($nc(htable)->tableClass == (wantDC ? 0 : 1)) {
							tables->add(htable);
						}
					}
				}
			}
		}
	}
	$var($JPEGHuffmanTableArray, retval, nullptr);
	if (tables->size() != 0) {
		$var($DHTMarkerSegment$HtableArray, htables, $new($DHTMarkerSegment$HtableArray, tables->size()));
		tables->toArray(htables);
		$assign(retval, $new($JPEGHuffmanTableArray, tables->size()));
		for (int32_t i = 0; i < retval->length; ++i) {
			retval->set(i, nullptr);
			for (int32_t j = 0; j < tables->size(); ++j) {
				if ($nc(htables->get(j))->tableID == i) {
					if (retval->get(i) != nullptr) {
						$throwNew($IIOException, "Metadata has duplicate Htables!"_s);
					}
					retval->set(i, $$new($JPEGHuffmanTable, $nc(htables->get(j))->numCodes, $nc(htables->get(j))->values));
				}
			}
		}
	}
	return retval;
}

int32_t JPEGImageWriter::getSrcCSType($ImageTypeSpecifier* type) {
	return getSrcCSType($($nc(type)->getColorModel()));
}

int32_t JPEGImageWriter::getSrcCSType($RenderedImage* rimage) {
	return getSrcCSType($($nc(rimage)->getColorModel()));
}

int32_t JPEGImageWriter::getSrcCSType($ColorModel* cm) {
	int32_t retval = $JPEG::JCS_UNKNOWN;
	if (cm != nullptr) {
		bool alpha = cm->hasAlpha();
		$var($ColorSpace, cs, cm->getColorSpace());
		switch ($nc(cs)->getType()) {
		case $ColorSpace::TYPE_GRAY:
			{
				retval = $JPEG::JCS_GRAYSCALE;
				break;
			}
		case $ColorSpace::TYPE_RGB:
			{
				retval = $JPEG::JCS_RGB;
				break;
			}
		case $ColorSpace::TYPE_YCbCr:
			{
				retval = $JPEG::JCS_YCbCr;
				break;
			}
		case $ColorSpace::TYPE_CMYK:
			{
				retval = $JPEG::JCS_CMYK;
				break;
			}
		}
	}
	return retval;
}

int32_t JPEGImageWriter::getDestCSType($ImageTypeSpecifier* destType) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, $nc(destType)->getColorModel());
	bool alpha = $nc(cm)->hasAlpha();
	$var($ColorSpace, cs, cm->getColorSpace());
	int32_t retval = $JPEG::JCS_UNKNOWN;
	switch ($nc(cs)->getType()) {
	case $ColorSpace::TYPE_GRAY:
		{
			retval = $JPEG::JCS_GRAYSCALE;
			break;
		}
	case $ColorSpace::TYPE_RGB:
		{
			retval = $JPEG::JCS_RGB;
			break;
		}
	case $ColorSpace::TYPE_YCbCr:
		{
			retval = $JPEG::JCS_YCbCr;
			break;
		}
	case $ColorSpace::TYPE_CMYK:
		{
			retval = $JPEG::JCS_CMYK;
			break;
		}
	}
	return retval;
}

int32_t JPEGImageWriter::getDefaultDestCSType($ImageTypeSpecifier* type) {
	return getDefaultDestCSType($($nc(type)->getColorModel()));
}

int32_t JPEGImageWriter::getDefaultDestCSType($RenderedImage* rimage) {
	return getDefaultDestCSType($($nc(rimage)->getColorModel()));
}

int32_t JPEGImageWriter::getDefaultDestCSType($ColorModel* cm) {
	int32_t retval = $JPEG::JCS_UNKNOWN;
	if (cm != nullptr) {
		bool alpha = cm->hasAlpha();
		$var($ColorSpace, cs, cm->getColorSpace());
		switch ($nc(cs)->getType()) {
		case $ColorSpace::TYPE_GRAY:
			{
				retval = $JPEG::JCS_GRAYSCALE;
				break;
			}
		case $ColorSpace::TYPE_RGB:
			{
				retval = $JPEG::JCS_YCbCr;
				break;
			}
		case $ColorSpace::TYPE_YCbCr:
			{
				retval = $JPEG::JCS_YCbCr;
				break;
			}
		case $ColorSpace::TYPE_CMYK:
			{
				retval = $JPEG::JCS_YCCK;
				break;
			}
		}
	}
	return retval;
}

bool JPEGImageWriter::isSubsampled($SOFMarkerSegment$ComponentSpecArray* specs) {
	int32_t hsamp0 = $nc($nc(specs)->get(0))->HsamplingFactor;
	int32_t vsamp0 = $nc(specs->get(0))->VsamplingFactor;
	for (int32_t i = 1; i < specs->length; ++i) {
		if (($nc(specs->get(i))->HsamplingFactor != hsamp0) || ($nc(specs->get(i))->VsamplingFactor != vsamp0)) {
			return true;
		}
	}
	return false;
}

void JPEGImageWriter::initWriterIDs($Class* qTableClass, $Class* huffClass) {
	$init(JPEGImageWriter);
	$prepareNativeStatic(JPEGImageWriter, initWriterIDs, void, $Class* qTableClass, $Class* huffClass);
	$invokeNativeStatic(JPEGImageWriter, initWriterIDs, qTableClass, huffClass);
	$finishNativeStatic();
}

int64_t JPEGImageWriter::initJPEGImageWriter() {
	int64_t $ret = 0;
	$prepareNative(JPEGImageWriter, initJPEGImageWriter, int64_t);
	$ret = $invokeNative(JPEGImageWriter, initJPEGImageWriter);
	$finishNative();
	return $ret;
}

void JPEGImageWriter::setDest(int64_t structPointer) {
	$prepareNative(JPEGImageWriter, setDest, void, int64_t structPointer);
	$invokeNative(JPEGImageWriter, setDest, structPointer);
	$finishNative();
}

bool JPEGImageWriter::writeImage(int64_t structPointer, $bytes* data, int32_t inCsType, int32_t outCsType, int32_t numBands, $ints* bandSizes, int32_t srcWidth, int32_t destWidth, int32_t destHeight, int32_t stepX, int32_t stepY, $JPEGQTableArray* qtables, bool writeDQT, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables, bool writeDHT, bool optimizeHuffman, bool progressive, int32_t numScans, $ints* scans, $ints* componentIds, $ints* HsamplingFactors, $ints* VsamplingFactors, $ints* QtableSelectors, bool haveMetadata, int32_t restartInterval) {
	bool $ret = false;
	$prepareNative(JPEGImageWriter, writeImage, bool, int64_t structPointer, $bytes* data, int32_t inCsType, int32_t outCsType, int32_t numBands, $ints* bandSizes, int32_t srcWidth, int32_t destWidth, int32_t destHeight, int32_t stepX, int32_t stepY, $JPEGQTableArray* qtables, bool writeDQT, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables, bool writeDHT, bool optimizeHuffman, bool progressive, int32_t numScans, $ints* scans, $ints* componentIds, $ints* HsamplingFactors, $ints* VsamplingFactors, $ints* QtableSelectors, bool haveMetadata, int32_t restartInterval);
	$ret = $invokeNative(JPEGImageWriter, writeImage, structPointer, data, inCsType, outCsType, numBands, bandSizes, srcWidth, destWidth, destHeight, stepX, stepY, qtables, writeDQT, DCHuffmanTables, ACHuffmanTables, writeDHT, optimizeHuffman, progressive, numScans, scans, componentIds, HsamplingFactors, VsamplingFactors, QtableSelectors, haveMetadata, restartInterval);
	$finishNative();
	return $ret;
}

void JPEGImageWriter::writeMetadata() {
	if (this->metadata == nullptr) {
		if (this->writeDefaultJFIF) {
			$JFIFMarkerSegment::writeDefaultJFIF(this->ios, this->thumbnails, this->iccProfile, this);
		}
		if (this->writeAdobe) {
			$AdobeMarkerSegment::writeAdobeSegment(this->ios, this->newAdobeTransform);
		}
	} else {
		$nc(this->metadata)->writeToStream(this->ios, this->ignoreJFIF, this->forceJFIF, this->thumbnails, this->iccProfile, this->ignoreAdobe, this->newAdobeTransform, this);
	}
}

void JPEGImageWriter::writeTables(int64_t structPointer, $JPEGQTableArray* qtables, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables) {
	$prepareNative(JPEGImageWriter, writeTables, void, int64_t structPointer, $JPEGQTableArray* qtables, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables);
	$invokeNative(JPEGImageWriter, writeTables, structPointer, qtables, DCHuffmanTables, ACHuffmanTables);
	$finishNative();
}

void JPEGImageWriter::grabPixels(int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Raster, sourceLine, nullptr);
	if (this->indexed) {
		$assign(sourceLine, $nc(this->srcRas)->createChild(this->sourceXOffset, this->sourceYOffset + y, this->sourceWidth, 1, 0, 0, $$new($ints, {0})));
		bool forceARGB = ($nc(this->indexCM)->getTransparency() != $Transparency::OPAQUE);
		$var($BufferedImage, temp, $nc(this->indexCM)->convertToIntDiscrete(sourceLine, forceARGB));
		$assign(sourceLine, $nc(temp)->getRaster());
	} else {
		$assign(sourceLine, $nc(this->srcRas)->createChild(this->sourceXOffset, this->sourceYOffset + y, this->sourceWidth, 1, 0, 0, this->srcBands));
	}
	if (this->convertTosRGB) {
		if (this->debug) {
			$nc($System::out)->println("Converting to sRGB"_s);
		}
		$set(this, converted, $nc(this->convertOp)->filter(sourceLine, this->converted));
		$assign(sourceLine, this->converted);
	}
	if (this->isAlphaPremultiplied) {
		$var($WritableRaster, wr, $nc(sourceLine)->createCompatibleWritableRaster());
		$var($ints, data, nullptr);
		int32_t var$0 = sourceLine->getMinX();
		int32_t var$1 = sourceLine->getMinY();
		int32_t var$2 = sourceLine->getWidth();
		$assign(data, sourceLine->getPixels(var$0, var$1, var$2, sourceLine->getHeight(), data));
		int32_t var$3 = sourceLine->getMinX();
		int32_t var$4 = sourceLine->getMinY();
		int32_t var$5 = sourceLine->getWidth();
		$nc(wr)->setPixels(var$3, var$4, var$5, sourceLine->getHeight(), data);
		$nc(this->srcCM)->coerceData(wr, false);
		int32_t var$6 = wr->getMinX();
		int32_t var$7 = wr->getMinY();
		int32_t var$8 = wr->getWidth();
		$assign(sourceLine, wr->createChild(var$6, var$7, var$8, wr->getHeight(), 0, 0, this->srcBands));
	}
	$nc(this->raster)->setRect(sourceLine);
	if ((y > 7) && (y % 8 == 0)) {
		$nc(this->cbLock)->lock();
		{
			$var($Throwable, var$9, nullptr);
			try {
				processImageProgress((float)y / (float)this->sourceHeight * 100.0f);
			} catch ($Throwable& var$10) {
				$assign(var$9, var$10);
			} /*finally*/ {
				$nc(this->cbLock)->unlock();
			}
			if (var$9 != nullptr) {
				$throw(var$9);
			}
		}
	}
}

void JPEGImageWriter::abortWrite(int64_t structPointer) {
	$prepareNative(JPEGImageWriter, abortWrite, void, int64_t structPointer);
	$invokeNative(JPEGImageWriter, abortWrite, structPointer);
	$finishNative();
}

void JPEGImageWriter::resetWriter(int64_t structPointer) {
	$prepareNative(JPEGImageWriter, resetWriter, void, int64_t structPointer);
	$invokeNative(JPEGImageWriter, resetWriter, structPointer);
	$finishNative();
}

void JPEGImageWriter::disposeWriter(int64_t structPointer) {
	$init(JPEGImageWriter);
	$prepareNativeStatic(JPEGImageWriter, disposeWriter, void, int64_t structPointer);
	$invokeNativeStatic(JPEGImageWriter, disposeWriter, structPointer);
	$finishNativeStatic();
}

void JPEGImageWriter::writeOutputData($bytes* data, int32_t offset, int32_t len) {
	$nc(this->cbLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->ios)->write(data, offset, len);
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

void JPEGImageWriter::setThreadLock() {
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

void JPEGImageWriter::clearThreadLock() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Thread, currThread, $Thread::currentThread());
		if (this->theThread == nullptr || this->theThread != currThread) {
			$throwNew($IllegalStateException, $$str({"Attempt to clear thread lock form wrong thread. Locked thread: "_s, this->theThread, "; current thread: "_s, currThread}));
		}
		--this->theLockCount;
		if (this->theLockCount == 0) {
			$set(this, theThread, nullptr);
		}
	}
}

void clinit$JPEGImageWriter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		JPEGImageWriter::initStatic();
	}
	$assignStatic(JPEGImageWriter::preferredThumbSizes, $new($DimensionArray, {
		$$new($Dimension, 1, 1),
		$$new($Dimension, 255, 255)
	}));
}

JPEGImageWriter::JPEGImageWriter() {
}

$Class* JPEGImageWriter::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriter, name, initialize, &_JPEGImageWriter_ClassInfo_, clinit$JPEGImageWriter, allocate$JPEGImageWriter);
	return class$;
}

$Class* JPEGImageWriter::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com