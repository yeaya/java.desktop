#include <javax/imageio/stream/MemoryCache.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

#undef BUFFER_LENGTH
#undef MAX_VALUE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $ArrayList = ::java::util::ArrayList;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _MemoryCache_FieldInfo_[] = {
	{"BUFFER_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MemoryCache, BUFFER_LENGTH)},
	{"cache", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[B>;", $PRIVATE, $field(MemoryCache, cache)},
	{"cacheStart", "J", nullptr, $PRIVATE, $field(MemoryCache, cacheStart)},
	{"length", "J", nullptr, $PRIVATE, $field(MemoryCache, length)},
	{}
};

$MethodInfo _MemoryCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MemoryCache::*)()>(&MemoryCache::init$))},
	{"disposeBefore", "(J)V", nullptr, $PUBLIC},
	{"getCacheBlock", "(J)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(MemoryCache::*)(int64_t)>(&MemoryCache::getCacheBlock)), "java.io.IOException"},
	{"getLength", "()J", nullptr, $PUBLIC},
	{"loadFromStream", "(Ljava/io/InputStream;J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"pad", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryCache::*)(int64_t)>(&MemoryCache::pad)), "java.io.IOException"},
	{"read", "(J)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BIIJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"write", "([BIIJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(IJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeToStream", "(Ljava/io/OutputStream;JJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MemoryCache_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.stream.MemoryCache",
	"java.lang.Object",
	nullptr,
	_MemoryCache_FieldInfo_,
	_MemoryCache_MethodInfo_
};

$Object* allocate$MemoryCache($Class* clazz) {
	return $of($alloc(MemoryCache));
}

void MemoryCache::init$() {
	$set(this, cache, $new($ArrayList));
	this->cacheStart = 0;
	this->length = 0;
}

$bytes* MemoryCache::getCacheBlock(int64_t blockNum) {
	int64_t blockOffset = blockNum - this->cacheStart;
	if (blockOffset > $Integer::MAX_VALUE) {
		$throwNew($IOException, "Cache addressing limit exceeded!"_s);
	}
	return $cast($bytes, $nc(this->cache)->get((int32_t)blockOffset));
}

int64_t MemoryCache::loadFromStream($InputStream* stream, int64_t pos) {
	if (pos < this->length) {
		return pos;
	}
	int32_t offset = (int32_t)($mod(this->length, MemoryCache::BUFFER_LENGTH));
	$var($bytes, buf, nullptr);
	int64_t len = pos - this->length;
	if (offset != 0) {
		$assign(buf, getCacheBlock($div(this->length, MemoryCache::BUFFER_LENGTH)));
	}
	while (len > 0) {
		if (buf == nullptr) {
			try {
				$assign(buf, $new($bytes, MemoryCache::BUFFER_LENGTH));
			} catch ($OutOfMemoryError& e) {
				$throwNew($IOException, "No memory left for cache!"_s);
			}
			offset = 0;
		}
		int32_t left = MemoryCache::BUFFER_LENGTH - offset;
		int32_t nbytes = (int32_t)$Math::min(len, (int64_t)left);
		nbytes = $nc(stream)->read(buf, offset, nbytes);
		if (nbytes == -1) {
			return this->length;
		}
		if (offset == 0) {
			$nc(this->cache)->add(buf);
		}
		len -= nbytes;
		this->length += nbytes;
		offset += nbytes;
		if (offset >= MemoryCache::BUFFER_LENGTH) {
			$assign(buf, nullptr);
		}
	}
	return pos;
}

void MemoryCache::writeToStream($OutputStream* stream, int64_t pos, int64_t len) {
	if (pos + len > this->length) {
		$throwNew($IndexOutOfBoundsException, "Argument out of cache"_s);
	}
	if ((pos < 0) || (len < 0)) {
		$throwNew($IndexOutOfBoundsException, "Negative pos or len"_s);
	}
	if (len == 0) {
		return;
	}
	int64_t bufIndex = $div(pos, MemoryCache::BUFFER_LENGTH);
	if (bufIndex < this->cacheStart) {
		$throwNew($IndexOutOfBoundsException, "pos already disposed"_s);
	}
	int32_t offset = (int32_t)($mod(pos, MemoryCache::BUFFER_LENGTH));
	$var($bytes, buf, getCacheBlock(bufIndex++));
	while (len > 0) {
		if (buf == nullptr) {
			$assign(buf, getCacheBlock(bufIndex++));
			offset = 0;
		}
		int32_t nbytes = (int32_t)$Math::min(len, (int64_t)(MemoryCache::BUFFER_LENGTH - offset));
		$nc(stream)->write(buf, offset, nbytes);
		$assign(buf, nullptr);
		len -= nbytes;
	}
}

void MemoryCache::pad(int64_t pos) {
	$useLocalCurrentObjectStackCache();
	int64_t currIndex = this->cacheStart + $nc(this->cache)->size() - 1;
	int64_t lastIndex = $div(pos, MemoryCache::BUFFER_LENGTH);
	int64_t numNewBuffers = lastIndex - currIndex;
	for (int64_t i = 0; i < numNewBuffers; ++i) {
		try {
			$nc(this->cache)->add($$new($bytes, MemoryCache::BUFFER_LENGTH));
		} catch ($OutOfMemoryError& e) {
			$throwNew($IOException, "No memory left for cache!"_s);
		}
	}
}

void MemoryCache::write($bytes* b, int32_t off, int32_t len, int64_t pos) {
	$useLocalCurrentObjectStackCache();
	if (b == nullptr) {
		$throwNew($NullPointerException, "b == null!"_s);
	}
	if ((off < 0) || (len < 0) || (pos < 0) || (off + len > $nc(b)->length) || (off + len < 0)) {
		$throwNew($IndexOutOfBoundsException);
	}
	int64_t lastPos = pos + len - 1;
	if (lastPos >= this->length) {
		pad(lastPos);
		this->length = lastPos + 1;
	}
	int32_t offset = (int32_t)($mod(pos, MemoryCache::BUFFER_LENGTH));
	while (len > 0) {
		$var($bytes, buf, getCacheBlock($div(pos, MemoryCache::BUFFER_LENGTH)));
		int32_t nbytes = $Math::min(len, MemoryCache::BUFFER_LENGTH - offset);
		$System::arraycopy(b, off, buf, offset, nbytes);
		pos += nbytes;
		off += nbytes;
		len -= nbytes;
		offset = 0;
	}
}

void MemoryCache::write(int32_t b, int64_t pos) {
	if (pos < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, "pos < 0"_s);
	}
	if (pos >= this->length) {
		pad(pos);
		this->length = pos + 1;
	}
	$var($bytes, buf, getCacheBlock($div(pos, MemoryCache::BUFFER_LENGTH)));
	int32_t offset = (int32_t)($mod(pos, MemoryCache::BUFFER_LENGTH));
	$nc(buf)->set(offset, (int8_t)b);
}

int64_t MemoryCache::getLength() {
	return this->length;
}

int32_t MemoryCache::read(int64_t pos) {
	if (pos >= this->length) {
		return -1;
	}
	$var($bytes, buf, getCacheBlock($div(pos, MemoryCache::BUFFER_LENGTH)));
	if (buf == nullptr) {
		return -1;
	}
	return (int32_t)($nc(buf)->get((int32_t)($mod(pos, MemoryCache::BUFFER_LENGTH))) & (uint32_t)255);
}

void MemoryCache::read($bytes* b, int32_t off, int32_t len, int64_t pos) {
	$useLocalCurrentObjectStackCache();
	if (b == nullptr) {
		$throwNew($NullPointerException, "b == null!"_s);
	}
	if ((off < 0) || (len < 0) || (pos < 0) || (off + len > $nc(b)->length) || (off + len < 0)) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (pos + len > this->length) {
		$throwNew($IndexOutOfBoundsException);
	}
	int64_t index = $div(pos, MemoryCache::BUFFER_LENGTH);
	int32_t offset = (int32_t)($mod(pos, MemoryCache::BUFFER_LENGTH));
	while (len > 0) {
		int32_t nbytes = $Math::min(len, MemoryCache::BUFFER_LENGTH - offset);
		$var($bytes, buf, getCacheBlock(index++));
		$System::arraycopy(buf, offset, b, off, nbytes);
		len -= nbytes;
		off += nbytes;
		offset = 0;
	}
}

void MemoryCache::disposeBefore(int64_t pos) {
	int64_t index = $div(pos, MemoryCache::BUFFER_LENGTH);
	if (index < this->cacheStart) {
		$throwNew($IndexOutOfBoundsException, "pos already disposed"_s);
	}
	int64_t numBlocks = $Math::min(index - this->cacheStart, (int64_t)$nc(this->cache)->size());
	for (int64_t i = 0; i < numBlocks; ++i) {
		$nc(this->cache)->remove(0);
	}
	this->cacheStart = index;
}

void MemoryCache::reset() {
	$nc(this->cache)->clear();
	this->cacheStart = 0;
	this->length = 0;
}

MemoryCache::MemoryCache() {
}

$Class* MemoryCache::load$($String* name, bool initialize) {
	$loadClass(MemoryCache, name, initialize, &_MemoryCache_ClassInfo_, allocate$MemoryCache);
	return class$;
}

$Class* MemoryCache::class$ = nullptr;

		} // stream
	} // imageio
} // javax