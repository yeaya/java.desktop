#include <com/sun/media/sound/WaveFloatFileWriter$NoCloseOutputStream.h>

#include <com/sun/media/sound/WaveFloatFileWriter.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $WaveFloatFileWriter = ::com::sun::media::sound::WaveFloatFileWriter;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _WaveFloatFileWriter$NoCloseOutputStream_FieldInfo_[] = {
	{"out", "Ljava/io/OutputStream;", nullptr, $FINAL, $field(WaveFloatFileWriter$NoCloseOutputStream, out)},
	{}
};

$MethodInfo _WaveFloatFileWriter$NoCloseOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(WaveFloatFileWriter$NoCloseOutputStream::*)($OutputStream*)>(&WaveFloatFileWriter$NoCloseOutputStream::init$))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _WaveFloatFileWriter$NoCloseOutputStream_InnerClassesInfo_[] = {
	{"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream", "com.sun.media.sound.WaveFloatFileWriter", "NoCloseOutputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WaveFloatFileWriter$NoCloseOutputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.WaveFloatFileWriter$NoCloseOutputStream",
	"java.io.OutputStream",
	nullptr,
	_WaveFloatFileWriter$NoCloseOutputStream_FieldInfo_,
	_WaveFloatFileWriter$NoCloseOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_WaveFloatFileWriter$NoCloseOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.WaveFloatFileWriter"
};

$Object* allocate$WaveFloatFileWriter$NoCloseOutputStream($Class* clazz) {
	return $of($alloc(WaveFloatFileWriter$NoCloseOutputStream));
}

void WaveFloatFileWriter$NoCloseOutputStream::init$($OutputStream* out) {
	$OutputStream::init$();
	$set(this, out, out);
}

void WaveFloatFileWriter$NoCloseOutputStream::write(int32_t b) {
	$nc(this->out)->write(b);
}

void WaveFloatFileWriter$NoCloseOutputStream::flush() {
	$nc(this->out)->flush();
}

void WaveFloatFileWriter$NoCloseOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
}

void WaveFloatFileWriter$NoCloseOutputStream::write($bytes* b) {
	$nc(this->out)->write(b);
}

WaveFloatFileWriter$NoCloseOutputStream::WaveFloatFileWriter$NoCloseOutputStream() {
}

$Class* WaveFloatFileWriter$NoCloseOutputStream::load$($String* name, bool initialize) {
	$loadClass(WaveFloatFileWriter$NoCloseOutputStream, name, initialize, &_WaveFloatFileWriter$NoCloseOutputStream_ClassInfo_, allocate$WaveFloatFileWriter$NoCloseOutputStream);
	return class$;
}

$Class* WaveFloatFileWriter$NoCloseOutputStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com