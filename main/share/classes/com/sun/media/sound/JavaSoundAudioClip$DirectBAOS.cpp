#include <com/sun/media/sound/JavaSoundAudioClip$DirectBAOS.h>

#include <com/sun/media/sound/JavaSoundAudioClip.h>
#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $JavaSoundAudioClip = ::com::sun::media::sound::JavaSoundAudioClip;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _JavaSoundAudioClip$DirectBAOS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JavaSoundAudioClip$DirectBAOS::*)()>(&JavaSoundAudioClip$DirectBAOS::init$))},
	{"getInternalBuffer", "()[B", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavaSoundAudioClip$DirectBAOS_InnerClassesInfo_[] = {
	{"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS", "com.sun.media.sound.JavaSoundAudioClip", "DirectBAOS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JavaSoundAudioClip$DirectBAOS_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.JavaSoundAudioClip$DirectBAOS",
	"java.io.ByteArrayOutputStream",
	nullptr,
	nullptr,
	_JavaSoundAudioClip$DirectBAOS_MethodInfo_,
	nullptr,
	nullptr,
	_JavaSoundAudioClip$DirectBAOS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.JavaSoundAudioClip"
};

$Object* allocate$JavaSoundAudioClip$DirectBAOS($Class* clazz) {
	return $of($alloc(JavaSoundAudioClip$DirectBAOS));
}

void JavaSoundAudioClip$DirectBAOS::init$() {
	$ByteArrayOutputStream::init$();
}

$bytes* JavaSoundAudioClip$DirectBAOS::getInternalBuffer() {
	return this->buf;
}

JavaSoundAudioClip$DirectBAOS::JavaSoundAudioClip$DirectBAOS() {
}

$Class* JavaSoundAudioClip$DirectBAOS::load$($String* name, bool initialize) {
	$loadClass(JavaSoundAudioClip$DirectBAOS, name, initialize, &_JavaSoundAudioClip$DirectBAOS_ClassInfo_, allocate$JavaSoundAudioClip$DirectBAOS);
	return class$;
}

$Class* JavaSoundAudioClip$DirectBAOS::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com