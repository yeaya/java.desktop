#include <com/sun/imageio/plugins/tiff/TIFFPackBitsUtil.h>

#include <java/lang/Math.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFPackBitsUtil_FieldInfo_[] = {
	{"dstData", "[B", nullptr, 0, $field(TIFFPackBitsUtil, dstData)},
	{"dstIndex", "I", nullptr, 0, $field(TIFFPackBitsUtil, dstIndex)},
	{}
};

$MethodInfo _TIFFPackBitsUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFPackBitsUtil::*)()>(&TIFFPackBitsUtil::init$))},
	{"decode", "([B)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFPackBitsUtil::*)(int32_t)>(&TIFFPackBitsUtil::ensureCapacity))},
	{}
};

$ClassInfo _TIFFPackBitsUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFPackBitsUtil",
	"java.lang.Object",
	nullptr,
	_TIFFPackBitsUtil_FieldInfo_,
	_TIFFPackBitsUtil_MethodInfo_
};

$Object* allocate$TIFFPackBitsUtil($Class* clazz) {
	return $of($alloc(TIFFPackBitsUtil));
}

void TIFFPackBitsUtil::init$() {
	$set(this, dstData, $new($bytes, 8192));
	this->dstIndex = 0;
}

void TIFFPackBitsUtil::ensureCapacity(int32_t bytesToAdd) {
	if (this->dstIndex + bytesToAdd > $nc(this->dstData)->length) {
		$var($bytes, newDstData, $new($bytes, $Math::max($cast(int32_t, ($nc(this->dstData)->length * 1.2f)), this->dstIndex + bytesToAdd)));
		$System::arraycopy(this->dstData, 0, newDstData, 0, $nc(this->dstData)->length);
		$set(this, dstData, newDstData);
	}
}

$bytes* TIFFPackBitsUtil::decode($bytes* srcData) {
	int32_t inIndex = 0;
	while (inIndex < $nc(srcData)->length) {
		int8_t b = srcData->get(inIndex++);
		if (b >= 0 && b <= 127) {
			ensureCapacity(b + 1);
			for (int32_t i = 0; i < b + 1; ++i) {
				$nc(this->dstData)->set(this->dstIndex++, srcData->get(inIndex++));
			}
		} else if (b <= -1 && b >= -127) {
			int8_t repeat = srcData->get(inIndex++);
			ensureCapacity(-b + 1);
			for (int32_t i = 0; i < (-b + 1); ++i) {
				$nc(this->dstData)->set(this->dstIndex++, repeat);
			}
		} else {
			++inIndex;
		}
	}
	$var($bytes, newDstData, $new($bytes, this->dstIndex));
	$System::arraycopy(this->dstData, 0, newDstData, 0, this->dstIndex);
	return newDstData;
}

TIFFPackBitsUtil::TIFFPackBitsUtil() {
}

$Class* TIFFPackBitsUtil::load$($String* name, bool initialize) {
	$loadClass(TIFFPackBitsUtil, name, initialize, &_TIFFPackBitsUtil_ClassInfo_, allocate$TIFFPackBitsUtil);
	return class$;
}

$Class* TIFFPackBitsUtil::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com