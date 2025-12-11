#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <java/io/EOFException.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef COMPRESSION_CCITT_RLE
#undef COMPRESSION_CCITT_T_4
#undef COMPRESSION_CCITT_T_6
#undef FILL_ORDER_LEFT_TO_RIGHT
#undef FILL_ORDER_RIGHT_TO_LEFT
#undef TAG_COMPRESSION
#undef TAG_FILL_ORDER
#undef TAG_T4_OPTIONS
#undef TAG_T6_OPTIONS

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFFaxDecompressor_FieldInfo_[] = {
	{"fillOrder", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, fillOrder)},
	{"t4Options", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, t4Options)},
	{"t6Options", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, t6Options)},
	{"uncompressedMode", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, uncompressedMode)},
	{"fillBits", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, fillBits)},
	{"oneD", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, oneD)},
	{"data", "[B", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, data)},
	{"bitPointer", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bitPointer)},
	{"bytePointer", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bytePointer)},
	{"buffer", "[B", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, buffer)},
	{"w", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, w)},
	{"h", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, h)},
	{"bitsPerScanline", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, bitsPerScanline)},
	{"lineBitNum", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, lineBitNum)},
	{"changingElemSize", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, changingElemSize)},
	{"prevChangingElems", "[I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, prevChangingElems)},
	{"currChangingElems", "[I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, currChangingElems)},
	{"lastChangingElement", "I", nullptr, $PRIVATE, $field(TIFFFaxDecompressor, lastChangingElement)},
	{"table1", "[I", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, table1)},
	{"table2", "[I", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, table2)},
	{"flipTable", "[B", nullptr, $STATIC, $staticField(TIFFFaxDecompressor, flipTable)},
	{"white", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, white)},
	{"additionalMakeup", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, additionalMakeup)},
	{"initBlack", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, initBlack)},
	{"twoBitBlack", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, twoBitBlack)},
	{"black", "[S", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, black)},
	{"twoDCodes", "[B", nullptr, $PRIVATE | $STATIC, $staticField(TIFFFaxDecompressor, twoDCodes)},
	{}
};

$MethodInfo _TIFFFaxDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFFaxDecompressor::*)()>(&TIFFFaxDecompressor::init$))},
	{"beginDecoding", "()V", nullptr, $PUBLIC},
	{"decodeBlackCodeWord", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFFaxDecompressor::*)()>(&TIFFFaxDecompressor::decodeBlackCodeWord)), "javax.imageio.IIOException"},
	{"decodeNextScanline", "(I)V", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"decodeRLE", "()V", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeT4", "()V", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"decodeT6", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.imageio.IIOException"},
	{"decodeWhiteCodeWord", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFFaxDecompressor::*)()>(&TIFFFaxDecompressor::decodeWhiteCodeWord)), "javax.imageio.IIOException"},
	{"findNextLine", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFFaxDecompressor::*)()>(&TIFFFaxDecompressor::findNextLine)), "javax.imageio.IIOException,java.io.EOFException"},
	{"getNextChangingElement", "(IZ[I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFFaxDecompressor::*)(int32_t,bool,$ints*)>(&TIFFFaxDecompressor::getNextChangingElement)), "javax.imageio.IIOException"},
	{"nextLesserThan8Bits", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFFaxDecompressor::*)(int32_t)>(&TIFFFaxDecompressor::nextLesserThan8Bits)), "javax.imageio.IIOException"},
	{"nextNBits", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFFaxDecompressor::*)(int32_t)>(&TIFFFaxDecompressor::nextNBits)), "javax.imageio.IIOException"},
	{"setToBlack", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFFaxDecompressor::*)(int32_t,int32_t)>(&TIFFFaxDecompressor::setToBlack))},
	{"updatePointer", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFFaxDecompressor::*)(int32_t)>(&TIFFFaxDecompressor::updatePointer))},
	{"warning", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFFaxDecompressor::*)($String*)>(&TIFFFaxDecompressor::warning))},
	{}
};

$ClassInfo _TIFFFaxDecompressor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFFaxDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFFaxDecompressor_FieldInfo_,
	_TIFFFaxDecompressor_MethodInfo_
};

$Object* allocate$TIFFFaxDecompressor($Class* clazz) {
	return $of($alloc(TIFFFaxDecompressor));
}

$ints* TIFFFaxDecompressor::table1 = nullptr;
$ints* TIFFFaxDecompressor::table2 = nullptr;
$bytes* TIFFFaxDecompressor::flipTable = nullptr;
$shorts* TIFFFaxDecompressor::white = nullptr;
$shorts* TIFFFaxDecompressor::additionalMakeup = nullptr;
$shorts* TIFFFaxDecompressor::initBlack = nullptr;
$shorts* TIFFFaxDecompressor::twoBitBlack = nullptr;
$shorts* TIFFFaxDecompressor::black = nullptr;
$bytes* TIFFFaxDecompressor::twoDCodes = nullptr;

void TIFFFaxDecompressor::init$() {
	$TIFFDecompressor::init$();
	this->uncompressedMode = 0;
	this->fillBits = 0;
	this->changingElemSize = 0;
	this->lastChangingElement = 0;
}

void TIFFFaxDecompressor::beginDecoding() {
	$useLocalCurrentObjectStackCache();
	$TIFFDecompressor::beginDecoding();
	if ($instanceOf($TIFFImageMetadata, this->metadata)) {
		$var($TIFFImageMetadata, tmetadata, $cast($TIFFImageMetadata, this->metadata));
		$var($TIFFField, f, nullptr);
		$assign(f, $nc(tmetadata)->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		this->fillOrder = f == nullptr ? $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT : $nc(f)->getAsInt(0);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
		this->compression = f == nullptr ? $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE : f->getAsInt(0);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_T4_OPTIONS));
		this->t4Options = f == nullptr ? 0 : f->getAsInt(0);
		this->oneD = ((int32_t)(this->t4Options & (uint32_t)1));
		this->uncompressedMode = (((int32_t)(this->t4Options & (uint32_t)2)) >> 1);
		this->fillBits = (((int32_t)(this->t4Options & (uint32_t)4)) >> 2);
		$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_T6_OPTIONS));
		this->t6Options = f == nullptr ? 0 : f->getAsInt(0);
	} else {
		this->fillOrder = $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT;
		this->compression = $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE;
		this->t4Options = 0;
		this->oneD = 0;
		this->uncompressedMode = 0;
		this->fillBits = 0;
		this->t6Options = 0;
	}
}

void TIFFFaxDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t pixelBitStride, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	$set(this, buffer, b);
	this->w = this->srcWidth;
	this->h = this->srcHeight;
	this->bitsPerScanline = scanlineStride * 8;
	this->lineBitNum = 8 * dstOffset;
	$set(this, data, $new($bytes, this->byteCount));
	this->bitPointer = 0;
	this->bytePointer = 0;
	$set(this, prevChangingElems, $new($ints, this->w + 1));
	$set(this, currChangingElems, $new($ints, this->w + 1));
	$nc(this->stream)->seek(this->offset);
	$nc(this->stream)->readFully(this->data);
	if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE) {
		decodeRLE();
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4) {
		decodeT4();
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6) {
		this->uncompressedMode = (((int32_t)(this->t6Options & (uint32_t)2)) >> 1);
		decodeT6();
	} else {
		$throwNew($IIOException, $$str({"Unknown compression type "_s, $$str(this->compression)}));
	}
}

void TIFFFaxDecompressor::decodeRLE() {
	for (int32_t i = 0; i < this->h; ++i) {
		decodeNextScanline(this->srcMinY + i);
		if (this->bitPointer != 0) {
			++this->bytePointer;
			this->bitPointer = 0;
		}
		this->lineBitNum += this->bitsPerScanline;
	}
}

