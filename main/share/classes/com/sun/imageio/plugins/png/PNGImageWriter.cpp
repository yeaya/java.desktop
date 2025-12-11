#include <com/sun/imageio/plugins/png/PNGImageWriter.h>

#include <com/sun/imageio/plugins/png/ChunkStream.h>
#include <com/sun/imageio/plugins/png/IDATOutputStream.h>
#include <com/sun/imageio/plugins/png/PNGImageReader.h>
#include <com/sun/imageio/plugins/png/PNGImageWriteParam.h>
#include <com/sun/imageio/plugins/png/PNGMetadata.h>
#include <com/sun/imageio/plugins/png/RowFilter.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

#undef DEFAULT_COMPRESSION_LEVEL
#undef IEND_TYPE
#undef IHDR_TYPE
#undef MODE_DEFAULT
#undef MODE_DISABLED
#undef MODE_EXPLICIT
#undef NO_COMPRESSION
#undef PLTE_TYPE
#undef PNG_COLOR_GRAY
#undef PNG_COLOR_GRAY_ALPHA
#undef PNG_COLOR_PALETTE
#undef PNG_COLOR_RGB
#undef PNG_COLOR_RGB_ALPHA

using $byteArray2 = $Array<int8_t, 2>;
using $ChunkStream = ::com::sun::imageio::plugins::png::ChunkStream;
using $IDATOutputStream = ::com::sun::imageio::plugins::png::IDATOutputStream;
using $PNGImageReader = ::com::sun::imageio::plugins::png::PNGImageReader;
using $PNGImageWriteParam = ::com::sun::imageio::plugins::png::PNGImageWriteParam;
using $PNGMetadata = ::com::sun::imageio::plugins::png::PNGMetadata;
using $RowFilter = ::com::sun::imageio::plugins::png::RowFilter;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Deflater = ::java::util::zip::Deflater;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _PNGImageWriter_FieldInfo_[] = {
	{"DEFAULT_COMPRESSION_LEVEL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageWriter, DEFAULT_COMPRESSION_LEVEL)},
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, 0, $field(PNGImageWriter, stream)},
	{"metadata", "Lcom/sun/imageio/plugins/png/PNGMetadata;", nullptr, 0, $field(PNGImageWriter, metadata)},
	{"sourceXOffset", "I", nullptr, 0, $field(PNGImageWriter, sourceXOffset)},
	{"sourceYOffset", "I", nullptr, 0, $field(PNGImageWriter, sourceYOffset)},
	{"sourceWidth", "I", nullptr, 0, $field(PNGImageWriter, sourceWidth)},
	{"sourceHeight", "I", nullptr, 0, $field(PNGImageWriter, sourceHeight)},
	{"sourceBands", "[I", nullptr, 0, $field(PNGImageWriter, sourceBands)},
	{"periodX", "I", nullptr, 0, $field(PNGImageWriter, periodX)},
	{"periodY", "I", nullptr, 0, $field(PNGImageWriter, periodY)},
	{"numBands", "I", nullptr, 0, $field(PNGImageWriter, numBands)},
	{"bpp", "I", nullptr, 0, $field(PNGImageWriter, bpp)},
	{"rowFilter", "Lcom/sun/imageio/plugins/png/RowFilter;", nullptr, 0, $field(PNGImageWriter, rowFilter)},
	{"prevRow", "[B", nullptr, 0, $field(PNGImageWriter, prevRow)},
	{"currRow", "[B", nullptr, 0, $field(PNGImageWriter, currRow)},
	{"filteredRows", "[[B", nullptr, 0, $field(PNGImageWriter, filteredRows)},
	{"sampleSize", "[I", nullptr, 0, $field(PNGImageWriter, sampleSize)},
	{"scalingBitDepth", "I", nullptr, 0, $field(PNGImageWriter, scalingBitDepth)},
	{"scale", "[[B", nullptr, 0, $field(PNGImageWriter, scale)},
	{"scale0", "[B", nullptr, 0, $field(PNGImageWriter, scale0)},
	{"scaleh", "[[B", nullptr, 0, $field(PNGImageWriter, scaleh)},
	{"scalel", "[[B", nullptr, 0, $field(PNGImageWriter, scalel)},
	{"totalPixels", "I", nullptr, 0, $field(PNGImageWriter, totalPixels)},
	{"pixelsDone", "I", nullptr, 0, $field(PNGImageWriter, pixelsDone)},
	{}
};

$MethodInfo _PNGImageWriter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageWriter::*)($ImageWriterSpi*)>(&PNGImageWriter::init$))},
	{"chunkType", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&PNGImageWriter::chunkType))},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"deflate", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PNGImageWriter::*)($bytes*)>(&PNGImageWriter::deflate)), "java.io.IOException"},
	{"encodePass", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/awt/image/RenderedImage;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)($ImageOutputStream*,$RenderedImage*,int32_t,int32_t,int32_t,int32_t)>(&PNGImageWriter::encodePass)), "java.io.IOException"},
	{"equals", "([I[I)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGImageWriter::*)($ints*,$ints*)>(&PNGImageWriter::equals))},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"initializeScaleTables", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)($ints*)>(&PNGImageWriter::initializeScaleTables))},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"writeIEND", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::writeIEND)), "java.io.IOException"},
	{"writeUnknownChunks", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::writeUnknownChunks)), "java.io.IOException"},
	{"write_IDAT", "(Ljava/awt/image/RenderedImage;I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)($RenderedImage*,int32_t)>(&PNGImageWriter::write_IDAT)), "java.io.IOException"},
	{"write_IHDR", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_IHDR)), "java.io.IOException"},
	{"write_PLTE", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_PLTE)), "java.io.IOException"},
	{"write_bKGD", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_bKGD)), "java.io.IOException"},
	{"write_cHRM", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_cHRM)), "java.io.IOException"},
	{"write_gAMA", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_gAMA)), "java.io.IOException"},
	{"write_hIST", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_hIST)), "java.io.IOException,javax.imageio.IIOException"},
	{"write_iCCP", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_iCCP)), "java.io.IOException"},
	{"write_iTXt", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_iTXt)), "java.io.IOException"},
	{"write_magic", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_magic)), "java.io.IOException"},
	{"write_pHYs", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_pHYs)), "java.io.IOException"},
	{"write_sBIT", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_sBIT)), "java.io.IOException"},
	{"write_sPLT", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_sPLT)), "java.io.IOException"},
	{"write_sRGB", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_sRGB)), "java.io.IOException"},
	{"write_tEXt", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_tEXt)), "java.io.IOException"},
	{"write_tIME", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_tIME)), "java.io.IOException"},
	{"write_tRNS", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_tRNS)), "java.io.IOException,javax.imageio.IIOException"},
	{"write_zTXt", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageWriter::*)()>(&PNGImageWriter::write_zTXt)), "java.io.IOException"},
	{}
};

$ClassInfo _PNGImageWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGImageWriter",
	"javax.imageio.ImageWriter",
	nullptr,
	_PNGImageWriter_FieldInfo_,
	_PNGImageWriter_MethodInfo_
};

$Object* allocate$PNGImageWriter($Class* clazz) {
	return $of($alloc(PNGImageWriter));
}

void PNGImageWriter::init$($ImageWriterSpi* originatingProvider) {
	$ImageWriter::init$(originatingProvider);
	$set(this, stream, nullptr);
	$set(this, metadata, nullptr);
	this->sourceXOffset = 0;
	this->sourceYOffset = 0;
	this->sourceWidth = 0;
	this->sourceHeight = 0;
	$set(this, sourceBands, nullptr);
	this->periodX = 1;
	this->periodY = 1;
	$set(this, rowFilter, $new($RowFilter));
	$set(this, prevRow, nullptr);
	$set(this, currRow, nullptr);
	$set(this, filteredRows, nullptr);
	$set(this, sampleSize, nullptr);
	this->scalingBitDepth = -1;
	$set(this, scale, nullptr);
	$set(this, scale0, nullptr);
	$set(this, scaleh, nullptr);
	$set(this, scalel, nullptr);
}

void PNGImageWriter::setOutput(Object$* output) {
	$ImageWriter::setOutput(output);
	if (output != nullptr) {
		if (!($instanceOf($ImageOutputStream, output))) {
			$throwNew($IllegalArgumentException, "output not an ImageOutputStream!"_s);
		}
		$set(this, stream, $cast($ImageOutputStream, output));
	} else {
		$set(this, stream, nullptr);
	}
}

$ImageWriteParam* PNGImageWriter::getDefaultWriteParam() {
	return $new($PNGImageWriteParam, $(getLocale()));
}

$IIOMetadata* PNGImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* PNGImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	$var($PNGMetadata, m, $new($PNGMetadata));
	m->initialize(imageType, $nc($($nc(imageType)->getSampleModel()))->getNumBands());
	return m;
}

$IIOMetadata* PNGImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* PNGImageWriter::convertImageMetadata($IIOMetadata* inData, $ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	if ($instanceOf($PNGMetadata, inData)) {
		return $cast($PNGMetadata, $nc(($cast($PNGMetadata, inData)))->clone());
	} else {
		return $new($PNGMetadata, inData);
	}
}

void PNGImageWriter::write_magic() {
	$var($bytes, magic, $new($bytes, {
		(int8_t)137,
		(int8_t)80,
		(int8_t)78,
		(int8_t)71,
		(int8_t)13,
		(int8_t)10,
		(int8_t)26,
		(int8_t)10
	}));
	$nc(this->stream)->write(magic);
}

void PNGImageWriter::write_IHDR() {
	$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::IHDR_TYPE, this->stream));
	cs->writeInt($nc(this->metadata)->IHDR_width);
	cs->writeInt($nc(this->metadata)->IHDR_height);
	cs->writeByte($nc(this->metadata)->IHDR_bitDepth);
	cs->writeByte($nc(this->metadata)->IHDR_colorType);
	if ($nc(this->metadata)->IHDR_compressionMethod != 0) {
		$throwNew($IIOException, "Only compression method 0 is defined in PNG 1.1"_s);
	}
	cs->writeByte($nc(this->metadata)->IHDR_compressionMethod);
	if ($nc(this->metadata)->IHDR_filterMethod != 0) {
		$throwNew($IIOException, "Only filter method 0 is defined in PNG 1.1"_s);
	}
	cs->writeByte($nc(this->metadata)->IHDR_filterMethod);
	if ($nc(this->metadata)->IHDR_interlaceMethod < 0 || $nc(this->metadata)->IHDR_interlaceMethod > 1) {
		$throwNew($IIOException, "Only interlace methods 0 (node) and 1 (adam7) are defined in PNG 1.1"_s);
	}
	cs->writeByte($nc(this->metadata)->IHDR_interlaceMethod);
	cs->finish();
}

