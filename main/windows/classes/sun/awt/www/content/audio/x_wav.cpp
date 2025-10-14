#include <sun/awt/www/content/audio/x_wav.h>

#include <com/sun/media/sound/JavaSoundAudioClip.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

using $JavaSoundAudioClip = ::com::sun::media::sound::JavaSoundAudioClip;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;

namespace sun {
	namespace awt {
		namespace www {
			namespace content {
				namespace audio {

$MethodInfo _x_wav_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(x_wav::*)()>(&x_wav::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _x_wav_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.audio.x_wav",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_x_wav_MethodInfo_
};

$Object* allocate$x_wav($Class* clazz) {
	return $of($alloc(x_wav));
}

void x_wav::init$() {
	$ContentHandler::init$();
}

$Object* x_wav::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

x_wav::x_wav() {
}

$Class* x_wav::load$($String* name, bool initialize) {
	$loadClass(x_wav, name, initialize, &_x_wav_ClassInfo_, allocate$x_wav);
	return class$;
}

$Class* x_wav::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun