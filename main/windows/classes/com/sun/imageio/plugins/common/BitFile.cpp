#include <com/sun/imageio/plugins/common/BitFile.h>

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

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _BitFile_FieldInfo_[] = {
	{"output", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, 0, $field(BitFile, output)},
	{"buffer", "[B", nullptr, 0, $field(BitFile, buffer)},
	{"index", "I", nullptr, 0, $field(BitFile, index)},
	{"bitsLeft", "I", nullptr, 0, $field(BitFile, bitsLeft)},
	{"blocks", "Z", nullptr, 0, $field(BitFile, blocks)},
	{}
};

$MethodInfo _BitFile_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageOutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BitFile::*)($ImageOutputStream*,bool)>(&BitFile::init$))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeBits", "(II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _BitFile_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.BitFile",
	"java.lang.Object",
	nullptr,
	_BitFile_FieldInfo_,
	_BitFile_MethodInfo_
};

$Object* allocate$BitFile($Class* clazz) {
	return $of($alloc(BitFile));
}

void BitFile::init$($ImageOutputStream* output, bool blocks) {
	this->blocks = false;
	$set(this, output, output);
	this->blocks = blocks;
	$set(this, buffer, $new($bytes, 256));
	this->index = 0;
	this->bitsLeft = 8;
}

void BitFile::flush() {
	int32_t numBytes = this->index + (this->bitsLeft == 8 ? 0 : 1);
	if (numBytes > 0) {
		if (this->blocks) {
			$nc(this->output)->write(numBytes);
		}
		$nc(this->output)->write(this->buffer, 0, numBytes);
		$nc(this->buffer)->set(0, (int8_t)0);
		this->index = 0;
		this->bitsLeft = 8;
	}
}

void BitFile::writeBits(int32_t bits, int32_t numbits) {
	int32_t bitsWritten = 0;
	int32_t numBytes = 255;
	do {
		if ((this->index == 254 && this->bitsLeft == 0) || this->index > 254) {
			if (this->blocks) {
				$nc(this->output)->write(numBytes);
			}
			$nc(this->output)->write(this->buffer, 0, numBytes);
			$nc(this->buffer)->set(0, (int8_t)0);
			this->index = 0;
			this->bitsLeft = 8;
		}
		if (numbits <= this->bitsLeft) {
			if (this->blocks) {
				(*$nc(this->buffer))[this->index] |= $sl((int32_t)(bits & (uint32_t)(($sl(1, numbits)) - 1)), 8 - this->bitsLeft);
				bitsWritten += numbits;
				this->bitsLeft -= numbits;
				numbits = 0;
			} else {
				(*$nc(this->buffer))[this->index] |= $sl((int32_t)(bits & (uint32_t)(($sl(1, numbits)) - 1)), this->bitsLeft - numbits);
				bitsWritten += numbits;
				this->bitsLeft -= numbits;
				numbits = 0;
			}
		} else if (this->blocks) {
			(*$nc(this->buffer))[this->index] |= $sl((int32_t)(bits & (uint32_t)(($sl(1, this->bitsLeft)) - 1)), 8 - this->bitsLeft);
			bitsWritten += this->bitsLeft;
			bits >>= this->bitsLeft;
			numbits -= this->bitsLeft;
			$nc(this->buffer)->set(++this->index, (int8_t)0);
			this->bitsLeft = 8;
		} else {
			int32_t topbits = (int32_t)(($usr(bits, numbits - this->bitsLeft)) & (uint32_t)(($sl(1, this->bitsLeft)) - 1));
			(*$nc(this->buffer))[this->index] |= topbits;
			numbits -= this->bitsLeft;
			bitsWritten += this->bitsLeft;
			$nc(this->buffer)->set(++this->index, (int8_t)0);
			this->bitsLeft = 8;
		}
	} while (numbits != 0);
}

BitFile::BitFile() {
}

$Class* BitFile::load$($String* name, bool initialize) {
	$loadClass(BitFile, name, initialize, &_BitFile_ClassInfo_, allocate$BitFile);
	return class$;
}

$Class* BitFile::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com