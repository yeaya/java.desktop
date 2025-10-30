#include <com/sun/media/sound/SoftLanczosResampler.h>

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef PI

using $floatArray2 = $Array<float, 2>;
using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftLanczosResampler_FieldInfo_[] = {
	{"sinc_table", "[[F", nullptr, 0, $field(SoftLanczosResampler, sinc_table)},
	{"sinc_table_fsize", "I", nullptr, 0, $field(SoftLanczosResampler, sinc_table_fsize)},
	{"sinc_table_size", "I", nullptr, 0, $field(SoftLanczosResampler, sinc_table_size)},
	{"sinc_table_center", "I", nullptr, 0, $field(SoftLanczosResampler, sinc_table_center)},
	{}
};

$MethodInfo _SoftLanczosResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftLanczosResampler::*)()>(&SoftLanczosResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{"sinc", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&SoftLanczosResampler::sinc))},
	{"sincTable", "(IF)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)(int32_t,float)>(&SoftLanczosResampler::sincTable))},
	{}
};

$ClassInfo _SoftLanczosResampler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftLanczosResampler",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	_SoftLanczosResampler_FieldInfo_,
	_SoftLanczosResampler_MethodInfo_
};

$Object* allocate$SoftLanczosResampler($Class* clazz) {
	return $of($alloc(SoftLanczosResampler));
}

void SoftLanczosResampler::init$() {
	$useLocalCurrentObjectStackCache();
	$SoftAbstractResampler::init$();
	this->sinc_table_fsize = 2000;
	this->sinc_table_size = 5;
	this->sinc_table_center = this->sinc_table_size / 2;
	$set(this, sinc_table, $new($floatArray2, this->sinc_table_fsize));
	for (int32_t i = 0; i < this->sinc_table_fsize; ++i) {
		$nc(this->sinc_table)->set(i, $(sincTable(this->sinc_table_size, -i / ((float)this->sinc_table_fsize))));
	}
}

double SoftLanczosResampler::sinc(double x) {
	$init(SoftLanczosResampler);
	$init($Math);
	return (x == 0.0) ? 1.0 : $Math::sin($Math::PI * x) / ($Math::PI * x);
}

$floats* SoftLanczosResampler::sincTable(int32_t size, float offset) {
	$init(SoftLanczosResampler);
	int32_t center = size / 2;
	$var($floats, w, $new($floats, size));
	for (int32_t k = 0; k < size; ++k) {
		float x = (-center + k + offset);
		if (x < -2 || x > 2) {
			w->set(k, (float)0);
		} else if (x == 0) {
			w->set(k, (float)1);
		} else {
			$init($Math);
			double var$0 = 2.0 * $Math::sin($Math::PI * x);
			w->set(k, (float)(var$0 * $Math::sin($Math::PI * x / 2.0) / (($Math::PI * x) * ($Math::PI * x))));
		}
	}
	return w;
}

int32_t SoftLanczosResampler::getPadding() {
	return this->sinc_table_size / 2 + 2;
}

void SoftLanczosResampler::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	$useLocalCurrentObjectStackCache();
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	int32_t ox_end = out_end;
	if (pitchstep == 0) {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			$var($floats, sinc_table, $nc(this->sinc_table)->get($cast(int32_t, ((ix - iix) * this->sinc_table_fsize))));
			int32_t xx = iix - this->sinc_table_center;
			float y = (float)0;
			for (int32_t i = 0; i < this->sinc_table_size; ++i, ++xx) {
				y += $nc(in)->get(xx) * $nc(sinc_table)->get(i);
			}
			$nc(out)->set(ox++, y);
			ix += pitch;
		}
	} else {
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			$var($floats, sinc_table, $nc(this->sinc_table)->get($cast(int32_t, ((ix - iix) * this->sinc_table_fsize))));
			int32_t xx = iix - this->sinc_table_center;
			float y = (float)0;
			for (int32_t i = 0; i < this->sinc_table_size; ++i, ++xx) {
				y += $nc(in)->get(xx) * $nc(sinc_table)->get(i);
			}
			$nc(out)->set(ox++, y);
			ix += pitch;
			pitch += pitchstep;
		}
	}
	in_offset->set(0, ix);
	out_offset->set(0, ox);
	startpitch->set(0, pitch);
}

SoftLanczosResampler::SoftLanczosResampler() {
}

$Class* SoftLanczosResampler::load$($String* name, bool initialize) {
	$loadClass(SoftLanczosResampler, name, initialize, &_SoftLanczosResampler_ClassInfo_, allocate$SoftLanczosResampler);
	return class$;
}

$Class* SoftLanczosResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com