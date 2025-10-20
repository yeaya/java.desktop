#include <javax/imageio/stream/FileCacheImageInputStream.h>

#include <com/sun/imageio/stream/StreamCloser$CloseAction.h>
#include <com/sun/imageio/stream/StreamCloser.h>
#include <com/sun/imageio/stream/StreamFinalizer.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/imageio/stream/FileCacheImageInputStream$StreamDisposerRecord.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

#undef BUFFER_LENGTH

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $StreamCloser = ::com::sun::imageio::stream::StreamCloser;
using $StreamCloser$CloseAction = ::com::sun::imageio::stream::StreamCloser$CloseAction;
using $StreamFinalizer = ::com::sun::imageio::stream::StreamFinalizer;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $FileCacheImageInputStream$StreamDisposerRecord = ::javax::imageio::stream::FileCacheImageInputStream$StreamDisposerRecord;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace javax {
	namespace imageio {
		namespace stream {

$NamedAttribute FileCacheImageInputStream_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _FileCacheImageInputStream_MethodAnnotations_finalize2[] = {
	{"Ljava/lang/Deprecated;", FileCacheImageInputStream_Attribute_var$0},
	{}
};

$FieldInfo _FileCacheImageInputStream_FieldInfo_[] = {
	{"stream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(FileCacheImageInputStream, stream)},
	{"cacheFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(FileCacheImageInputStream, cacheFile)},
	{"cache", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(FileCacheImageInputStream, cache)},
	{"BUFFER_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileCacheImageInputStream, BUFFER_LENGTH)},
	{"buf", "[B", nullptr, $PRIVATE, $field(FileCacheImageInputStream, buf)},
	{"length", "J", nullptr, $PRIVATE, $field(FileCacheImageInputStream, length$)},
	{"foundEOF", "Z", nullptr, $PRIVATE, $field(FileCacheImageInputStream, foundEOF)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FileCacheImageInputStream, disposerReferent)},
	{"disposerRecord", "Lsun/java2d/DisposerRecord;", nullptr, $PRIVATE | $FINAL, $field(FileCacheImageInputStream, disposerRecord)},
	{"closeAction", "Lcom/sun/imageio/stream/StreamCloser$CloseAction;", nullptr, $PRIVATE | $FINAL, $field(FileCacheImageInputStream, closeAction)},
	{}
};

$MethodInfo _FileCacheImageInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileCacheImageInputStream::*)($InputStream*,$File*)>(&FileCacheImageInputStream::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, "java.lang.Throwable", nullptr, _FileCacheImageInputStream_MethodAnnotations_finalize2},
	{"isCached", "()Z", nullptr, $PUBLIC},
	{"isCachedFile", "()Z", nullptr, $PUBLIC},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUntil", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileCacheImageInputStream::*)(int64_t)>(&FileCacheImageInputStream::readUntil)), "java.io.IOException"},
	{}
};

$InnerClassInfo _FileCacheImageInputStream_InnerClassesInfo_[] = {
	{"javax.imageio.stream.FileCacheImageInputStream$StreamDisposerRecord", "javax.imageio.stream.FileCacheImageInputStream", "StreamDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileCacheImageInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.FileCacheImageInputStream",
	"javax.imageio.stream.ImageInputStreamImpl",
	nullptr,
	_FileCacheImageInputStream_FieldInfo_,
	_FileCacheImageInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FileCacheImageInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.stream.FileCacheImageInputStream$StreamDisposerRecord"
};

$Object* allocate$FileCacheImageInputStream($Class* clazz) {
	return $of($alloc(FileCacheImageInputStream));
}

void FileCacheImageInputStream::init$($InputStream* stream, $File* cacheDir) {
	$useLocalCurrentObjectStackCache();
	$ImageInputStreamImpl::init$();
	$set(this, buf, $new($bytes, FileCacheImageInputStream::BUFFER_LENGTH));
	this->length$ = 0;
	this->foundEOF = false;
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
	$set(this, closeAction, $StreamCloser::createCloseAction(this));
	$StreamCloser::addToQueue(this->closeAction);
	$set(this, disposerRecord, $new($FileCacheImageInputStream$StreamDisposerRecord, this->cacheFile, this->cache));
	if ($of(this)->getClass() == FileCacheImageInputStream::class$) {
		$set(this, disposerReferent, $new($Object));
		$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
	} else {
		$set(this, disposerReferent, $new($StreamFinalizer, this));
	}
}

int64_t FileCacheImageInputStream::readUntil(int64_t pos) {
	if (pos < this->length$) {
		return pos;
	}
	if (this->foundEOF) {
		return this->length$;
	}
	int64_t len = pos - this->length$;
	$nc(this->cache)->seek(this->length$);
	while (len > 0) {
		int32_t nbytes = $nc(this->stream)->read(this->buf, 0, (int32_t)$Math::min(len, (int64_t)FileCacheImageInputStream::BUFFER_LENGTH));
		if (nbytes == -1) {
			this->foundEOF = true;
			return this->length$;
		}
		$nc(this->cache)->write(this->buf, 0, nbytes);
		len -= nbytes;
		this->length$ += nbytes;
	}
	return pos;
}

int32_t FileCacheImageInputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int64_t next = this->streamPos + 1;
	int64_t pos = readUntil(next);
	if (pos >= next) {
		$nc(this->cache)->seek(this->streamPos++);
		return $nc(this->cache)->read();
	} else {
		return -1;
	}
}

int32_t FileCacheImageInputStream::read($bytes* b, int32_t off, int32_t len) {
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
	int64_t pos = readUntil(this->streamPos + len);
	len = (int32_t)$Math::min((int64_t)len, pos - this->streamPos);
	if (len > 0) {
		$nc(this->cache)->seek(this->streamPos);
		$nc(this->cache)->readFully(b, off, len);
		this->streamPos += len;
		return len;
	} else {
		return -1;
	}
}

bool FileCacheImageInputStream::isCached() {
	return true;
}

bool FileCacheImageInputStream::isCachedFile() {
	return true;
}

bool FileCacheImageInputStream::isCachedMemory() {
	return false;
}

void FileCacheImageInputStream::close() {
	$ImageInputStreamImpl::close();
	$nc(this->disposerRecord)->dispose();
	$set(this, stream, nullptr);
	$set(this, cache, nullptr);
	$set(this, cacheFile, nullptr);
	$StreamCloser::removeFromQueue(this->closeAction);
}

void FileCacheImageInputStream::finalize() {
}

FileCacheImageInputStream::FileCacheImageInputStream() {
}

$Class* FileCacheImageInputStream::load$($String* name, bool initialize) {
	$loadClass(FileCacheImageInputStream, name, initialize, &_FileCacheImageInputStream_ClassInfo_, allocate$FileCacheImageInputStream);
	return class$;
}

$Class* FileCacheImageInputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax