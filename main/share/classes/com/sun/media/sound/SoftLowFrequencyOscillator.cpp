#include <com/sun/media/sound/SoftLowFrequencyOscillator.h>

#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef PI
#undef PI2

using $doubleArray2 = $Array<double, 2>;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftLowFrequencyOscillator_FieldInfo_[] = {
	{"max_count", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SoftLowFrequencyOscillator, max_count)},
	{"used_count", "I", nullptr, $PRIVATE, $field(SoftLowFrequencyOscillator, used_count)},
	{"out", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, out)},
	{"delay", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, delay)},
	{"delay2", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, delay2)},
	{"freq", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, freq)},
	{"delay_counter", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, delay_counter)},
	{"sin_phase", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, sin_phase)},
	{"sin_stepfreq", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, sin_stepfreq)},
	{"sin_step", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftLowFrequencyOscillator, sin_step)},
	{"control_time", "D", nullptr, $PRIVATE, $field(SoftLowFrequencyOscillator, control_time)},
	{"sin_factor", "D", nullptr, $PRIVATE, $field(SoftLowFrequencyOscillator, sin_factor)},
	{"PI2", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SoftLowFrequencyOscillator, PI2)},
	{}
};

$MethodInfo _SoftLowFrequencyOscillator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftLowFrequencyOscillator::*)()>(&SoftLowFrequencyOscillator::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{"init", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC},
	{"processControlLogic", "()V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftLowFrequencyOscillator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftLowFrequencyOscillator",
	"java.lang.Object",
	"com.sun.media.sound.SoftProcess",
	_SoftLowFrequencyOscillator_FieldInfo_,
	_SoftLowFrequencyOscillator_MethodInfo_
};

$Object* allocate$SoftLowFrequencyOscillator($Class* clazz) {
	return $of($alloc(SoftLowFrequencyOscillator));
}

double SoftLowFrequencyOscillator::PI2 = 0.0;

void SoftLowFrequencyOscillator::init$() {
	this->used_count = 0;
	$set(this, out, $new($doubleArray2, SoftLowFrequencyOscillator::max_count, 1));
	$set(this, delay, $new($doubleArray2, SoftLowFrequencyOscillator::max_count, 1));
	$set(this, delay2, $new($doubleArray2, SoftLowFrequencyOscillator::max_count, 1));
	$set(this, freq, $new($doubleArray2, SoftLowFrequencyOscillator::max_count, 1));
	$set(this, delay_counter, $new($ints, SoftLowFrequencyOscillator::max_count));
	$set(this, sin_phase, $new($doubles, SoftLowFrequencyOscillator::max_count));
	$set(this, sin_stepfreq, $new($doubles, SoftLowFrequencyOscillator::max_count));
	$set(this, sin_step, $new($doubles, SoftLowFrequencyOscillator::max_count));
	this->control_time = (double)0;
	this->sin_factor = (double)0;
	for (int32_t i = 0; i < $nc(this->sin_stepfreq)->length; ++i) {
		$init($Double);
		$nc(this->sin_stepfreq)->set(i, $Double::NEGATIVE_INFINITY);
	}
}

void SoftLowFrequencyOscillator::reset() {
	for (int32_t i = 0; i < this->used_count; ++i) {
		$nc($nc(this->out)->get(i))->set(0, (double)0);
		$nc($nc(this->delay)->get(i))->set(0, (double)0);
		$nc($nc(this->delay2)->get(i))->set(0, (double)0);
		$nc($nc(this->freq)->get(i))->set(0, (double)0);
		$nc(this->delay_counter)->set(i, 0);
		$nc(this->sin_phase)->set(i, (double)0);
		$init($Double);
		$nc(this->sin_stepfreq)->set(i, $Double::NEGATIVE_INFINITY);
		$nc(this->sin_step)->set(i, (double)0);
	}
	this->used_count = 0;
}

void SoftLowFrequencyOscillator::init($SoftSynthesizer* synth) {
	this->control_time = 1.0 / $nc(synth)->getControlRate();
	$init($Math);
	this->sin_factor = this->control_time * 2 * $Math::PI;
	for (int32_t i = 0; i < this->used_count; ++i) {
		$nc(this->delay_counter)->set(i, $cast(int32_t, ($Math::pow((double)2, $nc($nc(this->delay)->get(i))->get(0) / 1200.0) / this->control_time)));
		(*$nc(this->delay_counter))[i] += $cast(int32_t, ($nc($nc(this->delay2)->get(i))->get(0) / (this->control_time * 1000)));
	}
	processControlLogic();
}

void SoftLowFrequencyOscillator::processControlLogic() {
	for (int32_t i = 0; i < this->used_count; ++i) {
		if ($nc(this->delay_counter)->get(i) > 0) {
			--(*$nc(this->delay_counter))[i];
			$nc($nc(this->out)->get(i))->set(0, 0.5);
		} else {
			double f = $nc($nc(this->freq)->get(i))->get(0);
			if ($nc(this->sin_stepfreq)->get(i) != f) {
				$nc(this->sin_stepfreq)->set(i, f);
				double fr = 440.0 * $Math::exp((f - 6900.0) * ($Math::log((double)2) / 1200.0));
				$nc(this->sin_step)->set(i, fr * this->sin_factor);
			}
			double p = $nc(this->sin_phase)->get(i);
			p += $nc(this->sin_step)->get(i);
			while (p > SoftLowFrequencyOscillator::PI2) {
				p -= SoftLowFrequencyOscillator::PI2;
			}
			$nc($nc(this->out)->get(i))->set(0, 0.5 + $Math::sin(p) * 0.5);
			$nc(this->sin_phase)->set(i, p);
		}
	}
}

$doubles* SoftLowFrequencyOscillator::get(int32_t instance, $String* name) {
	if (instance >= this->used_count) {
		this->used_count = instance + 1;
	}
	if (name == nullptr) {
		return $nc(this->out)->get(instance);
	}
	if ($nc(name)->equals("delay"_s)) {
		return $nc(this->delay)->get(instance);
	}
	if ($nc(name)->equals("delay2"_s)) {
		return $nc(this->delay2)->get(instance);
	}
	if ($nc(name)->equals("freq"_s)) {
		return $nc(this->freq)->get(instance);
	}
	return nullptr;
}

SoftLowFrequencyOscillator::SoftLowFrequencyOscillator() {
}

void clinit$SoftLowFrequencyOscillator($Class* class$) {
	$init($Math);
	SoftLowFrequencyOscillator::PI2 = 2.0 * $Math::PI;
}

$Class* SoftLowFrequencyOscillator::load$($String* name, bool initialize) {
	$loadClass(SoftLowFrequencyOscillator, name, initialize, &_SoftLowFrequencyOscillator_ClassInfo_, clinit$SoftLowFrequencyOscillator, allocate$SoftLowFrequencyOscillator);
	return class$;
}

$Class* SoftLowFrequencyOscillator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com