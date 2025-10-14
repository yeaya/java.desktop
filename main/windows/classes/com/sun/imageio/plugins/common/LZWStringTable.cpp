#include <com/sun/imageio/plugins/common/LZWStringTable.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef HASHSIZE
#undef HASHSTEP
#undef HASH_FREE
#undef MAXBITS
#undef MAXSTR
#undef NEXT_FIRST
#undef RES_CODES

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _LZWStringTable_FieldInfo_[] = {
	{"RES_CODES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, RES_CODES)},
	{"HASH_FREE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, HASH_FREE)},
	{"NEXT_FIRST", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, NEXT_FIRST)},
	{"MAXBITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, MAXBITS)},
	{"MAXSTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, MAXSTR)},
	{"HASHSIZE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, HASHSIZE)},
	{"HASHSTEP", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LZWStringTable, HASHSTEP)},
	{"strChr", "[B", nullptr, 0, $field(LZWStringTable, strChr)},
	{"strNxt", "[S", nullptr, 0, $field(LZWStringTable, strNxt)},
	{"strHsh", "[S", nullptr, 0, $field(LZWStringTable, strHsh)},
	{"numStrings", "S", nullptr, 0, $field(LZWStringTable, numStrings)},
	{"strLen", "[I", nullptr, 0, $field(LZWStringTable, strLen)},
	{}
};

$MethodInfo _LZWStringTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LZWStringTable::*)()>(&LZWStringTable::init$))},
	{"addCharString", "(SB)I", nullptr, $PUBLIC},
	{"clearTable", "(I)V", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"expandCode", "([BISI)I", nullptr, $PUBLIC},
	{"findCharString", "(SB)S", nullptr, $PUBLIC},
	{"hash", "(SB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int16_t,int8_t)>(&LZWStringTable::hash))},
	{}
};

$ClassInfo _LZWStringTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.LZWStringTable",
	"java.lang.Object",
	nullptr,
	_LZWStringTable_FieldInfo_,
	_LZWStringTable_MethodInfo_
};

$Object* allocate$LZWStringTable($Class* clazz) {
	return $of($alloc(LZWStringTable));
}

void LZWStringTable::init$() {
	$set(this, strChr, $new($bytes, LZWStringTable::MAXSTR));
	$set(this, strNxt, $new($shorts, LZWStringTable::MAXSTR));
	$set(this, strLen, $new($ints, LZWStringTable::MAXSTR));
	$set(this, strHsh, $new($shorts, LZWStringTable::HASHSIZE));
}

int32_t LZWStringTable::addCharString(int16_t index, int8_t b) {
	int32_t hshidx = 0;
	if (this->numStrings >= LZWStringTable::MAXSTR) {
		return 0x0000FFFF;
	}
	hshidx = hash(index, b);
	while ($nc(this->strHsh)->get(hshidx) != LZWStringTable::HASH_FREE) {
		hshidx = $mod((hshidx + LZWStringTable::HASHSTEP), LZWStringTable::HASHSIZE);
	}
	$nc(this->strHsh)->set(hshidx, this->numStrings);
	$nc(this->strChr)->set(this->numStrings, b);
	if (index == LZWStringTable::HASH_FREE) {
		$nc(this->strNxt)->set(this->numStrings, LZWStringTable::NEXT_FIRST);
		$nc(this->strLen)->set(this->numStrings, 1);
	} else {
		$nc(this->strNxt)->set(this->numStrings, index);
		$nc(this->strLen)->set(this->numStrings, $nc(this->strLen)->get(index) + 1);
	}
	return this->numStrings++;
}

int16_t LZWStringTable::findCharString(int16_t index, int8_t b) {
	int32_t hshidx = 0;
	int32_t nxtidx = 0;
	if (index == LZWStringTable::HASH_FREE) {
		return (int16_t)((int32_t)(b & (uint32_t)255));
	}
	hshidx = hash(index, b);
	while ((nxtidx = $nc(this->strHsh)->get(hshidx)) != LZWStringTable::HASH_FREE) {
		if ($nc(this->strNxt)->get(nxtidx) == index && $nc(this->strChr)->get(nxtidx) == b) {
			return (int16_t)nxtidx;
		}
		hshidx = $mod((hshidx + LZWStringTable::HASHSTEP), LZWStringTable::HASHSIZE);
	}
	return (int16_t)0x0000FFFF;
}

void LZWStringTable::clearTable(int32_t codesize) {
	this->numStrings = (int16_t)0;
	for (int32_t q = 0; q < LZWStringTable::HASHSIZE; ++q) {
		$nc(this->strHsh)->set(q, LZWStringTable::HASH_FREE);
	}
	int32_t w = ($sl(1, codesize)) + LZWStringTable::RES_CODES;
	for (int32_t q = 0; q < w; ++q) {
		addCharString((int16_t)0x0000FFFF, (int8_t)q);
	}
}

int32_t LZWStringTable::hash(int16_t index, int8_t lastbyte) {
	return $mod(((int32_t)(((int16_t)(lastbyte << 8) ^ index) & (uint32_t)0x0000FFFF)), LZWStringTable::HASHSIZE);
}

int32_t LZWStringTable::expandCode($bytes* buf, int32_t offset, int16_t code, int32_t skipHead) {
	if (offset == -2) {
		if (skipHead == 1) {
			skipHead = 0;
		}
	}
	if (code == (int16_t)0x0000FFFF || skipHead == $nc(this->strLen)->get(code)) {
		return 0;
	}
	int32_t expandLen = 0;
	int32_t codeLen = $nc(this->strLen)->get(code) - skipHead;
	int32_t bufSpace = $nc(buf)->length - offset;
	if (bufSpace > codeLen) {
		expandLen = codeLen;
	} else {
		expandLen = bufSpace;
	}
	int32_t skipTail = codeLen - expandLen;
	int32_t idx = offset + expandLen;
	while ((idx > offset) && (code != (int16_t)0x0000FFFF)) {
		if (--skipTail < 0) {
			buf->set(--idx, $nc(this->strChr)->get(code));
		}
		code = $nc(this->strNxt)->get(code);
	}
	if (codeLen > expandLen) {
		return -expandLen;
	} else {
		return expandLen;
	}
}

void LZWStringTable::dump($PrintStream* out) {
	int32_t i = 0;
	for (i = 258; i < this->numStrings; ++i) {
		$var($String, var$0, $$str({" strNxt["_s, $$str(i), "] = "_s, $$str($nc(this->strNxt)->get(i)), " strChr "_s, $($Integer::toHexString((int32_t)($nc(this->strChr)->get(i) & (uint32_t)255))), " strLen "_s}));
		$nc(out)->println($$concat(var$0, $($Integer::toHexString($nc(this->strLen)->get(i)))));
	}
}

LZWStringTable::LZWStringTable() {
}

$Class* LZWStringTable::load$($String* name, bool initialize) {
	$loadClass(LZWStringTable, name, initialize, &_LZWStringTable_ClassInfo_, allocate$LZWStringTable);
	return class$;
}

$Class* LZWStringTable::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com