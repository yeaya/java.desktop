#include <com/sun/imageio/plugins/common/LZWCompressor.h>

#include <com/sun/imageio/plugins/common/BitFile.h>
#include <com/sun/imageio/plugins/common/LZWStringTable.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef TIFF

using $BitFile = ::com::sun::imageio::plugins::common::BitFile;
using $LZWStringTable = ::com::sun::imageio::plugins::common::LZWStringTable;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _LZWCompressor_FieldInfo_[] = {
	{"codeSize", "I", nullptr, 0, $field(LZWCompressor, codeSize)},
	{"clearCode", "I", nullptr, 0, $field(LZWCompressor, clearCode)},
	{"endOfInfo", "I", nullptr, 0, $field(LZWCompressor, endOfInfo)},
	{"numBits", "I", nullptr, 0, $field(LZWCompressor, numBits)},
	{"limit", "I", nullptr, 0, $field(LZWCompressor, limit)},
	{"prefix", "S", nullptr, 0, $field(LZWCompressor, prefix)},
	{"bf", "Lcom/sun/imageio/plugins/common/BitFile;", nullptr, 0, $field(LZWCompressor, bf)},
	{"lzss", "Lcom/sun/imageio/plugins/common/LZWStringTable;", nullptr, 0, $field(LZWCompressor, lzss)},
	{"tiffFudge", "Z", nullptr, 0, $field(LZWCompressor, tiffFudge)},
	{}
};

$MethodInfo _LZWCompressor_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageOutputStream;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(LZWCompressor::*)($ImageOutputStream*,int32_t,bool)>(&LZWCompressor::init$)), "java.io.IOException"},
	{"compress", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"dump", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _LZWCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.LZWCompressor",
	"java.lang.Object",
	nullptr,
	_LZWCompressor_FieldInfo_,
	_LZWCompressor_MethodInfo_
};

$Object* allocate$LZWCompressor($Class* clazz) {
	return $of($alloc(LZWCompressor));
}

void LZWCompressor::init$($ImageOutputStream* out, int32_t codeSize, bool TIFF) {
	$set(this, bf, $new($BitFile, out, !TIFF));
	this->codeSize = codeSize;
	this->tiffFudge = TIFF;
	this->clearCode = $sl(1, codeSize);
	this->endOfInfo = this->clearCode + 1;
	this->numBits = codeSize + 1;
	this->limit = ($sl(1, this->numBits)) - 1;
	if (this->tiffFudge) {
		--this->limit;
	}
	this->prefix = (int16_t)0x0000FFFF;
	$set(this, lzss, $new($LZWStringTable));
	$nc(this->lzss)->clearTable(codeSize);
	$nc(this->bf)->writeBits(this->clearCode, this->numBits);
}

void LZWCompressor::compress($bytes* buf, int32_t offset, int32_t length) {
	int32_t idx = 0;
	int8_t c = 0;
	int16_t index = 0;
	int32_t maxOffset = offset + length;
	for (idx = offset; idx < maxOffset; ++idx) {
		c = $nc(buf)->get(idx);
		if ((index = $nc(this->lzss)->findCharString(this->prefix, c)) != -1) {
			this->prefix = index;
		} else {
			$nc(this->bf)->writeBits(this->prefix, this->numBits);
			if ($nc(this->lzss)->addCharString(this->prefix, c) > this->limit) {
				if (this->numBits == 12) {
					$nc(this->bf)->writeBits(this->clearCode, this->numBits);
					$nc(this->lzss)->clearTable(this->codeSize);
					this->numBits = this->codeSize + 1;
				} else {
					++this->numBits;
				}
				this->limit = ($sl(1, this->numBits)) - 1;
				if (this->tiffFudge) {
					--this->limit;
				}
			}
			this->prefix = (int16_t)((int32_t)((int16_t)c & (uint32_t)255));
		}
	}
}

void LZWCompressor::flush() {
	if (this->prefix != -1) {
		$nc(this->bf)->writeBits(this->prefix, this->numBits);
	}
	$nc(this->bf)->writeBits(this->endOfInfo, this->numBits);
	$nc(this->bf)->flush();
}

void LZWCompressor::dump($PrintStream* out) {
	$nc(this->lzss)->dump(out);
}

LZWCompressor::LZWCompressor() {
}

$Class* LZWCompressor::load$($String* name, bool initialize) {
	$loadClass(LZWCompressor, name, initialize, &_LZWCompressor_ClassInfo_, allocate$LZWCompressor);
	return class$;
}

$Class* LZWCompressor::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com