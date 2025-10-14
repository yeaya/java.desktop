#include <com/sun/imageio/plugins/png/ChunkStream.h>

#include <com/sun/imageio/plugins/png/CRC.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <jcpp.h>

using $CRC = ::com::sun::imageio::plugins::png::CRC;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _ChunkStream_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, stream)},
	{"startPos", "J", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, startPos)},
	{"crc", "Lcom/sun/imageio/plugins/png/CRC;", nullptr, $PRIVATE | $FINAL, $field(ChunkStream, crc)},
	{}
};

$MethodInfo _ChunkStream_MethodInfo_[] = {
	{"<init>", "(ILjavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $method(static_cast<void(ChunkStream::*)(int32_t,$ImageOutputStream*)>(&ChunkStream::init$)), "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"finish", "()V", nullptr, 0, $method(static_cast<void(ChunkStream::*)()>(&ChunkStream::finish)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ChunkStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.png.ChunkStream",
	"javax.imageio.stream.ImageOutputStreamImpl",
	nullptr,
	_ChunkStream_FieldInfo_,
	_ChunkStream_MethodInfo_
};

$Object* allocate$ChunkStream($Class* clazz) {
	return $of($alloc(ChunkStream));
}

void ChunkStream::init$(int32_t type, $ImageOutputStream* stream) {
	$ImageOutputStreamImpl::init$();
	$set(this, crc, $new($CRC));
	$set(this, stream, stream);
	this->startPos = $nc(stream)->getStreamPosition();
	stream->writeInt(-1);
	writeInt(type);
}

int32_t ChunkStream::read() {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

int32_t ChunkStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($RuntimeException, "Method not available"_s);
	$shouldNotReachHere();
}

void ChunkStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->crc)->update(b, off, len);
	$nc(this->stream)->write(b, off, len);
}

void ChunkStream::write(int32_t b) {
	$nc(this->crc)->update(b);
	$nc(this->stream)->write(b);
}

void ChunkStream::finish() {
	$nc(this->stream)->writeInt($nc(this->crc)->getValue());
	int64_t pos = $nc(this->stream)->getStreamPosition();
	$nc(this->stream)->seek(this->startPos);
	$nc(this->stream)->writeInt((int32_t)(pos - this->startPos) - 12);
	$nc(this->stream)->seek(pos);
	$nc(this->stream)->flushBefore(pos);
}

void ChunkStream::finalize() {
}

ChunkStream::ChunkStream() {
}

$Class* ChunkStream::load$($String* name, bool initialize) {
	$loadClass(ChunkStream, name, initialize, &_ChunkStream_ClassInfo_, allocate$ChunkStream);
	return class$;
}

$Class* ChunkStream::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com