#include <javax/imageio/stream/MemoryCacheImageOutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <javax/imageio/stream/MemoryCache.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;
using $MemoryCache = ::javax::imageio::stream::MemoryCache;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _MemoryCacheImageOutputStream_FieldInfo_[] = {
	{"stream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(MemoryCacheImageOutputStream, stream)},
	{"cache", "Ljavax/imageio/stream/MemoryCache;", nullptr, $PRIVATE, $field(MemoryCacheImageOutputStream, cache)},
	{}
};

$MethodInfo _MemoryCacheImageOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryCacheImageOutputStream::*)($OutputStream*)>(&MemoryCacheImageOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flushBefore", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isCached", "()Z", nullptr, $PUBLIC},
	{"isCachedFile", "()Z", nullptr, $PUBLIC},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"length", "()J", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MemoryCacheImageOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.MemoryCacheImageOutputStream",
	"javax.imageio.stream.ImageOutputStreamImpl",
	nullptr,
	_MemoryCacheImageOutputStream_FieldInfo_,
	_MemoryCacheImageOutputStream_MethodInfo_
};

$Object* allocate$MemoryCacheImageOutputStream($Class* clazz) {
	return $of($alloc(MemoryCacheImageOutputStream));
}

void MemoryCacheImageOutputStream::init$($OutputStream* stream) {
	$ImageOutputStreamImpl::init$();
	$set(this, cache, $new($MemoryCache));
	if (stream == nullptr) {
		$throwNew($IllegalArgumentException, "stream == null!"_s);
	}
	$set(this, stream, stream);
}

int32_t MemoryCacheImageOutputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int32_t val = $nc(this->cache)->read(this->streamPos);
	if (val != -1) {
		++this->streamPos;
	}
	return val;
}

int32_t MemoryCacheImageOutputStream::read($bytes* b, int32_t off, int32_t len) {
	checkClosed();
	if (b == nullptr) {
		$throwNew($NullPointerException, "b == null!"_s);
	}
	if (off < 0 || len < 0 || off + len > $nc(b)->length || off + len < 0) {
		$throwNew($IndexOutOfBoundsException, "off < 0 || len < 0 || off+len > b.length || off+len < 0!"_s);
	}
	this->bitOffset = 0;
	if (len == 0) {
		return 0;
	}
	int64_t bytesLeftInCache = $nc(this->cache)->getLength() - this->streamPos;
	if (bytesLeftInCache <= 0) {
		return -1;
	}
	len = (int32_t)$Math::min(bytesLeftInCache, (int64_t)len);
	$nc(this->cache)->read(b, off, len, this->streamPos);
	this->streamPos += len;
	return len;
}

void MemoryCacheImageOutputStream::write(int32_t b) {
	flushBits();
	$nc(this->cache)->write(b, this->streamPos);
	++this->streamPos;
}

void MemoryCacheImageOutputStream::write($bytes* b, int32_t off, int32_t len) {
	flushBits();
	$nc(this->cache)->write(b, off, len, this->streamPos);
	this->streamPos += len;
}

int64_t MemoryCacheImageOutputStream::length() {
	try {
		checkClosed();
		return $nc(this->cache)->getLength();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return -1;
	}
	$shouldNotReachHere();
}

bool MemoryCacheImageOutputStream::isCached() {
	return true;
}

bool MemoryCacheImageOutputStream::isCachedFile() {
	return false;
}

bool MemoryCacheImageOutputStream::isCachedMemory() {
	return true;
}

void MemoryCacheImageOutputStream::close() {
	int64_t length = $nc(this->cache)->getLength();
	seek(length);
	flushBefore(length);
	$ImageOutputStreamImpl::close();
	$nc(this->cache)->reset();
	$set(this, cache, nullptr);
	$set(this, stream, nullptr);
}

void MemoryCacheImageOutputStream::flushBefore(int64_t pos) {
	int64_t oFlushedPos = this->flushedPos;
	$ImageOutputStreamImpl::flushBefore(pos);
	int64_t flushBytes = this->flushedPos - oFlushedPos;
	$nc(this->cache)->writeToStream(this->stream, oFlushedPos, flushBytes);
	$nc(this->cache)->disposeBefore(this->flushedPos);
	$nc(this->stream)->flush();
}

MemoryCacheImageOutputStream::MemoryCacheImageOutputStream() {
}

$Class* MemoryCacheImageOutputStream::load$($String* name, bool initialize) {
	$loadClass(MemoryCacheImageOutputStream, name, initialize, &_MemoryCacheImageOutputStream_ClassInfo_, allocate$MemoryCacheImageOutputStream);
	return class$;
}

$Class* MemoryCacheImageOutputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax