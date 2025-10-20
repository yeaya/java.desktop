#include <com/sun/media/sound/SoftSincResampler.h>

#include <com/sun/media/sound/SoftAbstractResampler.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PI

using $floatArray2 = $Array<float, 2>;
using $floatArray3 = $Array<float, 3>;
using $SoftAbstractResampler = ::com::sun::media::sound::SoftAbstractResampler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftSincResampler_FieldInfo_[] = {
	{"sinc_table", "[[[F", nullptr, 0, $field(SoftSincResampler, sinc_table)},
	{"sinc_scale_size", "I", nullptr, 0, $field(SoftSincResampler, sinc_scale_size)},
	{"sinc_table_fsize", "I", nullptr, 0, $field(SoftSincResampler, sinc_table_fsize)},
	{"sinc_table_size", "I", nullptr, 0, $field(SoftSincResampler, sinc_table_size)},
	{"sinc_table_center", "I", nullptr, 0, $field(SoftSincResampler, sinc_table_center)},
	{}
};

$MethodInfo _SoftSincResampler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftSincResampler::*)()>(&SoftSincResampler::init$))},
	{"getPadding", "()I", nullptr, $PUBLIC},
	{"interpolate", "([F[FF[FF[F[II)V", nullptr, $PUBLIC},
	{"sinc", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&SoftSincResampler::sinc))},
	{"sincTable", "(IFF)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)(int32_t,float,float)>(&SoftSincResampler::sincTable))},
	{"wHanning", "(IF)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)(int32_t,float)>(&SoftSincResampler::wHanning))},
	{}
};

$ClassInfo _SoftSincResampler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftSincResampler",
	"com.sun.media.sound.SoftAbstractResampler",
	nullptr,
	_SoftSincResampler_FieldInfo_,
	_SoftSincResampler_MethodInfo_
};

$Object* allocate$SoftSincResampler($Class* clazz) {
	return $of($alloc(SoftSincResampler));
}

void SoftSincResampler::init$() {
	$useLocalCurrentObjectStackCache();
	$SoftAbstractResampler::init$();
	this->sinc_scale_size = 100;
	this->sinc_table_fsize = 800;
	this->sinc_table_size = 30;
	this->sinc_table_center = this->sinc_table_size / 2;
	$set(this, sinc_table, $new($floatArray3, this->sinc_scale_size, this->sinc_table_fsize));
	for (int32_t s = 0; s < this->sinc_scale_size; ++s) {
		float scale = (float)(1.0 / (1.0 + $Math::pow((double)s, 1.1) / 10.0));
		for (int32_t i = 0; i < this->sinc_table_fsize; ++i) {
			$nc($nc(this->sinc_table)->get(s))->set(i, $(sincTable(this->sinc_table_size, -i / ((float)this->sinc_table_fsize), scale)));
		}
	}
}

double SoftSincResampler::sinc(double x) {
	$init(SoftSincResampler);
	$init($Math);
	return (x == 0.0) ? 1.0 : $Math::sin($Math::PI * x) / ($Math::PI * x);
}

$floats* SoftSincResampler::wHanning(int32_t size, float offset) {
	$init(SoftSincResampler);
	$var($floats, window_table, $new($floats, size));
	for (int32_t k = 0; k < size; ++k) {
		$init($Math);
		window_table->set(k, (float)(-0.5 * $Math::cos(2.0 * $Math::PI * (double)(k + offset) / (double)size) + 0.5));
	}
	return window_table;
}

$floats* SoftSincResampler::sincTable(int32_t size, float offset, float scale) {
	$init(SoftSincResampler);
	int32_t center = size / 2;
	$var($floats, w, wHanning(size, offset));
	for (int32_t k = 0; k < size; ++k) {
		(*$nc(w))[k] *= sinc((-center + k + offset) * scale) * scale;
	}
	return w;
}

int32_t SoftSincResampler::getPadding() {
	return this->sinc_table_size / 2 + 2;
}

void SoftSincResampler::interpolate($floats* in, $floats* in_offset, float in_end, $floats* startpitch, float pitchstep, $floats* out, $ints* out_offset, int32_t out_end) {
	$useLocalCurrentObjectStackCache();
	float pitch = $nc(startpitch)->get(0);
	float ix = $nc(in_offset)->get(0);
	int32_t ox = $nc(out_offset)->get(0);
	float ix_end = in_end;
	int32_t ox_end = out_end;
	int32_t max_p = this->sinc_scale_size - 1;
	if (pitchstep == 0) {
		int32_t p = $cast(int32_t, ((pitch - 1) * 10.0f));
		if (p < 0) {
			p = 0;
		} else if (p > max_p) {
			p = max_p;
		}
		$var($floatArray2, sinc_table_f, $nc(this->sinc_table)->get(p));
		while (ix < ix_end && ox < ox_end) {
			int32_t iix = $cast(int32_t, ix);
			$var($floats, sinc_table, $nc(sinc_table_f)->get($cast(int32_t, ((ix - iix) * this->sinc_table_fsize))));
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
			int32_t p = $cast(int32_t, ((pitch - 1) * 10.0f));
			if (p < 0) {
				p = 0;
			} else if (p > max_p) {
				p = max_p;
			}
			$var($floatArray2, sinc_table_f, $nc(this->sinc_table)->get(p));
			$var($floats, sinc_table, $nc(sinc_table_f)->get($cast(int32_t, ((ix - iix) * this->sinc_table_fsize))));
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

SoftSincResampler::SoftSincResampler() {
}

$Class* SoftSincResampler::load$($String* name, bool initialize) {
	$loadClass(SoftSincResampler, name, initialize, &_SoftSincResampler_ClassInfo_, allocate$SoftSincResampler);
	return class$;
}

$Class* SoftSincResampler::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com