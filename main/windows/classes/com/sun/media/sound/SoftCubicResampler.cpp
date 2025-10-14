#include <com/sun/media/sound/SoftCubicResampler.h>

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

$MethodInfo _SoftCubicResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftCubicResampler::*)()>(&SoftCubicResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftCubicResampler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftCubicResampler",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	nullptr,
	_SoftCubicResampler_MethodInfo_
};

$Object* allocate$SoftCubicResampler($Class* clazz) {
	return $of($alloc(SoftCubicResampler));
}

void SoftCubicResampler::init$() {
	$SoftAbstractResampler::init$();
}

int32_t SoftCubicResampler::getPadding() {
	return 3;
}

void SoftCubicResampler::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	int32_t ox_end = out_end;
	if (pitchstep == 0) {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			float fix = ix - iix;
			float y0 = $nc(in)->get(iix - 1);
			float y1 = in->get(iix);
			float y2 = in->get(iix + 1);
			float y3 = in->get(iix + 2);
			float a0 = y3 - y2 + y1 - y0;
			float a1 = y0 - y1 - a0;
			float a2 = y2 - y0;
			float a3 = y1;
			$nc(out)->set(ox++, ((a0 * fix + a1) * fix + a2) * fix + a3);
			ix += pitch;
		}
	} else {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			float fix = ix - iix;
			float y0 = $nc(in)->get(iix - 1);
			float y1 = in->get(iix);
			float y2 = in->get(iix + 1);
			float y3 = in->get(iix + 2);
			float a0 = y3 - y2 + y1 - y0;
			float a1 = y0 - y1 - a0;
			float a2 = y2 - y0;
			float a3 = y1;
			$nc(out)->set(ox++, ((a0 * fix + a1) * fix + a2) * fix + a3);
			ix += pitch;
			pitch += pitchstep;
		}
	}
	in_offset->set(0, ix);
	out_offset->set(0, ox);
	startpitch->set(0, pitch);
}

SoftCubicResampler::SoftCubicResampler() {
}

$Class* SoftCubicResampler::load$($String* name, bool initialize) {
	$loadClass(SoftCubicResampler, name, initialize, &_SoftCubicResampler_ClassInfo_, allocate$SoftCubicResampler);
	return class$;
}

$Class* SoftCubicResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com