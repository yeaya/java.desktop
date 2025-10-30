#include <com/sun/media/sound/SoftLinearResampler.h>

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <jcpp.h>

using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftLinearResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftLinearResampler::*)()>(&SoftLinearResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftLinearResampler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftLinearResampler",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	nullptr,
	_SoftLinearResampler_MethodInfo_
};

$Object* allocate$SoftLinearResampler($Class* clazz) {
	return $of($alloc(SoftLinearResampler));
}

void SoftLinearResampler::init$() {
	$SoftAbstractResampler::init$();
}

int32_t SoftLinearResampler::getPadding() {
	return 2;
}

void SoftLinearResampler::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	int32_t ox_end = out_end;
	if (pitchstep == 0.0f) {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			float fix = ix - iix;
			float i = $nc(in)->get(iix);
			$nc(out)->set(ox++, i + (in->get(iix + 1) - i) * fix);
			ix += pitch;
		}
	} else {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			float fix = ix - iix;
			float i = $nc(in)->get(iix);
			$nc(out)->set(ox++, i + (in->get(iix + 1) - i) * fix);
			ix += pitch;
			pitch += pitchstep;
		}
	}
	in_offset->set(0, ix);
	out_offset->set(0, ox);
	startpitch->set(0, pitch);
}

SoftLinearResampler::SoftLinearResampler() {
}

$Class* SoftLinearResampler::load$($String* name, bool initialize) {
	$loadClass(SoftLinearResampler, name, initialize, &_SoftLinearResampler_ClassInfo_, allocate$SoftLinearResampler);
	return class$;
}

$Class* SoftLinearResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com