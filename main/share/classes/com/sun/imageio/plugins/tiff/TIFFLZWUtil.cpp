#include <com/sun/imageio/plugins/tiff/TIFFLZWUtil.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <javax/imageio/IIOException.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFLZWUtil_FieldInfo_[] = {
	{"srcData", "[B", nullptr, 0, $field(TIFFLZWUtil, srcData)},
	{"srcIndex", "I", nullptr, 0, $field(TIFFLZWUtil, srcIndex)},
	{"dstData", "[B", nullptr, 0, $field(TIFFLZWUtil, dstData)},
	{"dstIndex", "I", nullptr, 0, $field(TIFFLZWUtil, dstIndex)},
	{"stringTable", "[[B", nullptr, 0, $field(TIFFLZWUtil, stringTable)},
	{"tableIndex", "I", nullptr, 0, $field(TIFFLZWUtil, tableIndex)},
	{"bitsToGet", "I", nullptr, 0, $field(TIFFLZWUtil, bitsToGet)},
	{"nextData", "I", nullptr, 0, $field(TIFFLZWUtil, nextData)},
	{"nextBits", "I", nullptr, 0, $field(TIFFLZWUtil, nextBits)},
	{"andTable", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFLZWUtil, andTable)},
	{}
};

$MethodInfo _TIFFLZWUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFLZWUtil::*)()>(&TIFFLZWUtil::init$))},
	{"addStringToTable", "([BB)V", nullptr, $PUBLIC},
	{"addStringToTable", "([B)V", nullptr, $PUBLIC},
	{"composeString", "([BB)[B", nullptr, $PUBLIC},
	{"decode", "([BIIII)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFLZWUtil::*)(int32_t)>(&TIFFLZWUtil::ensureCapacity))},
	{"getNextCode", "()I", nullptr, $PUBLIC},
	{"initializeStringTable", "()V", nullptr, $PUBLIC},
	{"writeString", "([B)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFLZWUtil_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFLZWUtil",
	"java.lang.Object",
	nullptr,
	_TIFFLZWUtil_FieldInfo_,
	_TIFFLZWUtil_MethodInfo_
};

$Object* allocate$TIFFLZWUtil($Class* clazz) {
	return $of($alloc(TIFFLZWUtil));
}

$ints* TIFFLZWUtil::andTable = nullptr;

void TIFFLZWUtil::init$() {
	this->dstIndex = 0;
	this->bitsToGet = 9;
	this->nextData = 0;
	this->nextBits = 0;
}

$bytes* TIFFLZWUtil::decode($bytes* data, int32_t predictor, int32_t samplesPerPixel, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if ($nc(data)->get(0) == (int8_t)0 && data->get(1) == (int8_t)1) {
		$throwNew($IIOException, "TIFF 5.0-style LZW compression is not supported!"_s);
	}
	$set(this, srcData, data);
	this->srcIndex = 0;
	this->nextData = 0;
	this->nextBits = 0;
	$set(this, dstData, $new($bytes, 8192));
	this->dstIndex = 0;
	initializeStringTable();
	int32_t code = 0;
	int32_t oldCode = 0;
	$var($bytes, string, nullptr);
	while ((code = getNextCode()) != 257) {
		if (code == 256) {
			initializeStringTable();
			code = getNextCode();
			if (code == 257) {
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
	if (predictor == 2) {
		int32_t count = 0;
		for (int32_t j = 0; j < height; ++j) {
			count = samplesPerPixel * (j * width + 1);
			for (int32_t i = samplesPerPixel; i < width * samplesPerPixel; ++i) {
				(*$nc(this->dstData))[count] += $nc(this->dstData)->get(count - samplesPerPixel);
				++count;
			}
		}
	}
	$var($bytes, newDstData, $new($bytes, this->dstIndex));
	$System::arraycopy(this->dstData, 0, newDstData, 0, this->dstIndex);
	return newDstData;
}

void TIFFLZWUtil::initializeStringTable() {
	$useLocalCurrentObjectStackCache();
	$set(this, stringTable, $new($byteArray2, 4096));
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->stringTable)->set(i, $$new($bytes, 1));
		$nc($nc(this->stringTable)->get(i))->set(0, (int8_t)i);
	}
	this->tableIndex = 258;
	this->bitsToGet = 9;
}

void TIFFLZWUtil::ensureCapacity(int32_t bytesToAdd) {
	if (this->dstIndex + bytesToAdd > $nc(this->dstData)->length) {
		$var($bytes, newDstData, $new($bytes, $Math::max($cast(int32_t, ($nc(this->dstData)->length * 1.2f)), this->dstIndex + bytesToAdd)));
		$System::arraycopy(this->dstData, 0, newDstData, 0, $nc(this->dstData)->length);
		$set(this, dstData, newDstData);
	}
}

void TIFFLZWUtil::writeString($bytes* string) {
	ensureCapacity($nc(string)->length);
	for (int32_t i = 0; i < $nc(string)->length; ++i) {
		$nc(this->dstData)->set(this->dstIndex++, string->get(i));
	}
}

void TIFFLZWUtil::addStringToTable($bytes* oldString, int8_t newString) {
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

void TIFFLZWUtil::addStringToTable($bytes* string) {
	$nc(this->stringTable)->set(this->tableIndex++, string);
	if (this->tableIndex == 511) {
		this->bitsToGet = 10;
	} else if (this->tableIndex == 1023) {
		this->bitsToGet = 11;
	} else if (this->tableIndex == 2047) {
		this->bitsToGet = 12;
	}
}

$bytes* TIFFLZWUtil::composeString($bytes* oldString, int8_t newString) {
	int32_t length = $nc(oldString)->length;
	$var($bytes, string, $new($bytes, length + 1));
	$System::arraycopy(oldString, 0, string, 0, length);
	string->set(length, newString);
	return string;
}

int32_t TIFFLZWUtil::getNextCode() {
	try {
		this->nextData = (this->nextData << 8) | ((int32_t)($nc(this->srcData)->get(this->srcIndex++) & (uint32_t)255));
		this->nextBits += 8;
		if (this->nextBits < this->bitsToGet) {
			this->nextData = (this->nextData << 8) | ((int32_t)($nc(this->srcData)->get(this->srcIndex++) & (uint32_t)255));
			this->nextBits += 8;
		}
		int32_t code = (int32_t)(($sr(this->nextData, this->nextBits - this->bitsToGet)) & (uint32_t)$nc(TIFFLZWUtil::andTable)->get(this->bitsToGet - 9));
		this->nextBits -= this->bitsToGet;
		return code;
	} catch ($ArrayIndexOutOfBoundsException& e) {
		return 257;
	}
	$shouldNotReachHere();
}

void clinit$TIFFLZWUtil($Class* class$) {
	$assignStatic(TIFFLZWUtil::andTable, $new($ints, {
		511,
		1023,
		2047,
		4095
	}));
}

TIFFLZWUtil::TIFFLZWUtil() {
}

$Class* TIFFLZWUtil::load$($String* name, bool initialize) {
	$loadClass(TIFFLZWUtil, name, initialize, &_TIFFLZWUtil_ClassInfo_, clinit$TIFFLZWUtil, allocate$TIFFLZWUtil);
	return class$;
}

$Class* TIFFLZWUtil::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com