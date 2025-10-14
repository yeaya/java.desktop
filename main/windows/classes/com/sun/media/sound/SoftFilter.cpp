#include <com/sun/media/sound/SoftFilter.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
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

#undef FILTERTYPE_BP12
#undef FILTERTYPE_HP12
#undef FILTERTYPE_HP24
#undef FILTERTYPE_LP12
#undef FILTERTYPE_LP24
#undef FILTERTYPE_LP6
#undef FILTERTYPE_NP12
#undef PI

using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
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

$FieldInfo _SoftFilter_FieldInfo_[] = {
	{"FILTERTYPE_LP6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_LP6)},
	{"FILTERTYPE_LP12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_LP12)},
	{"FILTERTYPE_HP12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_HP12)},
	{"FILTERTYPE_BP12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_BP12)},
	{"FILTERTYPE_NP12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_NP12)},
	{"FILTERTYPE_LP24", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_LP24)},
	{"FILTERTYPE_HP24", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftFilter, FILTERTYPE_HP24)},
	{"filtertype", "I", nullptr, $PRIVATE, $field(SoftFilter, filtertype)},
	{"samplerate", "F", nullptr, $PRIVATE | $FINAL, $field(SoftFilter, samplerate)},
	{"x1", "F", nullptr, $PRIVATE, $field(SoftFilter, x1)},
	{"x2", "F", nullptr, $PRIVATE, $field(SoftFilter, x2)},
	{"y1", "F", nullptr, $PRIVATE, $field(SoftFilter, y1)},
	{"y2", "F", nullptr, $PRIVATE, $field(SoftFilter, y2)},
	{"xx1", "F", nullptr, $PRIVATE, $field(SoftFilter, xx1)},
	{"xx2", "F", nullptr, $PRIVATE, $field(SoftFilter, xx2)},
	{"yy1", "F", nullptr, $PRIVATE, $field(SoftFilter, yy1)},
	{"yy2", "F", nullptr, $PRIVATE, $field(SoftFilter, yy2)},
	{"a0", "F", nullptr, $PRIVATE, $field(SoftFilter, a0)},
	{"a1", "F", nullptr, $PRIVATE, $field(SoftFilter, a1)},
	{"a2", "F", nullptr, $PRIVATE, $field(SoftFilter, a2)},
	{"b1", "F", nullptr, $PRIVATE, $field(SoftFilter, b1)},
	{"b2", "F", nullptr, $PRIVATE, $field(SoftFilter, b2)},
	{"q", "F", nullptr, $PRIVATE, $field(SoftFilter, q)},
	{"gain", "F", nullptr, $PRIVATE, $field(SoftFilter, gain)},
	{"wet", "F", nullptr, $PRIVATE, $field(SoftFilter, wet)},
	{"last_wet", "F", nullptr, $PRIVATE, $field(SoftFilter, last_wet)},
	{"last_a0", "F", nullptr, $PRIVATE, $field(SoftFilter, last_a0)},
	{"last_a1", "F", nullptr, $PRIVATE, $field(SoftFilter, last_a1)},
	{"last_a2", "F", nullptr, $PRIVATE, $field(SoftFilter, last_a2)},
	{"last_b1", "F", nullptr, $PRIVATE, $field(SoftFilter, last_b1)},
	{"last_b2", "F", nullptr, $PRIVATE, $field(SoftFilter, last_b2)},
	{"last_q", "F", nullptr, $PRIVATE, $field(SoftFilter, last_q)},
	{"last_gain", "F", nullptr, $PRIVATE, $field(SoftFilter, last_gain)},
	{"last_set", "Z", nullptr, $PRIVATE, $field(SoftFilter, last_set)},
	{"cutoff", "D", nullptr, $PRIVATE, $field(SoftFilter, cutoff)},
	{"resonancedB", "D", nullptr, $PRIVATE, $field(SoftFilter, resonancedB)},
	{"dirty", "Z", nullptr, $PRIVATE, $field(SoftFilter, dirty)},
	{}
};

$MethodInfo _SoftFilter_MethodInfo_[] = {
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)(float)>(&SoftFilter::init$))},
	{"filter1", "(Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)($SoftAudioBuffer*)>(&SoftFilter::filter1))},
	{"filter1calc", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)()>(&SoftFilter::filter1calc))},
	{"filter2", "(Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)($SoftAudioBuffer*)>(&SoftFilter::filter2))},
	{"filter2calc", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)()>(&SoftFilter::filter2calc))},
	{"filter4", "(Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)($SoftAudioBuffer*)>(&SoftFilter::filter4))},
	{"processAudio", "(Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)($SoftAudioBuffer*)>(&SoftFilter::processAudio))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)()>(&SoftFilter::reset))},
	{"setFilterType", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)(int32_t)>(&SoftFilter::setFilterType))},
	{"setFrequency", "(D)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)(double)>(&SoftFilter::setFrequency))},
	{"setResonance", "(D)V", nullptr, $PUBLIC, $method(static_cast<void(SoftFilter::*)(double)>(&SoftFilter::setResonance))},
	{"sinh", "(D)D", nullptr, $PRIVATE, $method(static_cast<double(SoftFilter::*)(double)>(&SoftFilter::sinh))},
	{}
};

