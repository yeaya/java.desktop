#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>

#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$1.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$2.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$3.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$4.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$5.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader$EmbeddedProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteOrder.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/event/IIOReadProgressListener.h>
#include <javax/imageio/event/IIOReadUpdateListener.h>
#include <javax/imageio/event/IIOReadWarningListener.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef BI_BITFIELDS
#undef BI_JPEG
#undef BI_PNG
#undef BI_RGB
#undef BI_RLE4
#undef BI_RLE8
#undef LCS_CALIBRATED_RGB
#undef LITTLE_ENDIAN
#undef PROFILE_EMBEDDED
#undef PROFILE_LINKED
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT
#undef VERSION_2
#undef VERSION_2_1_BIT
#undef VERSION_2_24_BIT
#undef VERSION_2_4_BIT
#undef VERSION_2_8_BIT
#undef VERSION_3
#undef VERSION_3_1_BIT
#undef VERSION_3_24_BIT
#undef VERSION_3_4_BIT
#undef VERSION_3_8_BIT
#undef VERSION_3_EXT
#undef VERSION_3_EXT_16_BIT
#undef VERSION_3_EXT_1_BIT
#undef VERSION_3_EXT_24_BIT
#undef VERSION_3_EXT_32_BIT
#undef VERSION_3_EXT_4_BIT
#undef VERSION_3_EXT_8_BIT
#undef VERSION_3_EXT_EMBEDDED
#undef VERSION_3_NT
#undef VERSION_3_NT_16_BIT
#undef VERSION_3_NT_32_BIT
#undef VERSION_3_XP_EMBEDDED
#undef VERSION_4
#undef VERSION_4_16_BIT
#undef VERSION_4_1_BIT
#undef VERSION_4_24_BIT
#undef VERSION_4_32_BIT
#undef VERSION_4_4_BIT
#undef VERSION_4_8_BIT
#undef VERSION_4_XP_EMBEDDED
#undef VERSION_5
#undef VERSION_5_XP_EMBEDDED

using $BMPConstants = ::com::sun::imageio::plugins::bmp::BMPConstants;
using $BMPImageReader$1 = ::com::sun::imageio::plugins::bmp::BMPImageReader$1;
using $BMPImageReader$2 = ::com::sun::imageio::plugins::bmp::BMPImageReader$2;
using $BMPImageReader$3 = ::com::sun::imageio::plugins::bmp::BMPImageReader$3;
using $BMPImageReader$4 = ::com::sun::imageio::plugins::bmp::BMPImageReader$4;
using $BMPImageReader$5 = ::com::sun::imageio::plugins::bmp::BMPImageReader$5;
using $BMPImageReader$EmbeddedProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageReader$EmbeddedProgressAdapter;
using $BMPMetadata = ::com::sun::imageio::plugins::bmp::BMPMetadata;
using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteOrder = ::java::nio::ByteOrder;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $IIOException = ::javax::imageio::IIOException;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOReadProgressListener = ::javax::imageio::event::IIOReadProgressListener;
using $IIOReadUpdateListener = ::javax::imageio::event::IIOReadUpdateListener;
using $IIOReadWarningListener = ::javax::imageio::event::IIOReadWarningListener;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageReader_FieldInfo_[] = {
	{"VERSION_2_1_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_2_1_BIT)},
	{"VERSION_2_4_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_2_4_BIT)},
	{"VERSION_2_8_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_2_8_BIT)},
	{"VERSION_2_24_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_2_24_BIT)},
	{"VERSION_3_1_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_1_BIT)},
	{"VERSION_3_4_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_4_BIT)},
	{"VERSION_3_8_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_8_BIT)},
	{"VERSION_3_24_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_24_BIT)},
	{"VERSION_3_NT_16_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_NT_16_BIT)},
	{"VERSION_3_NT_32_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_NT_32_BIT)},
	{"VERSION_3_EXT_1_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_1_BIT)},
	{"VERSION_3_EXT_4_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_4_BIT)},
	{"VERSION_3_EXT_8_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_8_BIT)},
	{"VERSION_3_EXT_16_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_16_BIT)},
	{"VERSION_3_EXT_24_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_24_BIT)},
	{"VERSION_3_EXT_32_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_32_BIT)},
	{"VERSION_4_1_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_1_BIT)},
	{"VERSION_4_4_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_4_BIT)},
	{"VERSION_4_8_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_8_BIT)},
	{"VERSION_4_16_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_16_BIT)},
	{"VERSION_4_24_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_24_BIT)},
	{"VERSION_4_32_BIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_32_BIT)},
	{"VERSION_3_XP_EMBEDDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_XP_EMBEDDED)},
	{"VERSION_3_EXT_EMBEDDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_3_EXT_EMBEDDED)},
	{"VERSION_4_XP_EMBEDDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_4_XP_EMBEDDED)},
	{"VERSION_5_XP_EMBEDDED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BMPImageReader, VERSION_5_XP_EMBEDDED)},
	{"bitmapFileSize", "J", nullptr, $PRIVATE, $field(BMPImageReader, bitmapFileSize)},
	{"bitmapOffset", "J", nullptr, $PRIVATE, $field(BMPImageReader, bitmapOffset)},
	{"bitmapStart", "J", nullptr, $PRIVATE, $field(BMPImageReader, bitmapStart)},
	{"compression", "J", nullptr, $PRIVATE, $field(BMPImageReader, compression)},
	{"imageSize", "J", nullptr, $PRIVATE, $field(BMPImageReader, imageSize)},
	{"palette", "[B", nullptr, $PRIVATE, $field(BMPImageReader, palette)},
	{"imageType", "I", nullptr, $PRIVATE, $field(BMPImageReader, imageType)},
	{"numBands", "I", nullptr, $PRIVATE, $field(BMPImageReader, numBands)},
	{"isBottomUp", "Z", nullptr, $PRIVATE, $field(BMPImageReader, isBottomUp)},
	{"bitsPerPixel", "I", nullptr, $PRIVATE, $field(BMPImageReader, bitsPerPixel)},
	{"redMask", "I", nullptr, $PRIVATE, $field(BMPImageReader, redMask)},
	{"greenMask", "I", nullptr, $PRIVATE, $field(BMPImageReader, greenMask)},
	{"blueMask", "I", nullptr, $PRIVATE, $field(BMPImageReader, blueMask)},
	{"alphaMask", "I", nullptr, $PRIVATE, $field(BMPImageReader, alphaMask)},
	{"sampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PRIVATE, $field(BMPImageReader, sampleModel)},
	{"originalSampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PRIVATE, $field(BMPImageReader, originalSampleModel)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(BMPImageReader, colorModel)},
	{"originalColorModel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(BMPImageReader, originalColorModel)},
	{"iis", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(BMPImageReader, iis)},
	{"gotHeader", "Z", nullptr, $PRIVATE, $field(BMPImageReader, gotHeader)},
	{"width", "I", nullptr, $PRIVATE, $field(BMPImageReader, width)},
	{"height", "I", nullptr, $PRIVATE, $field(BMPImageReader, height)},
	{"destinationRegion", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BMPImageReader, destinationRegion)},
	{"sourceRegion", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BMPImageReader, sourceRegion)},
	{"metadata", "Lcom/sun/imageio/plugins/bmp/BMPMetadata;", nullptr, $PRIVATE, $field(BMPImageReader, metadata)},
	{"bi", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(BMPImageReader, bi)},
	{"noTransform", "Z", nullptr, $PRIVATE, $field(BMPImageReader, noTransform)},
	{"seleBand", "Z", nullptr, $PRIVATE, $field(BMPImageReader, seleBand)},
	{"scaleX", "I", nullptr, $PRIVATE, $field(BMPImageReader, scaleX)},
	{"scaleY", "I", nullptr, $PRIVATE, $field(BMPImageReader, scaleY)},
	{"sourceBands", "[I", nullptr, $PRIVATE, $field(BMPImageReader, sourceBands)},
	{"destBands", "[I", nullptr, $PRIVATE, $field(BMPImageReader, destBands)},
	{"isLinkedProfileDisabled", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReader, isLinkedProfileDisabled)},
	{"isWindowsPlatform", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(BMPImageReader, isWindowsPlatform)},
	{}
};

$MethodInfo _BMPImageReader_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageReader::*)($ImageReaderSpi*)>(&BMPImageReader::init$))},
	{"access$000", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;F)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageReader*,float)>(&BMPImageReader::access$000))},
	{"access$100", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageReader*,$BufferedImage*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$ints*)>(&BMPImageReader::access$100))},
	{"access$200", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;Ljava/awt/image/BufferedImage;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageReader*,$BufferedImage*)>(&BMPImageReader::access$200))},
	{"access$300", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageReader*,$BufferedImage*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$ints*)>(&BMPImageReader::access$300))},
	{"access$400", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;Ljava/lang/String;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageReader*,$String*)>(&BMPImageReader::access$400))},
	{"canReadRaster", "()Z", nullptr, $PUBLIC},
	{"checkIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)(int32_t)>(&BMPImageReader::checkIndex))},
	{"copyRLE4ScanlineToDst", "(I[B[B)Z", nullptr, $PRIVATE, $method(static_cast<bool(BMPImageReader::*)(int32_t,$bytes*,$bytes*)>(&BMPImageReader::copyRLE4ScanlineToDst)), "java.io.IOException"},
	{"copyRLE8ScanlineToDst", "(I[B[B)Z", nullptr, $PRIVATE, $method(static_cast<bool(BMPImageReader::*)(int32_t,$bytes*,$bytes*)>(&BMPImageReader::copyRLE8ScanlineToDst))},
	{"decodeRLE4", "(II[B[B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)(int32_t,int32_t,$bytes*,$bytes*)>(&BMPImageReader::decodeRLE4)), "java.io.IOException"},
	{"decodeRLE8", "(II[B[B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)(int32_t,int32_t,$bytes*,$bytes*)>(&BMPImageReader::decodeRLE8)), "java.io.IOException"},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC},
	{"getHeight", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getWidth", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isLinkedProfileAllowed", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&BMPImageReader::isLinkedProfileAllowed))},
	{"isRandomAccessEasy", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isUncOrDevicePath", "([B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($bytes*)>(&BMPImageReader::isUncOrDevicePath))},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read16Bit", "([S)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($shorts*)>(&BMPImageReader::read16Bit)), "java.io.IOException"},
	{"read1Bit", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::read1Bit)), "java.io.IOException"},
	{"read24Bit", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::read24Bit)), "java.io.IOException"},
	{"read32Bit", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($ints*)>(&BMPImageReader::read32Bit)), "java.io.IOException"},
	{"read4Bit", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::read4Bit)), "java.io.IOException"},
	{"read8Bit", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::read8Bit)), "java.io.IOException"},
	{"readEmbedded", "(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(BMPImageReader::*)(int32_t,$BufferedImage*,$ImageReadParam*)>(&BMPImageReader::readEmbedded)), "java.io.IOException"},
	{"readHeader", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException,java.lang.IllegalArgumentException"},
	{"readRLE4", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::readRLE4)), "java.io.IOException"},
	{"readRLE8", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)($bytes*)>(&BMPImageReader::readRLE8)), "java.io.IOException"},
	{"readRaster", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetHeaderInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader::*)()>(&BMPImageReader::resetHeaderInfo))},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BMPImageReader_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageReader", "EmbeddedProgressAdapter", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$5", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$4", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$3", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$2", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"javax.imageio.ImageReader",
	"com.sun.imageio.plugins.bmp.BMPConstants",
	_BMPImageReader_FieldInfo_,
	_BMPImageReader_MethodInfo_,
	nullptr,
	nullptr,
	_BMPImageReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter,com.sun.imageio.plugins.bmp.BMPImageReader$5,com.sun.imageio.plugins.bmp.BMPImageReader$4,com.sun.imageio.plugins.bmp.BMPImageReader$3,com.sun.imageio.plugins.bmp.BMPImageReader$2,com.sun.imageio.plugins.bmp.BMPImageReader$1"
};

