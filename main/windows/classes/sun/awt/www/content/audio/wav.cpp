#include <sun/awt/www/content/audio/wav.h>

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

$MethodInfo _wav_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(wav::*)()>(&wav::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _wav_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.audio.wav",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_wav_MethodInfo_
};

$Object* allocate$wav($Class* clazz) {
	return $of($alloc(wav));
}

void wav::init$() {
	$ContentHandler::init$();
}

$Object* wav::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

wav::wav() {
}

$Class* wav::load$($String* name, bool initialize) {
	$loadClass(wav, name, initialize, &_wav_ClassInfo_, allocate$wav);
	return class$;
}

$Class* wav::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun