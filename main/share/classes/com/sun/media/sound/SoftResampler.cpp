#include <com/sun/media/sound/SoftResampler.h>

#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftResampler_MethodInfo_[] = {
	{"openStreamer", "()Lcom/sun/media/sound/SoftResamplerStreamer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SoftResampler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftResampler",
	nullptr,
	nullptr,
	nullptr,
	_SoftResampler_MethodInfo_
};

$Object* allocate$SoftResampler($Class* clazz) {
	return $of($alloc(SoftResampler));
}

$Class* SoftResampler::load$($String* name, bool initialize) {
	$loadClass(SoftResampler, name, initialize, &_SoftResampler_ClassInfo_, allocate$SoftResampler);
	return class$;
}

$Class* SoftResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com