$Object* allocate$BMPImageReader($Class* clazz) {
	return $of($alloc(BMPImageReader));
}

int32_t BMPImageReader::hashCode() {
	 return this->$ImageReader::hashCode();
}

bool BMPImageReader::equals(Object$* arg0) {
	 return this->$ImageReader::equals(arg0);
}

$Object* BMPImageReader::clone() {
	 return this->$ImageReader::clone();
}

$String* BMPImageReader::toString() {
	 return this->$ImageReader::toString();
}

void BMPImageReader::finalize() {
	this->$ImageReader::finalize();
}

$Boolean* BMPImageReader::isLinkedProfileDisabled = nullptr;
$Boolean* BMPImageReader::isWindowsPlatform = nullptr;

void BMPImageReader::access$400(BMPImageReader* x0, $String* x1) {
	$init(BMPImageReader);
	$nc(x0)->processWarningOccurred(x1);
}

void BMPImageReader::access$300(BMPImageReader* x0, $BufferedImage* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, int32_t x8, $ints* x9) {
	$init(BMPImageReader);
	$nc(x0)->processPassStarted(x1, x2, x3, x4, x5, x6, x7, x8, x9);
}

void BMPImageReader::access$200(BMPImageReader* x0, $BufferedImage* x1) {
	$init(BMPImageReader);
	$nc(x0)->processPassComplete(x1);
}

void BMPImageReader::access$100(BMPImageReader* x0, $BufferedImage* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, $ints* x8) {
	$init(BMPImageReader);
	$nc(x0)->processImageUpdate(x1, x2, x3, x4, x5, x6, x7, x8);
}

void BMPImageReader::access$000(BMPImageReader* x0, float x1) {
	$init(BMPImageReader);
	$nc(x0)->processImageProgress(x1);
}

void BMPImageReader::init$($ImageReaderSpi* originator) {
	$ImageReader::init$(originator);
	$set(this, iis, nullptr);
	this->gotHeader = false;
	this->noTransform = true;
	this->seleBand = false;
}

void BMPImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
	$set(this, iis, $cast($ImageInputStream, input));
	if (this->iis != nullptr) {
		$init($ByteOrder);
		$nc(this->iis)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
	}
	resetHeaderInfo();
}

int32_t BMPImageReader::getNumImages(bool allowSearch) {
	$useLocalCurrentObjectStackCache();
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("GetNumImages0"_s)));
	}
	if (this->seekForwardOnly && allowSearch) {
		$throwNew($IllegalStateException, $($I18N::getString("GetNumImages1"_s)));
	}
	return 1;
}

int32_t BMPImageReader::getWidth(int32_t imageIndex) {
	checkIndex(imageIndex);
	try {
		readHeader();
	} catch ($IllegalArgumentException& e) {
		$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
	}
	return this->width;
}

int32_t BMPImageReader::getHeight(int32_t imageIndex) {
	checkIndex(imageIndex);
	try {
		readHeader();
	} catch ($IllegalArgumentException& e) {
		$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
	}
	return this->height;
}

void BMPImageReader::checkIndex(int32_t imageIndex) {
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, $($I18N::getString("BMPImageReader0"_s)));
	}
}

void BMPImageReader::readHeader() {
	$useLocalCurrentObjectStackCache();
	if (this->gotHeader) {
		return;
	}
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, "Input source not set!"_s);
	}
	int32_t profileData = 0;
	int32_t profileSize = 0;
	$set(this, metadata, $new($BMPMetadata));
	$nc(this->iis)->mark();
	$var($bytes, marker, $new($bytes, 2));
	$nc(this->iis)->read(marker);
	if (marker->get(0) != 66 || marker->get(1) != 77) {
		$throwNew($IllegalArgumentException, $($I18N::getString("BMPImageReader1"_s)));
	}
	this->bitmapFileSize = $nc(this->iis)->readUnsignedInt();
	$nc(this->iis)->skipBytes(4);
	this->bitmapOffset = $nc(this->iis)->readUnsignedInt();
	int64_t size = $nc(this->iis)->readUnsignedInt();
	if (size == 12) {
		this->width = $nc(this->iis)->readShort();
		this->height = $nc(this->iis)->readShort();
	} else {
		this->width = $nc(this->iis)->readInt();
		this->height = $nc(this->iis)->readInt();
	}
	$nc(this->metadata)->width = this->width;
	$nc(this->metadata)->height = this->height;
	int32_t planes = $nc(this->iis)->readUnsignedShort();
	this->bitsPerPixel = $nc(this->iis)->readUnsignedShort();
	$nc(this->metadata)->bitsPerPixel = (int16_t)this->bitsPerPixel;
	this->numBands = 3;
	if (size == 12) {
		$init($BMPConstants);
		$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_2);
		if (this->bitsPerPixel == 1) {
			this->imageType = BMPImageReader::VERSION_2_1_BIT;
		} else if (this->bitsPerPixel == 4) {
			this->imageType = BMPImageReader::VERSION_2_4_BIT;
		} else if (this->bitsPerPixel == 8) {
			this->imageType = BMPImageReader::VERSION_2_8_BIT;
		} else if (this->bitsPerPixel == 24) {
			this->imageType = BMPImageReader::VERSION_2_24_BIT;
		} else {
			$throwNew($IIOException, $($I18N::getString("BMPImageReader8"_s)));
		}
		int32_t numberOfEntries = (int32_t)((this->bitmapOffset - 14 - size) / 3);
		int32_t sizeOfPalette = numberOfEntries * 3;
		$set(this, palette, $new($bytes, sizeOfPalette));
		$nc(this->iis)->readFully(this->palette, 0, sizeOfPalette);
		$set($nc(this->metadata), palette, this->palette);
		$nc(this->metadata)->paletteSize = numberOfEntries;
	} else {
		this->compression = $nc(this->iis)->readUnsignedInt();
		this->imageSize = $nc(this->iis)->readUnsignedInt();
		int64_t xPelsPerMeter = $nc(this->iis)->readInt();
		int64_t yPelsPerMeter = $nc(this->iis)->readInt();
		int64_t colorsUsed = $nc(this->iis)->readUnsignedInt();
		int64_t colorsImportant = $nc(this->iis)->readUnsignedInt();
		$nc(this->metadata)->compression = (int32_t)this->compression;
		$nc(this->metadata)->xPixelsPerMeter = (int32_t)xPelsPerMeter;
		$nc(this->metadata)->yPixelsPerMeter = (int32_t)yPelsPerMeter;
		$nc(this->metadata)->colorsUsed = (int32_t)colorsUsed;
		$nc(this->metadata)->colorsImportant = (int32_t)colorsImportant;
		if (size == 40) {
			{
				int32_t numberOfEntries = 0;
				int32_t sizeOfPalette = 0;
				switch ((int32_t)this->compression) {
				case $BMPConstants::BI_JPEG:
					{}
				case $BMPConstants::BI_PNG:
					{
						$init($BMPConstants);
						$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_3);
						this->imageType = BMPImageReader::VERSION_3_XP_EMBEDDED;
						break;
					}
				case $BMPConstants::BI_RGB:
					{}
				case $BMPConstants::BI_RLE8:
					{}
				case $BMPConstants::BI_RLE4:
					{
						if (this->bitmapOffset < (size + 14)) {
							$throwNew($IIOException, $($I18N::getString("BMPImageReader7"_s)));
						}
						numberOfEntries = (int32_t)((this->bitmapOffset - 14 - size) / 4);
						sizeOfPalette = numberOfEntries * 4;
						$set(this, palette, $new($bytes, sizeOfPalette));
						$nc(this->iis)->readFully(this->palette, 0, sizeOfPalette);
						$set($nc(this->metadata), palette, this->palette);
						$nc(this->metadata)->paletteSize = numberOfEntries;
						if (this->bitsPerPixel == 1) {
							this->imageType = BMPImageReader::VERSION_3_1_BIT;
						} else if (this->bitsPerPixel == 4) {
							this->imageType = BMPImageReader::VERSION_3_4_BIT;
						} else if (this->bitsPerPixel == 8) {
							this->imageType = BMPImageReader::VERSION_3_8_BIT;
						} else if (this->bitsPerPixel == 24) {
							this->imageType = BMPImageReader::VERSION_3_24_BIT;
						} else if (this->bitsPerPixel == 16) {
							this->imageType = BMPImageReader::VERSION_3_NT_16_BIT;
							this->redMask = 31744;
							this->greenMask = 992;
							this->blueMask = (1 << 5) - 1;
							$nc(this->metadata)->redMask = this->redMask;
							$nc(this->metadata)->greenMask = this->greenMask;
							$nc(this->metadata)->blueMask = this->blueMask;
						} else if (this->bitsPerPixel == 32) {
							this->imageType = BMPImageReader::VERSION_3_NT_32_BIT;
							this->redMask = 0x00FF0000;
							this->greenMask = 0x0000FF00;
							this->blueMask = 255;
							$nc(this->metadata)->redMask = this->redMask;
							$nc(this->metadata)->greenMask = this->greenMask;
							$nc(this->metadata)->blueMask = this->blueMask;
						} else {
							$throwNew($IIOException, $($I18N::getString("BMPImageReader8"_s)));
						}
						$init($BMPConstants);
						$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_3);
						break;
					}
				case $BMPConstants::BI_BITFIELDS:
					{
						if (this->bitsPerPixel == 16) {
							this->imageType = BMPImageReader::VERSION_3_NT_16_BIT;
						} else if (this->bitsPerPixel == 32) {
							this->imageType = BMPImageReader::VERSION_3_NT_32_BIT;
						} else {
							$throwNew($IIOException, $($I18N::getString("BMPImageReader8"_s)));
						}
						this->redMask = (int32_t)$nc(this->iis)->readUnsignedInt();
						this->greenMask = (int32_t)$nc(this->iis)->readUnsignedInt();
						this->blueMask = (int32_t)$nc(this->iis)->readUnsignedInt();
						$nc(this->metadata)->redMask = this->redMask;
						$nc(this->metadata)->greenMask = this->greenMask;
						$nc(this->metadata)->blueMask = this->blueMask;
						if (colorsUsed != 0) {
							sizeOfPalette = (int32_t)colorsUsed * 4;
							$set(this, palette, $new($bytes, sizeOfPalette));
							$nc(this->iis)->readFully(this->palette, 0, sizeOfPalette);
							$set($nc(this->metadata), palette, this->palette);
							$nc(this->metadata)->paletteSize = (int32_t)colorsUsed;
						}
						$init($BMPConstants);
						$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_3_NT);
						break;
					}
				default:
					{
						$throwNew($IIOException, $($I18N::getString("BMPImageReader2"_s)));
					}
				}
			}
		} else if (size == 52 || size == 56) {
			this->redMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			this->greenMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			this->blueMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			if (size == 56) {
				this->alphaMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			}
			$init($BMPConstants);
			$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_3_EXT);
			int32_t numberOfEntries = (int32_t)((this->bitmapOffset - 14 - size) / 4);
			int32_t sizeOfPalette = numberOfEntries * 4;
			$set(this, palette, $new($bytes, sizeOfPalette));
			$nc(this->iis)->readFully(this->palette, 0, sizeOfPalette);
			$set($nc(this->metadata), palette, this->palette);
			$nc(this->metadata)->paletteSize = numberOfEntries;
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_JPEG:
				{}
			case $BMPConstants::BI_PNG:
				{
					this->imageType = BMPImageReader::VERSION_3_EXT_EMBEDDED;
					break;
				}
			default:
				{
					if (this->bitsPerPixel == 1) {
						this->imageType = BMPImageReader::VERSION_3_EXT_1_BIT;
					} else if (this->bitsPerPixel == 4) {
						this->imageType = BMPImageReader::VERSION_3_EXT_4_BIT;
					} else if (this->bitsPerPixel == 8) {
						this->imageType = BMPImageReader::VERSION_3_EXT_8_BIT;
					} else if (this->bitsPerPixel == 16) {
						this->imageType = BMPImageReader::VERSION_3_EXT_16_BIT;
						if ((int32_t)this->compression == $BMPConstants::BI_RGB) {
							this->redMask = 31744;
							this->greenMask = 992;
							this->blueMask = 31;
						}
					} else if (this->bitsPerPixel == 24) {
						this->imageType = BMPImageReader::VERSION_3_EXT_24_BIT;
					} else if (this->bitsPerPixel == 32) {
						this->imageType = BMPImageReader::VERSION_3_EXT_32_BIT;
						if ((int32_t)this->compression == $BMPConstants::BI_RGB) {
							this->redMask = 0x00FF0000;
							this->greenMask = 0x0000FF00;
							this->blueMask = 255;
						}
					} else {
						$throwNew($IIOException, $($I18N::getString("BMPImageReader8"_s)));
					}
					$nc(this->metadata)->redMask = this->redMask;
					$nc(this->metadata)->greenMask = this->greenMask;
					$nc(this->metadata)->blueMask = this->blueMask;
					$nc(this->metadata)->alphaMask = this->alphaMask;
				}
			}
		} else if (size == 108 || size == 124) {
			if (size == 108) {
				$init($BMPConstants);
				$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_4);
			} else if (size == 124) {
				$init($BMPConstants);
				$set($nc(this->metadata), bmpVersion, $BMPConstants::VERSION_5);
			}
			this->redMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			this->greenMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			this->blueMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			this->alphaMask = (int32_t)$nc(this->iis)->readUnsignedInt();
			int64_t csType = $nc(this->iis)->readUnsignedInt();
			int32_t redX = $nc(this->iis)->readInt();
			int32_t redY = $nc(this->iis)->readInt();
			int32_t redZ = $nc(this->iis)->readInt();
			int32_t greenX = $nc(this->iis)->readInt();
			int32_t greenY = $nc(this->iis)->readInt();
			int32_t greenZ = $nc(this->iis)->readInt();
			int32_t blueX = $nc(this->iis)->readInt();
			int32_t blueY = $nc(this->iis)->readInt();
			int32_t blueZ = $nc(this->iis)->readInt();
			int64_t gammaRed = $nc(this->iis)->readUnsignedInt();
			int64_t gammaGreen = $nc(this->iis)->readUnsignedInt();
			int64_t gammaBlue = $nc(this->iis)->readUnsignedInt();
			if (size == 124) {
				$nc(this->metadata)->intent = $nc(this->iis)->readInt();
				profileData = $nc(this->iis)->readInt();
				profileSize = $nc(this->iis)->readInt();
				$nc(this->iis)->skipBytes(4);
			}
			$nc(this->metadata)->colorSpace = (int32_t)csType;
			if (csType == $BMPConstants::LCS_CALIBRATED_RGB) {
				$nc(this->metadata)->redX = (double)redX;
				$nc(this->metadata)->redY = (double)redY;
				$nc(this->metadata)->redZ = (double)redZ;
				$nc(this->metadata)->greenX = (double)greenX;
				$nc(this->metadata)->greenY = (double)greenY;
				$nc(this->metadata)->greenZ = (double)greenZ;
				$nc(this->metadata)->blueX = (double)blueX;
				$nc(this->metadata)->blueY = (double)blueY;
				$nc(this->metadata)->blueZ = (double)blueZ;
				$nc(this->metadata)->gammaRed = (int32_t)gammaRed;
				$nc(this->metadata)->gammaGreen = (int32_t)gammaGreen;
				$nc(this->metadata)->gammaBlue = (int32_t)gammaBlue;
			}
			int32_t numberOfEntries = (int32_t)((this->bitmapOffset - 14 - size) / 4);
			int32_t sizeOfPalette = numberOfEntries * 4;
			$set(this, palette, $new($bytes, sizeOfPalette));
			$nc(this->iis)->readFully(this->palette, 0, sizeOfPalette);
			$set($nc(this->metadata), palette, this->palette);
			$nc(this->metadata)->paletteSize = numberOfEntries;
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_JPEG:
				{}
			case $BMPConstants::BI_PNG:
				{
					if (size == 108) {
						this->imageType = BMPImageReader::VERSION_4_XP_EMBEDDED;
					} else if (size == 124) {
						this->imageType = BMPImageReader::VERSION_5_XP_EMBEDDED;
					}
					break;
				}
			default:
				{
					if (this->bitsPerPixel == 1) {
						this->imageType = BMPImageReader::VERSION_4_1_BIT;
					} else if (this->bitsPerPixel == 4) {
						this->imageType = BMPImageReader::VERSION_4_4_BIT;
					} else if (this->bitsPerPixel == 8) {
						this->imageType = BMPImageReader::VERSION_4_8_BIT;
					} else if (this->bitsPerPixel == 16) {
						this->imageType = BMPImageReader::VERSION_4_16_BIT;
						if ((int32_t)this->compression == $BMPConstants::BI_RGB) {
							this->redMask = 31744;
							this->greenMask = 992;
							this->blueMask = 31;
						}
					} else if (this->bitsPerPixel == 24) {
						this->imageType = BMPImageReader::VERSION_4_24_BIT;
					} else if (this->bitsPerPixel == 32) {
						this->imageType = BMPImageReader::VERSION_4_32_BIT;
						if ((int32_t)this->compression == $BMPConstants::BI_RGB) {
							this->redMask = 0x00FF0000;
							this->greenMask = 0x0000FF00;
							this->blueMask = 255;
						}
					} else {
						$throwNew($IIOException, $($I18N::getString("BMPImageReader8"_s)));
					}
					$nc(this->metadata)->redMask = this->redMask;
					$nc(this->metadata)->greenMask = this->greenMask;
					$nc(this->metadata)->blueMask = this->blueMask;
					$nc(this->metadata)->alphaMask = this->alphaMask;
				}
			}
		} else {
			$throwNew($IIOException, $($I18N::getString("BMPImageReader3"_s)));
		}
	}
	if (this->height > 0) {
		this->isBottomUp = true;
	} else {
		this->isBottomUp = false;
		this->height = $Math::abs(this->height);
	}
	$var($ColorSpace, colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	if ($nc(this->metadata)->colorSpace == $BMPConstants::PROFILE_LINKED || $nc(this->metadata)->colorSpace == $BMPConstants::PROFILE_EMBEDDED) {
		$nc(this->iis)->mark();
		$nc(this->iis)->skipBytes(profileData - size);
		$var($bytes, profile, $new($bytes, profileSize));
		$nc(this->iis)->readFully(profile, 0, profileSize);
		$nc(this->iis)->reset();
		try {
			bool var$0 = $nc(this->metadata)->colorSpace == $BMPConstants::PROFILE_LINKED && isLinkedProfileAllowed();
			if (var$0 && !isUncOrDevicePath(profile)) {
				$var($String, path, $new($String, profile, "windows-1252"_s));
				$assign(colorSpace, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(path))));
			} else {
				$assign(colorSpace, $new($ICC_ColorSpace, $($ICC_Profile::getInstance(profile))));
			}
		} catch ($Exception& e) {
			$assign(colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
		}
	}
	if (this->bitsPerPixel == 0 || this->compression == $BMPConstants::BI_JPEG || this->compression == $BMPConstants::BI_PNG) {
		$set(this, colorModel, nullptr);
		$set(this, sampleModel, nullptr);
	} else if (this->bitsPerPixel == 1 || this->bitsPerPixel == 4 || this->bitsPerPixel == 8) {
		this->numBands = 1;
		if (this->bitsPerPixel == 8) {
			$var($ints, bandOffsets, $new($ints, this->numBands));
			for (int32_t i = 0; i < this->numBands; ++i) {
				bandOffsets->set(i, this->numBands - 1 - i);
			}
			$set(this, sampleModel, $new($PixelInterleavedSampleModel, $DataBuffer::TYPE_BYTE, this->width, this->height, this->numBands, this->numBands * this->width, bandOffsets));
		} else {
			$set(this, sampleModel, $new($MultiPixelPackedSampleModel, $DataBuffer::TYPE_BYTE, this->width, this->height, this->bitsPerPixel));
		}
		$var($bytes, r, nullptr);
		$var($bytes, g, nullptr);
		$var($bytes, b, nullptr);
		if (this->imageType == BMPImageReader::VERSION_2_1_BIT || this->imageType == BMPImageReader::VERSION_2_4_BIT || this->imageType == BMPImageReader::VERSION_2_8_BIT) {
			size = $nc(this->palette)->length / 3;
			if (size > 256) {
				size = 256;
			}
			int32_t off = 0;
			$assign(r, $new($bytes, (int32_t)size));
			$assign(g, $new($bytes, (int32_t)size));
			$assign(b, $new($bytes, (int32_t)size));
			for (int32_t i = 0; i < (int32_t)size; ++i) {
				off = 3 * i;
				b->set(i, $nc(this->palette)->get(off));
				g->set(i, $nc(this->palette)->get(off + 1));
				r->set(i, $nc(this->palette)->get(off + 2));
			}
		} else {
			size = $nc(this->palette)->length / 4;
			if (size > 256) {
				size = 256;
			}
			int32_t off = 0;
			$assign(r, $new($bytes, (int32_t)size));
			$assign(g, $new($bytes, (int32_t)size));
			$assign(b, $new($bytes, (int32_t)size));
			for (int32_t i = 0; i < size; ++i) {
				off = 4 * i;
				b->set(i, $nc(this->palette)->get(off));
				g->set(i, $nc(this->palette)->get(off + 1));
				r->set(i, $nc(this->palette)->get(off + 2));
			}
		}
		if ($ImageUtil::isIndicesForGrayscale(r, g, b)) {
			$set(this, colorModel, $ImageUtil::createColorModel(nullptr, this->sampleModel));
		} else {
			$set(this, colorModel, $new($IndexColorModel, this->bitsPerPixel, (int32_t)size, r, g, b));
		}
	} else if (this->bitsPerPixel == 16) {
		this->numBands = 3;
		$set(this, sampleModel, $new($SinglePixelPackedSampleModel, $DataBuffer::TYPE_USHORT, this->width, this->height, $$new($ints, {
			this->redMask,
			this->greenMask,
			this->blueMask
		})));
		$set(this, colorModel, $new($DirectColorModel, colorSpace, 16, this->redMask, this->greenMask, this->blueMask, 0, false, $DataBuffer::TYPE_USHORT));
	} else if (this->bitsPerPixel == 32) {
		this->numBands = this->alphaMask == 0 ? 3 : 4;
		$var($ints, bitMasks, this->numBands == 3 ? $new($ints, {
			this->redMask,
			this->greenMask,
			this->blueMask
		}) : $new($ints, {
			this->redMask,
			this->greenMask,
			this->blueMask,
			this->alphaMask
		}));
		$set(this, sampleModel, $new($SinglePixelPackedSampleModel, $DataBuffer::TYPE_INT, this->width, this->height, bitMasks));
		$set(this, colorModel, $new($DirectColorModel, colorSpace, 32, this->redMask, this->greenMask, this->blueMask, this->alphaMask, false, $DataBuffer::TYPE_INT));
	} else {
		this->numBands = 3;
		$var($ints, bandOffsets, $new($ints, this->numBands));
		for (int32_t i = 0; i < this->numBands; ++i) {
			bandOffsets->set(i, this->numBands - 1 - i);
		}
		$set(this, sampleModel, $new($PixelInterleavedSampleModel, $DataBuffer::TYPE_BYTE, this->width, this->height, this->numBands, this->numBands * this->width, bandOffsets));
		$set(this, colorModel, $ImageUtil::createColorModel(colorSpace, this->sampleModel));
	}
	$set(this, originalSampleModel, this->sampleModel);
	$set(this, originalColorModel, this->colorModel);
	$nc(this->iis)->reset();
	$nc(this->iis)->skipBytes(this->bitmapOffset);
	this->bitmapStart = $nc(this->iis)->getStreamPosition();
	this->gotHeader = true;
}

$Iterator* BMPImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	checkIndex(imageIndex);
	try {
		readHeader();
	} catch ($IllegalArgumentException& e) {
		$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
	}
	$var($ArrayList, list, $new($ArrayList, 1));
	list->add($$new($ImageTypeSpecifier, this->originalColorModel, this->originalSampleModel));
	return list->iterator();
}

$ImageReadParam* BMPImageReader::getDefaultReadParam() {
	return $new($ImageReadParam);
}

$IIOMetadata* BMPImageReader::getImageMetadata(int32_t imageIndex) {
	checkIndex(imageIndex);
	if (this->metadata == nullptr) {
		try {
			readHeader();
		} catch ($IllegalArgumentException& e) {
			$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
		}
	}
	return this->metadata;
}

$IIOMetadata* BMPImageReader::getStreamMetadata() {
	return nullptr;
}

bool BMPImageReader::isRandomAccessEasy(int32_t imageIndex) {
	checkIndex(imageIndex);
	try {
		readHeader();
	} catch ($IllegalArgumentException& e) {
		$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
	}
	return $nc(this->metadata)->compression == $BMPConstants::BI_RGB;
}

$BufferedImage* BMPImageReader::read(int32_t imageIndex, $ImageReadParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReadParam, param, param$renamed);
	if (this->iis == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("BMPImageReader5"_s)));
	}
	checkIndex(imageIndex);
	clearAbortRequest();
	processImageStarted(imageIndex);
	if (abortRequested()) {
		processReadAborted();
		return this->bi;
	}
	if (param == nullptr) {
		$assign(param, getDefaultReadParam());
	}
	try {
		readHeader();
	} catch ($IllegalArgumentException& e) {
		$throwNew($IIOException, $($I18N::getString("BMPImageReader6"_s)), e);
	}
	$set(this, sourceRegion, $new($Rectangle, 0, 0, 0, 0));
	$set(this, destinationRegion, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(param, this->width, this->height, $($nc(param)->getDestination()), this->sourceRegion, this->destinationRegion);
	this->scaleX = $nc(param)->getSourceXSubsampling();
	this->scaleY = param->getSourceYSubsampling();
	$set(this, sourceBands, param->getSourceBands());
	$set(this, destBands, param->getDestinationBands());
	this->seleBand = (this->sourceBands != nullptr) && (this->destBands != nullptr);
	this->noTransform = $nc(this->destinationRegion)->equals($$new($Rectangle, 0, 0, this->width, this->height)) || this->seleBand;
	if (!this->seleBand) {
		$set(this, sourceBands, $new($ints, this->numBands));
		$set(this, destBands, $new($ints, this->numBands));
		for (int32_t i = 0; i < this->numBands; ++i) {
			int32_t var$0 = i;
			$nc(this->destBands)->set(var$0, $nc(this->sourceBands)->set(i, i));
		}
	}
	$set(this, bi, param->getDestination());
	$var($WritableRaster, raster, nullptr);
	if (this->bi == nullptr) {
		if (this->sampleModel != nullptr && this->colorModel != nullptr) {
			$set(this, sampleModel, $nc(this->sampleModel)->createCompatibleSampleModel($nc(this->destinationRegion)->x + $nc(this->destinationRegion)->width, $nc(this->destinationRegion)->y + $nc(this->destinationRegion)->height));
			if (this->seleBand) {
				$set(this, sampleModel, $nc(this->sampleModel)->createSubsetSampleModel(this->sourceBands));
			}
			$assign(raster, $Raster::createWritableRaster(this->sampleModel, $$new($Point)));
			$set(this, bi, $new($BufferedImage, this->colorModel, raster, false, ($Hashtable*)nullptr));
		}
	} else {
		$assign(raster, $nc(this->bi)->getWritableTile(0, 0));
		$set(this, sampleModel, $nc(this->bi)->getSampleModel());
		$set(this, colorModel, $nc(this->bi)->getColorModel());
		this->noTransform &= $nc(this->destinationRegion)->equals($($nc(raster)->getBounds()));
	}
	$var($bytes, bdata, nullptr);
	$var($shorts, sdata, nullptr);
	$var($ints, idata, nullptr);
	if (this->sampleModel != nullptr) {
		if ($nc(this->sampleModel)->getDataType() == $DataBuffer::TYPE_BYTE) {
			$assign(bdata, $nc(($cast($DataBufferByte, $($nc(raster)->getDataBuffer()))))->getData());
		} else if ($nc(this->sampleModel)->getDataType() == $DataBuffer::TYPE_USHORT) {
			$assign(sdata, $nc(($cast($DataBufferUShort, $($nc(raster)->getDataBuffer()))))->getData());
		} else if ($nc(this->sampleModel)->getDataType() == $DataBuffer::TYPE_INT) {
			$assign(idata, $nc(($cast($DataBufferInt, $($nc(raster)->getDataBuffer()))))->getData());
		}
	}
	$nc(this->iis)->seek(this->bitmapStart);
	switch (this->imageType) {
	case BMPImageReader::VERSION_2_1_BIT:
		{
			read1Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_2_4_BIT:
		{
			read4Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_2_8_BIT:
		{
			read8Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_2_24_BIT:
		{
			read24Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_3_1_BIT:
		{
			read1Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_3_4_BIT:
		{
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_RGB:
				{
					read4Bit(bdata);
					break;
				}
			case $BMPConstants::BI_RLE4:
				{
					readRLE4(bdata);
					break;
				}
			default:
				{
					$throwNew($IIOException, $($I18N::getString("BMPImageReader1"_s)));
				}
			}
			break;
		}
	case BMPImageReader::VERSION_3_8_BIT:
		{
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_RGB:
				{
					read8Bit(bdata);
					break;
				}
			case $BMPConstants::BI_RLE8:
				{
					readRLE8(bdata);
					break;
				}
			default:
				{
					$throwNew($IIOException, $($I18N::getString("BMPImageReader1"_s)));
				}
			}
			break;
		}
	case BMPImageReader::VERSION_3_24_BIT:
		{
			read24Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_3_NT_16_BIT:
		{
			read16Bit(sdata);
			break;
		}
	case BMPImageReader::VERSION_3_NT_32_BIT:
		{
			read32Bit(idata);
			break;
		}
	case BMPImageReader::VERSION_3_XP_EMBEDDED:
		{}
	case BMPImageReader::VERSION_3_EXT_EMBEDDED:
		{}
	case BMPImageReader::VERSION_4_XP_EMBEDDED:
		{}
	case BMPImageReader::VERSION_5_XP_EMBEDDED:
		{
			$set(this, bi, readEmbedded((int32_t)this->compression, this->bi, param));
			break;
		}
	case BMPImageReader::VERSION_3_EXT_1_BIT:
		{}
	case BMPImageReader::VERSION_4_1_BIT:
		{
			read1Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_3_EXT_4_BIT:
		{}
	case BMPImageReader::VERSION_4_4_BIT:
		{
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_RGB:
				{
					read4Bit(bdata);
					break;
				}
			case $BMPConstants::BI_RLE4:
				{
					readRLE4(bdata);
					break;
				}
			default:
				{
					$throwNew($IIOException, $($I18N::getString("BMPImageReader1"_s)));
				}
			}
			break;
		}
	case BMPImageReader::VERSION_3_EXT_8_BIT:
		{}
	case BMPImageReader::VERSION_4_8_BIT:
		{
			switch ((int32_t)this->compression) {
			case $BMPConstants::BI_RGB:
				{
					read8Bit(bdata);
					break;
				}
			case $BMPConstants::BI_RLE8:
				{
					readRLE8(bdata);
					break;
				}
			default:
				{
					$throwNew($IIOException, $($I18N::getString("BMPImageReader1"_s)));
				}
			}
			break;
		}
	case BMPImageReader::VERSION_3_EXT_16_BIT:
		{}
	case BMPImageReader::VERSION_4_16_BIT:
		{
			read16Bit(sdata);
			break;
		}
	case BMPImageReader::VERSION_3_EXT_24_BIT:
		{}
	case BMPImageReader::VERSION_4_24_BIT:
		{
			read24Bit(bdata);
			break;
		}
	case BMPImageReader::VERSION_3_EXT_32_BIT:
		{}
	case BMPImageReader::VERSION_4_32_BIT:
		{
			read32Bit(idata);
			break;
		}
	}
	if (abortRequested()) {
		processReadAborted();
	} else {
		processImageComplete();
	}
	return this->bi;
}

bool BMPImageReader::canReadRaster() {
	return true;
}

$Raster* BMPImageReader::readRaster(int32_t imageIndex, $ImageReadParam* param) {
	$var($BufferedImage, bi, read(imageIndex, param));
	return $nc(bi)->getData();
}

void BMPImageReader::resetHeaderInfo() {
	this->gotHeader = false;
	$set(this, bi, nullptr);
	$set(this, sampleModel, ($set(this, originalSampleModel, nullptr)));
	$set(this, colorModel, ($set(this, originalColorModel, nullptr)));
}

void BMPImageReader::reset() {
	$ImageReader::reset();
	$set(this, iis, nullptr);
	resetHeaderInfo();
}

void BMPImageReader::read1Bit($bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesPerScanline = (this->width + 7) / 8;
	int32_t padding = bytesPerScanline % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	int32_t lineLength = bytesPerScanline + padding;
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * bytesPerScanline : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(bdata, j, bytesPerScanline);
			$nc(this->iis)->skipBytes(padding);
			j += this->isBottomUp ? -bytesPerScanline : bytesPerScanline;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($bytes, buf, $new($bytes, lineLength));
		int32_t lineStride = $nc(($cast($MultiPixelPackedSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes(lineLength * (this->height - 1 - lastLine));
		} else {
			$nc(this->iis)->skipBytes(lineLength * $nc(this->sourceRegion)->y);
		}
		int32_t skipLength = lineLength * (this->scaleY - 1);
		$var($ints, srcOff, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, destOff, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, srcPos, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, destPos, $new($ints, $nc(this->destinationRegion)->width));
		{
			int32_t i = $nc(this->destinationRegion)->x;
			int32_t x = $nc(this->sourceRegion)->x;
			int32_t j = 0;
			for (; i < $nc(this->destinationRegion)->x + $nc(this->destinationRegion)->width; ++i, ++j, x += this->scaleX) {
				srcPos->set(j, x >> 3);
				srcOff->set(j, 7 - ((int32_t)(x & (uint32_t)7)));
				destPos->set(j, i >> 3);
				destOff->set(j, 7 - ((int32_t)(i & (uint32_t)7)));
			}
		}
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->read(buf, 0, lineLength);
				for (int32_t i = 0; i < $nc(this->destinationRegion)->width; ++i) {
					int32_t v = (int32_t)(($sr((int32_t)buf->get(srcPos->get(i)), srcOff->get(i))) & (uint32_t)1);
					(*$nc(bdata))[k + destPos->get(i)] |= $sl(v, destOff->get(i));
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::read4Bit($bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	int32_t bytesPerScanline = (this->width + 1) / 2;
	int32_t padding = bytesPerScanline % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	int32_t lineLength = bytesPerScanline + padding;
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * bytesPerScanline : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(bdata, j, bytesPerScanline);
			$nc(this->iis)->skipBytes(padding);
			j += this->isBottomUp ? -bytesPerScanline : bytesPerScanline;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($bytes, buf, $new($bytes, lineLength));
		int32_t lineStride = $nc(($cast($MultiPixelPackedSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes(lineLength * (this->height - 1 - lastLine));
		} else {
			$nc(this->iis)->skipBytes(lineLength * $nc(this->sourceRegion)->y);
		}
		int32_t skipLength = lineLength * (this->scaleY - 1);
		$var($ints, srcOff, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, destOff, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, srcPos, $new($ints, $nc(this->destinationRegion)->width));
		$var($ints, destPos, $new($ints, $nc(this->destinationRegion)->width));
		{
			int32_t i = $nc(this->destinationRegion)->x;
			int32_t x = $nc(this->sourceRegion)->x;
			int32_t j = 0;
			for (; i < $nc(this->destinationRegion)->x + $nc(this->destinationRegion)->width; ++i, ++j, x += this->scaleX) {
				srcPos->set(j, x >> 1);
				srcOff->set(j, (1 - ((int32_t)(x & (uint32_t)1))) << 2);
				destPos->set(j, i >> 1);
				destOff->set(j, (1 - ((int32_t)(i & (uint32_t)1))) << 2);
			}
		}
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->read(buf, 0, lineLength);
				for (int32_t i = 0; i < $nc(this->destinationRegion)->width; ++i) {
					int32_t v = (int32_t)(($sr((int32_t)buf->get(srcPos->get(i)), srcOff->get(i))) & (uint32_t)15);
					(*$nc(bdata))[k + destPos->get(i)] |= $sl(v, destOff->get(i));
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::read8Bit($bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	int32_t padding = this->width % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	int32_t lineLength = this->width + padding;
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * this->width : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(bdata, j, this->width);
			$nc(this->iis)->skipBytes(padding);
			j += this->isBottomUp ? -this->width : this->width;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($bytes, buf, $new($bytes, lineLength));
		int32_t lineStride = $nc(($cast($ComponentSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes(lineLength * (this->height - 1 - lastLine));
		} else {
			$nc(this->iis)->skipBytes(lineLength * $nc(this->sourceRegion)->y);
		}
		int32_t skipLength = lineLength * (this->scaleY - 1);
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		k += $nc(this->destinationRegion)->x;
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->read(buf, 0, lineLength);
				{
					int32_t i = 0;
					int32_t m = $nc(this->sourceRegion)->x;
					for (; i < $nc(this->destinationRegion)->width; ++i, m += this->scaleX) {
						$nc(bdata)->set(k + i, buf->get(m));
					}
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::read24Bit($bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	int32_t padding = this->width * 3 % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	int32_t lineStride = this->width * 3;
	int32_t lineLength = lineStride + padding;
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * this->width * 3 : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(bdata, j, lineStride);
			$nc(this->iis)->skipBytes(padding);
			j += this->isBottomUp ? -lineStride : lineStride;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($bytes, buf, $new($bytes, lineLength));
		lineStride = $nc(($cast($ComponentSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes(lineLength * (this->height - 1 - lastLine));
		} else {
			$nc(this->iis)->skipBytes(lineLength * $nc(this->sourceRegion)->y);
		}
		int32_t skipLength = lineLength * (this->scaleY - 1);
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		k += $nc(this->destinationRegion)->x * 3;
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->read(buf, 0, lineLength);
				{
					int32_t i = 0;
					int32_t m = 3 * $nc(this->sourceRegion)->x;
					for (; i < $nc(this->destinationRegion)->width; ++i, m += 3 * this->scaleX) {
						int32_t n = 3 * i + k;
						for (int32_t b = 0; b < $nc(this->destBands)->length; ++b) {
							$nc(bdata)->set(n + $nc(this->destBands)->get(b), buf->get(m + $nc(this->sourceBands)->get(b)));
						}
					}
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::read16Bit($shorts* sdata) {
	$useLocalCurrentObjectStackCache();
	int32_t padding = this->width * 2 % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	int32_t lineLength = this->width + padding / 2;
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * this->width : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(sdata, j, this->width);
			$nc(this->iis)->skipBytes(padding);
			j += this->isBottomUp ? -this->width : this->width;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($shorts, buf, $new($shorts, lineLength));
		int32_t lineStride = $nc(($cast($SinglePixelPackedSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes((lineLength * (this->height - 1 - lastLine)) << 1);
		} else {
			$nc(this->iis)->skipBytes((lineLength * $nc(this->sourceRegion)->y) << 1);
		}
		int32_t skipLength = (lineLength * (this->scaleY - 1)) << 1;
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		k += $nc(this->destinationRegion)->x;
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->readFully(buf, 0, lineLength);
				{
					int32_t i = 0;
					int32_t m = $nc(this->sourceRegion)->x;
					for (; i < $nc(this->destinationRegion)->width; ++i, m += this->scaleX) {
						$nc(sdata)->set(k + i, buf->get(m));
					}
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::read32Bit($ints* idata) {
	$useLocalCurrentObjectStackCache();
	if (this->noTransform) {
		int32_t j = this->isBottomUp ? (this->height - 1) * this->width : 0;
		for (int32_t i = 0; i < this->height; ++i) {
			$nc(this->iis)->readFully(idata, j, this->width);
			j += this->isBottomUp ? -this->width : this->width;
			processImageUpdate(this->bi, 0, i, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			processImageProgress(100.0f * i / $nc(this->destinationRegion)->height);
			if (abortRequested()) {
				break;
			}
		}
	} else {
		$var($ints, buf, $new($ints, this->width));
		int32_t lineStride = $nc(($cast($SinglePixelPackedSampleModel, this->sampleModel)))->getScanlineStride();
		if (this->isBottomUp) {
			int32_t lastLine = $nc(this->sourceRegion)->y + ($nc(this->destinationRegion)->height - 1) * this->scaleY;
			$nc(this->iis)->skipBytes((this->width * (this->height - 1 - lastLine)) << 2);
		} else {
			$nc(this->iis)->skipBytes((this->width * $nc(this->sourceRegion)->y) << 2);
		}
		int32_t skipLength = (this->width * (this->scaleY - 1)) << 2;
		int32_t k = $nc(this->destinationRegion)->y * lineStride;
		if (this->isBottomUp) {
			k += ($nc(this->destinationRegion)->height - 1) * lineStride;
		}
		k += $nc(this->destinationRegion)->x;
		{
			int32_t j = 0;
			int32_t y = $nc(this->sourceRegion)->y;
			for (; j < $nc(this->destinationRegion)->height; ++j, y += this->scaleY) {
				$nc(this->iis)->readFully(buf, 0, this->width);
				{
					int32_t i = 0;
					int32_t m = $nc(this->sourceRegion)->x;
					for (; i < $nc(this->destinationRegion)->width; ++i, m += this->scaleX) {
						$nc(idata)->set(k + i, buf->get(m));
					}
				}
				k += this->isBottomUp ? -lineStride : lineStride;
				$nc(this->iis)->skipBytes(skipLength);
				processImageUpdate(this->bi, 0, j, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
				processImageProgress(100.0f * j / $nc(this->destinationRegion)->height);
				if (abortRequested()) {
					break;
				}
			}
		}
	}
}

void BMPImageReader::readRLE8($bytes* bdata) {
	int32_t imSize = (int32_t)this->imageSize;
	if (imSize == 0) {
		imSize = (int32_t)(this->bitmapFileSize - this->bitmapOffset);
	}
	int32_t padding = 0;
	int32_t remainder = this->width % 4;
	if (remainder != 0) {
		padding = 4 - remainder;
	}
	$var($bytes, values, $new($bytes, imSize));
	int32_t bytesRead = 0;
	$nc(this->iis)->readFully(values, 0, imSize);
	decodeRLE8(imSize, padding, values, bdata);
}

bool BMPImageReader::copyRLE8ScanlineToDst(int32_t lineNo, $bytes* val, $bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	bool isSuccess = false;
	if (lineNo >= $nc(this->sourceRegion)->y && lineNo < $nc(this->sourceRegion)->y + $nc(this->sourceRegion)->height) {
		if (this->noTransform) {
			int32_t pos = lineNo * this->width;
			for (int32_t i = 0; i < this->width; ++i) {
				$nc(bdata)->set(pos++, $nc(val)->get(i));
			}
			processImageUpdate(this->bi, 0, lineNo, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			isSuccess = true;
		} else if ($mod((lineNo - $nc(this->sourceRegion)->y), this->scaleY) == 0) {
			int32_t lineStride = $nc(($cast($ComponentSampleModel, this->sampleModel)))->getScanlineStride();
			int32_t currentLine = $div((lineNo - $nc(this->sourceRegion)->y), this->scaleY) + $nc(this->destinationRegion)->y;
			int32_t pos = currentLine * lineStride;
			pos += $nc(this->destinationRegion)->x;
			for (int32_t i = $nc(this->sourceRegion)->x; i < $nc(this->sourceRegion)->x + $nc(this->sourceRegion)->width; i += this->scaleX) {
				$nc(bdata)->set(pos++, $nc(val)->get(i));
			}
			processImageUpdate(this->bi, 0, currentLine, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			isSuccess = true;
		}
		for (int32_t scIndex = 0; scIndex < this->width; ++scIndex) {
			$nc(val)->set(scIndex, (int8_t)0);
		}
	}
	return isSuccess;
}

void BMPImageReader::decodeRLE8(int32_t imSize, int32_t padding, $bytes* values, $bytes* bdata) {
	$var($bytes, val, $new($bytes, this->width));
	int32_t count = 0;
	int32_t l = 0;
	int32_t value = 0;
	bool flag = false;
	int32_t lineNo = this->isBottomUp ? this->height - 1 : 0;
	int32_t finished = 0;
	while ((count + 1) < imSize) {
		value = (int32_t)($nc(values)->get(count++) & (uint32_t)255);
		if (value == 0) {
			{
				int32_t end = 0;
				int8_t readByte = 0;
				switch ((int32_t)(values->get(count++) & (uint32_t)255)) {
				case 0:
					{
						if (copyRLE8ScanlineToDst(lineNo, val, bdata)) {
							++finished;
						}
						processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
						lineNo += this->isBottomUp ? -1 : 1;
						l = 0;
						if (abortRequested()) {
							flag = true;
						}
						break;
					}
				case 1:
					{
						flag = true;
						if (l != 0) {
							if (copyRLE8ScanlineToDst(lineNo, val, bdata)) {
								++finished;
							}
							processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
							lineNo += this->isBottomUp ? -1 : 1;
							l = 0;
						}
						break;
					}
				case 2:
					{
						if ((count + 1) < imSize) {
							int32_t xoff = (int32_t)(values->get(count++) & (uint32_t)255);
							int32_t yoff = (int32_t)(values->get(count++) & (uint32_t)255);
							if (yoff != 0) {
								if (copyRLE8ScanlineToDst(lineNo, val, bdata)) {
									++finished;
								}
								processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
								lineNo += this->isBottomUp ? -yoff : yoff;
							}
							l += xoff + yoff * this->width;
							$modAssign(l, this->width);
						}
						break;
					}
				default:
					{
						end = (int32_t)(values->get(count - 1) & (uint32_t)255);
						readByte = (int8_t)0;
						for (int32_t i = 0; (i < end) && (count < imSize); ++i) {
							readByte = (int8_t)((int32_t)(values->get(count++) & (uint32_t)255));
							if (l < this->width) {
								val->set(l++, readByte);
							}
						}
						if (((int32_t)(end & (uint32_t)1)) == 1) {
							++count;
						}
						break;
					}
				}
			}
		} else {
			if (count < imSize) {
				for (int32_t i = 0; (i < value) && (l < this->width); ++i) {
					val->set(l++, (int8_t)((int32_t)(values->get(count) & (uint32_t)255)));
				}
			}
			++count;
		}
		if (flag) {
			break;
		}
	}
}

void BMPImageReader::readRLE4($bytes* bdata) {
	int32_t imSize = (int32_t)this->imageSize;
	if (imSize == 0) {
		imSize = (int32_t)(this->bitmapFileSize - this->bitmapOffset);
	}
	int32_t padding = 0;
	int32_t remainder = this->width % 4;
	if (remainder != 0) {
		padding = 4 - remainder;
	}
	$var($bytes, values, $new($bytes, imSize));
	$nc(this->iis)->readFully(values, 0, imSize);
	decodeRLE4(imSize, padding, values, bdata);
}

bool BMPImageReader::copyRLE4ScanlineToDst(int32_t lineNo, $bytes* val, $bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	bool isSuccess = false;
	if (lineNo >= $nc(this->sourceRegion)->y && lineNo < $nc(this->sourceRegion)->y + $nc(this->sourceRegion)->height) {
		if (this->noTransform) {
			int32_t pos = lineNo * ((this->width + 1) >> 1);
			{
				int32_t i = 0;
				int32_t j = 0;
				for (; i < this->width >> 1; ++i) {
					int32_t var$0 = ($nc(val)->get(j++) << 4);
					$nc(bdata)->set(pos++, (int8_t)(var$0 | val->get(j++)));
				}
			}
			if (((int32_t)(this->width & (uint32_t)1)) == 1) {
				(*$nc(bdata))[pos] |= $nc(val)->get(this->width - 1) << 4;
			}
			processImageUpdate(this->bi, 0, lineNo, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			isSuccess = true;
		} else if ($mod((lineNo - $nc(this->sourceRegion)->y), this->scaleY) == 0) {
			int32_t lineStride = $nc(($cast($MultiPixelPackedSampleModel, this->sampleModel)))->getScanlineStride();
			int32_t currentLine = $div((lineNo - $nc(this->sourceRegion)->y), this->scaleY) + $nc(this->destinationRegion)->y;
			int32_t pos = currentLine * lineStride;
			pos += $nc(this->destinationRegion)->x >> 1;
			int32_t shift = (1 - ((int32_t)($nc(this->destinationRegion)->x & (uint32_t)1))) << 2;
			for (int32_t i = $nc(this->sourceRegion)->x; i < $nc(this->sourceRegion)->x + $nc(this->sourceRegion)->width; i += this->scaleX) {
				(*$nc(bdata))[pos] |= $sl((int32_t)$nc(val)->get(i), shift);
				shift += 4;
				if (shift == 4) {
					++pos;
				}
				shift &= (uint32_t)7;
			}
			processImageUpdate(this->bi, 0, currentLine, $nc(this->destinationRegion)->width, 1, 1, 1, $$new($ints, {0}));
			isSuccess = true;
		}
		for (int32_t scIndex = 0; scIndex < this->width; ++scIndex) {
			$nc(val)->set(scIndex, (int8_t)0);
		}
	}
	return isSuccess;
}

void BMPImageReader::decodeRLE4(int32_t imSize, int32_t padding, $bytes* values, $bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, val, $new($bytes, this->width));
	int32_t count = 0;
	int32_t l = 0;
	int32_t value = 0;
	bool flag = false;
	int32_t lineNo = this->isBottomUp ? this->height - 1 : 0;
	int32_t finished = 0;
	while ((count + 1) < imSize) {
		value = (int32_t)($nc(values)->get(count++) & (uint32_t)255);
		if (value == 0) {
			{
				int32_t end = 0;
				int8_t readByte = 0;
				switch ((int32_t)(values->get(count++) & (uint32_t)255)) {
				case 0:
					{
						if (copyRLE4ScanlineToDst(lineNo, val, bdata)) {
							++finished;
						}
						processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
						lineNo += this->isBottomUp ? -1 : 1;
						l = 0;
						if (abortRequested()) {
							flag = true;
						}
						break;
					}
				case 1:
					{
						flag = true;
						if (l != 0) {
							if (copyRLE4ScanlineToDst(lineNo, val, bdata)) {
								++finished;
							}
							processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
							lineNo += this->isBottomUp ? -1 : 1;
							l = 0;
						}
						break;
					}
				case 2:
					{
						if ((count + 1) < imSize) {
							int32_t xoff = (int32_t)(values->get(count++) & (uint32_t)255);
							int32_t yoff = (int32_t)(values->get(count++) & (uint32_t)255);
							if (yoff != 0) {
								if (copyRLE4ScanlineToDst(lineNo, val, bdata)) {
									++finished;
								}
								processImageProgress(100.0f * finished / $nc(this->destinationRegion)->height);
								lineNo += this->isBottomUp ? -yoff : yoff;
							}
							l += xoff + yoff * this->width;
							$modAssign(l, this->width);
						}
						break;
					}
				default:
					{
						end = (int32_t)(values->get(count - 1) & (uint32_t)255);
						readByte = (int8_t)0;
						for (int32_t i = 0; (i < end) && (count < imSize); ++i) {
							readByte = (int8_t)((((int32_t)(i & (uint32_t)1)) == 0) ? ((int32_t)(values->get(count) & (uint32_t)240)) >> 4 : ((int32_t)(values->get(count++) & (uint32_t)15)));
							if (l < this->width) {
								val->set(l++, readByte);
							}
						}
						if (((int32_t)(end & (uint32_t)1)) == 1) {
							++count;
						}
						if (((int32_t)(((end + 1) / 2) & (uint32_t)1)) == 1) {
							++count;
						}
						break;
					}
				}
			}
		} else {
			if (count < imSize) {
				$var($ints, alternate, $new($ints, {
					((int32_t)(values->get(count) & (uint32_t)240)) >> 4,
					(int32_t)(values->get(count) & (uint32_t)15)
				}));
				for (int32_t i = 0; (i < value) && (l < this->width); ++i) {
					val->set(l++, (int8_t)alternate->get((int32_t)(i & (uint32_t)1)));
				}
			}
			++count;
		}
		if (flag) {
			break;
		}
	}
}

$BufferedImage* BMPImageReader::readEmbedded(int32_t type, $BufferedImage* bi$renamed, $ImageReadParam* bmpParam) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, bi$renamed);
	$var($String, format, nullptr);
	switch (type) {
	case $BMPConstants::BI_JPEG:
		{
			$assign(format, "JPEG"_s);
			break;
		}
	case $BMPConstants::BI_PNG:
		{
			$assign(format, "PNG"_s);
			break;
		}
	default:
		{
			$throwNew($IOException, $$str({"Unexpected compression type: "_s, $$str(type)}));
		}
	}
	$var($ImageReader, reader, $cast($ImageReader, $nc($($ImageIO::getImageReadersByFormatName(format)))->next()));
	if (reader == nullptr) {
		$throwNew($RuntimeException, $$str({$($I18N::getString("BMPImageReader4"_s)), " "_s, format}));
	}
	$var($bytes, buff, $new($bytes, (int32_t)this->imageSize));
	$nc(this->iis)->read(buff);
	$nc(reader)->setInput($($ImageIO::createImageInputStream($$new($ByteArrayInputStream, buff))));
	if (bi == nullptr) {
		$var($ImageTypeSpecifier, embType, $cast($ImageTypeSpecifier, $nc($(reader->getImageTypes(0)))->next()));
		$assign(bi, $nc(embType)->createBufferedImage($nc(this->destinationRegion)->x + $nc(this->destinationRegion)->width, $nc(this->destinationRegion)->y + $nc(this->destinationRegion)->height));
	}
	reader->addIIOReadProgressListener($$new($BMPImageReader$1, this));
	reader->addIIOReadUpdateListener($$new($BMPImageReader$2, this));
	reader->addIIOReadWarningListener($$new($BMPImageReader$3, this));
	$var($ImageReadParam, param, reader->getDefaultReadParam());
	$nc(param)->setDestination(bi);
	param->setDestinationBands($($nc(bmpParam)->getDestinationBands()));
	param->setDestinationOffset($($nc(bmpParam)->getDestinationOffset()));
	param->setSourceBands($($nc(bmpParam)->getSourceBands()));
	param->setSourceRegion($($nc(bmpParam)->getSourceRegion()));
	int32_t var$0 = $nc(bmpParam)->getSourceXSubsampling();
	int32_t var$1 = bmpParam->getSourceYSubsampling();
	int32_t var$2 = bmpParam->getSubsamplingXOffset();
	param->setSourceSubsampling(var$0, var$1, var$2, bmpParam->getSubsamplingYOffset());
	reader->read(0, param);
	return bi;
}

bool BMPImageReader::isLinkedProfileAllowed() {
	$init(BMPImageReader);
	$beforeCallerSensitive();
	if (BMPImageReader::isLinkedProfileDisabled == nullptr) {
		$var($PrivilegedAction, a, $new($BMPImageReader$4));
		$assignStatic(BMPImageReader::isLinkedProfileDisabled, $cast($Boolean, $AccessController::doPrivileged(a)));
	}
	return !$nc(BMPImageReader::isLinkedProfileDisabled)->booleanValue();
}

bool BMPImageReader::isUncOrDevicePath($bytes* p) {
	$init(BMPImageReader);
	$beforeCallerSensitive();
	if (BMPImageReader::isWindowsPlatform == nullptr) {
		$var($PrivilegedAction, a, $new($BMPImageReader$5));
		$assignStatic(BMPImageReader::isWindowsPlatform, $cast($Boolean, $AccessController::doPrivileged(a)));
	}
	if (!$nc(BMPImageReader::isWindowsPlatform)->booleanValue()) {
		return false;
	}
	if ($nc(p)->get(0) == u'/') {
		p->set(0, (int8_t)u'\\');
	}
	if ($nc(p)->get(1) == u'/') {
		p->set(1, (int8_t)u'\\');
	}
	if ($nc(p)->get(3) == u'/') {
		p->set(3, (int8_t)u'\\');
	}
	if (($nc(p)->get(0) == u'\\') && (p->get(1) == u'\\')) {
		if ((p->get(2) == u'?') && (p->get(3) == u'\\')) {
			return ((p->get(4) == u'U' || p->get(4) == u'u') && (p->get(5) == u'N' || p->get(5) == u'n') && (p->get(6) == u'C' || p->get(6) == u'c'));
		} else {
			return true;
		}
	} else {
		return false;
	}
}

void clinit$BMPImageReader($Class* class$) {
	$assignStatic(BMPImageReader::isLinkedProfileDisabled, nullptr);
	$assignStatic(BMPImageReader::isWindowsPlatform, nullptr);
}

BMPImageReader::BMPImageReader() {
}

$Class* BMPImageReader::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader, name, initialize, &_BMPImageReader_ClassInfo_, clinit$BMPImageReader, allocate$BMPImageReader);
	return class$;
}

$Class* BMPImageReader::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com