$ClassInfo _SoftFilter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftFilter",
	"java.lang.Object",
	nullptr,
	_SoftFilter_FieldInfo_,
	_SoftFilter_MethodInfo_
};

$Object* allocate$SoftFilter($Class* clazz) {
	return $of($alloc(SoftFilter));
}

void SoftFilter::init$(float samplerate) {
	this->filtertype = SoftFilter::FILTERTYPE_LP6;
	this->gain = (float)1;
	this->wet = (float)0;
	this->last_wet = (float)0;
	this->last_set = false;
	this->cutoff = (double)0x0000AC44;
	this->resonancedB = (double)0;
	this->dirty = true;
	this->samplerate = samplerate;
	this->dirty = true;
}

void SoftFilter::setFrequency(double cent) {
	if (this->cutoff == cent) {
		return;
	}
	this->cutoff = cent;
	this->dirty = true;
}

void SoftFilter::setResonance(double db) {
	if (this->resonancedB == db) {
		return;
	}
	this->resonancedB = db;
	this->dirty = true;
}

void SoftFilter::reset() {
	this->dirty = true;
	this->last_set = false;
	this->x1 = (float)0;
	this->x2 = (float)0;
	this->y1 = (float)0;
	this->y2 = (float)0;
	this->xx1 = (float)0;
	this->xx2 = (float)0;
	this->yy1 = (float)0;
	this->yy2 = (float)0;
	this->wet = 0.0f;
	this->gain = 1.0f;
	this->a0 = (float)0;
	this->a1 = (float)0;
	this->a2 = (float)0;
	this->b1 = (float)0;
	this->b2 = (float)0;
}

void SoftFilter::setFilterType(int32_t filtertype) {
	this->filtertype = filtertype;
}

