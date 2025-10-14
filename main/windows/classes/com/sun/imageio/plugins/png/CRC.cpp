#include <com/sun/imageio/plugins/png/CRC.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CRC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _CRC_FieldInfo_[] = {
	{"crcTable", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC, crcTable)},
	{"crc", "I", nullptr, $PRIVATE, $field(CRC, crc)},
	{}
};

$MethodInfo _CRC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CRC::*)()>(&CRC::init$))},
	{"getValue", "()I", nullptr, 0, $method(static_cast<int32_t(CRC::*)()>(&CRC::getValue))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(CRC::*)()>(&CRC::reset))},
	{"update", "([BII)V", nullptr, 0, $method(static_cast<void(CRC::*)($bytes*,int32_t,int32_t)>(&CRC::update))},
	{"update", "(I)V", nullptr, 0, $method(static_cast<void(CRC::*)(int32_t)>(&CRC::update))},
	{}
};

$ClassInfo _CRC_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.png.CRC",
	"java.lang.Object",
	nullptr,
	_CRC_FieldInfo_,
	_CRC_MethodInfo_
};

$Object* allocate$CRC($Class* clazz) {
	return $of($alloc(CRC));
}

$ints* CRC::crcTable = nullptr;

void CRC::init$() {
	this->crc = -1;
}

void CRC::reset() {
	this->crc = -1;
}

void CRC::update($bytes* data, int32_t off, int32_t len) {
	int32_t c = this->crc;
	for (int32_t n = 0; n < len; ++n) {
		c = $nc(CRC::crcTable)->get((int32_t)((c ^ $nc(data)->get(off + n)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)c >> 8));
	}
	this->crc = c;
}

void CRC::update(int32_t data) {
	this->crc = $nc(CRC::crcTable)->get((int32_t)((this->crc ^ data) & (uint32_t)255)) ^ ((int32_t)((uint32_t)this->crc >> 8));
}

int32_t CRC::getValue() {
	return this->crc ^ -1;
}

void clinit$CRC($Class* class$) {
	$assignStatic(CRC::crcTable, $new($ints, 256));
	{
		for (int32_t n = 0; n < 256; ++n) {
			int32_t c = n;
			for (int32_t k = 0; k < 8; ++k) {
				if (((int32_t)(c & (uint32_t)1)) == 1) {
					c = (int32_t)0xEDB88320 ^ ((int32_t)((uint32_t)c >> 1));
				} else {
					$usrAssign(c, 1);
				}
				$nc(CRC::crcTable)->set(n, c);
			}
		}
	}
}

CRC::CRC() {
}

$Class* CRC::load$($String* name, bool initialize) {
	$loadClass(CRC, name, initialize, &_CRC_ClassInfo_, clinit$CRC, allocate$CRC);
	return class$;
}

$Class* CRC::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com