void TIFFFaxDecompressor::decodeNextScanline(int32_t lineIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t bits = 0;
	int32_t code = 0;
	int32_t isT = 0;
	int32_t current = 0;
	int32_t entry = 0;
	int32_t twoBits = 0;
	bool isWhite = true;
	int32_t dstEnd = 0;
	int32_t bitOffset = 0;
	this->changingElemSize = 0;
	while (bitOffset < this->w) {
		int32_t runOffset = bitOffset;
		while (isWhite && bitOffset < this->w) {
			current = nextNBits(10);
			entry = $nc(TIFFFaxDecompressor::white)->get(current);
			isT = (int32_t)(entry & (uint32_t)1);
			bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
			if (bits == 12) {
				twoBits = nextLesserThan8Bits(2);
				current = ((int32_t)((current << 2) & (uint32_t)12)) | twoBits;
				entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
				bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)7);
				code = (int32_t)(((int32_t)((uint32_t)entry >> 4)) & (uint32_t)4095);
				bitOffset += code;
				updatePointer(4 - bits);
			} else if (bits == 0) {
				warning("Error 0"_s);
			} else if (bits == 15) {
				warning($$str({"Premature EOL in white run of line "_s, $$str(lineIndex), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
				return;
			} else {
				code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
				bitOffset += code;
				updatePointer(10 - bits);
				if (isT == 0) {
					isWhite = false;
					$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
				}
			}
		}
		if (bitOffset == this->w) {
			int32_t runLength = bitOffset - runOffset;
			if (isWhite && runLength != 0 && runLength % 64 == 0 && nextNBits(8) != 53) {
				warning("Missing zero white run length terminating code!"_s);
				updatePointer(8);
			}
			break;
		}
		runOffset = bitOffset;
		while (isWhite == false && bitOffset < this->w) {
			current = nextLesserThan8Bits(4);
			entry = $nc(TIFFFaxDecompressor::initBlack)->get(current);
			isT = (int32_t)(entry & (uint32_t)1);
			bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
			code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
			if (code == 100) {
				current = nextNBits(9);
				entry = $nc(TIFFFaxDecompressor::black)->get(current);
				isT = (int32_t)(entry & (uint32_t)1);
				bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
				code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
				if (bits == 12) {
					updatePointer(5);
					current = nextLesserThan8Bits(4);
					entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
					bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)7);
					code = (int32_t)(((int32_t)((uint32_t)entry >> 4)) & (uint32_t)4095);
					setToBlack(bitOffset, code);
					bitOffset += code;
					updatePointer(4 - bits);
				} else if (bits == 15) {
					warning($$str({"Premature EOL in black run of line "_s, $$str(lineIndex), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
					return;
				} else {
					setToBlack(bitOffset, code);
					bitOffset += code;
					updatePointer(9 - bits);
					if (isT == 0) {
						isWhite = true;
						$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
					}
				}
			} else if (code == 200) {
				current = nextLesserThan8Bits(2);
				entry = $nc(TIFFFaxDecompressor::twoBitBlack)->get(current);
				code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
				bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
				setToBlack(bitOffset, code);
				bitOffset += code;
				updatePointer(2 - bits);
				isWhite = true;
				$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
			} else {
				setToBlack(bitOffset, code);
				bitOffset += code;
				updatePointer(4 - bits);
				isWhite = true;
				$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
			}
		}
		if (bitOffset == this->w) {
			int32_t runLength = bitOffset - runOffset;
			if (!isWhite && runLength != 0 && runLength % 64 == 0 && nextNBits(10) != 55) {
				warning("Missing zero black run length terminating code!"_s);
				updatePointer(10);
			}
			break;
		}
	}
	$nc(this->currChangingElems)->set(this->changingElemSize++, bitOffset);
}

void TIFFFaxDecompressor::decodeT4() {
	$useLocalCurrentObjectStackCache();
	int32_t height = this->h;
	int32_t a0 = 0;
	int32_t a1 = 0;
	int32_t b1 = 0;
	int32_t b2 = 0;
	$var($ints, b, $new($ints, 2));
	int32_t entry = 0;
	int32_t code = 0;
	int32_t bits = 0;
	int32_t color = 0;
	bool isWhite = false;
	int32_t currIndex = 0;
	$var($ints, temp, nullptr);
	if ($nc(this->data)->length < 2) {
		$throwNew($IIOException, "Insufficient data to read initial EOL."_s);
	}
	int32_t next12 = nextNBits(12);
	if (next12 != 1) {
		warning("T.4 compressed data should begin with EOL."_s);
	}
	updatePointer(12);
	int32_t modeFlag = 0;
	int32_t lines = -1;
	while (modeFlag != 1) {
		try {
			modeFlag = findNextLine();
			++lines;
		} catch ($EOFException& eofe) {
			$throwNew($IIOException, "No reference line present."_s);
		}
	}
	int32_t bitOffset = 0;
	decodeNextScanline(this->srcMinY);
	++lines;
	this->lineBitNum += this->bitsPerScanline;
	while (lines < height) {
		try {
			modeFlag = findNextLine();
		} catch ($EOFException& eofe) {
			warning($$str({"Input exhausted before EOL found at line "_s, $$str((this->srcMinY + lines)), ": read 0 of "_s, $$str(this->w), " expected pixels."_s}));
			break;
		}
		if (modeFlag == 0) {
			$assign(temp, this->prevChangingElems);
			$set(this, prevChangingElems, this->currChangingElems);
			$set(this, currChangingElems, temp);
			currIndex = 0;
			a0 = -1;
			isWhite = true;
			bitOffset = 0;
			this->lastChangingElement = 0;
			while (bitOffset < this->w) {
				getNextChangingElement(a0, isWhite, b);
				b1 = b->get(0);
				b2 = b->get(1);
				entry = nextLesserThan8Bits(7);
				entry = ((int32_t)($nc(TIFFFaxDecompressor::twoDCodes)->get(entry) & (uint32_t)255));
				code = (int32_t)((uint32_t)((int32_t)(entry & (uint32_t)120)) >> 3);
				bits = (int32_t)(entry & (uint32_t)7);
				if (code == 0) {
					if (!isWhite) {
						setToBlack(bitOffset, b2 - bitOffset);
					}
					bitOffset = (a0 = b2);
					updatePointer(7 - bits);
				} else if (code == 1) {
					updatePointer(7 - bits);
					int32_t number = 0;
					if (isWhite) {
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
						number = decodeBlackCodeWord();
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
					} else {
						number = decodeBlackCodeWord();
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(this->currChangingElems)->set(currIndex++, bitOffset);
					}
					a0 = bitOffset;
				} else if (code <= 8) {
					a1 = b1 + (code - 5);
					$nc(this->currChangingElems)->set(currIndex++, a1);
					if (!isWhite) {
						setToBlack(bitOffset, a1 - bitOffset);
					}
					bitOffset = (a0 = a1);
					isWhite = !isWhite;
					updatePointer(7 - bits);
				} else {
					warning($$str({"Unknown coding mode encountered at line "_s, $$str((this->srcMinY + lines)), ": read "_s, $$str(bitOffset), " of "_s, $$str(this->w), " expected pixels."_s}));
					int32_t numLinesTested = 0;
					while (modeFlag != 1) {
						try {
							modeFlag = findNextLine();
							++numLinesTested;
						} catch ($EOFException& eofe) {
							warning($$str({"Sync loss at line "_s, $$str((this->srcMinY + lines)), ": read "_s, $$str(lines), " of "_s, $$str(height), " lines."_s}));
							return;
						}
					}
					lines += numLinesTested - 1;
					updatePointer(13);
					break;
				}
			}
			$nc(this->currChangingElems)->set(currIndex++, bitOffset);
			this->changingElemSize = currIndex;
		} else {
			decodeNextScanline(this->srcMinY + lines);
		}
		this->lineBitNum += this->bitsPerScanline;
		++lines;
	}
}

void TIFFFaxDecompressor::decodeT6() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t height = this->h;
		int32_t bufferOffset = 0;
		int32_t a0 = 0;
		int32_t a1 = 0;
		int32_t b1 = 0;
		int32_t b2 = 0;
		int32_t entry = 0;
		int32_t code = 0;
		int32_t bits = 0;
		int8_t color = 0;
		bool isWhite = false;
		int32_t currIndex = 0;
		$var($ints, temp, nullptr);
		$var($ints, b, $new($ints, 2));
		$var($ints, cce, this->currChangingElems);
		this->changingElemSize = 0;
		$nc(cce)->set(this->changingElemSize++, this->w);
		cce->set(this->changingElemSize++, this->w);
		int32_t bitOffset = 0;
		for (int32_t lines = 0; lines < height; ++lines) {
			a0 = -1;
			isWhite = true;
			$assign(temp, this->prevChangingElems);
			$set(this, prevChangingElems, this->currChangingElems);
			$assign(cce, ($set(this, currChangingElems, temp)));
			currIndex = 0;
			bitOffset = 0;
			this->lastChangingElement = 0;
			while (bitOffset < this->w) {
				getNextChangingElement(a0, isWhite, b);
				b1 = b->get(0);
				b2 = b->get(1);
				entry = nextLesserThan8Bits(7);
				entry = ((int32_t)($nc(TIFFFaxDecompressor::twoDCodes)->get(entry) & (uint32_t)255));
				code = (int32_t)((uint32_t)((int32_t)(entry & (uint32_t)120)) >> 3);
				bits = (int32_t)(entry & (uint32_t)7);
				if (code == 0) {
					if (!isWhite) {
						if (b2 > this->w) {
							b2 = this->w;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, b2 - bitOffset);
					}
					bitOffset = (a0 = b2);
					updatePointer(7 - bits);
				} else if (code == 1) {
					updatePointer(7 - bits);
					int32_t number = 0;
					if (isWhite) {
						number = decodeWhiteCodeWord();
						bitOffset += number;
						$nc(cce)->set(currIndex++, bitOffset);
						number = decodeBlackCodeWord();
						if (number > this->w - bitOffset) {
							number = this->w - bitOffset;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, number);
						bitOffset += number;
						cce->set(currIndex++, bitOffset);
					} else {
						number = decodeBlackCodeWord();
						if (number > this->w - bitOffset) {
							number = this->w - bitOffset;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, number);
						bitOffset += number;
						$nc(cce)->set(currIndex++, bitOffset);
						number = decodeWhiteCodeWord();
						bitOffset += number;
						cce->set(currIndex++, bitOffset);
					}
					a0 = bitOffset;
				} else if (code <= 8) {
					a1 = b1 + (code - 5);
					$nc(cce)->set(currIndex++, a1);
					if (!isWhite) {
						if (a1 > this->w) {
							a1 = this->w;
							warning($$str({"Decoded row "_s, $$str((this->srcMinY + lines)), " too long; ignoring extra samples."_s}));
						}
						setToBlack(bitOffset, a1 - bitOffset);
					}
					bitOffset = (a0 = a1);
					isWhite = !isWhite;
					updatePointer(7 - bits);
				} else if (code == 11) {
					int32_t entranceCode = nextLesserThan8Bits(3);
					if (entranceCode != 7) {
						$var($String, msg, $str({"Unsupported entrance code "_s, $$str(entranceCode), " for extension mode at line "_s, $$str((this->srcMinY + lines)), "."_s}));
						warning(msg);
					}
					int32_t zeros = 0;
					bool exit = false;
					while (!exit) {
						while (nextLesserThan8Bits(1) != 1) {
							++zeros;
						}
						if (zeros > 5) {
							zeros = zeros - 6;
							if (!isWhite && (zeros > 0)) {
								$nc(cce)->set(currIndex++, bitOffset);
							}
							bitOffset += zeros;
							if (zeros > 0) {
								isWhite = true;
							}
							if (nextLesserThan8Bits(1) == 0) {
								if (!isWhite) {
									$nc(cce)->set(currIndex++, bitOffset);
								}
								isWhite = true;
							} else {
								if (isWhite) {
									$nc(cce)->set(currIndex++, bitOffset);
								}
								isWhite = false;
							}
							exit = true;
						}
						if (zeros == 5) {
							if (!isWhite) {
								$nc(cce)->set(currIndex++, bitOffset);
							}
							bitOffset += zeros;
							isWhite = true;
						} else {
							bitOffset += zeros;
							$nc(cce)->set(currIndex++, bitOffset);
							setToBlack(bitOffset, 1);
							++bitOffset;
							isWhite = false;
						}
					}
				} else {
					$var($String, msg, $str({"Unknown coding mode encountered at line "_s, $$str((this->srcMinY + lines)), "."_s}));
					warning(msg);
				}
			}
			if (currIndex <= this->w) {
				$nc(cce)->set(currIndex++, bitOffset);
			}
			this->changingElemSize = currIndex;
			this->lineBitNum += this->bitsPerScanline;
		}
	}
}

void TIFFFaxDecompressor::setToBlack(int32_t bitNum, int32_t numBits) {
	bitNum += this->lineBitNum;
	int32_t lastBit = bitNum + numBits;
	int32_t byteNum = bitNum >> 3;
	int32_t shift = (int32_t)(bitNum & (uint32_t)7);
	if (shift > 0) {
		int32_t maskVal = $sl(1, 7 - shift);
		int8_t val = $nc(this->buffer)->get(byteNum);
		while (maskVal > 0 && bitNum < lastBit) {
			val |= maskVal;
			maskVal >>= 1;
			++bitNum;
		}
		$nc(this->buffer)->set(byteNum, val);
	}
	byteNum = bitNum >> 3;
	while (bitNum < lastBit - 7) {
		$nc(this->buffer)->set(byteNum++, (int8_t)255);
		bitNum += 8;
	}
	while (bitNum < lastBit) {
		byteNum = bitNum >> 3;
		(*$nc(this->buffer))[byteNum] |= $sl(1, 7 - ((int32_t)(bitNum & (uint32_t)7)));
		++bitNum;
	}
}

int32_t TIFFFaxDecompressor::decodeWhiteCodeWord() {
	int32_t current = 0;
	int32_t entry = 0;
	int32_t bits = 0;
	int32_t isT = 0;
	int32_t twoBits = 0;
	int32_t code = -1;
	int32_t runLength = 0;
	bool isWhite = true;
	while (isWhite) {
		current = nextNBits(10);
		entry = $nc(TIFFFaxDecompressor::white)->get(current);
		isT = (int32_t)(entry & (uint32_t)1);
		bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
		if (bits == 12) {
			twoBits = nextLesserThan8Bits(2);
			current = ((int32_t)((current << 2) & (uint32_t)12)) | twoBits;
			entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
			bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)7);
			code = (int32_t)(((int32_t)((uint32_t)entry >> 4)) & (uint32_t)4095);
			runLength += code;
			updatePointer(4 - bits);
		} else if (bits == 0) {
			$throwNew($IIOException, "Error 0"_s);
		} else if (bits == 15) {
			$throwNew($IIOException, "Error 1"_s);
		} else {
			code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
			runLength += code;
			updatePointer(10 - bits);
			if (isT == 0) {
				isWhite = false;
			}
		}
	}
	return runLength;
}

int32_t TIFFFaxDecompressor::decodeBlackCodeWord() {
	int32_t current = 0;
	int32_t entry = 0;
	int32_t bits = 0;
	int32_t isT = 0;
	int32_t twoBits = 0;
	int32_t code = -1;
	int32_t runLength = 0;
	bool isWhite = false;
	while (!isWhite) {
		current = nextLesserThan8Bits(4);
		entry = $nc(TIFFFaxDecompressor::initBlack)->get(current);
		isT = (int32_t)(entry & (uint32_t)1);
		bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
		code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
		if (code == 100) {
			current = nextNBits(9);
			entry = $nc(TIFFFaxDecompressor::black)->get(current);
			isT = (int32_t)(entry & (uint32_t)1);
			bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
			code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
			if (bits == 12) {
				updatePointer(5);
				current = nextLesserThan8Bits(4);
				entry = $nc(TIFFFaxDecompressor::additionalMakeup)->get(current);
				bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)7);
				code = (int32_t)(((int32_t)((uint32_t)entry >> 4)) & (uint32_t)4095);
				runLength += code;
				updatePointer(4 - bits);
			} else if (bits == 15) {
				$throwNew($IIOException, "Error 2"_s);
			} else {
				runLength += code;
				updatePointer(9 - bits);
				if (isT == 0) {
					isWhite = true;
				}
			}
		} else if (code == 200) {
			current = nextLesserThan8Bits(2);
			entry = $nc(TIFFFaxDecompressor::twoBitBlack)->get(current);
			code = (int32_t)(((int32_t)((uint32_t)entry >> 5)) & (uint32_t)2047);
			runLength += code;
			bits = (int32_t)(((int32_t)((uint32_t)entry >> 1)) & (uint32_t)15);
			updatePointer(2 - bits);
			isWhite = true;
		} else {
			runLength += code;
			updatePointer(4 - bits);
			isWhite = true;
		}
	}
	return runLength;
}

int32_t TIFFFaxDecompressor::findNextLine() {
	int32_t bitIndexMax = $nc(this->data)->length * 8 - 1;
	int32_t bitIndexMax12 = bitIndexMax - 12;
	int32_t bitIndex = this->bytePointer * 8 + this->bitPointer;
	while (bitIndex <= bitIndexMax12) {
		int32_t next12Bits = nextNBits(12);
		bitIndex += 12;
		while (next12Bits != 1 && bitIndex < bitIndexMax) {
			next12Bits = (((int32_t)(next12Bits & (uint32_t)2047)) << 1) | ((int32_t)(nextLesserThan8Bits(1) & (uint32_t)1));
			++bitIndex;
		}
		if (next12Bits == 1) {
			if (this->oneD == 1) {
				if (bitIndex < bitIndexMax) {
					return nextLesserThan8Bits(1);
				}
			} else {
				return 1;
			}
		}
	}
	$throwNew($EOFException);
}

void TIFFFaxDecompressor::getNextChangingElement(int32_t a0, bool isWhite, $ints* ret) {
	$var($ints, pce, this->prevChangingElems);
	int32_t ces = this->changingElemSize;
	int32_t start = this->lastChangingElement > 0 ? this->lastChangingElement - 1 : 0;
	if (isWhite) {
		start &= (uint32_t)~1;
	} else {
		start |= 1;
	}
	int32_t i = start;
	for (; i < ces; i += 2) {
		int32_t temp = $nc(pce)->get(i);
		if (temp > a0) {
			this->lastChangingElement = i;
			$nc(ret)->set(0, temp);
			break;
		}
	}
	if (i + 1 < ces) {
		$nc(ret)->set(1, $nc(pce)->get(i + 1));
	}
}

int32_t TIFFFaxDecompressor::nextNBits(int32_t bitsToGet) {
	int8_t b = 0;
	int8_t next = 0;
	int8_t next2next = 0;
	int32_t l = $nc(this->data)->length - 1;
	int32_t bp = this->bytePointer;
	if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT) {
		b = $nc(this->data)->get(bp);
		if (bp == l) {
			next = (int8_t)0;
			next2next = (int8_t)0;
		} else if ((bp + 1) == l) {
			next = $nc(this->data)->get(bp + 1);
			next2next = (int8_t)0;
		} else {
			next = $nc(this->data)->get(bp + 1);
			next2next = $nc(this->data)->get(bp + 2);
		}
	} else if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT) {
		b = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp) & (uint32_t)255));
		if (bp == l) {
			next = (int8_t)0;
			next2next = (int8_t)0;
		} else if ((bp + 1) == l) {
			next = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp + 1) & (uint32_t)255));
			next2next = (int8_t)0;
		} else {
			next = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp + 1) & (uint32_t)255));
			next2next = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp + 2) & (uint32_t)255));
		}
	} else {
		$throwNew($IIOException, "Invalid FillOrder"_s);
	}
	int32_t bitsLeft = 8 - this->bitPointer;
	int32_t bitsFromNextByte = bitsToGet - bitsLeft;
	int32_t bitsFromNext2NextByte = 0;
	if (bitsFromNextByte > 8) {
		bitsFromNext2NextByte = bitsFromNextByte - 8;
		bitsFromNextByte = 8;
	}
	++this->bytePointer;
	int32_t i1 = $sl((int32_t)(b & (uint32_t)$nc(TIFFFaxDecompressor::table1)->get(bitsLeft)), bitsToGet - bitsLeft);
	int32_t i2 = $usr((int32_t)(next & (uint32_t)$nc(TIFFFaxDecompressor::table2)->get(bitsFromNextByte)), 8 - bitsFromNextByte);
	int32_t i3 = 0;
	if (bitsFromNext2NextByte != 0) {
		i2 <<= bitsFromNext2NextByte;
		i3 = $usr((int32_t)(next2next & (uint32_t)$nc(TIFFFaxDecompressor::table2)->get(bitsFromNext2NextByte)), 8 - bitsFromNext2NextByte);
		i2 |= i3;
		++this->bytePointer;
		this->bitPointer = bitsFromNext2NextByte;
	} else if (bitsFromNextByte == 8) {
		this->bitPointer = 0;
		++this->bytePointer;
	} else {
		this->bitPointer = bitsFromNextByte;
	}
	int32_t i = i1 | i2;
	return i;
}

int32_t TIFFFaxDecompressor::nextLesserThan8Bits(int32_t bitsToGet) {
	int8_t b = 0;
	int8_t next = 0;
	int32_t l = $nc(this->data)->length - 1;
	int32_t bp = this->bytePointer;
	if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT) {
		b = $nc(this->data)->get(bp);
		if (bp == l) {
			next = (int8_t)0;
		} else {
			next = $nc(this->data)->get(bp + 1);
		}
	} else if (this->fillOrder == $BaselineTIFFTagSet::FILL_ORDER_RIGHT_TO_LEFT) {
		b = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp) & (uint32_t)255));
		if (bp == l) {
			next = (int8_t)0;
		} else {
			next = $nc(TIFFFaxDecompressor::flipTable)->get((int32_t)($nc(this->data)->get(bp + 1) & (uint32_t)255));
		}
	} else {
		$throwNew($IIOException, "Invalid FillOrder"_s);
	}
	int32_t bitsLeft = 8 - this->bitPointer;
	int32_t bitsFromNextByte = bitsToGet - bitsLeft;
	int32_t shift = bitsLeft - bitsToGet;
	int32_t i1 = 0;
	int32_t i2 = 0;
	if (shift >= 0) {
		i1 = $usr((int32_t)(b & (uint32_t)$nc(TIFFFaxDecompressor::table1)->get(bitsLeft)), shift);
		this->bitPointer += bitsToGet;
		if (this->bitPointer == 8) {
			this->bitPointer = 0;
			++this->bytePointer;
		}
	} else {
		i1 = $sl((int32_t)(b & (uint32_t)$nc(TIFFFaxDecompressor::table1)->get(bitsLeft)), -shift);
		i2 = $usr((int32_t)(next & (uint32_t)$nc(TIFFFaxDecompressor::table2)->get(bitsFromNextByte)), 8 - bitsFromNextByte);
		i1 |= i2;
		++this->bytePointer;
		this->bitPointer = bitsFromNextByte;
	}
	return i1;
}

void TIFFFaxDecompressor::updatePointer(int32_t bitsToMoveBack) {
	if (bitsToMoveBack > 8) {
		this->bytePointer -= bitsToMoveBack / 8;
		$modAssign(bitsToMoveBack, 8);
	}
	int32_t i = this->bitPointer - bitsToMoveBack;
	if (i < 0) {
		--this->bytePointer;
		this->bitPointer = 8 + i;
	} else {
		this->bitPointer = i;
	}
}

void TIFFFaxDecompressor::warning($String* msg) {
	if ($instanceOf($TIFFImageReader, this->reader)) {
		$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage(msg);
	}
}

void clinit$TIFFFaxDecompressor($Class* class$) {
	$assignStatic(TIFFFaxDecompressor::table1, $new($ints, {
		0,
		1,
		3,
		7,
		15,
		31,
		63,
		127,
		255
	}));
	$assignStatic(TIFFFaxDecompressor::table2, $new($ints, {
		0,
		128,
		192,
		224,
		240,
		248,
		252,
		254,
		255
	}));
	$assignStatic(TIFFFaxDecompressor::flipTable, $new($bytes, {
		(int8_t)0,
		(int8_t)-128,
		(int8_t)64,
		(int8_t)-64,
		(int8_t)32,
		(int8_t)-96,
		(int8_t)96,
		(int8_t)-32,
		(int8_t)16,
		(int8_t)-112,
		(int8_t)80,
		(int8_t)-48,
		(int8_t)48,
		(int8_t)-80,
		(int8_t)112,
		(int8_t)-16,
		(int8_t)8,
		(int8_t)-120,
		(int8_t)72,
		(int8_t)-56,
		(int8_t)40,
		(int8_t)-88,
		(int8_t)104,
		(int8_t)-24,
		(int8_t)24,
		(int8_t)-104,
		(int8_t)88,
		(int8_t)-40,
		(int8_t)56,
		(int8_t)-72,
		(int8_t)120,
		(int8_t)-8,
		(int8_t)4,
		(int8_t)-124,
		(int8_t)68,
		(int8_t)-60,
		(int8_t)36,
		(int8_t)-92,
		(int8_t)100,
		(int8_t)-28,
		(int8_t)20,
		(int8_t)-108,
		(int8_t)84,
		(int8_t)-44,
		(int8_t)52,
		(int8_t)-76,
		(int8_t)116,
		(int8_t)-12,
		(int8_t)12,
		(int8_t)-116,
		(int8_t)76,
		(int8_t)-52,
		(int8_t)44,
		(int8_t)-84,
		(int8_t)108,
		(int8_t)-20,
		(int8_t)28,
		(int8_t)-100,
		(int8_t)92,
		(int8_t)-36,
		(int8_t)60,
		(int8_t)-68,
		(int8_t)124,
		(int8_t)-4,
		(int8_t)2,
		(int8_t)-126,
		(int8_t)66,
		(int8_t)-62,
		(int8_t)34,
		(int8_t)-94,
		(int8_t)98,
		(int8_t)-30,
		(int8_t)18,
		(int8_t)-110,
		(int8_t)82,
		(int8_t)-46,
		(int8_t)50,
		(int8_t)-78,
		(int8_t)114,
		(int8_t)-14,
		(int8_t)10,
		(int8_t)-118,
		(int8_t)74,
		(int8_t)-54,
		(int8_t)42,
		(int8_t)-86,
		(int8_t)106,
		(int8_t)-22,
		(int8_t)26,
		(int8_t)-102,
		(int8_t)90,
		(int8_t)-38,
		(int8_t)58,
		(int8_t)-70,
		(int8_t)122,
		(int8_t)-6,
		(int8_t)6,
		(int8_t)-122,
		(int8_t)70,
		(int8_t)-58,
		(int8_t)38,
		(int8_t)-90,
		(int8_t)102,
		(int8_t)-26,
		(int8_t)22,
		(int8_t)-106,
		(int8_t)86,
		(int8_t)-42,
		(int8_t)54,
		(int8_t)-74,
		(int8_t)118,
		(int8_t)-10,
		(int8_t)14,
		(int8_t)-114,
		(int8_t)78,
		(int8_t)-50,
		(int8_t)46,
		(int8_t)-82,
		(int8_t)110,
		(int8_t)-18,
		(int8_t)30,
		(int8_t)-98,
		(int8_t)94,
		(int8_t)-34,
		(int8_t)62,
		(int8_t)-66,
		(int8_t)126,
		(int8_t)-2,
		(int8_t)1,
		(int8_t)-127,
		(int8_t)65,
		(int8_t)-63,
		(int8_t)33,
		(int8_t)-95,
		(int8_t)97,
		(int8_t)-31,
		(int8_t)17,
		(int8_t)-111,
		(int8_t)81,
		(int8_t)-47,
		(int8_t)49,
		(int8_t)-79,
		(int8_t)113,
		(int8_t)-15,
		(int8_t)9,
		(int8_t)-119,
		(int8_t)73,
		(int8_t)-55,
		(int8_t)41,
		(int8_t)-87,
		(int8_t)105,
		(int8_t)-23,
		(int8_t)25,
		(int8_t)-103,
		(int8_t)89,
		(int8_t)-39,
		(int8_t)57,
		(int8_t)-71,
		(int8_t)121,
		(int8_t)-7,
		(int8_t)5,
		(int8_t)-123,
		(int8_t)69,
		(int8_t)-59,
		(int8_t)37,
		(int8_t)-91,
		(int8_t)101,
		(int8_t)-27,
		(int8_t)21,
		(int8_t)-107,
		(int8_t)85,
		(int8_t)-43,
		(int8_t)53,
		(int8_t)-75,
		(int8_t)117,
		(int8_t)-11,
		(int8_t)13,
		(int8_t)-115,
		(int8_t)77,
		(int8_t)-51,
		(int8_t)45,
		(int8_t)-83,
		(int8_t)109,
		(int8_t)-19,
		(int8_t)29,
		(int8_t)-99,
		(int8_t)93,
		(int8_t)-35,
		(int8_t)61,
		(int8_t)-67,
		(int8_t)125,
		(int8_t)-3,
		(int8_t)3,
		(int8_t)-125,
		(int8_t)67,
		(int8_t)-61,
		(int8_t)35,
		(int8_t)-93,
		(int8_t)99,
		(int8_t)-29,
		(int8_t)19,
		(int8_t)-109,
		(int8_t)83,
		(int8_t)-45,
		(int8_t)51,
		(int8_t)-77,
		(int8_t)115,
		(int8_t)-13,
		(int8_t)11,
		(int8_t)-117,
		(int8_t)75,
		(int8_t)-53,
		(int8_t)43,
		(int8_t)-85,
		(int8_t)107,
		(int8_t)-21,
		(int8_t)27,
		(int8_t)-101,
		(int8_t)91,
		(int8_t)-37,
		(int8_t)59,
		(int8_t)-69,
		(int8_t)123,
		(int8_t)-5,
		(int8_t)7,
		(int8_t)-121,
		(int8_t)71,
		(int8_t)-57,
		(int8_t)39,
		(int8_t)-89,
		(int8_t)103,
		(int8_t)-25,
		(int8_t)23,
		(int8_t)-105,
		(int8_t)87,
		(int8_t)-41,
		(int8_t)55,
		(int8_t)-73,
		(int8_t)119,
		(int8_t)-9,
		(int8_t)15,
		(int8_t)-113,
		(int8_t)79,
		(int8_t)-49,
		(int8_t)47,
		(int8_t)-81,
		(int8_t)111,
		(int8_t)-17,
		(int8_t)31,
		(int8_t)-97,
		(int8_t)95,
		(int8_t)-33,
		(int8_t)63,
		(int8_t)-65,
		(int8_t)127,
		(int8_t)-1
	}));
	$assignStatic(TIFFFaxDecompressor::white, $new($shorts, {
		(int16_t)6430,
		(int16_t)6400,
		(int16_t)6400,
		(int16_t)6400,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)944,
		(int16_t)944,
		(int16_t)944,
		(int16_t)944,
		(int16_t)976,
		(int16_t)976,
		(int16_t)976,
		(int16_t)976,
		(int16_t)1456,
		(int16_t)1456,
		(int16_t)1456,
		(int16_t)1456,
		(int16_t)1488,
		(int16_t)1488,
		(int16_t)1488,
		(int16_t)1488,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)1520,
		(int16_t)1520,
		(int16_t)1520,
		(int16_t)1520,
		(int16_t)1552,
		(int16_t)1552,
		(int16_t)1552,
		(int16_t)1552,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)428,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)1072,
		(int16_t)1072,
		(int16_t)1072,
		(int16_t)1072,
		(int16_t)1104,
		(int16_t)1104,
		(int16_t)1104,
		(int16_t)1104,
		(int16_t)1136,
		(int16_t)1136,
		(int16_t)1136,
		(int16_t)1136,
		(int16_t)1168,
		(int16_t)1168,
		(int16_t)1168,
		(int16_t)1168,
		(int16_t)1200,
		(int16_t)1200,
		(int16_t)1200,
		(int16_t)1200,
		(int16_t)1232,
		(int16_t)1232,
		(int16_t)1232,
		(int16_t)1232,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)1008,
		(int16_t)1008,
		(int16_t)1008,
		(int16_t)1008,
		(int16_t)1040,
		(int16_t)1040,
		(int16_t)1040,
		(int16_t)1040,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)44,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)396,
		(int16_t)1712,
		(int16_t)1712,
		(int16_t)1712,
		(int16_t)1712,
		(int16_t)1744,
		(int16_t)1744,
		(int16_t)1744,
		(int16_t)1744,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)846,
		(int16_t)1264,
		(int16_t)1264,
		(int16_t)1264,
		(int16_t)1264,
		(int16_t)1296,
		(int16_t)1296,
		(int16_t)1296,
		(int16_t)1296,
		(int16_t)1328,
		(int16_t)1328,
		(int16_t)1328,
		(int16_t)1328,
		(int16_t)1360,
		(int16_t)1360,
		(int16_t)1360,
		(int16_t)1360,
		(int16_t)1392,
		(int16_t)1392,
		(int16_t)1392,
		(int16_t)1392,
		(int16_t)1424,
		(int16_t)1424,
		(int16_t)1424,
		(int16_t)1424,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)910,
		(int16_t)1968,
		(int16_t)1968,
		(int16_t)1968,
		(int16_t)1968,
		(int16_t)2000,
		(int16_t)2000,
		(int16_t)2000,
		(int16_t)2000,
		(int16_t)2032,
		(int16_t)2032,
		(int16_t)2032,
		(int16_t)2032,
		(int16_t)16,
		(int16_t)16,
		(int16_t)16,
		(int16_t)16,
		(int16_t)10257,
		(int16_t)10257,
		(int16_t)10257,
		(int16_t)10257,
		(int16_t)12305,
		(int16_t)12305,
		(int16_t)12305,
		(int16_t)12305,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)330,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)362,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)878,
		(int16_t)1904,
		(int16_t)1904,
		(int16_t)1904,
		(int16_t)1904,
		(int16_t)1936,
		(int16_t)1936,
		(int16_t)1936,
		(int16_t)1936,
		(int16_t)-18413,
		(int16_t)-18413,
		(int16_t)-16365,
		(int16_t)-16365,
		(int16_t)-14317,
		(int16_t)-14317,
		(int16_t)-10221,
		(int16_t)-10221,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)590,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)1584,
		(int16_t)1584,
		(int16_t)1584,
		(int16_t)1584,
		(int16_t)1616,
		(int16_t)1616,
		(int16_t)1616,
		(int16_t)1616,
		(int16_t)1648,
		(int16_t)1648,
		(int16_t)1648,
		(int16_t)1648,
		(int16_t)1680,
		(int16_t)1680,
		(int16_t)1680,
		(int16_t)1680,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)1776,
		(int16_t)1776,
		(int16_t)1776,
		(int16_t)1776,
		(int16_t)1808,
		(int16_t)1808,
		(int16_t)1808,
		(int16_t)1808,
		(int16_t)1840,
		(int16_t)1840,
		(int16_t)1840,
		(int16_t)1840,
		(int16_t)1872,
		(int16_t)1872,
		(int16_t)1872,
		(int16_t)1872,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)6157,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)-12275,
		(int16_t)14353,
		(int16_t)14353,
		(int16_t)14353,
		(int16_t)14353,
		(int16_t)16401,
		(int16_t)16401,
		(int16_t)16401,
		(int16_t)16401,
		(int16_t)22547,
		(int16_t)22547,
		(int16_t)24595,
		(int16_t)24595,
		(int16_t)20497,
		(int16_t)20497,
		(int16_t)20497,
		(int16_t)20497,
		(int16_t)18449,
		(int16_t)18449,
		(int16_t)18449,
		(int16_t)18449,
		(int16_t)26643,
		(int16_t)26643,
		(int16_t)28691,
		(int16_t)28691,
		(int16_t)30739,
		(int16_t)30739,
		(int16_t)-32749,
		(int16_t)-32749,
		(int16_t)-30701,
		(int16_t)-30701,
		(int16_t)-28653,
		(int16_t)-28653,
		(int16_t)-26605,
		(int16_t)-26605,
		(int16_t)-24557,
		(int16_t)-24557,
		(int16_t)-22509,
		(int16_t)-22509,
		(int16_t)-20461,
		(int16_t)-20461,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)8207,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)72,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)104,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)4107,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)266,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)298,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)136,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)168,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)460,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)492,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)2059,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)200,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232,
		(int16_t)232
	}));
	$assignStatic(TIFFFaxDecompressor::additionalMakeup, $new($shorts, {
		(int16_t)28679,
		(int16_t)28679,
		(int16_t)31752,
		(int16_t)0x00008009,
		(int16_t)0x00008409,
		(int16_t)0x00008809,
		(int16_t)0x00008C09,
		(int16_t)0x00009009,
		(int16_t)29703,
		(int16_t)29703,
		(int16_t)30727,
		(int16_t)30727,
		(int16_t)0x00009409,
		(int16_t)0x00009809,
		(int16_t)0x00009C09,
		(int16_t)0x0000A009
	}));
	$assignStatic(TIFFFaxDecompressor::initBlack, $new($shorts, {
		(int16_t)3226,
		(int16_t)6412,
		(int16_t)200,
		(int16_t)168,
		(int16_t)38,
		(int16_t)38,
		(int16_t)134,
		(int16_t)134,
		(int16_t)100,
		(int16_t)100,
		(int16_t)100,
		(int16_t)100,
		(int16_t)68,
		(int16_t)68,
		(int16_t)68,
		(int16_t)68
	}));
	$assignStatic(TIFFFaxDecompressor::twoBitBlack, $new($shorts, {
		(int16_t)292,
		(int16_t)260,
		(int16_t)226,
		(int16_t)226
	}));
	$assignStatic(TIFFFaxDecompressor::black, $new($shorts, {
		(int16_t)62,
		(int16_t)62,
		(int16_t)30,
		(int16_t)30,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)3225,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)588,
		(int16_t)1680,
		(int16_t)1680,
		(int16_t)20499,
		(int16_t)22547,
		(int16_t)24595,
		(int16_t)26643,
		(int16_t)1776,
		(int16_t)1776,
		(int16_t)1808,
		(int16_t)1808,
		(int16_t)-24557,
		(int16_t)-22509,
		(int16_t)-20461,
		(int16_t)-18413,
		(int16_t)1904,
		(int16_t)1904,
		(int16_t)1936,
		(int16_t)1936,
		(int16_t)-16365,
		(int16_t)-14317,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)782,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)814,
		(int16_t)-12269,
		(int16_t)-10221,
		(int16_t)10257,
		(int16_t)10257,
		(int16_t)12305,
		(int16_t)12305,
		(int16_t)14353,
		(int16_t)14353,
		(int16_t)16403,
		(int16_t)18451,
		(int16_t)1712,
		(int16_t)1712,
		(int16_t)1744,
		(int16_t)1744,
		(int16_t)28691,
		(int16_t)30739,
		(int16_t)-32749,
		(int16_t)-30701,
		(int16_t)-28653,
		(int16_t)-26605,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)2061,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)424,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)750,
		(int16_t)1616,
		(int16_t)1616,
		(int16_t)1648,
		(int16_t)1648,
		(int16_t)1424,
		(int16_t)1424,
		(int16_t)1456,
		(int16_t)1456,
		(int16_t)1488,
		(int16_t)1488,
		(int16_t)1520,
		(int16_t)1520,
		(int16_t)1840,
		(int16_t)1840,
		(int16_t)1872,
		(int16_t)1872,
		(int16_t)1968,
		(int16_t)1968,
		(int16_t)8209,
		(int16_t)8209,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)524,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)556,
		(int16_t)1552,
		(int16_t)1552,
		(int16_t)1584,
		(int16_t)1584,
		(int16_t)2000,
		(int16_t)2000,
		(int16_t)2032,
		(int16_t)2032,
		(int16_t)976,
		(int16_t)976,
		(int16_t)1008,
		(int16_t)1008,
		(int16_t)1040,
		(int16_t)1040,
		(int16_t)1072,
		(int16_t)1072,
		(int16_t)1296,
		(int16_t)1296,
		(int16_t)1328,
		(int16_t)1328,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)718,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)456,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)326,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)358,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)490,
		(int16_t)4113,
		(int16_t)4113,
		(int16_t)6161,
		(int16_t)6161,
		(int16_t)848,
		(int16_t)848,
		(int16_t)880,
		(int16_t)880,
		(int16_t)912,
		(int16_t)912,
		(int16_t)944,
		(int16_t)944,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)622,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)654,
		(int16_t)1104,
		(int16_t)1104,
		(int16_t)1136,
		(int16_t)1136,
		(int16_t)1168,
		(int16_t)1168,
		(int16_t)1200,
		(int16_t)1200,
		(int16_t)1232,
		(int16_t)1232,
		(int16_t)1264,
		(int16_t)1264,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)686,
		(int16_t)1360,
		(int16_t)1360,
		(int16_t)1392,
		(int16_t)1392,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)12,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390,
		(int16_t)390
	}));
	$assignStatic(TIFFFaxDecompressor::twoDCodes, $new($bytes, {
		(int8_t)80,
		(int8_t)88,
		(int8_t)23,
		(int8_t)71,
		(int8_t)30,
		(int8_t)30,
		(int8_t)62,
		(int8_t)62,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)4,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)11,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)35,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)51,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41,
		(int8_t)41
	}));
}

TIFFFaxDecompressor::TIFFFaxDecompressor() {
}

$Class* TIFFFaxDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFFaxDecompressor, name, initialize, &_TIFFFaxDecompressor_ClassInfo_, clinit$TIFFFaxDecompressor, allocate$TIFFFaxDecompressor);
	return class$;
}

$Class* TIFFFaxDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com