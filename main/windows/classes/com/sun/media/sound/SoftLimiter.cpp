#include <com/sun/media/sound/SoftLimiter.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftAudioProcessor = ::com::sun::media::sound::SoftAudioProcessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftLimiter_FieldInfo_[] = {
	{"lastmax", "F", nullptr, 0, $field(SoftLimiter, lastmax)},
	{"gain", "F", nullptr, 0, $field(SoftLimiter, gain)},
	{"temp_bufferL", "[F", nullptr, 0, $field(SoftLimiter, temp_bufferL)},
	{"temp_bufferR", "[F", nullptr, 0, $field(SoftLimiter, temp_bufferR)},
	{"mix", "Z", nullptr, 0, $field(SoftLimiter, mix)},
	{"bufferL", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftLimiter, bufferL)},
	{"bufferR", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftLimiter, bufferR)},
	{"bufferLout", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftLimiter, bufferLout)},
	{"bufferRout", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftLimiter, bufferRout)},
	{"controlrate", "F", nullptr, 0, $field(SoftLimiter, controlrate)},
	{"silentcounter", "D", nullptr, 0, $field(SoftLimiter, silentcounter)},
	{}
};

$MethodInfo _SoftLimiter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftLimiter::*)()>(&SoftLimiter::init$))},
	{"globalParameterControlChange", "([IJJ)V", nullptr, $PUBLIC},
	{"init", "(FF)V", nullptr, $PUBLIC},
	{"processAudio", "()V", nullptr, $PUBLIC},
	{"processControlLogic", "()V", nullptr, $PUBLIC},
	{"setInput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{"setMixMode", "(Z)V", nullptr, $PUBLIC},
	{"setOutput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftLimiter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftLimiter",
	"java.lang.Object",
	"com.sun.media.sound.SoftAudioProcessor",
	_SoftLimiter_FieldInfo_,
	_SoftLimiter_MethodInfo_
};

$Object* allocate$SoftLimiter($Class* clazz) {
	return $of($alloc(SoftLimiter));
}

void SoftLimiter::init$() {
	this->lastmax = (float)0;
	this->gain = (float)1;
	this->mix = false;
	this->silentcounter = (double)0;
}

void SoftLimiter::init(float samplerate, float controlrate) {
	this->controlrate = controlrate;
}

void SoftLimiter::setInput(int32_t pin, $SoftAudioBuffer* input) {
	if (pin == 0) {
		$set(this, bufferL, input);
	}
	if (pin == 1) {
		$set(this, bufferR, input);
	}
}

void SoftLimiter::setOutput(int32_t pin, $SoftAudioBuffer* output) {
	if (pin == 0) {
		$set(this, bufferLout, output);
	}
	if (pin == 1) {
		$set(this, bufferRout, output);
	}
}

void SoftLimiter::setMixMode(bool mix) {
	this->mix = mix;
}

void SoftLimiter::globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) {
}

void SoftLimiter::processAudio() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->bufferL)->isSilent();
	if (var$0 && (this->bufferR == nullptr || $nc(this->bufferR)->isSilent())) {
		this->silentcounter += 1 / this->controlrate;
		if (this->silentcounter > 60) {
			if (!this->mix) {
				$nc(this->bufferLout)->clear();
				if (this->bufferRout != nullptr) {
					$nc(this->bufferRout)->clear();
				}
			}
			return;
		}
	} else {
		this->silentcounter = (double)0;
	}
	$var($floats, bufferL, $nc(this->bufferL)->array());
	$var($floats, bufferR, this->bufferR == nullptr ? ($floats*)nullptr : $nc(this->bufferR)->array());
	$var($floats, bufferLout, $nc(this->bufferLout)->array());
	$var($floats, bufferRout, this->bufferRout == nullptr ? ($floats*)nullptr : $nc(this->bufferRout)->array());
	if (this->temp_bufferL == nullptr || $nc(this->temp_bufferL)->length < $nc(bufferL)->length) {
		$set(this, temp_bufferL, $new($floats, bufferL->length));
	}
	if (bufferR != nullptr) {
		if (this->temp_bufferR == nullptr || $nc(this->temp_bufferR)->length < bufferR->length) {
			$set(this, temp_bufferR, $new($floats, bufferR->length));
		}
	}
	float max = (float)0;
	int32_t len = $nc(bufferL)->length;
	if (bufferR == nullptr) {
		for (int32_t i = 0; i < len; ++i) {
			if (bufferL->get(i) > max) {
				max = bufferL->get(i);
			}
			if (-bufferL->get(i) > max) {
				max = -bufferL->get(i);
			}
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			if (bufferL->get(i) > max) {
				max = bufferL->get(i);
			}
			if ($nc(bufferR)->get(i) > max) {
				max = bufferR->get(i);
			}
			if (-bufferL->get(i) > max) {
				max = -bufferL->get(i);
			}
			if (-$nc(bufferR)->get(i) > max) {
				max = -bufferR->get(i);
			}
		}
	}
	float lmax = this->lastmax;
	this->lastmax = max;
	if (lmax > max) {
		max = lmax;
	}
	float newgain = (float)1;
	if (max > 0.99f) {
		newgain = 0.99f / max;
	} else {
		newgain = (float)1;
	}
	if (newgain > this->gain) {
		newgain = (newgain + this->gain * 9) / 10.0f;
	}
	float gaindelta = (newgain - this->gain) / len;
	if (this->mix) {
		if (bufferR == nullptr) {
			for (int32_t i = 0; i < len; ++i) {
				this->gain += gaindelta;
				float bL = bufferL->get(i);
				float tL = $nc(this->temp_bufferL)->get(i);
				$nc(this->temp_bufferL)->set(i, bL);
				(*$nc(bufferLout))[i] += tL * this->gain;
			}
		} else {
			for (int32_t i = 0; i < len; ++i) {
				this->gain += gaindelta;
				float bL = bufferL->get(i);
				float bR = $nc(bufferR)->get(i);
				float tL = $nc(this->temp_bufferL)->get(i);
				float tR = $nc(this->temp_bufferR)->get(i);
				$nc(this->temp_bufferL)->set(i, bL);
				$nc(this->temp_bufferR)->set(i, bR);
				(*$nc(bufferLout))[i] += tL * this->gain;
				(*$nc(bufferRout))[i] += tR * this->gain;
			}
		}
	} else if (bufferR == nullptr) {
		for (int32_t i = 0; i < len; ++i) {
			this->gain += gaindelta;
			float bL = bufferL->get(i);
			float tL = $nc(this->temp_bufferL)->get(i);
			$nc(this->temp_bufferL)->set(i, bL);
			$nc(bufferLout)->set(i, tL * this->gain);
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			this->gain += gaindelta;
			float bL = bufferL->get(i);
			float bR = $nc(bufferR)->get(i);
			float tL = $nc(this->temp_bufferL)->get(i);
			float tR = $nc(this->temp_bufferR)->get(i);
			$nc(this->temp_bufferL)->set(i, bL);
			$nc(this->temp_bufferR)->set(i, bR);
			$nc(bufferLout)->set(i, tL * this->gain);
			$nc(bufferRout)->set(i, tR * this->gain);
		}
	}
	this->gain = newgain;
}

void SoftLimiter::processControlLogic() {
}

SoftLimiter::SoftLimiter() {
}

$Class* SoftLimiter::load$($String* name, bool initialize) {
	$loadClass(SoftLimiter, name, initialize, &_SoftLimiter_ClassInfo_, allocate$SoftLimiter);
	return class$;
}

$Class* SoftLimiter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com