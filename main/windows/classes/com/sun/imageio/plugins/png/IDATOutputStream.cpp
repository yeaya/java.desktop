#include <com/sun/imageio/plugins/png/IDATOutputStream.h>

#include <com/sun/imageio/plugins/png/CRC.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/Deflater.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $CRC = ::com::sun::imageio::plugins::png::CRC;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Deflater = ::java::util::zip::Deflater;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _IDATOutputStream_FieldInfo_[] = {
	{"chunkType", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IDATOutputStream, chunkType)},
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, stream)},
	{"chunkLength", "I", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, chunkLength)},
	{"startPos", "J", nullptr, $PRIVATE, $field(IDATOutputStream, startPos)},
	{"crc", "Lcom/sun/imageio/plugins/png/CRC;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, crc)},
	{"def", "Ljava/util/zip/Deflater;", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, def)},
	{"buf", "[B", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, buf)},
	{"wbuf1", "[B", nullptr, $PRIVATE | $FINAL, $field(IDATOutputStream, wbuf1)},
	{"bytesRemaining", "I", nullptr, $PRIVATE, $field(IDATOutputStream, bytesRemaining)},
	{}
};

$MethodInfo _IDATOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/stream/ImageOutputStream;II)V", nullptr, 0, $method(static_cast<void(IDATOutputStream::*)($ImageOutputStream*,int32_t,int32_t)>(&IDATOutputStream::init$)), "java.io.IOException"},
	{"deflate", "()V", nullptr, 0, $method(static_cast<void(IDATOutputStream::*)()>(&IDATOutputStream::deflate)), "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"finish", "()V", nullptr, 0, $method(static_cast<void(IDATOutputStream::*)()>(&IDATOutputStream::finish)), "java.io.IOException"},
	{"finishChunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(IDATOutputStream::*)()>(&IDATOutputStream::finishChunk)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"startChunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(IDATOutputStream::*)()>(&IDATOutputStream::startChunk)), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _IDATOutputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.png.IDATOutputStream",
	"javax.imageio.stream.ImageOutputStreamImpl",
	nullptr,
	_IDATOutputStream_FieldInfo_,
	_IDATOutputStream_MethodInfo_
};

$Object* allocate$IDATOutputStream($Class* clazz) {
	return $of($alloc(IDATOutputStream));
}

$bytes* IDATOutputStream::chunkType = nullptr;

void IDATOutputStream::init$($ImageOutputStream* stream, int32_t chunkLength, int32_t deflaterLevel) {
	$ImageOutputStreamImpl::init$();
	$set(this, crc, $new($CRC));
	$set(this, buf, $new($bytes, 512));
	$set(this, wbuf1, $new($bytes, 1));
	$set(this, stream, stream);
	this->chunkLength = chunkLength;
	$set(this, def, $new($Deflater, deflaterLevel));
	startChunk();
}

void IDATOutputStream::startChunk() {
	$nc(this->crc)->reset();
	this->startPos = $nc(this->stream)->getStreamPosition();
	$nc(this->stream)->writeInt(-1);
	$nc(this->crc)->update(IDATOutputStream::chunkType, 0, 4);
	$nc(this->stream)->write(IDATOutputStream::chunkType, 0, 4);
	this->bytesRemaining = this->chunkLength;
}

void IDATOutputStream::finishChunk() {
	$nc(this->stream)->writeInt($nc(this->crc)->getValue());
	int64_t pos = $nc(this->stream)->getStreamPosition();
	$nc(this->stream)->seek(this->startPos);
	$nc(this->stream)->writeInt((int32_t)(pos - this->startPos) - 12);
	$nc(this->stream)->seek(pos);
	try {
		$nc(this->stream)->flushBefore(pos);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		this->startPos = $nc(this->stream)->getStreamPosition();
		$throw(e);
	}
}

int32_t IDATOutputStream::read() {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

int32_t IDATOutputStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

void IDATOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (len == 0) {
		return;
	}
	if (!$nc(this->def)->finished()) {
		$nc(this->def)->setInput(b, off, len);
		while (!$nc(this->def)->needsInput()) {
			deflate();
		}
	}
}

void IDATOutputStream::deflate() {
	int32_t len = $nc(this->def)->deflate(this->buf, 0, $nc(this->buf)->length);
	int32_t off = 0;
	while (len > 0) {
		if (this->bytesRemaining == 0) {
			finishChunk();
			startChunk();
		}
		int32_t nbytes = $Math::min(len, this->bytesRemaining);
		$nc(this->crc)->update(this->buf, off, nbytes);
		$nc(this->stream)->write(this->buf, off, nbytes);
		off += nbytes;
		len -= nbytes;
		this->bytesRemaining -= nbytes;
	}
}

void IDATOutputStream::write(int32_t b) {
	$nc(this->wbuf1)->set(0, (int8_t)b);
	write(this->wbuf1, 0, 1);
}

void IDATOutputStream::finish() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!$nc(this->def)->finished()) {
				$nc(this->def)->finish();
				while (!$nc(this->def)->finished()) {
					deflate();
				}
			}
			finishChunk();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->def)->end();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void IDATOutputStream::finalize() {
}

void clinit$IDATOutputStream($Class* class$) {
	$assignStatic(IDATOutputStream::chunkType, $new($bytes, {
		(int8_t)u'I',
		(int8_t)u'D',
		(int8_t)u'A',
		(int8_t)u'T'
	}));
}

IDATOutputStream::IDATOutputStream() {
}

$Class* IDATOutputStream::load$($String* name, bool initialize) {
	$loadClass(IDATOutputStream, name, initialize, &_IDATOutputStream_ClassInfo_, clinit$IDATOutputStream, allocate$IDATOutputStream);
	return class$;
}

$Class* IDATOutputStream::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com