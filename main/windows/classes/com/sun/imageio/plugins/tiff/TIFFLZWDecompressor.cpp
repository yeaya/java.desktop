#include <com/sun/imageio/plugins/tiff/TIFFLZWDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef CLEAR_CODE
#undef EOI_CODE
#undef FILL_ORDER_RIGHT_TO_LEFT
#undef FIRST_CODE
#undef PREDICTOR_HORIZONTAL_DIFFERENCING
#undef PREDICTOR_NONE

using $byteArray2 = $Array<int8_t, 2>;
using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFLZWDecompressor_FieldInfo_[] = {
	{"CLEAR_CODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFLZWDecompressor, CLEAR_CODE)},
	{"EOI_CODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFLZWDecompressor, EOI_CODE)},
	{"FIRST_CODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFLZWDecompressor, FIRST_CODE)},
	{"andTable", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFLZWDecompressor, andTable)},
	{"predictor", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, predictor)},
	{"flipBits", "Z", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, flipBits)},
	{"srcData", "[B", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, srcData)},
	{"dstData", "[B", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, dstData)},
	{"srcIndex", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, srcIndex)},
	{"dstIndex", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, dstIndex)},
	{"stringTable", "[[B", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, stringTable)},
	{"tableIndex", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, tableIndex)},
	{"bitsToGet", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, bitsToGet)},
	{"nextData", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, nextData)},
	{"nextBits", "I", nullptr, $PRIVATE, $field(TIFFLZWDecompressor, nextBits)},
	{}
};

$MethodInfo _TIFFLZWDecompressor_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFLZWDecompressor::*)(int32_t,int32_t)>(&TIFFLZWDecompressor::init$)), "javax.imageio.IIOException"},
	{"addStringToTable", "([BB)V", nullptr, $PUBLIC},
	{"addStringToTable", "([B)V", nullptr, $PUBLIC},
	{"composeString", "([BB)[B", nullptr, $PUBLIC},
	{"decode", "([BI[BI)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getNextCode", "()I", nullptr, $PUBLIC},
	{"initializeStringTable", "()V", nullptr, $PUBLIC},
	{"writeString", "([B)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFLZWDecompressor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFLZWDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFLZWDecompressor_FieldInfo_,
	_TIFFLZWDecompressor_MethodInfo_
};

$Object* allocate$TIFFLZWDecompressor($Class* clazz) {
	return $of($alloc(TIFFLZWDecompressor));
}

$ints* TIFFLZWDecompressor::andTable = nullptr;

void TIFFLZWDecompressor::init$(int32_t predictor, int32_t fillOrder) {
	$TIFFDecompressor::init$();
	this->bitsToGet = 9;
	this->nextData = 0;
	this->nextBits = 0;
	if (predictor != $BaselineTIFFTagSet::PREDICTOR_NONE && predictor != $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
		$throwNew($IIOException, "Illegal value for Predictor in TIFF file"_s);
	}
	this->predictor = predictor;
	this->flipBits = fillOrder == $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT;
}

void TIFFLZWDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	if (this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
		int32_t len = $nc(this->bitsPerSample)->length;
		for (int32_t i = 0; i < len; ++i) {
			if ($nc(this->bitsPerSample)->get(i) != 8) {
				$throwNew($IIOException, $$str({$$str($nc(this->bitsPerSample)->get(i)), "-bit samples are not supported for Horizontal differencing Predictor"_s}));
			}
		}
	}
	$nc(this->stream)->seek(this->offset);
	$var($bytes, sdata, $new($bytes, this->byteCount));
	$nc(this->stream)->readFully(sdata);
	if (this->flipBits) {
		for (int32_t i = 0; i < this->byteCount; ++i) {
			$init($TIFFFaxDecompressor);
			sdata->set(i, $nc($TIFFFaxDecompressor::flipTable)->get((int32_t)(sdata->get(i) & (uint32_t)255)));
		}
	}
	int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
	$var($bytes, buf, nullptr);
	int32_t bufOffset = 0;
	if (bytesPerRow == scanlineStride) {
		$assign(buf, b);
		bufOffset = dstOffset;
	} else {
		$assign(buf, $new($bytes, bytesPerRow * this->srcHeight));
		bufOffset = 0;
	}
	int32_t numBytesDecoded = decode(sdata, 0, buf, bufOffset);
	if (bytesPerRow != scanlineStride) {
		int32_t off = 0;
		for (int32_t y = 0; y < this->srcHeight; ++y) {
			$System::arraycopy(buf, off, b, dstOffset, bytesPerRow);
			off += bytesPerRow;
			dstOffset += scanlineStride;
		}
	}
}

int32_t TIFFLZWDecompressor::decode($bytes* sdata, int32_t srcOffset, $bytes* ddata, int32_t dstOffset) {
	if ($nc(sdata)->get(0) == (int8_t)0 && sdata->get(1) == (int8_t)1) {
		$throwNew($IIOException, "TIFF 5.0-style LZW compression is not supported!"_s);
	}
	$set(this, srcData, sdata);
	$set(this, dstData, ddata);
	this->srcIndex = srcOffset;
	this->dstIndex = dstOffset;
	this->nextData = 0;
	this->nextBits = 0;
	initializeStringTable();
	int32_t code = 0;
	int32_t oldCode = 0;
	$var($bytes, string, nullptr);
	while ((code = getNextCode()) != TIFFLZWDecompressor::EOI_CODE) {
		if (code == TIFFLZWDecompressor::CLEAR_CODE) {
			initializeStringTable();
			code = getNextCode();
			if (code == TIFFLZWDecompressor::EOI_CODE) {
				break;
			}
			writeString($nc(this->stringTable)->get(code));
			oldCode = code;
		} else if (code < this->tableIndex) {
			$assign(string, $nc(this->stringTable)->get(code));
			writeString(string);
			addStringToTable($nc(this->stringTable)->get(oldCode), $nc(string)->get(0));
			oldCode = code;
		} else {
			$assign(string, $nc(this->stringTable)->get(oldCode));
			$assign(string, composeString(string, $nc(string)->get(0)));
			writeString(string);
			addStringToTable(string);
			oldCode = code;
		}
	}
	if (this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
		int32_t step = this->planar || this->samplesPerPixel == 1 ? 1 : this->samplesPerPixel;
		int32_t samplesPerRow = step * this->srcWidth;
		int32_t off = dstOffset + step;
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			int32_t count = off;
			for (int32_t i = step; i < samplesPerRow; ++i) {
				(*$nc(this->dstData))[count] += $nc(this->dstData)->get(count - step);
				++count;
			}
			off += samplesPerRow;
		}
	}
	return this->dstIndex - dstOffset;
}

void TIFFLZWDecompressor::initializeStringTable() {
	$set(this, stringTable, $new($byteArray2, 4096));
	for (int32_t i = 0; i < TIFFLZWDecompressor::CLEAR_CODE; ++i) {
		$nc(this->stringTable)->set(i, $$new($bytes, 1));
		$nc($nc(this->stringTable)->get(i))->set(0, (int8_t)i);
	}
	this->tableIndex = TIFFLZWDecompressor::FIRST_CODE;
	this->bitsToGet = 9;
}

void TIFFLZWDecompressor::writeString($bytes* string) {
	if (this->dstIndex < $nc(this->dstData)->length) {
		int32_t maxIndex = $Math::min($nc(string)->length, $nc(this->dstData)->length - this->dstIndex);
		for (int32_t i = 0; i < maxIndex; ++i) {
			$nc(this->dstData)->set(this->dstIndex++, $nc(string)->get(i));
		}
	}
}

void TIFFLZWDecompressor::addStringToTable($bytes* oldString, int8_t newString) {
	int32_t length = $nc(oldString)->length;
	$var($bytes, string, $new($bytes, length + 1));
	$System::arraycopy(oldString, 0, string, 0, length);
	string->set(length, newString);
	$nc(this->stringTable)->set(this->tableIndex++, string);
	if (this->tableIndex == 511) {
		this->bitsToGet = 10;
	} else if (this->tableIndex == 1023) {
		this->bitsToGet = 11;
	} else if (this->tableIndex == 2047) {
		this->bitsToGet = 12;
	}
}

void TIFFLZWDecompressor::addStringToTable($bytes* string) {
	$nc(this->stringTable)->set(this->tableIndex++, string);
	if (this->tableIndex == 511) {
		this->bitsToGet = 10;
	} else if (this->tableIndex == 1023) {
		this->bitsToGet = 11;
	} else if (this->tableIndex == 2047) {
		this->bitsToGet = 12;
	}
}

$bytes* TIFFLZWDecompressor::composeString($bytes* oldString, int8_t newString) {
	int32_t length = $nc(oldString)->length;
	$var($bytes, string, $new($bytes, length + 1));
	$System::arraycopy(oldString, 0, string, 0, length);
	string->set(length, newString);
	return string;
}

int32_t TIFFLZWDecompressor::getNextCode() {
	try {
		this->nextData = (this->nextData << 8) | ((int32_t)($nc(this->srcData)->get(this->srcIndex++) & (uint32_t)255));
		this->nextBits += 8;
		if (this->nextBits < this->bitsToGet) {
			this->nextData = (this->nextData << 8) | ((int32_t)($nc(this->srcData)->get(this->srcIndex++) & (uint32_t)255));
			this->nextBits += 8;
		}
		int32_t code = (int32_t)(($sr(this->nextData, this->nextBits - this->bitsToGet)) & (uint32_t)$nc(TIFFLZWDecompressor::andTable)->get(this->bitsToGet - 9));
		this->nextBits -= this->bitsToGet;
		return code;
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		return TIFFLZWDecompressor::EOI_CODE;
	}
	$shouldNotReachHere();
}

void clinit$TIFFLZWDecompressor($Class* class$) {
	$assignStatic(TIFFLZWDecompressor::andTable, $new($ints, {
		511,
		1023,
		2047,
		4095
	}));
}

TIFFLZWDecompressor::TIFFLZWDecompressor() {
}

$Class* TIFFLZWDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFLZWDecompressor, name, initialize, &_TIFFLZWDecompressor_ClassInfo_, clinit$TIFFLZWDecompressor, allocate$TIFFLZWDecompressor);
	return class$;
}

$Class* TIFFLZWDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com