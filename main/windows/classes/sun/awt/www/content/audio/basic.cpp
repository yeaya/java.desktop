#include <sun/awt/www/content/audio/basic.h>

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

$MethodInfo _basic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(basic::*)()>(&basic::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _basic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.audio.basic",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_basic_MethodInfo_
};

$Object* allocate$basic($Class* clazz) {
	return $of($alloc(basic));
}

void basic::init$() {
	$ContentHandler::init$();
}

$Object* basic::getContent($URLConnection* uc) {
	return $of($JavaSoundAudioClip::create(uc));
}

basic::basic() {
}

$Class* basic::load$($String* name, bool initialize) {
	$loadClass(basic, name, initialize, &_basic_ClassInfo_, allocate$basic);
	return class$;
}

$Class* basic::class$ = nullptr;

				} // audio
			} // content
		} // www
	} // awt
} // sun