void SoftFilter::processAudio($SoftAudioBuffer* sbuffer) {
	if (this->filtertype == SoftFilter::FILTERTYPE_LP6) {
		filter1(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_LP12) {
		filter2(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_HP12) {
		filter2(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_BP12) {
		filter2(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_NP12) {
		filter2(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_LP24) {
		filter4(sbuffer);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_HP24) {
		filter4(sbuffer);
	}
}

void SoftFilter::filter4($SoftAudioBuffer* sbuffer) {
	$var($floats, buffer, $nc(sbuffer)->array());
	if (this->dirty) {
		filter2calc();
		this->dirty = false;
	}
	if (!this->last_set) {
		this->last_a0 = this->a0;
		this->last_a1 = this->a1;
		this->last_a2 = this->a2;
		this->last_b1 = this->b1;
		this->last_b2 = this->b2;
		this->last_gain = this->gain;
		this->last_wet = this->wet;
		this->last_set = true;
	}
	if (this->wet > 0 || this->last_wet > 0) {
		int32_t len = $nc(buffer)->length;
		float a0 = this->last_a0;
		float a1 = this->last_a1;
		float a2 = this->last_a2;
		float b1 = this->last_b1;
		float b2 = this->last_b2;
		float gain = this->last_gain;
		float wet = this->last_wet;
		float a0_delta = (this->a0 - this->last_a0) / len;
		float a1_delta = (this->a1 - this->last_a1) / len;
		float a2_delta = (this->a2 - this->last_a2) / len;
		float b1_delta = (this->b1 - this->last_b1) / len;
		float b2_delta = (this->b2 - this->last_b2) / len;
		float gain_delta = (this->gain - this->last_gain) / len;
		float wet_delta = (this->wet - this->last_wet) / len;
		float x1 = this->x1;
		float x2 = this->x2;
		float y1 = this->y1;
		float y2 = this->y2;
		float xx1 = this->xx1;
		float xx2 = this->xx2;
		float yy1 = this->yy1;
		float yy2 = this->yy2;
		if (wet_delta != 0) {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				a1 += a1_delta;
				a2 += a2_delta;
				b1 += b1_delta;
				b2 += b2_delta;
				gain += gain_delta;
				wet += wet_delta;
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				float xx = (y * gain) * wet + (x) * (1 - wet);
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
				float yy = (a0 * xx + a1 * xx1 + a2 * xx2 - b1 * yy1 - b2 * yy2);
				buffer->set(i, (yy * gain) * wet + (xx) * (1 - wet));
				xx2 = xx1;
				xx1 = xx;
				yy2 = yy1;
				yy1 = yy;
			}
		} else if (a0_delta == 0 && a1_delta == 0 && a2_delta == 0 && b1_delta == 0 && b2_delta == 0) {
			for (int32_t i = 0; i < len; ++i) {
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				float xx = (y * gain) * wet + (x) * (1 - wet);
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
				float yy = (a0 * xx + a1 * xx1 + a2 * xx2 - b1 * yy1 - b2 * yy2);
				buffer->set(i, (yy * gain) * wet + (xx) * (1 - wet));
				xx2 = xx1;
				xx1 = xx;
				yy2 = yy1;
				yy1 = yy;
			}
		} else {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				a1 += a1_delta;
				a2 += a2_delta;
				b1 += b1_delta;
				b2 += b2_delta;
				gain += gain_delta;
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				float xx = (y * gain) * wet + (x) * (1 - wet);
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
				float yy = (a0 * xx + a1 * xx1 + a2 * xx2 - b1 * yy1 - b2 * yy2);
				buffer->set(i, (yy * gain) * wet + (xx) * (1 - wet));
				xx2 = xx1;
				xx1 = xx;
				yy2 = yy1;
				yy1 = yy;
			}
		}
		if ($Math::abs(x1) < 1.0E-8) {
			x1 = (float)0;
		}
		if ($Math::abs(x2) < 1.0E-8) {
			x2 = (float)0;
		}
		if ($Math::abs(y1) < 1.0E-8) {
			y1 = (float)0;
		}
		if ($Math::abs(y2) < 1.0E-8) {
			y2 = (float)0;
		}
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
		this->xx1 = xx1;
		this->xx2 = xx2;
		this->yy1 = yy1;
		this->yy2 = yy2;
	}
	this->last_a0 = this->a0;
	this->last_a1 = this->a1;
	this->last_a2 = this->a2;
	this->last_b1 = this->b1;
	this->last_b2 = this->b2;
	this->last_gain = this->gain;
	this->last_wet = this->wet;
}

double SoftFilter::sinh(double x) {
	double var$0 = $Math::exp(x);
	return (var$0 - $Math::exp(-x)) * 0.5;
}

void SoftFilter::filter2calc() {
	double resonancedB = this->resonancedB;
	if (resonancedB < 0) {
		resonancedB = (double)0;
	}
	if (resonancedB > 30) {
		resonancedB = (double)30;
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_LP24 || this->filtertype == SoftFilter::FILTERTYPE_HP24) {
		resonancedB *= 0.6;
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_BP12) {
		this->wet = (float)1;
		double r = (this->cutoff / this->samplerate);
		if (r > 0.45) {
			r = 0.45;
		}
		$init($Math);
		double bandwidth = $Math::PI * $Math::pow(10.0, -(resonancedB / 20));
		double omega = 2 * $Math::PI * r;
		double cs = $Math::cos(omega);
		double sn = $Math::sin(omega);
		double alpha = sn * sinh(($Math::log((double)2) * bandwidth * omega) / (sn * 2));
		double b0 = alpha;
		double b1 = (double)0;
		double b2 = -alpha;
		double a0 = 1 + alpha;
		double a1 = -2 * cs;
		double a2 = 1 - alpha;
		double cf = 1.0 / a0;
		this->b1 = (float)(a1 * cf);
		this->b2 = (float)(a2 * cf);
		this->a0 = (float)(b0 * cf);
		this->a1 = (float)(b1 * cf);
		this->a2 = (float)(b2 * cf);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_NP12) {
		this->wet = (float)1;
		double r = (this->cutoff / this->samplerate);
		if (r > 0.45) {
			r = 0.45;
		}
		$init($Math);
		double bandwidth = $Math::PI * $Math::pow(10.0, -(resonancedB / 20));
		double omega = 2 * $Math::PI * r;
		double cs = $Math::cos(omega);
		double sn = $Math::sin(omega);
		double alpha = sn * sinh(($Math::log((double)2) * bandwidth * omega) / (sn * 2));
		double b0 = (double)1;
		double b1 = -2 * cs;
		double b2 = (double)1;
		double a0 = 1 + alpha;
		double a1 = -2 * cs;
		double a2 = 1 - alpha;
		double cf = 1.0 / a0;
		this->b1 = (float)(a1 * cf);
		this->b2 = (float)(a2 * cf);
		this->a0 = (float)(b0 * cf);
		this->a1 = (float)(b1 * cf);
		this->a2 = (float)(b2 * cf);
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_LP12 || this->filtertype == SoftFilter::FILTERTYPE_LP24) {
		double r = (this->cutoff / this->samplerate);
		if (r > 0.45) {
			if (this->wet == 0) {
				if (resonancedB < 1.0E-5) {
					this->wet = 0.0f;
				} else {
					this->wet = 1.0f;
				}
			}
			r = 0.45;
		} else {
			this->wet = 1.0f;
		}
		$init($Math);
		double c = 1.0 / ($Math::tan($Math::PI * r));
		double csq = c * c;
		double resonance = $Math::pow(10.0, -(resonancedB / 20));
		double q = $Math::sqrt(2.0f) * resonance;
		double a0 = 1.0 / (1.0 + (q * c) + (csq));
		double a1 = 2.0 * a0;
		double a2 = a0;
		double b1 = (2.0 * a0) * (1.0 - csq);
		double b2 = a0 * (1.0 - (q * c) + csq);
		this->a0 = (float)a0;
		this->a1 = (float)a1;
		this->a2 = (float)a2;
		this->b1 = (float)b1;
		this->b2 = (float)b2;
	}
	if (this->filtertype == SoftFilter::FILTERTYPE_HP12 || this->filtertype == SoftFilter::FILTERTYPE_HP24) {
		double r = (this->cutoff / this->samplerate);
		if (r > 0.45) {
			r = 0.45;
		}
		if (r < 1.0E-4) {
			r = 1.0E-4;
		}
		this->wet = 1.0f;
		$init($Math);
		double c = ($Math::tan($Math::PI * (r)));
		double csq = c * c;
		double resonance = $Math::pow(10.0, -(resonancedB / 20));
		double q = $Math::sqrt(2.0f) * resonance;
		double a0 = 1.0 / (1.0 + (q * c) + (csq));
		double a1 = -2.0 * a0;
		double a2 = a0;
		double b1 = (2.0 * a0) * (csq - 1.0);
		double b2 = a0 * (1.0 - (q * c) + csq);
		this->a0 = (float)a0;
		this->a1 = (float)a1;
		this->a2 = (float)a2;
		this->b1 = (float)b1;
		this->b2 = (float)b2;
	}
}

void SoftFilter::filter2($SoftAudioBuffer* sbuffer) {
	$var($floats, buffer, $nc(sbuffer)->array());
	if (this->dirty) {
		filter2calc();
		this->dirty = false;
	}
	if (!this->last_set) {
		this->last_a0 = this->a0;
		this->last_a1 = this->a1;
		this->last_a2 = this->a2;
		this->last_b1 = this->b1;
		this->last_b2 = this->b2;
		this->last_q = this->q;
		this->last_gain = this->gain;
		this->last_wet = this->wet;
		this->last_set = true;
	}
	if (this->wet > 0 || this->last_wet > 0) {
		int32_t len = $nc(buffer)->length;
		float a0 = this->last_a0;
		float a1 = this->last_a1;
		float a2 = this->last_a2;
		float b1 = this->last_b1;
		float b2 = this->last_b2;
		float gain = this->last_gain;
		float wet = this->last_wet;
		float a0_delta = (this->a0 - this->last_a0) / len;
		float a1_delta = (this->a1 - this->last_a1) / len;
		float a2_delta = (this->a2 - this->last_a2) / len;
		float b1_delta = (this->b1 - this->last_b1) / len;
		float b2_delta = (this->b2 - this->last_b2) / len;
		float gain_delta = (this->gain - this->last_gain) / len;
		float wet_delta = (this->wet - this->last_wet) / len;
		float x1 = this->x1;
		float x2 = this->x2;
		float y1 = this->y1;
		float y2 = this->y2;
		if (wet_delta != 0) {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				a1 += a1_delta;
				a2 += a2_delta;
				b1 += b1_delta;
				b2 += b2_delta;
				gain += gain_delta;
				wet += wet_delta;
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				buffer->set(i, (y * gain) * wet + (x) * (1 - wet));
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
			}
		} else if (a0_delta == 0 && a1_delta == 0 && a2_delta == 0 && b1_delta == 0 && b2_delta == 0) {
			for (int32_t i = 0; i < len; ++i) {
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				buffer->set(i, y * gain);
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
			}
		} else {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				a1 += a1_delta;
				a2 += a2_delta;
				b1 += b1_delta;
				b2 += b2_delta;
				gain += gain_delta;
				float x = buffer->get(i);
				float y = (a0 * x + a1 * x1 + a2 * x2 - b1 * y1 - b2 * y2);
				buffer->set(i, y * gain);
				x2 = x1;
				x1 = x;
				y2 = y1;
				y1 = y;
			}
		}
		if ($Math::abs(x1) < 1.0E-8) {
			x1 = (float)0;
		}
		if ($Math::abs(x2) < 1.0E-8) {
			x2 = (float)0;
		}
		if ($Math::abs(y1) < 1.0E-8) {
			y1 = (float)0;
		}
		if ($Math::abs(y2) < 1.0E-8) {
			y2 = (float)0;
		}
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
	}
	this->last_a0 = this->a0;
	this->last_a1 = this->a1;
	this->last_a2 = this->a2;
	this->last_b1 = this->b1;
	this->last_b2 = this->b2;
	this->last_q = this->q;
	this->last_gain = this->gain;
	this->last_wet = this->wet;
}

void SoftFilter::filter1calc() {
	if (this->cutoff < 120) {
		this->cutoff = (double)120;
	}
	$init($Math);
	double c = (7.0 / 6.0) * $Math::PI * 2 * this->cutoff / this->samplerate;
	if (c > 1) {
		c = (double)1;
	}
	double var$0 = $Math::sqrt(1 - $Math::cos(c));
	this->a0 = (float)(var$0 * $Math::sqrt(0.5 * $Math::PI));
	if (this->resonancedB < 0) {
		this->resonancedB = (double)0;
	}
	if (this->resonancedB > 20) {
		this->resonancedB = (double)20;
	}
	double var$1 = $Math::sqrt(0.5);
	this->q = (float)(var$1 * $Math::pow(10.0, -(this->resonancedB / 20)));
	this->gain = (float)$Math::pow((double)10, -(this->resonancedB) / 40.0);
	if (this->wet == 0.0f) {
		if (this->resonancedB > 1.0E-5 || c < 0.9999999) {
			this->wet = 1.0f;
		}
	}
}

void SoftFilter::filter1($SoftAudioBuffer* sbuffer) {
	if (this->dirty) {
		filter1calc();
		this->dirty = false;
	}
	if (!this->last_set) {
		this->last_a0 = this->a0;
		this->last_q = this->q;
		this->last_gain = this->gain;
		this->last_wet = this->wet;
		this->last_set = true;
	}
	if (this->wet > 0 || this->last_wet > 0) {
		$var($floats, buffer, $nc(sbuffer)->array());
		int32_t len = $nc(buffer)->length;
		float a0 = this->last_a0;
		float q = this->last_q;
		float gain = this->last_gain;
		float wet = this->last_wet;
		float a0_delta = (this->a0 - this->last_a0) / len;
		float q_delta = (this->q - this->last_q) / len;
		float gain_delta = (this->gain - this->last_gain) / len;
		float wet_delta = (this->wet - this->last_wet) / len;
		float y2 = this->y2;
		float y1 = this->y1;
		if (wet_delta != 0) {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				q += q_delta;
				gain += gain_delta;
				wet += wet_delta;
				float ga0 = (1 - q * a0);
				y1 = ga0 * y1 + (a0) * (buffer->get(i) - y2);
				y2 = ga0 * y2 + (a0) * y1;
				buffer->set(i, y2 * gain * wet + buffer->get(i) * (1 - wet));
			}
		} else if (a0_delta == 0 && q_delta == 0) {
			float ga0 = (1 - q * a0);
			for (int32_t i = 0; i < len; ++i) {
				y1 = ga0 * y1 + (a0) * (buffer->get(i) - y2);
				y2 = ga0 * y2 + (a0) * y1;
				buffer->set(i, y2 * gain);
			}
		} else {
			for (int32_t i = 0; i < len; ++i) {
				a0 += a0_delta;
				q += q_delta;
				gain += gain_delta;
				float ga0 = (1 - q * a0);
				y1 = ga0 * y1 + (a0) * (buffer->get(i) - y2);
				y2 = ga0 * y2 + (a0) * y1;
				buffer->set(i, y2 * gain);
			}
		}
		if ($Math::abs(y2) < 1.0E-8) {
			y2 = (float)0;
		}
		if ($Math::abs(y1) < 1.0E-8) {
			y1 = (float)0;
		}
		this->y2 = y2;
		this->y1 = y1;
	}
	this->last_a0 = this->a0;
	this->last_q = this->q;
	this->last_gain = this->gain;
	this->last_wet = this->wet;
}

SoftFilter::SoftFilter() {
}

$Class* SoftFilter::load$($String* name, bool initialize) {
	$loadClass(SoftFilter, name, initialize, &_SoftFilter_ClassInfo_, allocate$SoftFilter);
	return class$;
}

$Class* SoftFilter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com