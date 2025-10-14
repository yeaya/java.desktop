#include <com/sun/imageio/plugins/tiff/TIFFT6Compressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
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
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef COMPRESSION_CCITT_T_6
#undef TAG_T6_OPTIONS
#undef TIFF_LONG
#undef WHITE

using $intArray2 = $Array<int32_t, 2>;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFFaxCompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFT6Compressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFT6Compressor::*)()>(&TIFFT6Compressor::init$))},
	{"add1DBits", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"add2DBits", "([BI[[II)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOFB", "([BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOL", "(ZZZ[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode1D", "([BIII[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encodeT6", "([BIIII[B)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initBitBuf", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"nextState", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _TIFFT6Compressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFT6Compressor",
	"com.sun.imageio.plugins.tiff.TIFFFaxCompressor",
	nullptr,
	nullptr,
	_TIFFT6Compressor_MethodInfo_
};

$Object* allocate$TIFFT6Compressor($Class* clazz) {
	return $of($alloc(TIFFT6Compressor));
}

void TIFFT6Compressor::init$() {
	$TIFFFaxCompressor::init$("CCITT T.6"_s, $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6, true);
}

int32_t TIFFT6Compressor::encodeT6($bytes* data, int32_t lineStride, int32_t colOffset, int32_t width, int32_t height, $bytes* compData) {
	$synchronized(this) {
		$var($bytes, refData, nullptr);
		int32_t refAddr = 0;
		int32_t lineAddr = 0;
		int32_t outIndex = 0;
		initBitBuf();
		while (height-- != 0) {
			int32_t a0 = colOffset;
			int32_t last = a0 + width;
			int32_t testbit = (int32_t)(($usr((int32_t)($nc(data)->get(lineAddr + ((int32_t)((uint32_t)a0 >> 3))) & (uint32_t)255), 7 - ((int32_t)(a0 & (uint32_t)7)))) & (uint32_t)1);
			int32_t a1 = testbit != 0 ? a0 : nextState(data, lineAddr, a0, last);
			testbit = refData == nullptr ? 0 : (int32_t)(($usr((int32_t)($nc(refData)->get(refAddr + ((int32_t)((uint32_t)a0 >> 3))) & (uint32_t)255), 7 - ((int32_t)(a0 & (uint32_t)7)))) & (uint32_t)1);
			int32_t b1 = testbit != 0 ? a0 : nextState(refData, refAddr, a0, last);
			int32_t color = $TIFFFaxCompressor::WHITE;
			while (true) {
				int32_t b2 = nextState(refData, refAddr, b1, last);
				if (b2 < a1) {
					$init($TIFFFaxCompressor);
					outIndex += add2DBits(compData, outIndex, $TIFFFaxCompressor::pass, 0);
					a0 = b2;
				} else {
					int32_t tmp = b1 - a1 + 3;
					if ((tmp <= 6) && (tmp >= 0)) {
						$init($TIFFFaxCompressor);
						outIndex += add2DBits(compData, outIndex, $TIFFFaxCompressor::vert, tmp);
						a0 = a1;
					} else {
						int32_t a2 = nextState(data, lineAddr, a1, last);
						$init($TIFFFaxCompressor);
						outIndex += add2DBits(compData, outIndex, $TIFFFaxCompressor::horz, 0);
						outIndex += add1DBits(compData, outIndex, a1 - a0, color);
						outIndex += add1DBits(compData, outIndex, a2 - a1, color ^ 1);
						a0 = a2;
					}
				}
				if (a0 >= last) {
					break;
				}
				color = (int32_t)(($usr((int32_t)(data->get(lineAddr + ((int32_t)((uint32_t)a0 >> 3))) & (uint32_t)255), 7 - ((int32_t)(a0 & (uint32_t)7)))) & (uint32_t)1);
				a1 = nextState(data, lineAddr, a0, last);
				b1 = nextState(refData, refAddr, a0, last);
				testbit = refData == nullptr ? 0 : (int32_t)(($usr((int32_t)(refData->get(refAddr + ((int32_t)((uint32_t)b1 >> 3))) & (uint32_t)255), 7 - ((int32_t)(b1 & (uint32_t)7)))) & (uint32_t)1);
				if (testbit == color) {
					b1 = nextState(refData, refAddr, b1, last);
				}
			}
			$assign(refData, data);
			refAddr = lineAddr;
			lineAddr += lineStride;
		}
		outIndex += addEOFB(compData, outIndex);
		if (this->inverseFill) {
			for (int32_t i = 0; i < outIndex; ++i) {
				$init($TIFFFaxDecompressor);
				$nc(compData)->set(i, $nc($TIFFFaxDecompressor::flipTable)->get((int32_t)(compData->get(i) & (uint32_t)255)));
			}
		}
		return outIndex;
	}
}

int32_t TIFFT6Compressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	if ($nc(bitsPerSample)->length != 1 || $nc(bitsPerSample)->get(0) != 1) {
		$throwNew($IIOException, "Bits per sample must be 1 for T6 compression!"_s);
	}
	if ($instanceOf($TIFFImageMetadata, this->metadata)) {
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, this->metadata));
		$var($longs, options, $new($longs, 1));
		options->set(0, 0);
		$var($BaselineTIFFTagSet, base, $BaselineTIFFTagSet::getInstance());
		$var($TIFFField, T6Options, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_T6_OPTIONS)), $TIFFTag::TIFF_LONG, 1, $of(options)));
		$nc($nc(tim)->rootIFD)->addTIFFField(T6Options);
	}
	int32_t maxBits = 9 * ((width + 1) / 2) + 2;
	int32_t bufSize = (maxBits + 7) / 8;
	bufSize = height * (bufSize + 2) + 12;
	$var($bytes, compData, $new($bytes, bufSize));
	int32_t bytes = encodeT6(b, scanlineStride, 8 * off, width, height, compData);
	$nc(this->stream)->write(compData, 0, bytes);
	return bytes;
}

int32_t TIFFT6Compressor::encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) {
	return $TIFFFaxCompressor::encode1D(data, rowOffset, colOffset, rowLength, compData, compOffset);
}

int32_t TIFFT6Compressor::addEOFB($bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOFB(buf, where);
}

int32_t TIFFT6Compressor::addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOL(is1DMode, addFill, add1, buf, where);
}

int32_t TIFFT6Compressor::add2DBits($bytes* buf, int32_t where, $intArray2* mode, int32_t entry) {
	return $TIFFFaxCompressor::add2DBits(buf, where, mode, entry);
}

int32_t TIFFT6Compressor::add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) {
	return $TIFFFaxCompressor::add1DBits(buf, where, count, color);
}

void TIFFT6Compressor::initBitBuf() {
	$TIFFFaxCompressor::initBitBuf();
}

int32_t TIFFT6Compressor::nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) {
	return $TIFFFaxCompressor::nextState(data, base, bitOffset, maxOffset);
}

void TIFFT6Compressor::setMetadata($IIOMetadata* metadata) {
	$TIFFFaxCompressor::setMetadata(metadata);
}

TIFFT6Compressor::TIFFT6Compressor() {
}

$Class* TIFFT6Compressor::load$($String* name, bool initialize) {
	$loadClass(TIFFT6Compressor, name, initialize, &_TIFFT6Compressor_ClassInfo_, allocate$TIFFT6Compressor);
	return class$;
}

$Class* TIFFT6Compressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com