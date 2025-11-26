#include <javax/imageio/stream/MemoryCacheImageInputStream.h>

#include <com/sun/imageio/stream/StreamFinalizer.h>
#include <java/io/InputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCache.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream$StreamDisposerRecord.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $StreamFinalizer = ::com::sun::imageio::stream::StreamFinalizer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCache = ::javax::imageio::stream::MemoryCache;
using $MemoryCacheImageInputStream$StreamDisposerRecord = ::javax::imageio::stream::MemoryCacheImageInputStream$StreamDisposerRecord;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace javax {
	namespace imageio {
		namespace stream {

$NamedAttribute MemoryCacheImageInputStream_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MemoryCacheImageInputStream_MethodAnnotations_finalize2[] = {
	{"Ljava/lang/Deprecated;", MemoryCacheImageInputStream_Attribute_var$0},
	{}
};

$FieldInfo _MemoryCacheImageInputStream_FieldInfo_[] = {
	{"stream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(MemoryCacheImageInputStream, stream)},
	{"cache", "Ljavax/imageio/stream/MemoryCache;", nullptr, $PRIVATE, $field(MemoryCacheImageInputStream, cache)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MemoryCacheImageInputStream, disposerReferent)},
	{"disposerRecord", "Lsun/java2d/DisposerRecord;", nullptr, $PRIVATE | $FINAL, $field(MemoryCacheImageInputStream, disposerRecord)},
	{}
};

$MethodInfo _MemoryCacheImageInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryCacheImageInputStream::*)($InputStream*)>(&MemoryCacheImageInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, "java.lang.Throwable", nullptr, _MemoryCacheImageInputStream_MethodAnnotations_finalize2},
	{"flushBefore", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isCached", "()Z", nullptr, $PUBLIC},
	{"isCachedFile", "()Z", nullptr, $PUBLIC},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MemoryCacheImageInputStream_InnerClassesInfo_[] = {
	{"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord", "javax.imageio.stream.MemoryCacheImageInputStream", "StreamDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MemoryCacheImageInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.MemoryCacheImageInputStream",
	"javax.imageio.stream.ImageInputStreamImpl",
	nullptr,
	_MemoryCacheImageInputStream_FieldInfo_,
	_MemoryCacheImageInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_MemoryCacheImageInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord"
};

$Object* allocate$MemoryCacheImageInputStream($Class* clazz) {
	return $of($alloc(MemoryCacheImageInputStream));
}

void MemoryCacheImageInputStream::init$($InputStream* stream) {
	$ImageInputStreamImpl::init$();
	$set(this, cache, $new($MemoryCache));
	if (stream == nullptr) {
		$throwNew($IllegalArgumentException, "stream == null!"_s);
	}
	$set(this, stream, stream);
	$set(this, disposerRecord, $new($MemoryCacheImageInputStream$StreamDisposerRecord, this->cache));
	if ($of(this)->getClass() == MemoryCacheImageInputStream::class$) {
		$set(this, disposerReferent, $new($Object));
		$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
	} else {
		$set(this, disposerReferent, $new($StreamFinalizer, this));
	}
}

int32_t MemoryCacheImageInputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int64_t pos = $nc(this->cache)->loadFromStream(this->stream, this->streamPos + 1);
	if (pos >= this->streamPos + 1) {
		return $nc(this->cache)->read(this->streamPos++);
	} else {
		return -1;
	}
}

int32_t MemoryCacheImageInputStream::read($bytes* b, int32_t off, int32_t len) {
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
	int64_t pos = $nc(this->cache)->loadFromStream(this->stream, this->streamPos + len);
	len = (int32_t)(pos - this->streamPos);
	if (len > 0) {
		$nc(this->cache)->read(b, off, len, this->streamPos);
		this->streamPos += len;
		return len;
	} else {
		return -1;
	}
}

void MemoryCacheImageInputStream::flushBefore(int64_t pos) {
	$ImageInputStreamImpl::flushBefore(pos);
	$nc(this->cache)->disposeBefore(pos);
}

bool MemoryCacheImageInputStream::isCached() {
	return true;
}

bool MemoryCacheImageInputStream::isCachedFile() {
	return false;
}

bool MemoryCacheImageInputStream::isCachedMemory() {
	return true;
}

void MemoryCacheImageInputStream::close() {
	$ImageInputStreamImpl::close();
	$nc(this->disposerRecord)->dispose();
	$set(this, stream, nullptr);
	$set(this, cache, nullptr);
}

void MemoryCacheImageInputStream::finalize() {
}

MemoryCacheImageInputStream::MemoryCacheImageInputStream() {
}

$Class* MemoryCacheImageInputStream::load$($String* name, bool initialize) {
	$loadClass(MemoryCacheImageInputStream, name, initialize, &_MemoryCacheImageInputStream_ClassInfo_, allocate$MemoryCacheImageInputStream);
	return class$;
}

$Class* MemoryCacheImageInputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax