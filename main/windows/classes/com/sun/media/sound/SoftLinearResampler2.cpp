#include <com/sun/media/sound/SoftLinearResampler2.h>

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftLinearResampler2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftLinearResampler2::*)()>(&SoftLinearResampler2::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftLinearResampler2_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftLinearResampler2",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	nullptr,
	_SoftLinearResampler2_MethodInfo_
};

$Object* allocate$SoftLinearResampler2($Class* clazz) {
	return $of($alloc(SoftLinearResampler2));
}

void SoftLinearResampler2::init$() {
	$SoftAbstractResampler::init$();
}

int32_t SoftLinearResampler2::getPadding() {
	return 2;
}

void SoftLinearResampler2::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	int32_t ox_end = out_end;
	if (!(ix < ix_end && ox < ox_end)) {
		return;
	}
	int32_t p_ix = $cast(int32_t, (ix * (1 << 15)));
	int32_t p_ix_end = $cast(int32_t, (ix_end * (1 << 15)));
	int32_t p_pitch = $cast(int32_t, (pitch * (1 << 15)));
	pitch = p_pitch * ($div(1.0f, (1 << 15)));
	if (pitchstep == 0.0f) {
		int32_t p_ix_len = p_ix_end - p_ix;
		int32_t p_mod = $mod(p_ix_len, p_pitch);
		if (p_mod != 0) {
			p_ix_len += p_pitch - p_mod;
		}
		int32_t ox_end2 = ox + $div(p_ix_len, p_pitch);
		if (ox_end2 < ox_end) {
			ox_end = ox_end2;
		}
		while (ox < ox_end) {
			int32_t iix = p_ix >> 15;
			float fix = ix - iix;
			float i = $nc(in)->get(iix);
			$nc(out)->set(ox++, i + (in->get(iix + 1) - i) * fix);
			p_ix += p_pitch;
			ix += pitch;
		}
	} else {
		int32_t p_pitchstep = $cast(int32_t, (pitchstep * (1 << 15)));
		pitchstep = p_pitchstep * ($div(1.0f, (1 << 15)));
		while (p_ix < p_ix_end && ox < ox_end) {
			int32_t iix = p_ix >> 15;
			float fix = ix - iix;
			float i = $nc(in)->get(iix);
			$nc(out)->set(ox++, i + (in->get(iix + 1) - i) * fix);
			ix += pitch;
			p_ix += p_pitch;
			pitch += pitchstep;
			p_pitch += p_pitchstep;
		}
	}
	in_offset->set(0, ix);
	out_offset->set(0, ox);
	startpitch->set(0, pitch);
}

SoftLinearResampler2::SoftLinearResampler2() {
}

$Class* SoftLinearResampler2::load$($String* name, bool initialize) {
	$loadClass(SoftLinearResampler2, name, initialize, &_SoftLinearResampler2_ClassInfo_, allocate$SoftLinearResampler2);
	return class$;
}

$Class* SoftLinearResampler2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com