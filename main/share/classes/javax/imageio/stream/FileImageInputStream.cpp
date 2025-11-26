#include <javax/imageio/stream/FileImageInputStream.h>

#include <com/sun/imageio/stream/CloseableDisposerRecord.h>
#include <com/sun/imageio/stream/StreamFinalizer.h>
#include <java/io/Closeable.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $CloseableDisposerRecord = ::com::sun::imageio::stream::CloseableDisposerRecord;
using $StreamFinalizer = ::com::sun::imageio::stream::StreamFinalizer;
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace javax {
	namespace imageio {
		namespace stream {

$NamedAttribute FileImageInputStream_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _FileImageInputStream_MethodAnnotations_finalize3[] = {
	{"Ljava/lang/Deprecated;", FileImageInputStream_Attribute_var$0},
	{}
};

$FieldInfo _FileImageInputStream_FieldInfo_[] = {
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, $PRIVATE, $field(FileImageInputStream, raf)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FileImageInputStream, disposerReferent)},
	{"disposerRecord", "Lcom/sun/imageio/stream/CloseableDisposerRecord;", nullptr, $PRIVATE | $FINAL, $field(FileImageInputStream, disposerRecord)},
	{}
};

$MethodInfo _FileImageInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileImageInputStream::*)($File*)>(&FileImageInputStream::init$)), "java.io.FileNotFoundException,java.io.IOException"},
	{"<init>", "(Ljava/io/RandomAccessFile;)V", nullptr, $PUBLIC, $method(static_cast<void(FileImageInputStream::*)($RandomAccessFile*)>(&FileImageInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, "java.lang.Throwable", nullptr, _FileImageInputStream_MethodAnnotations_finalize3},
	{"length", "()J", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FileImageInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.FileImageInputStream",
	"javax.imageio.stream.ImageInputStreamImpl",
	nullptr,
	_FileImageInputStream_FieldInfo_,
	_FileImageInputStream_MethodInfo_
};

$Object* allocate$FileImageInputStream($Class* clazz) {
	return $of($alloc(FileImageInputStream));
}

void FileImageInputStream::init$($File* f) {
	FileImageInputStream::init$(f == nullptr ? ($RandomAccessFile*)nullptr : $$new($RandomAccessFile, f, "r"_s));
}

void FileImageInputStream::init$($RandomAccessFile* raf) {
	$ImageInputStreamImpl::init$();
	if (raf == nullptr) {
		$throwNew($IllegalArgumentException, "raf == null!"_s);
	}
	$set(this, raf, raf);
	$set(this, disposerRecord, $new($CloseableDisposerRecord, raf));
	if ($of(this)->getClass() == FileImageInputStream::class$) {
		$set(this, disposerReferent, $new($Object));
		$Disposer::addRecord(this->disposerReferent, this->disposerRecord);
	} else {
		$set(this, disposerReferent, $new($StreamFinalizer, this));
	}
}

int32_t FileImageInputStream::read() {
	checkClosed();
	this->bitOffset = 0;
	int32_t val = $nc(this->raf)->read();
	if (val != -1) {
		++this->streamPos;
	}
	return val;
}

int32_t FileImageInputStream::read($bytes* b, int32_t off, int32_t len) {
	checkClosed();
	this->bitOffset = 0;
	int32_t nbytes = $nc(this->raf)->read(b, off, len);
	if (nbytes != -1) {
		this->streamPos += nbytes;
	}
	return nbytes;
}

int64_t FileImageInputStream::length() {
	try {
		checkClosed();
		return $nc(this->raf)->length();
	} catch ($IOException& e) {
		return -1;
	}
	$shouldNotReachHere();
}

void FileImageInputStream::seek(int64_t pos) {
	checkClosed();
	if (pos < this->flushedPos) {
		$throwNew($IndexOutOfBoundsException, "pos < flushedPos!"_s);
	}
	this->bitOffset = 0;
	$nc(this->raf)->seek(pos);
	this->streamPos = $nc(this->raf)->getFilePointer();
}

void FileImageInputStream::close() {
	$ImageInputStreamImpl::close();
	$nc(this->disposerRecord)->dispose();
	$set(this, raf, nullptr);
}

void FileImageInputStream::finalize() {
}

FileImageInputStream::FileImageInputStream() {
}

$Class* FileImageInputStream::load$($String* name, bool initialize) {
	$loadClass(FileImageInputStream, name, initialize, &_FileImageInputStream_ClassInfo_, allocate$FileImageInputStream);
	return class$;
}

$Class* FileImageInputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax