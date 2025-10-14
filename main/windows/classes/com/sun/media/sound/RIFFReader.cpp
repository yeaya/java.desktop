#include <com/sun/media/sound/RIFFReader.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/VirtualMachineError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RIFFReader_FieldInfo_[] = {
	{"root", "Lcom/sun/media/sound/RIFFReader;", nullptr, $PRIVATE | $FINAL, $field(RIFFReader, root)},
	{"filepointer", "J", nullptr, $PRIVATE, $field(RIFFReader, filepointer)},
	{"fourcc", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(RIFFReader, fourcc)},
	{"riff_type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RIFFReader, riff_type)},
	{"ckSize", "J", nullptr, $PRIVATE | $FINAL, $field(RIFFReader, ckSize)},
	{"stream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(RIFFReader, stream)},
	{"avail", "J", nullptr, $PRIVATE, $field(RIFFReader, avail)},
	{"lastiterator", "Lcom/sun/media/sound/RIFFReader;", nullptr, $PRIVATE, $field(RIFFReader, lastiterator)},
	{}
};

$MethodInfo _RIFFReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFReader::*)($InputStream*)>(&RIFFReader::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finish", "()V", nullptr, $PUBLIC, $method(static_cast<void(RIFFReader::*)()>(&RIFFReader::finish)), "java.io.IOException"},
	{"getFilePointer", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(RIFFReader::*)()>(&RIFFReader::getFilePointer)), "java.io.IOException"},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RIFFReader::*)()>(&RIFFReader::getFormat))},
	{"getSize", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(RIFFReader::*)()>(&RIFFReader::getSize))},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RIFFReader::*)()>(&RIFFReader::getType))},
	{"hasNextChunk", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RIFFReader::*)()>(&RIFFReader::hasNextChunk)), "java.io.IOException"},
	{"nextChunk", "()Lcom/sun/media/sound/RIFFReader;", nullptr, $PUBLIC, $method(static_cast<RIFFReader*(RIFFReader::*)()>(&RIFFReader::nextChunk)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC, $method(static_cast<int8_t(RIFFReader::*)()>(&RIFFReader::readByte)), "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFReader::*)($bytes*)>(&RIFFReader::readFully)), "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFReader::*)($bytes*,int32_t,int32_t)>(&RIFFReader::readFully)), "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(RIFFReader::*)()>(&RIFFReader::readInt)), "java.io.IOException"},
	{"readLong", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(RIFFReader::*)()>(&RIFFReader::readLong)), "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC, $method(static_cast<int16_t(RIFFReader::*)()>(&RIFFReader::readShort)), "java.io.IOException"},
	{"readString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(RIFFReader::*)(int32_t)>(&RIFFReader::readString)), "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(RIFFReader::*)()>(&RIFFReader::readUnsignedByte)), "java.io.IOException"},
	{"readUnsignedInt", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(RIFFReader::*)()>(&RIFFReader::readUnsignedInt)), "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(RIFFReader::*)()>(&RIFFReader::readUnsignedShort)), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _RIFFReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.RIFFReader",
	"java.io.InputStream",
	nullptr,
	_RIFFReader_FieldInfo_,
	_RIFFReader_MethodInfo_
};

$Object* allocate$RIFFReader($Class* clazz) {
	return $of($alloc(RIFFReader));
}

