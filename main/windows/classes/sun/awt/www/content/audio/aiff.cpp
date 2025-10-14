#include <sun/awt/www/content/audio/aiff.h>

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

$MethodInfo _aiff_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(aiff::*)()>(&aiff::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _aiff_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.audio.aiff",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_aiff_MethodInfo_
};

$Object* allocate$aiff($Class* clazz) {
	return $of($alloc(aiff));
}

void aiff::init$() {
	$ContentHandler::init$();
}

$Object* aiff::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

aiff::aiff() {
}

$Class* aiff::load$($String* name, bool initialize) {
	$loadClass(aiff, name, initialize, &_aiff_ClassInfo_, allocate$aiff);
	return class$;
}

$Class* aiff::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun