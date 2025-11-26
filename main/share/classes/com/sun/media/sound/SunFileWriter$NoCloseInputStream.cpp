#include <com/sun/media/sound/SunFileWriter$NoCloseInputStream.h>

#include <com/sun/media/sound/SunFileWriter.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $SunFileWriter = ::com::sun::media::sound::SunFileWriter;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SunFileWriter$NoCloseInputStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SunFileWriter;", nullptr, $FINAL | $SYNTHETIC, $field(SunFileWriter$NoCloseInputStream, this$0)},
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(SunFileWriter$NoCloseInputStream, in)},
	{}
};

$MethodInfo _SunFileWriter$NoCloseInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SunFileWriter;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(SunFileWriter$NoCloseInputStream::*)($SunFileWriter*,$InputStream*)>(&SunFileWriter$NoCloseInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SunFileWriter$NoCloseInputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SunFileWriter$NoCloseInputStream", "com.sun.media.sound.SunFileWriter", "NoCloseInputStream", $FINAL},
	{}
};

$ClassInfo _SunFileWriter$NoCloseInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SunFileWriter$NoCloseInputStream",
	"java.io.InputStream",
	nullptr,
	_SunFileWriter$NoCloseInputStream_FieldInfo_,
	_SunFileWriter$NoCloseInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_SunFileWriter$NoCloseInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SunFileWriter"
};

$Object* allocate$SunFileWriter$NoCloseInputStream($Class* clazz) {
	return $of($alloc(SunFileWriter$NoCloseInputStream));
}

void SunFileWriter$NoCloseInputStream::init$($SunFileWriter* this$0, $InputStream* in) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, in, in);
}

int32_t SunFileWriter$NoCloseInputStream::read() {
	return $nc(this->in)->read();
}

int32_t SunFileWriter$NoCloseInputStream::read($bytes* b) {
	return $nc(this->in)->read(b);
}

int32_t SunFileWriter$NoCloseInputStream::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->in)->read(b, off, len);
}

int64_t SunFileWriter$NoCloseInputStream::skip(int64_t n) {
	return $nc(this->in)->skip(n);
}

int32_t SunFileWriter$NoCloseInputStream::available() {
	return $nc(this->in)->available();
}

void SunFileWriter$NoCloseInputStream::close() {
}

void SunFileWriter$NoCloseInputStream::mark(int32_t readlimit) {
	$nc(this->in)->mark(readlimit);
}

void SunFileWriter$NoCloseInputStream::reset() {
	$nc(this->in)->reset();
}

bool SunFileWriter$NoCloseInputStream::markSupported() {
	return $nc(this->in)->markSupported();
}

SunFileWriter$NoCloseInputStream::SunFileWriter$NoCloseInputStream() {
}

$Class* SunFileWriter$NoCloseInputStream::load$($String* name, bool initialize) {
	$loadClass(SunFileWriter$NoCloseInputStream, name, initialize, &_SunFileWriter$NoCloseInputStream_ClassInfo_, allocate$SunFileWriter$NoCloseInputStream);
	return class$;
}

$Class* SunFileWriter$NoCloseInputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com