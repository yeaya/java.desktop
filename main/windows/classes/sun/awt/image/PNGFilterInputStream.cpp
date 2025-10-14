#include <sun/awt/image/PNGFilterInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/PNGImageDecoder.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PNGImageDecoder = ::sun::awt::image::PNGImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PNGFilterInputStream_FieldInfo_[] = {
	{"owner", "Lsun/awt/image/PNGImageDecoder;", nullptr, 0, $field(PNGFilterInputStream, owner)},
	{"underlyingInputStream", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(PNGFilterInputStream, underlyingInputStream)},
	{}
};

$MethodInfo _PNGFilterInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/PNGImageDecoder;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGFilterInputStream::*)($PNGImageDecoder*,$InputStream*)>(&PNGFilterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PNGFilterInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.PNGFilterInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_PNGFilterInputStream_FieldInfo_,
	_PNGFilterInputStream_MethodInfo_
};

$Object* allocate$PNGFilterInputStream($Class* clazz) {
	return $of($alloc(PNGFilterInputStream));
}

void PNGFilterInputStream::init$($PNGImageDecoder* owner, $InputStream* is) {
	$FilterInputStream::init$(is);
	$set(this, underlyingInputStream, this->in);
	$set(this, owner, owner);
}

int32_t PNGFilterInputStream::available() {
	return $nc(this->owner)->limit - $nc(this->owner)->pos + $nc(this->in)->available();
}

bool PNGFilterInputStream::markSupported() {
	return false;
}

int32_t PNGFilterInputStream::read() {
	if ($nc(this->owner)->chunkLength <= 0) {
		if (!$nc(this->owner)->getData()) {
			return -1;
		}
	}
	--$nc(this->owner)->chunkLength;
	return (int32_t)($nc($nc(this->owner)->inbuf)->get($nc(this->owner)->chunkStart++) & (uint32_t)255);
}

int32_t PNGFilterInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t PNGFilterInputStream::read($bytes* b, int32_t st, int32_t len) {
	if ($nc(this->owner)->chunkLength <= 0) {
		if (!$nc(this->owner)->getData()) {
			return -1;
		}
	}
	if ($nc(this->owner)->chunkLength < len) {
		len = $nc(this->owner)->chunkLength;
	}
	$System::arraycopy($nc(this->owner)->inbuf, $nc(this->owner)->chunkStart, b, st, len);
	$nc(this->owner)->chunkLength -= len;
	$nc(this->owner)->chunkStart += len;
	return len;
}

int64_t PNGFilterInputStream::skip(int64_t n) {
	int32_t i = 0;
	for (i = 0; i < n && read() >= 0; ++i) {
	}
	return i;
}

PNGFilterInputStream::PNGFilterInputStream() {
}

$Class* PNGFilterInputStream::load$($String* name, bool initialize) {
	$loadClass(PNGFilterInputStream, name, initialize, &_PNGFilterInputStream_ClassInfo_, allocate$PNGFilterInputStream);
	return class$;
}

$Class* PNGFilterInputStream::class$ = nullptr;

		} // image
	} // awt
} // sun