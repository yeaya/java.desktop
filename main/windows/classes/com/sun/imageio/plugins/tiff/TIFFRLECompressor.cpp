#include <com/sun/imageio/plugins/tiff/TIFFRLECompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_CCITT_RLE

using $intArray2 = $Array<int32_t, 2>;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFFaxCompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFRLECompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFRLECompressor::*)()>(&TIFFRLECompressor::init$))},
	{"add1DBits", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"add2DBits", "([BI[[II)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOFB", "([BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOL", "(ZZZ[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode1D", "([BIII[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encodeRLE", "([BIII[B)I", nullptr, $PUBLIC},
	{"initBitBuf", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"nextState", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _TIFFRLECompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFRLECompressor",
	"com.sun.imageio.plugins.tiff.TIFFFaxCompressor",
	nullptr,
	nullptr,
	_TIFFRLECompressor_MethodInfo_
};

$Object* allocate$TIFFRLECompressor($Class* clazz) {
	return $of($alloc(TIFFRLECompressor));
}

void TIFFRLECompressor::init$() {
	$TIFFFaxCompressor::init$("CCITT RLE"_s, $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE, true);
}

int32_t TIFFRLECompressor::encodeRLE($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData) {
	initBitBuf();
	int32_t outIndex = encode1D(data, rowOffset, colOffset, rowLength, compData, 0);
	while (this->ndex > 0) {
		$nc(compData)->set(outIndex++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	if (this->inverseFill) {
		$init($TIFFFaxDecompressor);
		$var($bytes, flipTable, $TIFFFaxDecompressor::flipTable);
		for (int32_t i = 0; i < outIndex; ++i) {
			$nc(compData)->set(i, $nc(flipTable)->get((int32_t)(compData->get(i) & (uint32_t)255)));
		}
	}
	return outIndex;
}

int32_t TIFFRLECompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	if ($nc(bitsPerSample)->length != 1 || $nc(bitsPerSample)->get(0) != 1) {
		$throwNew($IIOException, "Bits per sample must be 1 for RLE compression!"_s);
	}
	int32_t maxBits = 9 * ((width + 1) / 2) + 2;
	$var($bytes, compData, $new($bytes, (maxBits + 7) / 8));
	int32_t bytes = 0;
	int32_t rowOffset = off;
	for (int32_t i = 0; i < height; ++i) {
		int32_t rowBytes = encodeRLE(b, rowOffset, 0, width, compData);
		$nc(this->stream)->write(compData, 0, rowBytes);
		rowOffset += scanlineStride;
		bytes += rowBytes;
	}
	return bytes;
}

int32_t TIFFRLECompressor::encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) {
	return $TIFFFaxCompressor::encode1D(data, rowOffset, colOffset, rowLength, compData, compOffset);
}

int32_t TIFFRLECompressor::addEOFB($bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOFB(buf, where);
}

int32_t TIFFRLECompressor::addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOL(is1DMode, addFill, add1, buf, where);
}

int32_t TIFFRLECompressor::add2DBits($bytes* buf, int32_t where, $intArray2* mode, int32_t entry) {
	return $TIFFFaxCompressor::add2DBits(buf, where, mode, entry);
}

int32_t TIFFRLECompressor::add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) {
	return $TIFFFaxCompressor::add1DBits(buf, where, count, color);
}

void TIFFRLECompressor::initBitBuf() {
	$TIFFFaxCompressor::initBitBuf();
}

int32_t TIFFRLECompressor::nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) {
	return $TIFFFaxCompressor::nextState(data, base, bitOffset, maxOffset);
}

void TIFFRLECompressor::setMetadata($IIOMetadata* metadata) {
	$TIFFFaxCompressor::setMetadata(metadata);
}

TIFFRLECompressor::TIFFRLECompressor() {
}

$Class* TIFFRLECompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFRLECompressor, name, initialize, &_TIFFRLECompressor_ClassInfo_, allocate$TIFFRLECompressor);
	return class$;
}

$Class* TIFFRLECompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com