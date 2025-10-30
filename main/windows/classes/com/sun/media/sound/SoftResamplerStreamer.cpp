#include <com/sun/media/sound/SoftResamplerStreamer.h>

#include <com/sun/media/sound/ModelWavetable.h>
#include <jcpp.h>

using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftResamplerStreamer_MethodInfo_[] = {
	{"open", "(Lcom/sun/media/sound/ModelWavetable;F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SoftResamplerStreamer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftResamplerStreamer",
	nullptr,
	"com.sun.media.sound.ModelOscillatorStream",
	nullptr,
	_SoftResamplerStreamer_MethodInfo_
};

$Object* allocate$SoftResamplerStreamer($Class* clazz) {
	return $of($alloc(SoftResamplerStreamer));
}

$Class* SoftResamplerStreamer::load$($String* name, bool initialize) {
	$loadClass(SoftResamplerStreamer, name, initialize, &_SoftResamplerStreamer_ClassInfo_, allocate$SoftResamplerStreamer);
	return class$;
}

$Class* SoftResamplerStreamer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com