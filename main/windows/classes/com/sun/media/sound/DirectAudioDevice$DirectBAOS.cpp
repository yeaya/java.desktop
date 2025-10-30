#include <com/sun/media/sound/DirectAudioDevice$DirectBAOS.h>

#include <com/sun/media/sound/DirectAudioDevice.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _DirectAudioDevice$DirectBAOS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DirectAudioDevice$DirectBAOS::*)()>(&DirectAudioDevice$DirectBAOS::init$))},
	{"getInternalBuffer", "()[B", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectBAOS_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectBAOS", "com.sun.media.sound.DirectAudioDevice", "DirectBAOS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectAudioDevice$DirectBAOS_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectBAOS",
	"java.io.ByteArrayOutputStream",
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectBAOS_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectBAOS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectBAOS($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectBAOS));
}

void DirectAudioDevice$DirectBAOS::init$() {
	$ByteArrayOutputStream::init$();
}

$bytes* DirectAudioDevice$DirectBAOS::getInternalBuffer() {
	return this->buf;
}

DirectAudioDevice$DirectBAOS::DirectAudioDevice$DirectBAOS() {
}

$Class* DirectAudioDevice$DirectBAOS::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectBAOS, name, initialize, &_DirectAudioDevice$DirectBAOS_ClassInfo_, allocate$DirectAudioDevice$DirectBAOS);
	return class$;
}

$Class* DirectAudioDevice$DirectBAOS::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com