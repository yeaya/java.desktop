#include <com/sun/imageio/plugins/tiff/TIFFT4Compressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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

#undef COMPRESSION_CCITT_T_4
#undef TAG_T4_OPTIONS
#undef TIFF_LONG
#undef WHITE

using $intArray2 = $Array<int32_t, 2>;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFFaxCompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _TIFFT4Compressor_FieldInfo_[] = {
	{"is1DMode", "Z", nullptr, $PRIVATE, $field(TIFFT4Compressor, is1DMode)},
	{"isEOLAligned", "Z", nullptr, $PRIVATE, $field(TIFFT4Compressor, isEOLAligned)},
	{}
};

$MethodInfo _TIFFT4Compressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFT4Compressor::*)()>(&TIFFT4Compressor::init$))},
	{"add1DBits", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"add2DBits", "([BI[[II)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOFB", "([BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addEOL", "(ZZZ[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode1D", "([BIII[BI)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"encodeT4", "(ZZ[BIIII[B)I", nullptr, $PUBLIC},
	{"initBitBuf", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"nextState", "([BIII)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFT4Compressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFT4Compressor",
	"com.sun.imageio.plugins.tiff.TIFFFaxCompressor",
	nullptr,
	_TIFFT4Compressor_FieldInfo_,
	_TIFFT4Compressor_MethodInfo_
};

$Object* allocate$TIFFT4Compressor($Class* clazz) {
	return $of($alloc(TIFFT4Compressor));
}

void TIFFT4Compressor::init$() {
	$TIFFFaxCompressor::init$("CCITT T.4"_s, $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4, true);
	this->is1DMode = false;
	this->isEOLAligned = false;
}

void TIFFT4Compressor::setMetadata($IIOMetadata* metadata) {
	$useLocalCurrentObjectStackCache();
	$TIFFFaxCompressor::setMetadata(metadata);
	if ($instanceOf($TIFFImageMetadata, metadata)) {
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, metadata));
		$var($TIFFField, f, $nc(tim)->getTIFFField($BaselineTIFFTagSet::TAG_T4_OPTIONS));
		if (f != nullptr) {
			int32_t options = f->getAsInt(0);
			this->is1DMode = ((int32_t)(options & (uint32_t)1)) == 0;
			this->isEOLAligned = ((int32_t)(options & (uint32_t)4)) == 4;
		} else {
			$var($longs, oarray, $new($longs, 1));
			oarray->set(0, (this->isEOLAligned ? 4 : 0) | (this->is1DMode ? 0 : 1));
			$var($BaselineTIFFTagSet, base, $BaselineTIFFTagSet::getInstance());
			$var($TIFFField, T4Options, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_T4_OPTIONS)), $TIFFTag::TIFF_LONG, 1, $of(oarray)));
			$nc(tim->rootIFD)->addTIFFField(T4Options);
		}
	}
}

int32_t TIFFT4Compressor::encodeT4(bool is1DMode, bool isEOLAligned, $bytes* data, int32_t lineStride, int32_t colOffset, int32_t width, int32_t height, $bytes* compData) {
	$var($bytes, refData, data);
	int32_t lineAddr = 0;
	int32_t outIndex = 0;
	initBitBuf();
	int32_t KParameter = 2;
	for (int32_t numRows = 0; numRows < height; ++numRows) {
		if (is1DMode || ($mod(numRows, KParameter)) == 0) {
			outIndex += addEOL(is1DMode, isEOLAligned, true, compData, outIndex);
			outIndex += encode1D(data, lineAddr, colOffset, width, compData, outIndex);
		} else {
			outIndex += addEOL(is1DMode, isEOLAligned, false, compData, outIndex);
			int32_t refAddr = lineAddr - lineStride;
			int32_t a0 = colOffset;
			int32_t last = a0 + width;
			int32_t testbit = (int32_t)(($usr((int32_t)($nc(data)->get(lineAddr + ((int32_t)((uint32_t)a0 >> 3))) & (uint32_t)255), 7 - ((int32_t)(a0 & (uint32_t)7)))) & (uint32_t)1);
			int32_t a1 = testbit != 0 ? a0 : nextState(data, lineAddr, a0, last);
			testbit = (int32_t)(($usr((int32_t)($nc(refData)->get(refAddr + ((int32_t)((uint32_t)a0 >> 3))) & (uint32_t)255), 7 - ((int32_t)(a0 & (uint32_t)7)))) & (uint32_t)1);
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
				testbit = (int32_t)(($usr((int32_t)(refData->get(refAddr + ((int32_t)((uint32_t)b1 >> 3))) & (uint32_t)255), 7 - ((int32_t)(b1 & (uint32_t)7)))) & (uint32_t)1);
				if (testbit == color) {
					b1 = nextState(refData, refAddr, b1, last);
				}
			}
		}
		lineAddr += lineStride;
	}
	for (int32_t i = 0; i < 6; ++i) {
		outIndex += addEOL(is1DMode, isEOLAligned, true, compData, outIndex);
	}
	while (this->ndex > 0) {
		$nc(compData)->set(outIndex++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	if (this->inverseFill) {
		for (int32_t i = 0; i < outIndex; ++i) {
			$init($TIFFFaxDecompressor);
			$nc(compData)->set(i, $nc($TIFFFaxDecompressor::flipTable)->get((int32_t)(compData->get(i) & (uint32_t)255)));
		}
	}
	return outIndex;
}

int32_t TIFFT4Compressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	if ($nc(bitsPerSample)->length != 1 || $nc(bitsPerSample)->get(0) != 1) {
		$throwNew($IIOException, "Bits per sample must be 1 for T4 compression!"_s);
	}
	int32_t maxBits = 9 * ((width + 1) / 2) + 2;
	int32_t bufSize = (maxBits + 7) / 8;
	bufSize = height * (bufSize + 2) + 12;
	$var($bytes, compData, $new($bytes, bufSize));
	int32_t bytes = encodeT4(this->is1DMode, this->isEOLAligned, b, scanlineStride, 8 * off, width, height, compData);
	$nc(this->stream)->write(compData, 0, bytes);
	return bytes;
}

int32_t TIFFT4Compressor::encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) {
	return $TIFFFaxCompressor::encode1D(data, rowOffset, colOffset, rowLength, compData, compOffset);
}

int32_t TIFFT4Compressor::addEOFB($bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOFB(buf, where);
}

int32_t TIFFT4Compressor::addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) {
	return $TIFFFaxCompressor::addEOL(is1DMode, addFill, add1, buf, where);
}

int32_t TIFFT4Compressor::add2DBits($bytes* buf, int32_t where, $intArray2* mode, int32_t entry) {
	return $TIFFFaxCompressor::add2DBits(buf, where, mode, entry);
}

int32_t TIFFT4Compressor::add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) {
	return $TIFFFaxCompressor::add1DBits(buf, where, count, color);
}

void TIFFT4Compressor::initBitBuf() {
	$TIFFFaxCompressor::initBitBuf();
}

int32_t TIFFT4Compressor::nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) {
	return $TIFFFaxCompressor::nextState(data, base, bitOffset, maxOffset);
}

TIFFT4Compressor::TIFFT4Compressor() {
}

$Class* TIFFT4Compressor::load$($String* name, bool initialize) {
	$loadClass(TIFFT4Compressor, name, initialize, &_TIFFT4Compressor_ClassInfo_, allocate$TIFFT4Compressor);
	return class$;
}

$Class* TIFFT4Compressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com