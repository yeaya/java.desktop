#include <com/sun/media/sound/SoftAbstractResampler.h>

#include <com/sun/media/sound/SoftAbstractResampler$ModelAbstractResamplerStream.h>
#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <jcpp.h>

using $SoftAbstractResampler$ModelAbstractResamplerStream = ::com::sun::media::sound::SoftAbstractResampler$ModelAbstractResamplerStream;
using $SoftResamplerStreamer = ::com::sun::media::sound::SoftResamplerStreamer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftAbstractResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftAbstractResampler::*)()>(&SoftAbstractResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"openStreamer", "()Lcom/sun/media/sound/SoftResamplerStreamer;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SoftAbstractResampler_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftAbstractResampler$ModelAbstractResamplerStream", "com.sun.media.sound.SoftAbstractResampler", "ModelAbstractResamplerStream", $PRIVATE},
	{}
};

$ClassInfo _SoftAbstractResampler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.SoftAbstractResampler",
	"java.lang.Object",
	"com.sun.media.sound.SoftResampler",
	nullptr,
	_SoftAbstractResampler_MethodInfo_,
	nullptr,
	nullptr,
	_SoftAbstractResampler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftAbstractResampler$ModelAbstractResamplerStream"
};

$Object* allocate$SoftAbstractResampler($Class* clazz) {
	return $of($alloc(SoftAbstractResampler));
}

void SoftAbstractResampler::init$() {
}

$SoftResamplerStreamer* SoftAbstractResampler::openStreamer() {
	return $new($SoftAbstractResampler$ModelAbstractResamplerStream, this);
}

SoftAbstractResampler::SoftAbstractResampler() {
}

$Class* SoftAbstractResampler::load$($String* name, bool initialize) {
	$loadClass(SoftAbstractResampler, name, initialize, &_SoftAbstractResampler_ClassInfo_, allocate$SoftAbstractResampler);
	return class$;
}

$Class* SoftAbstractResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com