void PNGImageWriter::write_cHRM() {
	if ($nc(this->metadata)->cHRM_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::cHRM_TYPE, this->stream));
		cs->writeInt($nc(this->metadata)->cHRM_whitePointX);
		cs->writeInt($nc(this->metadata)->cHRM_whitePointY);
		cs->writeInt($nc(this->metadata)->cHRM_redX);
		cs->writeInt($nc(this->metadata)->cHRM_redY);
		cs->writeInt($nc(this->metadata)->cHRM_greenX);
		cs->writeInt($nc(this->metadata)->cHRM_greenY);
		cs->writeInt($nc(this->metadata)->cHRM_blueX);
		cs->writeInt($nc(this->metadata)->cHRM_blueY);
		cs->finish();
	}
}

void PNGImageWriter::write_gAMA() {
	if ($nc(this->metadata)->gAMA_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::gAMA_TYPE, this->stream));
		cs->writeInt($nc(this->metadata)->gAMA_gamma);
		cs->finish();
	}
}

void PNGImageWriter::write_iCCP() {
	if ($nc(this->metadata)->iCCP_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::iCCP_TYPE, this->stream));
		if ($nc($nc(this->metadata)->iCCP_profileName)->length() > 79) {
			$throwNew($IIOException, "iCCP profile name is longer than 79"_s);
		}
		cs->writeBytes($nc(this->metadata)->iCCP_profileName);
		cs->writeByte(0);
		cs->writeByte($nc(this->metadata)->iCCP_compressionMethod);
		cs->write($nc(this->metadata)->iCCP_compressedProfile);
		cs->finish();
	}
}

void PNGImageWriter::write_sBIT() {
	if ($nc(this->metadata)->sBIT_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::sBIT_TYPE, this->stream));
		int32_t colorType = $nc(this->metadata)->IHDR_colorType;
		if ($nc(this->metadata)->sBIT_colorType != colorType) {
			processWarningOccurred(0, "sBIT metadata has wrong color type.\nThe chunk will not be written."_s);
			return;
		}
		if (colorType == $PNGImageReader::PNG_COLOR_GRAY || colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
			cs->writeByte($nc(this->metadata)->sBIT_grayBits);
		} else if (colorType == $PNGImageReader::PNG_COLOR_RGB || colorType == $PNGImageReader::PNG_COLOR_PALETTE || colorType == $PNGImageReader::PNG_COLOR_RGB_ALPHA) {
			cs->writeByte($nc(this->metadata)->sBIT_redBits);
			cs->writeByte($nc(this->metadata)->sBIT_greenBits);
			cs->writeByte($nc(this->metadata)->sBIT_blueBits);
		}
		if (colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA || colorType == $PNGImageReader::PNG_COLOR_RGB_ALPHA) {
			cs->writeByte($nc(this->metadata)->sBIT_alphaBits);
		}
		cs->finish();
	}
}

void PNGImageWriter::write_sRGB() {
	if ($nc(this->metadata)->sRGB_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::sRGB_TYPE, this->stream));
		cs->writeByte($nc(this->metadata)->sRGB_renderingIntent);
		cs->finish();
	}
}

void PNGImageWriter::write_PLTE() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->metadata)->PLTE_present) {
		if ($nc(this->metadata)->IHDR_colorType == $PNGImageReader::PNG_COLOR_GRAY || $nc(this->metadata)->IHDR_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
			processWarningOccurred(0, "A PLTE chunk may not appear in a gray or gray alpha image.\nThe chunk will not be written"_s);
			return;
		}
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::PLTE_TYPE, this->stream));
		int32_t numEntries = $nc($nc(this->metadata)->PLTE_red)->length;
		$var($bytes, palette, $new($bytes, numEntries * 3));
		int32_t index = 0;
		for (int32_t i = 0; i < numEntries; ++i) {
			palette->set(index++, $nc($nc(this->metadata)->PLTE_red)->get(i));
			palette->set(index++, $nc($nc(this->metadata)->PLTE_green)->get(i));
			palette->set(index++, $nc($nc(this->metadata)->PLTE_blue)->get(i));
		}
		cs->write(palette);
		cs->finish();
	}
}

void PNGImageWriter::write_hIST() {
	if ($nc(this->metadata)->hIST_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::hIST_TYPE, this->stream));
		if (!$nc(this->metadata)->PLTE_present) {
			$throwNew($IIOException, "hIST chunk without PLTE chunk!"_s);
		}
		cs->writeChars($nc(this->metadata)->hIST_histogram, 0, $nc($nc(this->metadata)->hIST_histogram)->length);
		cs->finish();
	}
}

void PNGImageWriter::write_tRNS() {
	if ($nc(this->metadata)->tRNS_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::tRNS_TYPE, this->stream));
		int32_t colorType = $nc(this->metadata)->IHDR_colorType;
		int32_t chunkType = $nc(this->metadata)->tRNS_colorType;
		int32_t chunkRed = $nc(this->metadata)->tRNS_red;
		int32_t chunkGreen = $nc(this->metadata)->tRNS_green;
		int32_t chunkBlue = $nc(this->metadata)->tRNS_blue;
		if (colorType == $PNGImageReader::PNG_COLOR_RGB && chunkType == $PNGImageReader::PNG_COLOR_GRAY) {
			chunkType = colorType;
			chunkRed = (chunkGreen = (chunkBlue = $nc(this->metadata)->tRNS_gray));
		}
		if (chunkType != colorType) {
			processWarningOccurred(0, "tRNS metadata has incompatible color type.\nThe chunk will not be written."_s);
			return;
		}
		if (colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			if (!$nc(this->metadata)->PLTE_present) {
				$throwNew($IIOException, "tRNS chunk without PLTE chunk!"_s);
			}
			cs->write($nc(this->metadata)->tRNS_alpha);
		} else if (colorType == $PNGImageReader::PNG_COLOR_GRAY) {
			cs->writeShort($nc(this->metadata)->tRNS_gray);
		} else if (colorType == $PNGImageReader::PNG_COLOR_RGB) {
			cs->writeShort(chunkRed);
			cs->writeShort(chunkGreen);
			cs->writeShort(chunkBlue);
		} else {
			$throwNew($IIOException, "tRNS chunk for color type 4 or 6!"_s);
		}
		cs->finish();
	}
}

void PNGImageWriter::write_bKGD() {
	if ($nc(this->metadata)->bKGD_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::bKGD_TYPE, this->stream));
		int32_t colorType = (int32_t)($nc(this->metadata)->IHDR_colorType & (uint32_t)3);
		int32_t chunkType = $nc(this->metadata)->bKGD_colorType;
		int32_t chunkRed = $nc(this->metadata)->bKGD_red;
		int32_t chunkGreen = $nc(this->metadata)->bKGD_green;
		int32_t chunkBlue = $nc(this->metadata)->bKGD_blue;
		if (colorType == $PNGImageReader::PNG_COLOR_RGB && chunkType == $PNGImageReader::PNG_COLOR_GRAY) {
			chunkType = colorType;
			chunkRed = (chunkGreen = (chunkBlue = $nc(this->metadata)->bKGD_gray));
		}
		if (chunkType != colorType) {
			processWarningOccurred(0, "bKGD metadata has incompatible color type.\nThe chunk will not be written."_s);
			return;
		}
		if (colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			cs->writeByte($nc(this->metadata)->bKGD_index);
		} else if (colorType == $PNGImageReader::PNG_COLOR_GRAY || colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
			cs->writeShort($nc(this->metadata)->bKGD_gray);
		} else {
			cs->writeShort(chunkRed);
			cs->writeShort(chunkGreen);
			cs->writeShort(chunkBlue);
		}
		cs->finish();
	}
}

void PNGImageWriter::write_pHYs() {
	if ($nc(this->metadata)->pHYs_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::pHYs_TYPE, this->stream));
		cs->writeInt($nc(this->metadata)->pHYs_pixelsPerUnitXAxis);
		cs->writeInt($nc(this->metadata)->pHYs_pixelsPerUnitYAxis);
		cs->writeByte($nc(this->metadata)->pHYs_unitSpecifier);
		cs->finish();
	}
}

void PNGImageWriter::write_sPLT() {
	if ($nc(this->metadata)->sPLT_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::sPLT_TYPE, this->stream));
		if ($nc($nc(this->metadata)->sPLT_paletteName)->length() > 79) {
			$throwNew($IIOException, "sPLT palette name is longer than 79"_s);
		}
		cs->writeBytes($nc(this->metadata)->sPLT_paletteName);
		cs->writeByte(0);
		cs->writeByte($nc(this->metadata)->sPLT_sampleDepth);
		int32_t numEntries = $nc($nc(this->metadata)->sPLT_red)->length;
		if ($nc(this->metadata)->sPLT_sampleDepth == 8) {
			for (int32_t i = 0; i < numEntries; ++i) {
				cs->writeByte($nc($nc(this->metadata)->sPLT_red)->get(i));
				cs->writeByte($nc($nc(this->metadata)->sPLT_green)->get(i));
				cs->writeByte($nc($nc(this->metadata)->sPLT_blue)->get(i));
				cs->writeByte($nc($nc(this->metadata)->sPLT_alpha)->get(i));
				cs->writeShort($nc($nc(this->metadata)->sPLT_frequency)->get(i));
			}
		} else {
			for (int32_t i = 0; i < numEntries; ++i) {
				cs->writeShort($nc($nc(this->metadata)->sPLT_red)->get(i));
				cs->writeShort($nc($nc(this->metadata)->sPLT_green)->get(i));
				cs->writeShort($nc($nc(this->metadata)->sPLT_blue)->get(i));
				cs->writeShort($nc($nc(this->metadata)->sPLT_alpha)->get(i));
				cs->writeShort($nc($nc(this->metadata)->sPLT_frequency)->get(i));
			}
		}
		cs->finish();
	}
}

void PNGImageWriter::write_tIME() {
	if ($nc(this->metadata)->tIME_present) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::tIME_TYPE, this->stream));
		cs->writeShort($nc(this->metadata)->tIME_year);
		cs->writeByte($nc(this->metadata)->tIME_month);
		cs->writeByte($nc(this->metadata)->tIME_day);
		cs->writeByte($nc(this->metadata)->tIME_hour);
		cs->writeByte($nc(this->metadata)->tIME_minute);
		cs->writeByte($nc(this->metadata)->tIME_second);
		cs->finish();
	}
}

void PNGImageWriter::write_tEXt() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, keywordIter, $nc($nc(this->metadata)->tEXt_keyword)->iterator());
	$var($Iterator, textIter, $nc($nc(this->metadata)->tEXt_text)->iterator());
	while ($nc(keywordIter)->hasNext()) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::tEXt_TYPE, this->stream));
		$var($String, keyword, $cast($String, keywordIter->next()));
		if ($nc(keyword)->length() > 79) {
			$throwNew($IIOException, "tEXt keyword is longer than 79"_s);
		}
		cs->writeBytes(keyword);
		cs->writeByte(0);
		$var($String, text, $cast($String, $nc(textIter)->next()));
		cs->writeBytes(text);
		cs->finish();
	}
}

$bytes* PNGImageWriter::deflate($bytes* b) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($DeflaterOutputStream, dos, $new($DeflaterOutputStream, baos));
	dos->write(b);
	dos->close();
	return baos->toByteArray();
}

void PNGImageWriter::write_iTXt() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, keywordIter, $nc($nc(this->metadata)->iTXt_keyword)->iterator());
	$var($Iterator, flagIter, $nc($nc(this->metadata)->iTXt_compressionFlag)->iterator());
	$var($Iterator, methodIter, $nc($nc(this->metadata)->iTXt_compressionMethod)->iterator());
	$var($Iterator, languageIter, $nc($nc(this->metadata)->iTXt_languageTag)->iterator());
	$var($Iterator, translatedKeywordIter, $nc($nc(this->metadata)->iTXt_translatedKeyword)->iterator());
	$var($Iterator, textIter, $nc($nc(this->metadata)->iTXt_text)->iterator());
	while ($nc(keywordIter)->hasNext()) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::iTXt_TYPE, this->stream));
		$var($String, keyword, $cast($String, keywordIter->next()));
		if ($nc(keyword)->length() > 79) {
			$throwNew($IIOException, "iTXt keyword is longer than 79"_s);
		}
		cs->writeBytes(keyword);
		cs->writeByte(0);
		$var($Boolean, compressed, $cast($Boolean, $nc(flagIter)->next()));
		cs->writeByte($nc(compressed)->booleanValue() ? 1 : 0);
		cs->writeByte($nc(($cast($Integer, $($nc(methodIter)->next()))))->intValue());
		cs->writeBytes($cast($String, $($nc(languageIter)->next())));
		cs->writeByte(0);
		cs->write($($nc(($cast($String, $($nc(translatedKeywordIter)->next()))))->getBytes("UTF8"_s)));
		cs->writeByte(0);
		$var($String, text, $cast($String, $nc(textIter)->next()));
		if ($nc((compressed))->booleanValue()) {
			cs->write($(deflate($($nc(text)->getBytes("UTF8"_s)))));
		} else {
			cs->write($($nc(text)->getBytes("UTF8"_s)));
		}
		cs->finish();
	}
}

void PNGImageWriter::write_zTXt() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, keywordIter, $nc($nc(this->metadata)->zTXt_keyword)->iterator());
	$var($Iterator, methodIter, $nc($nc(this->metadata)->zTXt_compressionMethod)->iterator());
	$var($Iterator, textIter, $nc($nc(this->metadata)->zTXt_text)->iterator());
	while ($nc(keywordIter)->hasNext()) {
		$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::zTXt_TYPE, this->stream));
		$var($String, keyword, $cast($String, keywordIter->next()));
		if ($nc(keyword)->length() > 79) {
			$throwNew($IIOException, "zTXt keyword is longer than 79"_s);
		}
		cs->writeBytes(keyword);
		cs->writeByte(0);
		int32_t compressionMethod = $nc(($cast($Integer, $($nc(methodIter)->next()))))->intValue();
		cs->writeByte(compressionMethod);
		$var($String, text, $cast($String, $nc(textIter)->next()));
		cs->write($(deflate($($nc(text)->getBytes("ISO-8859-1"_s)))));
		cs->finish();
	}
}

void PNGImageWriter::writeUnknownChunks() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, typeIter, $nc($nc(this->metadata)->unknownChunkType)->iterator());
	$var($Iterator, dataIter, $nc($nc(this->metadata)->unknownChunkData)->iterator());
	while (true) {
		bool var$0 = $nc(typeIter)->hasNext();
		if (!(var$0 && $nc(dataIter)->hasNext())) {
			break;
		}
		{
			$var($String, type, $cast($String, typeIter->next()));
			$var($ChunkStream, cs, $new($ChunkStream, chunkType(type), this->stream));
			$var($bytes, data, $cast($bytes, dataIter->next()));
			cs->write(data);
			cs->finish();
		}
	}
}

int32_t PNGImageWriter::chunkType($String* typeString) {
	$init(PNGImageWriter);
	char16_t c0 = $nc(typeString)->charAt(0);
	char16_t c1 = typeString->charAt(1);
	char16_t c2 = typeString->charAt(2);
	char16_t c3 = typeString->charAt(3);
	int32_t type = (((c0 << 24) | (c1 << 16)) | (c2 << 8)) | c3;
	return type;
}

void PNGImageWriter::encodePass($ImageOutputStream* os, $RenderedImage* image, int32_t xOffset, int32_t yOffset, int32_t xSkip, int32_t ySkip) {
	$useLocalCurrentObjectStackCache();
	int32_t minX = this->sourceXOffset;
	int32_t minY = this->sourceYOffset;
	int32_t width = this->sourceWidth;
	int32_t height = this->sourceHeight;
	xOffset *= this->periodX;
	xSkip *= this->periodX;
	yOffset *= this->periodY;
	ySkip *= this->periodY;
	int32_t hpixels = $div((width - xOffset + xSkip - 1), xSkip);
	int32_t vpixels = $div((height - yOffset + ySkip - 1), ySkip);
	if (hpixels == 0 || vpixels == 0) {
		return;
	}
	xOffset *= this->numBands;
	xSkip *= this->numBands;
	int32_t samplesPerByte = $div(8, $nc(this->metadata)->IHDR_bitDepth);
	int32_t numSamples = width * this->numBands;
	$var($ints, samples, $new($ints, numSamples));
	int32_t bytesPerRow = hpixels * this->numBands;
	if ($nc(this->metadata)->IHDR_bitDepth < 8) {
		bytesPerRow = $div((bytesPerRow + samplesPerByte - 1), samplesPerByte);
	} else if ($nc(this->metadata)->IHDR_bitDepth == 16) {
		bytesPerRow *= 2;
	}
	$var($IndexColorModel, icm_gray_alpha, nullptr);
	if ($nc(this->metadata)->IHDR_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA && $instanceOf($IndexColorModel, $($nc(image)->getColorModel()))) {
		bytesPerRow *= 2;
		$assign(icm_gray_alpha, $cast($IndexColorModel, image->getColorModel()));
	}
	$set(this, currRow, $new($bytes, bytesPerRow + this->bpp));
	$set(this, prevRow, $new($bytes, bytesPerRow + this->bpp));
	$set(this, filteredRows, $new($byteArray2, 5, bytesPerRow + this->bpp));
	int32_t bitDepth = $nc(this->metadata)->IHDR_bitDepth;
	for (int32_t row = minY + yOffset; row < minY + height; row += ySkip) {
		$var($Rectangle, rect, $new($Rectangle, minX, row, width, 1));
		$var($Raster, ras, $nc(image)->getData(rect));
		if (this->sourceBands != nullptr) {
			$assign(ras, $nc(ras)->createChild(minX, row, width, 1, minX, row, this->sourceBands));
		}
		$nc(ras)->getPixels(minX, row, width, 1, samples);
		if ($nc($(image->getColorModel()))->isAlphaPremultiplied()) {
			$var($WritableRaster, wr, ras->createCompatibleWritableRaster());
			int32_t var$0 = wr->getMinX();
			int32_t var$1 = wr->getMinY();
			int32_t var$2 = wr->getWidth();
			$nc(wr)->setPixels(var$0, var$1, var$2, wr->getHeight(), samples);
			$nc($(image->getColorModel()))->coerceData(wr, false);
			int32_t var$3 = wr->getMinX();
			int32_t var$4 = wr->getMinY();
			int32_t var$5 = wr->getWidth();
			wr->getPixels(var$3, var$4, var$5, wr->getHeight(), samples);
		}
		$var($ints, paletteOrder, $nc(this->metadata)->PLTE_order);
		if (paletteOrder != nullptr) {
			for (int32_t i = 0; i < numSamples; ++i) {
				samples->set(i, paletteOrder->get(samples->get(i)));
			}
		}
		int32_t count = this->bpp;
		int32_t pos = 0;
		int32_t tmp = 0;
		{
			int32_t mask = 0;
			switch (bitDepth) {
			case 1:
				{}
			case 2:
				{}
			case 4:
				{
					mask = samplesPerByte - 1;
					for (int32_t s = xOffset; s < numSamples; s += xSkip) {
						int8_t val = $nc(this->scale0)->get(samples->get(s));
						tmp = ($sl(tmp, bitDepth)) | val;
						if (((int32_t)(pos++ & (uint32_t)mask)) == mask) {
							$nc(this->currRow)->set(count++, (int8_t)tmp);
							tmp = 0;
							pos = 0;
						}
					}
					if (((int32_t)(pos & (uint32_t)mask)) != 0) {
						tmp <<= (($div(8, bitDepth)) - pos) * bitDepth;
						$nc(this->currRow)->set(count++, (int8_t)tmp);
					}
					break;
				}
			case 8:
				{
					if (this->numBands == 1) {
						for (int32_t s = xOffset; s < numSamples; s += xSkip) {
							$nc(this->currRow)->set(count++, $nc(this->scale0)->get(samples->get(s)));
							if (icm_gray_alpha != nullptr) {
								$nc(this->currRow)->set(count++, $nc(this->scale0)->get(icm_gray_alpha->getAlpha((int32_t)(255 & (uint32_t)samples->get(s)))));
							}
						}
					} else {
						for (int32_t s = xOffset; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								$nc(this->currRow)->set(count++, $nc($nc(this->scale)->get(b))->get(samples->get(s + b)));
							}
						}
					}
					break;
				}
			case 16:
				{
					for (int32_t s = xOffset; s < numSamples; s += xSkip) {
						for (int32_t b = 0; b < this->numBands; ++b) {
							$nc(this->currRow)->set(count++, $nc($nc(this->scaleh)->get(b))->get(samples->get(s + b)));
							$nc(this->currRow)->set(count++, $nc($nc(this->scalel)->get(b))->get(samples->get(s + b)));
						}
					}
					break;
				}
			}
		}
		int32_t filterType = $nc(this->rowFilter)->filterRow($nc(this->metadata)->IHDR_colorType, this->currRow, this->prevRow, this->filteredRows, bytesPerRow, this->bpp);
		$nc(os)->write(filterType);
		os->write($nc(this->filteredRows)->get(filterType), this->bpp, bytesPerRow);
		$var($bytes, swap, this->currRow);
		$set(this, currRow, this->prevRow);
		$set(this, prevRow, swap);
		this->pixelsDone += hpixels;
		processImageProgress(100.0f * this->pixelsDone / this->totalPixels);
		if (abortRequested()) {
			return;
		}
	}
}

