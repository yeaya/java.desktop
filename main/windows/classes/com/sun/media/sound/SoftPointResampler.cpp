#include <com/sun/media/sound/SoftPointResampler.h>

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftPointResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftPointResampler::*)()>(&SoftPointResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftPointResampler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftPointResampler",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	nullptr,
	_SoftPointResampler_MethodInfo_
};

$Object* allocate$SoftPointResampler($Class* clazz) {
	return $of($alloc(SoftPointResampler));
}

void SoftPointResampler::init$() {
	$SoftAbstractResampler::init$();
}

int32_t SoftPointResampler::getPadding() {
	return 100;
}

void SoftPointResampler::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	float ox_end = (float)out_end;
	if (pitchstep == 0) {
		while (ix < ix_end && ox < ox_end) {
			$nc(out)->set(ox++, $nc(in)->get($cast(int32_t, ix)));
			ix += pitch;
		}
	} else {
		while (ix < ix_end && ox < ox_end) {
			$nc(out)->set(ox++, $nc(in)->get($cast(int32_t, ix)));
			ix += pitch;
			pitch += pitchstep;
		}
	}
	in_offset->set(0, ix);
	out_offset->set(0, ox);
	startpitch->set(0, pitch);
}

SoftPointResampler::SoftPointResampler() {
}

$Class* SoftPointResampler::load$($String* name, bool initialize) {
	$loadClass(SoftPointResampler, name, initialize, &_SoftPointResampler_ClassInfo_, allocate$SoftPointResampler);
	return class$;
}

$Class* SoftPointResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com