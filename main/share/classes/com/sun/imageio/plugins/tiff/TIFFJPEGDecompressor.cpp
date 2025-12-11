#include <com/sun/imageio/plugins/tiff/TIFFJPEGDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

#undef EOI
#undef SOI
#undef TAG_JPEG_TABLES

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFJPEGDecompressor_FieldInfo_[] = {
	{"SOI", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFJPEGDecompressor, SOI)},
	{"EOI", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFJPEGDecompressor, EOI)},
	{"JPEGReader", "Ljavax/imageio/ImageReader;", nullptr, $PROTECTED, $field(TIFFJPEGDecompressor, JPEGReader)},
	{"JPEGParam", "Ljavax/imageio/ImageReadParam;", nullptr, $PROTECTED, $field(TIFFJPEGDecompressor, JPEGParam)},
	{"hasJPEGTables", "Z", nullptr, $PROTECTED, $field(TIFFJPEGDecompressor, hasJPEGTables)},
	{"tables", "[B", nullptr, $PROTECTED, $field(TIFFJPEGDecompressor, tables)},
	{"data", "[B", nullptr, $PRIVATE, $field(TIFFJPEGDecompressor, data)},
	{}
};

$MethodInfo _TIFFJPEGDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFJPEGDecompressor::*)()>(&TIFFJPEGDecompressor::init$))},
	{"beginDecoding", "()V", nullptr, $PUBLIC},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{}
};

$ClassInfo _TIFFJPEGDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFJPEGDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFJPEGDecompressor_FieldInfo_,
	_TIFFJPEGDecompressor_MethodInfo_
};

$Object* allocate$TIFFJPEGDecompressor($Class* clazz) {
	return $of($alloc(TIFFJPEGDecompressor));
}

void TIFFJPEGDecompressor::init$() {
	$TIFFDecompressor::init$();
	$set(this, JPEGReader, nullptr);
	this->hasJPEGTables = false;
	$set(this, tables, nullptr);
	$set(this, data, $new($bytes, 0));
}

void TIFFJPEGDecompressor::beginDecoding() {
	$useLocalCurrentObjectStackCache();
	if (this->JPEGReader == nullptr) {
		$var($Iterator, iter, $ImageIO::getImageReadersByFormatName("jpeg"_s));
		if (!$nc(iter)->hasNext()) {
			$throwNew($IllegalStateException, "No JPEG readers found!"_s);
		}
		$set(this, JPEGReader, $cast($ImageReader, $nc(iter)->next()));
		$set(this, JPEGParam, $nc(this->JPEGReader)->getDefaultReadParam());
	}
	$var($TIFFImageMetadata, tmetadata, $cast($TIFFImageMetadata, this->metadata));
	$var($TIFFField, f, $nc(tmetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_TABLES));
	if (f != nullptr) {
		this->hasJPEGTables = true;
		$set(this, tables, f->getAsBytes());
	} else {
		this->hasJPEGTables = false;
	}
}

void TIFFJPEGDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stream)->seek(this->offset);
	$var($ImageInputStream, is, nullptr);
	if (this->hasJPEGTables) {
		int32_t dataLength = $nc(this->tables)->length + this->byteCount;
		if ($nc(this->data)->length < dataLength) {
			$set(this, data, $new($bytes, dataLength));
		}
		int32_t dataOffset = $nc(this->tables)->length;
		for (int32_t i = $nc(this->tables)->length - 2; i > 0; --i) {
			if (((int32_t)($nc(this->tables)->get(i) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->tables)->get(i + 1) & (uint32_t)255)) == TIFFJPEGDecompressor::EOI) {
				dataOffset = i;
				break;
			}
		}
		$System::arraycopy(this->tables, 0, this->data, 0, dataOffset);
		int8_t byte1 = (int8_t)$nc(this->stream)->read();
		int8_t byte2 = (int8_t)$nc(this->stream)->read();
		if (!(((int32_t)(byte1 & (uint32_t)255)) == 255 && ((int32_t)(byte2 & (uint32_t)255)) == TIFFJPEGDecompressor::SOI)) {
			$nc(this->data)->set(dataOffset++, byte1);
			$nc(this->data)->set(dataOffset++, byte2);
		}
		$nc(this->stream)->readFully(this->data, dataOffset, this->byteCount - 2);
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, this->data));
		$assign(is, $new($MemoryCacheImageInputStream, bais));
	} else {
		$assign(is, this->stream);
	}
	$nc(this->JPEGReader)->setInput(is, false, true);
	$nc(this->JPEGParam)->setDestination(this->rawImage);
	$nc(this->JPEGReader)->read(0, this->JPEGParam);
}

void TIFFJPEGDecompressor::finalize() {
	$TIFFDecompressor::finalize();
	$nc(this->JPEGReader)->dispose();
}

TIFFJPEGDecompressor::TIFFJPEGDecompressor() {
}

$Class* TIFFJPEGDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFJPEGDecompressor, name, initialize, &_TIFFJPEGDecompressor_ClassInfo_, allocate$TIFFJPEGDecompressor);
	return class$;
}

$Class* TIFFJPEGDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com