void RIFFReader::init$($InputStream* stream) {
	$InputStream::init$();
	this->filepointer = 0;
	$set(this, riff_type, nullptr);
	this->avail = 0x00000000FFFFFFFF;
	$set(this, lastiterator, nullptr);
	if ($instanceOf(RIFFReader, stream)) {
		$set(this, root, $nc(($cast(RIFFReader, stream)))->root);
	} else {
		$set(this, root, this);
	}
	$set(this, stream, stream);
	int32_t b = 0;
	while (true) {
		b = read();
		if (b == -1) {
			$set(this, fourcc, ""_s);
			$set(this, riff_type, nullptr);
			this->ckSize = 0;
			this->avail = 0;
			return;
		}
		if (b != 0) {
			break;
		}
	}
	$var($bytes, fourcc, $new($bytes, 4));
	fourcc->set(0, (int8_t)b);
	readFully(fourcc, 1, 3);
	$set(this, fourcc, $new($String, fourcc, "ascii"_s));
	this->ckSize = readUnsignedInt();
	this->avail = this->ckSize;
	bool var$0 = $nc($(getFormat()))->equals("RIFF"_s);
	if (var$0 || $nc($(getFormat()))->equals("LIST"_s)) {
		$var($bytes, format, $new($bytes, 4));
		readFully(format);
		$set(this, riff_type, $new($String, format, "ascii"_s));
	}
}

int64_t RIFFReader::getFilePointer() {
	return $nc(this->root)->filepointer;
}

bool RIFFReader::hasNextChunk() {
	if (this->lastiterator != nullptr) {
		$nc(this->lastiterator)->finish();
	}
	return this->avail != 0;
}

RIFFReader* RIFFReader::nextChunk() {
	if (this->lastiterator != nullptr) {
		$nc(this->lastiterator)->finish();
	}
	if (this->avail == 0) {
		return nullptr;
	}
	$set(this, lastiterator, $new(RIFFReader, this));
	return this->lastiterator;
}

$String* RIFFReader::getFormat() {
	return this->fourcc;
}

$String* RIFFReader::getType() {
	return this->riff_type;
}

int64_t RIFFReader::getSize() {
	return this->ckSize;
}

int32_t RIFFReader::read() {
	if (this->avail == 0) {
		return -1;
	}
	int32_t b = $nc(this->stream)->read();
	if (b == -1) {
		this->avail = 0;
		return -1;
	}
	--this->avail;
	++this->filepointer;
	return b;
}

int32_t RIFFReader::read($bytes* b, int32_t offset, int32_t len) {
	if (this->avail == 0) {
		return -1;
	}
	if (len > this->avail) {
		int32_t rlen = $nc(this->stream)->read(b, offset, (int32_t)this->avail);
		if (rlen != -1) {
			this->filepointer += rlen;
		}
		this->avail = 0;
		return rlen;
	} else {
		int32_t ret = $nc(this->stream)->read(b, offset, len);
		if (ret == -1) {
			this->avail = 0;
			return -1;
		}
		this->avail -= ret;
		this->filepointer += ret;
		return ret;
	}
}

void RIFFReader::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length);
}

void RIFFReader::readFully($bytes* b, int32_t off, int32_t len) {
	if (len < 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	while (len > 0) {
		int32_t s = read(b, off, len);
		if (s < 0) {
			$throwNew($EOFException);
		}
		if (s == 0) {
			$Thread::yield();
		}
		off += s;
		len -= s;
	}
}

int64_t RIFFReader::skip(int64_t n) {
	if (n <= 0 || this->avail == 0) {
		return 0;
	}
	int64_t remaining = $Math::min(n, this->avail);
	while (remaining > 0) {
		int64_t ret = $Math::min($nc(this->stream)->skip(remaining), remaining);
		if (ret == 0) {
			$Thread::yield();
			if ($nc(this->stream)->read() == -1) {
				this->avail = 0;
				break;
			}
			ret = 1;
		} else if (ret < 0) {
			this->avail = 0;
			break;
		}
		remaining -= ret;
		this->avail -= ret;
		this->filepointer += ret;
	}
	return n - remaining;
}

int32_t RIFFReader::available() {
	return this->avail > $Integer::MAX_VALUE ? $Integer::MAX_VALUE : (int32_t)this->avail;
}

void RIFFReader::finish() {
	if (this->avail != 0) {
		skip(this->avail);
	}
}

$String* RIFFReader::readString(int32_t len) {
	$var($bytes, buff, nullptr);
	try {
		$assign(buff, $new($bytes, len));
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, oom, $catch());
		$throwNew($IOException, "Length too big"_s, oom);
	}
	readFully(buff);
	for (int32_t i = 0; i < $nc(buff)->length; ++i) {
		if (buff->get(i) == 0) {
			return $new($String, buff, 0, i, "ascii"_s);
		}
	}
	return $new($String, buff, "ascii"_s);
}

int8_t RIFFReader::readByte() {
	int32_t ch = read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)ch;
}

int16_t RIFFReader::readShort() {
	int32_t ch1 = read();
	int32_t ch2 = read();
	if (ch1 < 0) {
		$throwNew($EOFException);
	}
	if (ch2 < 0) {
		$throwNew($EOFException);
	}
	return (int16_t)(ch1 | (ch2 << 8));
}

int32_t RIFFReader::readInt() {
	int32_t ch1 = read();
	int32_t ch2 = read();
	int32_t ch3 = read();
	int32_t ch4 = read();
	if (ch1 < 0) {
		$throwNew($EOFException);
	}
	if (ch2 < 0) {
		$throwNew($EOFException);
	}
	if (ch3 < 0) {
		$throwNew($EOFException);
	}
	if (ch4 < 0) {
		$throwNew($EOFException);
	}
	return ((ch1 + (ch2 << 8)) | (ch3 << 16)) | (ch4 << 24);
}

int64_t RIFFReader::readLong() {
	int64_t ch1 = read();
	int64_t ch2 = read();
	int64_t ch3 = read();
	int64_t ch4 = read();
	int64_t ch5 = read();
	int64_t ch6 = read();
	int64_t ch7 = read();
	int64_t ch8 = read();
	if (ch1 < 0) {
		$throwNew($EOFException);
	}
	if (ch2 < 0) {
		$throwNew($EOFException);
	}
	if (ch3 < 0) {
		$throwNew($EOFException);
	}
	if (ch4 < 0) {
		$throwNew($EOFException);
	}
	if (ch5 < 0) {
		$throwNew($EOFException);
	}
	if (ch6 < 0) {
		$throwNew($EOFException);
	}
	if (ch7 < 0) {
		$throwNew($EOFException);
	}
	if (ch8 < 0) {
		$throwNew($EOFException);
	}
	return ((((((ch1 | (ch2 << 8)) | (ch3 << 16)) | (ch4 << 24)) | (ch5 << 32)) | (ch6 << 40)) | (ch7 << 48)) | (ch8 << 56);
}

int32_t RIFFReader::readUnsignedByte() {
	int32_t ch = read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return ch;
}

int32_t RIFFReader::readUnsignedShort() {
	int32_t ch1 = read();
	int32_t ch2 = read();
	if (ch1 < 0) {
		$throwNew($EOFException);
	}
	if (ch2 < 0) {
		$throwNew($EOFException);
	}
	return ch1 | (ch2 << 8);
}

int64_t RIFFReader::readUnsignedInt() {
	int64_t ch1 = read();
	int64_t ch2 = read();
	int64_t ch3 = read();
	int64_t ch4 = read();
	if (ch1 < 0) {
		$throwNew($EOFException);
	}
	if (ch2 < 0) {
		$throwNew($EOFException);
	}
	if (ch3 < 0) {
		$throwNew($EOFException);
	}
	if (ch4 < 0) {
		$throwNew($EOFException);
	}
	return ((ch1 + (ch2 << 8)) | (ch3 << 16)) | (ch4 << 24);
}

void RIFFReader::close() {
	finish();
	$nc(this->stream)->close();
}

RIFFReader::RIFFReader() {
}

$Class* RIFFReader::load$($String* name, bool initialize) {
	$loadClass(RIFFReader, name, initialize, &_RIFFReader_ClassInfo_, allocate$RIFFReader);
	return class$;
}

$Class* RIFFReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com