#include <com/sun/media/sound/RIFFWriter$RandomAccessByteWriter.h>

#include <com/sun/media/sound/RIFFWriter.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $RIFFWriter$RandomAccessWriter = ::com::sun::media::sound::RIFFWriter$RandomAccessWriter;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RIFFWriter$RandomAccessByteWriter_FieldInfo_[] = {
	{"buff", "[B", nullptr, 0, $field(RIFFWriter$RandomAccessByteWriter, buff)},
	{"length", "I", nullptr, 0, $field(RIFFWriter$RandomAccessByteWriter, length$)},
	{"pos", "I", nullptr, 0, $field(RIFFWriter$RandomAccessByteWriter, pos)},
	{"s", "[B", nullptr, 0, $field(RIFFWriter$RandomAccessByteWriter, s)},
	{"stream", "Ljava/io/OutputStream;", nullptr, $FINAL, $field(RIFFWriter$RandomAccessByteWriter, stream)},
	{}
};

$MethodInfo _RIFFWriter$RandomAccessByteWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(RIFFWriter$RandomAccessByteWriter::*)($OutputStream*)>(&RIFFWriter$RandomAccessByteWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPointer", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"length", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setLength", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RIFFWriter$RandomAccessByteWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RIFFWriter$RandomAccessByteWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessByteWriter", $PRIVATE | $STATIC},
	{"com.sun.media.sound.RIFFWriter$RandomAccessWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessWriter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RIFFWriter$RandomAccessByteWriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.RIFFWriter$RandomAccessByteWriter",
	"java.lang.Object",
	"com.sun.media.sound.RIFFWriter$RandomAccessWriter",
	_RIFFWriter$RandomAccessByteWriter_FieldInfo_,
	_RIFFWriter$RandomAccessByteWriter_MethodInfo_,
	nullptr,
	nullptr,
	_RIFFWriter$RandomAccessByteWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RIFFWriter"
};

$Object* allocate$RIFFWriter$RandomAccessByteWriter($Class* clazz) {
	return $of($alloc(RIFFWriter$RandomAccessByteWriter));
}

void RIFFWriter$RandomAccessByteWriter::init$($OutputStream* stream) {
	$set(this, buff, $new($bytes, 32));
	this->length$ = 0;
	this->pos = 0;
	$set(this, stream, stream);
}

void RIFFWriter$RandomAccessByteWriter::seek(int64_t chunksizepointer) {
	this->pos = (int32_t)chunksizepointer;
}

int64_t RIFFWriter$RandomAccessByteWriter::getPointer() {
	return this->pos;
}

void RIFFWriter$RandomAccessByteWriter::close() {
	$nc(this->stream)->write(this->buff, 0, this->length$);
	$nc(this->stream)->close();
}

void RIFFWriter$RandomAccessByteWriter::write(int32_t b) {
	if (this->s == nullptr) {
		$set(this, s, $new($bytes, 1));
	}
	$nc(this->s)->set(0, (int8_t)b);
	write(this->s, 0, 1);
}

void RIFFWriter$RandomAccessByteWriter::write($bytes* b, int32_t off, int32_t len) {
	int32_t newsize = this->pos + len;
	if (newsize > this->length$) {
		setLength(newsize);
	}
	int32_t end = off + len;
	for (int32_t i = off; i < end; ++i) {
		$nc(this->buff)->set(this->pos++, $nc(b)->get(i));
	}
}

void RIFFWriter$RandomAccessByteWriter::write($bytes* bytes) {
	write(bytes, 0, $nc(bytes)->length);
}

int64_t RIFFWriter$RandomAccessByteWriter::length() {
	return this->length$;
}

void RIFFWriter$RandomAccessByteWriter::setLength(int64_t i) {
	this->length$ = (int32_t)i;
	if (this->length$ > $nc(this->buff)->length) {
		int32_t newlen = $Math::max($nc(this->buff)->length << 1, this->length$);
		$var($bytes, newbuff, $new($bytes, newlen));
		$System::arraycopy(this->buff, 0, newbuff, 0, $nc(this->buff)->length);
		$set(this, buff, newbuff);
	}
}

RIFFWriter$RandomAccessByteWriter::RIFFWriter$RandomAccessByteWriter() {
}

$Class* RIFFWriter$RandomAccessByteWriter::load$($String* name, bool initialize) {
	$loadClass(RIFFWriter$RandomAccessByteWriter, name, initialize, &_RIFFWriter$RandomAccessByteWriter_ClassInfo_, allocate$RIFFWriter$RandomAccessByteWriter);
	return class$;
}

$Class* RIFFWriter$RandomAccessByteWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com