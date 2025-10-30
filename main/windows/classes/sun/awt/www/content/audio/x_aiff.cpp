#include <sun/awt/www/content/audio/x_aiff.h>

#include <com/sun/media/sound/JavaSoundAudioClip.h>
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

$MethodInfo _x_aiff_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(x_aiff::*)()>(&x_aiff::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _x_aiff_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.audio.x_aiff",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_x_aiff_MethodInfo_
};

$Object* allocate$x_aiff($Class* clazz) {
	return $of($alloc(x_aiff));
}

void x_aiff::init$() {
	$ContentHandler::init$();
}

$Object* x_aiff::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

x_aiff::x_aiff() {
}

$Class* x_aiff::load$($String* name, bool initialize) {
	$loadClass(x_aiff, name, initialize, &_x_aiff_ClassInfo_, allocate$x_aiff);
	return class$;
}

$Class* x_aiff::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun