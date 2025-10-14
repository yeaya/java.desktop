#include <com/sun/imageio/plugins/common/SubImageInputStream.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _SubImageInputStream_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(SubImageInputStream, stream)},
	{"startingPos", "J", nullptr, 0, $field(SubImageInputStream, startingPos)},
	{"startingLength", "I", nullptr, 0, $field(SubImageInputStream, startingLength)},
	{"length", "I", nullptr, 0, $field(SubImageInputStream, length$)},
	{}
};

$MethodInfo _SubImageInputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageInputStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(SubImageInputStream::*)($ImageInputStream*,int32_t)>(&SubImageInputStream::init$)), "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"length", "()J", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SubImageInputStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.common.SubImageInputStream",
	"javax.imageio.stream.ImageInputStreamImpl",
	nullptr,
	_SubImageInputStream_FieldInfo_,
	_SubImageInputStream_MethodInfo_
};

$Object* allocate$SubImageInputStream($Class* clazz) {
	return $of($alloc(SubImageInputStream));
}

void SubImageInputStream::init$($ImageInputStream* stream, int32_t length) {
	$ImageInputStreamImpl::init$();
	$set(this, stream, stream);
	this->startingPos = $nc(stream)->getStreamPosition();
	this->startingLength = (this->length$ = length);
}

int32_t SubImageInputStream::read() {
	if (this->length$ == 0) {
		return -1;
	} else {
		--this->length$;
		return $nc(this->stream)->read();
	}
}

int32_t SubImageInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (this->length$ == 0) {
		return -1;
	}
	len = $Math::min(len, this->length$);
	int32_t bytes = $nc(this->stream)->read(b, off, len);
	this->length$ -= bytes;
	return bytes;
}

int64_t SubImageInputStream::length() {
	return this->startingLength;
}

void SubImageInputStream::seek(int64_t pos) {
	$nc(this->stream)->seek(pos - this->startingPos);
	this->streamPos = pos;
}

void SubImageInputStream::finalize() {
}

SubImageInputStream::SubImageInputStream() {
}

$Class* SubImageInputStream::load$($String* name, bool initialize) {
	$loadClass(SubImageInputStream, name, initialize, &_SubImageInputStream_ClassInfo_, allocate$SubImageInputStream);
	return class$;
}

$Class* SubImageInputStream::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com