void PNGImageWriter::write_IDAT($RenderedImage* image, int32_t deflaterLevel) {
	$useLocalCurrentObjectStackCache();
	$var($IDATOutputStream, ios, $new($IDATOutputStream, this->stream, 32768, deflaterLevel));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(this->metadata)->IHDR_interlaceMethod == 1) {
				for (int32_t i = 0; i < 7; ++i) {
					$init($PNGImageReader);
					encodePass(ios, image, $nc($PNGImageReader::adam7XOffset)->get(i), $nc($PNGImageReader::adam7YOffset)->get(i), $nc($PNGImageReader::adam7XSubsampling)->get(i), $nc($PNGImageReader::adam7YSubsampling)->get(i));
					if (abortRequested()) {
						break;
					}
				}
			} else {
				encodePass(ios, image, 0, 0, 1, 1);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			ios->finish();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void PNGImageWriter::writeIEND() {
	$var($ChunkStream, cs, $new($ChunkStream, $PNGImageReader::IEND_TYPE, this->stream));
	cs->finish();
}

bool PNGImageWriter::equals($ints* s0, $ints* s1) {
	if (s0 == nullptr || s1 == nullptr) {
		return false;
	}
	if ($nc(s0)->length != $nc(s1)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(s0)->length; ++i) {
		if (s0->get(i) != $nc(s1)->get(i)) {
			return false;
		}
	}
	return true;
}

void PNGImageWriter::initializeScaleTables($ints* sampleSize) {
	$useLocalCurrentObjectStackCache();
	int32_t bitDepth = $nc(this->metadata)->IHDR_bitDepth;
	if (bitDepth == this->scalingBitDepth && equals(sampleSize, this->sampleSize)) {
		return;
	}
	$set(this, sampleSize, sampleSize);
	this->scalingBitDepth = bitDepth;
	int32_t maxOutSample = ($sl(1, bitDepth)) - 1;
	if (bitDepth <= 8) {
		$set(this, scale, $new($byteArray2, this->numBands));
		for (int32_t b = 0; b < this->numBands; ++b) {
			int32_t maxInSample = ($sl(1, $nc(sampleSize)->get(b))) - 1;
			int32_t halfMaxInSample = maxInSample / 2;
			$nc(this->scale)->set(b, $$new($bytes, maxInSample + 1));
			for (int32_t s = 0; s <= maxInSample; ++s) {
				$nc($nc(this->scale)->get(b))->set(s, (int8_t)($div((s * maxOutSample + halfMaxInSample), maxInSample)));
			}
		}
		$set(this, scale0, $nc(this->scale)->get(0));
		$set(this, scaleh, ($set(this, scalel, nullptr)));
	} else {
		$set(this, scaleh, $new($byteArray2, this->numBands));
		$set(this, scalel, $new($byteArray2, this->numBands));
		for (int32_t b = 0; b < this->numBands; ++b) {
			int32_t maxInSample = ($sl(1, $nc(sampleSize)->get(b))) - 1;
			int32_t halfMaxInSample = maxInSample / 2;
			$nc(this->scaleh)->set(b, $$new($bytes, maxInSample + 1));
			$nc(this->scalel)->set(b, $$new($bytes, maxInSample + 1));
			for (int32_t s = 0; s <= maxInSample; ++s) {
				int32_t val = $div((s * maxOutSample + halfMaxInSample), maxInSample);
				$nc($nc(this->scaleh)->get(b))->set(s, (int8_t)(val >> 8));
				$nc($nc(this->scalel)->get(b))->set(s, (int8_t)((int32_t)(val & (uint32_t)255)));
			}
		}
		$set(this, scale, nullptr);
		$set(this, scale0, nullptr);
	}
}

void PNGImageWriter::write($IIOMetadata* streamMetadata, $IIOImage* image, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	if ($nc(image)->hasRaster()) {
		$throwNew($UnsupportedOperationException, "image has a Raster!"_s);
	}
	$var($RenderedImage, im, $nc(image)->getRenderedImage());
	$var($SampleModel, sampleModel, $nc(im)->getSampleModel());
	this->numBands = $nc(sampleModel)->getNumBands();
	this->sourceXOffset = im->getMinX();
	this->sourceYOffset = im->getMinY();
	this->sourceWidth = im->getWidth();
	this->sourceHeight = im->getHeight();
	$set(this, sourceBands, nullptr);
	this->periodX = 1;
	this->periodY = 1;
	if (param != nullptr) {
		$var($Rectangle, sourceRegion, param->getSourceRegion());
		if (sourceRegion != nullptr) {
			int32_t var$0 = im->getMinX();
			int32_t var$1 = im->getMinY();
			int32_t var$2 = im->getWidth();
			$var($Rectangle, imageBounds, $new($Rectangle, var$0, var$1, var$2, im->getHeight()));
			$assign(sourceRegion, sourceRegion->intersection(imageBounds));
			this->sourceXOffset = $nc(sourceRegion)->x;
			this->sourceYOffset = sourceRegion->y;
			this->sourceWidth = sourceRegion->width;
			this->sourceHeight = sourceRegion->height;
		}
		int32_t gridX = param->getSubsamplingXOffset();
		int32_t gridY = param->getSubsamplingYOffset();
		this->sourceXOffset += gridX;
		this->sourceYOffset += gridY;
		this->sourceWidth -= gridX;
		this->sourceHeight -= gridY;
		this->periodX = param->getSourceXSubsampling();
		this->periodY = param->getSourceYSubsampling();
		$var($ints, sBands, param->getSourceBands());
		if (sBands != nullptr) {
			$set(this, sourceBands, sBands);
			this->numBands = $nc(this->sourceBands)->length;
		}
	}
	int32_t destWidth = $div((this->sourceWidth + this->periodX - 1), this->periodX);
	int32_t destHeight = $div((this->sourceHeight + this->periodY - 1), this->periodY);
	if (destWidth <= 0 || destHeight <= 0) {
		$throwNew($IllegalArgumentException, "Empty source region!"_s);
	}
	this->totalPixels = destWidth * destHeight;
	this->pixelsDone = 0;
	$var($IIOMetadata, imd, image->getMetadata());
	if (imd != nullptr) {
		$set(this, metadata, $cast($PNGMetadata, convertImageMetadata(imd, $($ImageTypeSpecifier::createFromRenderedImage(im)), nullptr)));
	} else {
		$set(this, metadata, $new($PNGMetadata));
	}
	int32_t deflaterLevel = PNGImageWriter::DEFAULT_COMPRESSION_LEVEL;
	if (param != nullptr) {
		{
			float quality = 0;
			switch (param->getCompressionMode()) {
			case $ImageWriteParam::MODE_DISABLED:
				{
					deflaterLevel = $Deflater::NO_COMPRESSION;
					break;
				}
			case $ImageWriteParam::MODE_EXPLICIT:
				{
					quality = param->getCompressionQuality();
					if (quality >= 0.0f && quality <= 1.0f) {
						deflaterLevel = 9 - $Math::round(9.0f * quality);
					}
					break;
				}
			default:
				{}
			}
		}
		switch (param->getProgressiveMode()) {
		case $ImageWriteParam::MODE_DEFAULT:
			{
				$nc(this->metadata)->IHDR_interlaceMethod = 1;
				break;
			}
		case $ImageWriteParam::MODE_DISABLED:
			{
				$nc(this->metadata)->IHDR_interlaceMethod = 0;
				break;
			}
		default:
			{}
		}
	}
	$nc(this->metadata)->initialize($$new($ImageTypeSpecifier, im), this->numBands);
	$nc(this->metadata)->IHDR_width = destWidth;
	$nc(this->metadata)->IHDR_height = destHeight;
	this->bpp = this->numBands * (($nc(this->metadata)->IHDR_bitDepth == 16) ? 2 : 1);
	initializeScaleTables($(sampleModel->getSampleSize()));
	clearAbortRequest();
	processImageStarted(0);
	if (abortRequested()) {
		processWriteAborted();
	} else {
		try {
			write_magic();
			write_IHDR();
			write_cHRM();
			write_gAMA();
			write_iCCP();
			write_sBIT();
			write_sRGB();
			write_PLTE();
			write_hIST();
			write_tRNS();
			write_bKGD();
			write_pHYs();
			write_sPLT();
			write_tIME();
			write_tEXt();
			write_iTXt();
			write_zTXt();
			writeUnknownChunks();
			write_IDAT(im, deflaterLevel);
			if (abortRequested()) {
				processWriteAborted();
			} else {
				writeIEND();
				processImageComplete();
			}
		} catch ($IOException& e) {
			$throwNew($IIOException, "I/O error writing PNG file!"_s, e);
		}
	}
}

PNGImageWriter::PNGImageWriter() {
}

$Class* PNGImageWriter::load$($String* name, bool initialize) {
	$loadClass(PNGImageWriter, name, initialize, &_PNGImageWriter_ClassInfo_, allocate$PNGImageWriter);
	return class$;
}

$Class* PNGImageWriter::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com