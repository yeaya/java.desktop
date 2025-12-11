#include <javax/imageio/stream/FileCacheImageOutputStream.h>

#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <com/sun/imageio/stream/StreamCloser.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $StreamCloser = ::com::sun::imageio::stream::StreamCloser;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _FileCacheImageOutputStream_FieldInfo_[] = {
	{"stream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(FileCacheImageOutputStream, stream)},
	{"cacheFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(FileCacheImageOutputStream, cacheFile)},
	{"cache", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(FileCacheImageOutputStream, cache)},
	{"maxStreamPos", "J", nullptr, $PRIVATE, $field(FileCacheImageOutputStream, maxStreamPos)},
	{"closeAction", "Lcom/sun/imageio/stream/StreamCloser$CloseAction;", nullptr, $PRIVATE | $FINAL, $field(FileCacheImageOutputStream, closeAction)},
	{}
};

$MethodInfo _FileCacheImageOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileCacheImageOutputStream::*)($OutputStream*,$File*)>(&FileCacheImageOutputStream::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flushBefore", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isCached", "()Z", nullptr, $PUBLIC},
	{"isCachedFile", "()Z", nullptr, $PUBLIC},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"length", "()J", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileCacheImageOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.FileCacheImageOutputStream",
	"javax.imageio.stream.ImageOutputStreamImpl",
	nullptr,
	_FileCacheImageOutputStream_FieldInfo_,
	_FileCacheImageOutputStream_MethodInfo_
};

$Object* allocate$FileCacheImageOutputStream($Class* clazz) {
	return $of($alloc(FileCacheImageOutputStream));
}

void FileCacheImageOutputStream::init$($OutputStream* stream, $File* cacheDir) {
	$useLocalCurrentObjectStackCache();
	$ImageOutputStreamImpl::init$();
	this->maxStreamPos = 0;
	if (stream == nullptr) {
		$throwNew($IllegalArgumentException, "stream == null!"_s);
	}
	if ((cacheDir != nullptr) && !(cacheDir->isDirectory())) {
		$throwNew($IllegalArgumentException, "Not a directory!"_s);
	}
	$set(this, stream, stream);
	if (cacheDir == nullptr) {
		$set(this, cacheFile, $nc($($Files::createTempFile("imageio"_s, ".tmp"_s, $$new($FileAttributeArray, 0))))->toFile());
	} else {
		$set(this, cacheFile, $nc($($Files::createTempFile($($nc(cacheDir)->toPath()), "imageio"_s, ".tmp"_s, $$new($FileAttributeArray, 0))))->toFile());
	}
	$set(this, cache, $new($RandomAccessFile, this->cacheFile, "rw"_s));
	$set(this, closeAction, $StreamCloser::createCloseAction(static_cast<$ImageInputStream*>(static_cast<$ImageInputStreamImpl*>(static_cast<$ImageOutputStreamImpl*>(this)))));
	$StreamCloser::addToQueue(this->closeAction);
}

int32_t FileCacheImageOutputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int32_t val = $nc(this->cache)->read();
	if (val != -1) {
		++this->streamPos;
	}
	return val;
}

int32_t FileCacheImageOutputStream::read($bytes* b, int32_t off, int32_t len) {
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
	int32_t nbytes = $nc(this->cache)->read(b, off, len);
	if (nbytes != -1) {
		this->streamPos += nbytes;
	}
	return nbytes;
}

void FileCacheImageOutputStream::write(int32_t b) {
	flushBits();
	$nc(this->cache)->write(b);
	++this->streamPos;
	this->maxStreamPos = $Math::max(this->maxStreamPos, this->streamPos);
}

void FileCacheImageOutputStream::write($bytes* b, int32_t off, int32_t len) {
	flushBits();
	$nc(this->cache)->write(b, off, len);
	this->streamPos += len;
	this->maxStreamPos = $Math::max(this->maxStreamPos, this->streamPos);
}

int64_t FileCacheImageOutputStream::length() {
	try {
		checkClosed();
		return $nc(this->cache)->length();
	} catch ($IOException& e) {
		return -1;
	}
	$shouldNotReachHere();
}

void FileCacheImageOutputStream::seek(int64_t pos) {
	checkClosed();
	if (pos < this->flushedPos) {
		$throwNew($IndexOutOfBoundsException);
	}
	$nc(this->cache)->seek(pos);
	this->streamPos = $nc(this->cache)->getFilePointer();
	this->maxStreamPos = $Math::max(this->maxStreamPos, this->streamPos);
	this->bitOffset = 0;
}

bool FileCacheImageOutputStream::isCached() {
	return true;
}

bool FileCacheImageOutputStream::isCachedFile() {
	return true;
}

bool FileCacheImageOutputStream::isCachedMemory() {
	return false;
}

void FileCacheImageOutputStream::close() {
	this->maxStreamPos = $nc(this->cache)->length();
	seek(this->maxStreamPos);
	flushBefore(this->maxStreamPos);
	$ImageOutputStreamImpl::close();
	$nc(this->cache)->close();
	$set(this, cache, nullptr);
	$nc(this->cacheFile)->delete$();
	$set(this, cacheFile, nullptr);
	$nc(this->stream)->flush();
	$set(this, stream, nullptr);
	$StreamCloser::removeFromQueue(this->closeAction);
}

void FileCacheImageOutputStream::flushBefore(int64_t pos) {
	int64_t oFlushedPos = this->flushedPos;
	$ImageOutputStreamImpl::flushBefore(pos);
	int64_t flushBytes = this->flushedPos - oFlushedPos;
	if (flushBytes > 0) {
		int32_t bufLen = 512;
		$var($bytes, buf, $new($bytes, bufLen));
		$nc(this->cache)->seek(oFlushedPos);
		while (flushBytes > 0) {
			int32_t len = (int32_t)$Math::min(flushBytes, (int64_t)bufLen);
			$nc(this->cache)->readFully(buf, 0, len);
			$nc(this->stream)->write(buf, 0, len);
			flushBytes -= len;
		}
		$nc(this->stream)->flush();
	}
}

FileCacheImageOutputStream::FileCacheImageOutputStream() {
}

$Class* FileCacheImageOutputStream::load$($String* name, bool initialize) {
	$loadClass(FileCacheImageOutputStream, name, initialize, &_FileCacheImageOutputStream_ClassInfo_, allocate$FileCacheImageOutputStream);
	return class$;
}

$Class* FileCacheImageOutputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax