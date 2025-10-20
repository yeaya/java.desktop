#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <jcpp.h>

#undef BLACK
#undef TAG_FILL_ORDER
#undef WHITE

using $intArray2 = $Array<int32_t, 2>;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFFaxCompressor_FieldInfo_[] = {
	{"WHITE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFFaxCompressor, WHITE)},
	{"BLACK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(TIFFFaxCompressor, BLACK)},
	{"byteTable", "[B", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, byteTable)},
	{"termCodesBlack", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodesBlack)},
	{"termCodesWhite", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodesWhite)},
	{"makeupCodesBlack", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodesBlack)},
	{"makeupCodesWhite", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodesWhite)},
	{"passMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, passMode)},
	{"vertMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, vertMode)},
	{"horzMode", "[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, horzMode)},
	{"termCodes", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, termCodes)},
	{"makeupCodes", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, makeupCodes)},
	{"pass", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, pass)},
	{"vert", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, vert)},
	{"horz", "[[I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFFaxCompressor, horz)},
	{"inverseFill", "Z", nullptr, $PROTECTED, $field(TIFFFaxCompressor, inverseFill)},
	{"bits", "I", nullptr, $PROTECTED, $field(TIFFFaxCompressor, bits)},
	{"ndex", "I", nullptr, $PROTECTED, $field(TIFFFaxCompressor, ndex)},
	{}
};

$MethodInfo _TIFFFaxCompressor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PROTECTED, $method(static_cast<void(TIFFFaxCompressor::*)($String*,int32_t,bool)>(&TIFFFaxCompressor::init$))},
	{"add1DBits", "([BIII)I", nullptr, $PUBLIC},
	{"add2DBits", "([BI[[II)I", nullptr, $PUBLIC},
	{"addEOFB", "([BI)I", nullptr, $PUBLIC},
	{"addEOL", "(ZZZ[BI)I", nullptr, $PUBLIC},
	{"encode1D", "([BIII[BI)I", nullptr, $PUBLIC},
	{"initBitBuf", "()V", nullptr, $PUBLIC},
	{"nextState", "([BIII)I", nullptr, $PUBLIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFFaxCompressor_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFFaxCompressor",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	_TIFFFaxCompressor_FieldInfo_,
	_TIFFFaxCompressor_MethodInfo_
};

$Object* allocate$TIFFFaxCompressor($Class* clazz) {
	return $of($alloc(TIFFFaxCompressor));
}

$bytes* TIFFFaxCompressor::byteTable = nullptr;

$ints* TIFFFaxCompressor::termCodesBlack = nullptr;

$ints* TIFFFaxCompressor::termCodesWhite = nullptr;

$ints* TIFFFaxCompressor::makeupCodesBlack = nullptr;

$ints* TIFFFaxCompressor::makeupCodesWhite = nullptr;

$ints* TIFFFaxCompressor::passMode = nullptr;

$ints* TIFFFaxCompressor::vertMode = nullptr;

$ints* TIFFFaxCompressor::horzMode = nullptr;

$intArray2* TIFFFaxCompressor::termCodes = nullptr;

$intArray2* TIFFFaxCompressor::makeupCodes = nullptr;

$intArray2* TIFFFaxCompressor::pass = nullptr;

$intArray2* TIFFFaxCompressor::vert = nullptr;

$intArray2* TIFFFaxCompressor::horz = nullptr;

void TIFFFaxCompressor::init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless) {
	$TIFFCompressor::init$(compressionType, compressionTagValue, isCompressionLossless);
	this->inverseFill = false;
}

void TIFFFaxCompressor::setMetadata($IIOMetadata* metadata) {
	$useLocalCurrentObjectStackCache();
	$TIFFCompressor::setMetadata(metadata);
	if ($instanceOf($TIFFImageMetadata, metadata)) {
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, metadata));
		$var($TIFFField, f, $nc(tim)->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		this->inverseFill = (f != nullptr && f->getAsInt(0) == 2);
	}
}

int32_t TIFFFaxCompressor::nextState($bytes* data, int32_t base, int32_t bitOffset, int32_t maxOffset) {
	if (data == nullptr) {
		return maxOffset;
	}
	int32_t next = base + ((int32_t)((uint32_t)bitOffset >> 3));
	if (next >= $nc(data)->length) {
		return maxOffset;
	}
	int32_t end = base + ((int32_t)((uint32_t)maxOffset >> 3));
	if (end == $nc(data)->length) {
		--end;
	}
	int32_t extra = (int32_t)(bitOffset & (uint32_t)7);
	int32_t testbyte = 0;
	if (((int32_t)($nc(data)->get(next) & (uint32_t)($usr(128, extra)))) != 0) {
		testbyte = (int32_t)(~((int32_t)data->get(next)) & (uint32_t)($usr(255, extra)));
		while (next < end) {
			if (testbyte != 0) {
				break;
			}
			testbyte = (int32_t)(~((int32_t)data->get(++next)) & (uint32_t)255);
		}
	} else {
		if ((testbyte = ((int32_t)(data->get(next) & (uint32_t)($usr(255, extra))))) != 0) {
			bitOffset = (next - base) * 8 + $nc(TIFFFaxCompressor::byteTable)->get(testbyte);
			return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
		}
		while (next < end) {
			if ((testbyte = (int32_t)(data->get(++next) & (uint32_t)255)) != 0) {
				bitOffset = (next - base) * 8 + $nc(TIFFFaxCompressor::byteTable)->get(testbyte);
				return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
			}
		}
	}
	bitOffset = (next - base) * 8 + $nc(TIFFFaxCompressor::byteTable)->get(testbyte);
	return ((bitOffset < maxOffset) ? bitOffset : maxOffset);
}

void TIFFFaxCompressor::initBitBuf() {
	this->ndex = 0;
	this->bits = 0;
}

int32_t TIFFFaxCompressor::add1DBits($bytes* buf, int32_t where, int32_t count, int32_t color) {
	int32_t sixtyfours = 0;
	int32_t mask = 0;
	int32_t len = where;
	sixtyfours = (int32_t)((uint32_t)count >> 6);
	count = (int32_t)(count & (uint32_t)63);
	if (sixtyfours != 0) {
		for (; sixtyfours > 40; sixtyfours -= 40) {
			mask = $nc($nc(TIFFFaxCompressor::makeupCodes)->get(color))->get(40);
			this->bits |= $usr((int32_t)(mask & (uint32_t)(int32_t)0xFFF80000), this->ndex);
			this->ndex += ((int32_t)(mask & (uint32_t)0x0000FFFF));
			while (this->ndex > 7) {
				$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
				this->bits <<= 8;
				this->ndex -= 8;
			}
		}
		mask = $nc($nc(TIFFFaxCompressor::makeupCodes)->get(color))->get(sixtyfours);
		this->bits |= $usr((int32_t)(mask & (uint32_t)(int32_t)0xFFF80000), this->ndex);
		this->ndex += ((int32_t)(mask & (uint32_t)0x0000FFFF));
		while (this->ndex > 7) {
			$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
			this->bits <<= 8;
			this->ndex -= 8;
		}
	}
	mask = $nc($nc(TIFFFaxCompressor::termCodes)->get(color))->get(count);
	this->bits |= $usr((int32_t)(mask & (uint32_t)(int32_t)0xFFF80000), this->ndex);
	this->ndex += ((int32_t)(mask & (uint32_t)0x0000FFFF));
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::add2DBits($bytes* buf, int32_t where, $intArray2* mode, int32_t entry) {
	int32_t mask = 0;
	int32_t len = where;
	int32_t color = 0;
	mask = $nc($nc(mode)->get(color))->get(entry);
	this->bits |= $usr((int32_t)(mask & (uint32_t)(int32_t)0xFFF80000), this->ndex);
	this->ndex += ((int32_t)(mask & (uint32_t)0x0000FFFF));
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::addEOL(bool is1DMode, bool addFill, bool add1, $bytes* buf, int32_t where) {
	int32_t len = where;
	if (addFill) {
		this->ndex += ((this->ndex <= 4) ? 4 - this->ndex : 12 - this->ndex);
	}
	if (is1DMode) {
		this->bits |= $usr(0x00100000, this->ndex);
		this->ndex += 12;
	} else {
		this->bits |= $usr(add1 ? 0x00180000 : 0x00100000, this->ndex);
		this->ndex += 13;
	}
	while (this->ndex > 7) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::addEOFB($bytes* buf, int32_t where) {
	int32_t len = where;
	this->bits |= $usr(0x00100100, this->ndex);
	this->ndex += 24;
	while (this->ndex > 0) {
		$nc(buf)->set(len++, (int8_t)((int32_t)((uint32_t)this->bits >> 24)));
		this->bits <<= 8;
		this->ndex -= 8;
	}
	return (len - where);
}

int32_t TIFFFaxCompressor::encode1D($bytes* data, int32_t rowOffset, int32_t colOffset, int32_t rowLength, $bytes* compData, int32_t compOffset) {
	int32_t lineAddr = rowOffset;
	int32_t bitIndex = colOffset;
	int32_t last = bitIndex + rowLength;
	int32_t outIndex = compOffset;
	int32_t testbit = (int32_t)(($usr((int32_t)($nc(data)->get(lineAddr + ((int32_t)((uint32_t)bitIndex >> 3))) & (uint32_t)255), 7 - ((int32_t)(bitIndex & (uint32_t)7)))) & (uint32_t)1);
	int32_t currentColor = TIFFFaxCompressor::BLACK;
	if (testbit != 0) {
		outIndex += add1DBits(compData, outIndex, 0, TIFFFaxCompressor::WHITE);
	} else {
		currentColor = TIFFFaxCompressor::WHITE;
	}
	while (bitIndex < last) {
		int32_t bitCount = nextState(data, lineAddr, bitIndex, last) - bitIndex;
		outIndex += add1DBits(compData, outIndex, bitCount, currentColor);
		bitIndex += bitCount;
		currentColor ^= 1;
	}
	return outIndex - compOffset;
}

void clinit$TIFFFaxCompressor($Class* class$) {
	$assignStatic(TIFFFaxCompressor::byteTable, $new($bytes, {
		(int8_t)8,
		(int8_t)7,
		(int8_t)6,
		(int8_t)6,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)5,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)3,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)2,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)1,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	$assignStatic(TIFFFaxCompressor::termCodesBlack, $new($ints, {
		0x0DC0000A,
		0x40000003,
		(int32_t)0xC0000002,
		(int32_t)0x80000002,
		0x60000003,
		0x30000004,
		0x20000004,
		0x18000005,
		0x14000006,
		0x10000006,
		0x08000007,
		0x0A000007,
		0x0E000007,
		0x04000008,
		0x07000008,
		0x0C000009,
		0x05C0000A,
		0x0600000A,
		0x0200000A,
		0x0CE0000B,
		0x0D00000B,
		0x0D80000B,
		0x06E0000B,
		0x0500000B,
		0x02E0000B,
		0x0300000B,
		0x0CA0000C,
		0x0CB0000C,
		0x0CC0000C,
		0x0CD0000C,
		0x0680000C,
		0x0690000C,
		0x06A0000C,
		0x06B0000C,
		0x0D20000C,
		0x0D30000C,
		0x0D40000C,
		0x0D50000C,
		0x0D60000C,
		0x0D70000C,
		0x06C0000C,
		0x06D0000C,
		0x0DA0000C,
		0x0DB0000C,
		0x0540000C,
		0x0550000C,
		0x0560000C,
		0x0570000C,
		0x0640000C,
		0x0650000C,
		0x0520000C,
		0x0530000C,
		0x0240000C,
		0x0370000C,
		0x0380000C,
		0x0270000C,
		0x0280000C,
		0x0580000C,
		0x0590000C,
		0x02B0000C,
		0x02C0000C,
		0x05A0000C,
		0x0660000C,
		0x0670000C
	}));
	$assignStatic(TIFFFaxCompressor::termCodesWhite, $new($ints, {
		0x35000008,
		0x1C000006,
		0x70000004,
		(int32_t)0x80000004,
		(int32_t)0xB0000004,
		(int32_t)0xC0000004,
		(int32_t)0xE0000004,
		(int32_t)0xF0000004,
		(int32_t)0x98000005,
		(int32_t)0xA0000005,
		0x38000005,
		0x40000005,
		0x20000006,
		0x0C000006,
		(int32_t)0xD0000006,
		(int32_t)0xD4000006,
		(int32_t)0xA8000006,
		(int32_t)0xAC000006,
		0x4E000007,
		0x18000007,
		0x10000007,
		0x2E000007,
		0x06000007,
		0x08000007,
		0x50000007,
		0x56000007,
		0x26000007,
		0x48000007,
		0x30000007,
		0x02000008,
		0x03000008,
		0x1A000008,
		0x1B000008,
		0x12000008,
		0x13000008,
		0x14000008,
		0x15000008,
		0x16000008,
		0x17000008,
		0x28000008,
		0x29000008,
		0x2A000008,
		0x2B000008,
		0x2C000008,
		0x2D000008,
		0x04000008,
		0x05000008,
		0x0A000008,
		0x0B000008,
		0x52000008,
		0x53000008,
		0x54000008,
		0x55000008,
		0x24000008,
		0x25000008,
		0x58000008,
		0x59000008,
		0x5A000008,
		0x5B000008,
		0x4A000008,
		0x4B000008,
		0x32000008,
		0x33000008,
		0x34000008
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodesBlack, $new($ints, {
		0,
		0x03C0000A,
		0x0C80000C,
		0x0C90000C,
		0x05B0000C,
		0x0330000C,
		0x0340000C,
		0x0350000C,
		0x0360000D,
		0x0368000D,
		0x0250000D,
		0x0258000D,
		0x0260000D,
		0x0268000D,
		0x0390000D,
		0x0398000D,
		0x03A0000D,
		0x03A8000D,
		0x03B0000D,
		0x03B8000D,
		0x0290000D,
		0x0298000D,
		0x02A0000D,
		0x02A8000D,
		0x02D0000D,
		0x02D8000D,
		0x0320000D,
		0x0328000D,
		0x0100000B,
		0x0180000B,
		0x01A0000B,
		0x0120000C,
		0x0130000C,
		0x0140000C,
		0x0150000C,
		0x0160000C,
		0x0170000C,
		0x01C0000C,
		0x01D0000C,
		0x01E0000C,
		0x01F0000C,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodesWhite, $new($ints, {
		0,
		(int32_t)0xD8000005,
		(int32_t)0x90000005,
		0x5C000006,
		0x6E000007,
		0x36000008,
		0x37000008,
		0x64000008,
		0x65000008,
		0x68000008,
		0x67000008,
		0x66000009,
		0x66800009,
		0x69000009,
		0x69800009,
		0x6A000009,
		0x6A800009,
		0x6B000009,
		0x6B800009,
		0x6C000009,
		0x6C800009,
		0x6D000009,
		0x6D800009,
		0x4C000009,
		0x4C800009,
		0x4D000009,
		0x60000006,
		0x4D800009,
		0x0100000B,
		0x0180000B,
		0x01A0000B,
		0x0120000C,
		0x0130000C,
		0x0140000C,
		0x0150000C,
		0x0160000C,
		0x0170000C,
		0x01C0000C,
		0x01D0000C,
		0x01E0000C,
		0x01F0000C,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	}));
	$assignStatic(TIFFFaxCompressor::passMode, $new($ints, {0x10000004}));
	$assignStatic(TIFFFaxCompressor::vertMode, $new($ints, {
		0x06000007,
		0x0C000006,
		0x60000003,
		(int32_t)0x80000001,
		0x40000003,
		0x08000006,
		0x04000007
	}));
	$assignStatic(TIFFFaxCompressor::horzMode, $new($ints, {0x20000003}));
	$assignStatic(TIFFFaxCompressor::termCodes, $new($intArray2, {
		TIFFFaxCompressor::termCodesWhite,
		TIFFFaxCompressor::termCodesBlack
	}));
	$assignStatic(TIFFFaxCompressor::makeupCodes, $new($intArray2, {
		TIFFFaxCompressor::makeupCodesWhite,
		TIFFFaxCompressor::makeupCodesBlack
	}));
	$assignStatic(TIFFFaxCompressor::pass, $new($intArray2, {
		TIFFFaxCompressor::passMode,
		TIFFFaxCompressor::passMode
	}));
	$assignStatic(TIFFFaxCompressor::vert, $new($intArray2, {
		TIFFFaxCompressor::vertMode,
		TIFFFaxCompressor::vertMode
	}));
	$assignStatic(TIFFFaxCompressor::horz, $new($intArray2, {
		TIFFFaxCompressor::horzMode,
		TIFFFaxCompressor::horzMode
	}));
}

TIFFFaxCompressor::TIFFFaxCompressor() {
}

$Class* TIFFFaxCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFFaxCompressor, name, initialize, &_TIFFFaxCompressor_ClassInfo_, clinit$TIFFFaxCompressor, allocate$TIFFFaxCompressor);
	return class$;
}

$Class* TIFFFaxCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com