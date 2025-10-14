#include <com/sun/media/sound/SoftReverb.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftReverb$AllPass.h>
#include <com/sun/media/sound/SoftReverb$Comb.h>
#include <com/sun/media/sound/SoftReverb$Delay.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef PI

using $SoftReverb$AllPassArray = $Array<::com::sun::media::sound::SoftReverb$AllPass>;
using $SoftReverb$CombArray = $Array<::com::sun::media::sound::SoftReverb$Comb>;
using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftAudioProcessor = ::com::sun::media::sound::SoftAudioProcessor;
using $SoftReverb$AllPass = ::com::sun::media::sound::SoftReverb$AllPass;
using $SoftReverb$Comb = ::com::sun::media::sound::SoftReverb$Comb;
using $SoftReverb$Delay = ::com::sun::media::sound::SoftReverb$Delay;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftReverb_FieldInfo_[] = {
	{"roomsize", "F", nullptr, $PRIVATE, $field(SoftReverb, roomsize)},
	{"damp", "F", nullptr, $PRIVATE, $field(SoftReverb, damp)},
	{"gain", "F", nullptr, $PRIVATE, $field(SoftReverb, gain)},
	{"delay", "Lcom/sun/media/sound/SoftReverb$Delay;", nullptr, $PRIVATE, $field(SoftReverb, delay)},
	{"combL", "[Lcom/sun/media/sound/SoftReverb$Comb;", nullptr, $PRIVATE, $field(SoftReverb, combL)},
	{"combR", "[Lcom/sun/media/sound/SoftReverb$Comb;", nullptr, $PRIVATE, $field(SoftReverb, combR)},
	{"allpassL", "[Lcom/sun/media/sound/SoftReverb$AllPass;", nullptr, $PRIVATE, $field(SoftReverb, allpassL)},
	{"allpassR", "[Lcom/sun/media/sound/SoftReverb$AllPass;", nullptr, $PRIVATE, $field(SoftReverb, allpassR)},
	{"input", "[F", nullptr, $PRIVATE, $field(SoftReverb, input)},
	{"out", "[F", nullptr, $PRIVATE, $field(SoftReverb, out)},
	{"pre1", "[F", nullptr, $PRIVATE, $field(SoftReverb, pre1)},
	{"pre2", "[F", nullptr, $PRIVATE, $field(SoftReverb, pre2)},
	{"pre3", "[F", nullptr, $PRIVATE, $field(SoftReverb, pre3)},
	{"denormal_flip", "Z", nullptr, $PRIVATE, $field(SoftReverb, denormal_flip)},
	{"mix", "Z", nullptr, $PRIVATE, $field(SoftReverb, mix)},
	{"inputA", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftReverb, inputA)},
	{"left", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftReverb, left)},
	{"right", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftReverb, right)},
	{"dirty", "Z", nullptr, $PRIVATE, $field(SoftReverb, dirty)},
	{"dirty_roomsize", "F", nullptr, $PRIVATE, $field(SoftReverb, dirty_roomsize)},
	{"dirty_damp", "F", nullptr, $PRIVATE, $field(SoftReverb, dirty_damp)},
	{"dirty_predelay", "F", nullptr, $PRIVATE, $field(SoftReverb, dirty_predelay)},
	{"dirty_gain", "F", nullptr, $PRIVATE, $field(SoftReverb, dirty_gain)},
	{"samplerate", "F", nullptr, $PRIVATE, $field(SoftReverb, samplerate)},
	{"light", "Z", nullptr, $PRIVATE, $field(SoftReverb, light)},
	{"silent", "Z", nullptr, $PRIVATE, $field(SoftReverb, silent)},
	{}
};

$MethodInfo _SoftReverb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)()>(&SoftReverb::init$))},
	{"globalParameterControlChange", "([IJJ)V", nullptr, $PUBLIC},
	{"init", "(FF)V", nullptr, $PUBLIC},
	{"processAudio", "()V", nullptr, $PUBLIC},
	{"processControlLogic", "()V", nullptr, $PUBLIC},
	{"setDamp", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)(float)>(&SoftReverb::setDamp))},
	{"setGain", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)(float)>(&SoftReverb::setGain))},
	{"setInput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{"setLightMode", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)(bool)>(&SoftReverb::setLightMode))},
	{"setMixMode", "(Z)V", nullptr, $PUBLIC},
	{"setOutput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{"setPreDelay", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)(float)>(&SoftReverb::setPreDelay))},
	{"setRoomSize", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb::*)(float)>(&SoftReverb::setRoomSize))},
	{}
};

$InnerClassInfo _SoftReverb_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftReverb$Comb", "com.sun.media.sound.SoftReverb", "Comb", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.SoftReverb$AllPass", "com.sun.media.sound.SoftReverb", "AllPass", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.SoftReverb$Delay", "com.sun.media.sound.SoftReverb", "Delay", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReverb_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftReverb",
	"java.lang.Object",
	"com.sun.media.sound.SoftAudioProcessor",
	_SoftReverb_FieldInfo_,
	_SoftReverb_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReverb_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftReverb$Comb,com.sun.media.sound.SoftReverb$AllPass,com.sun.media.sound.SoftReverb$Delay"
};

$Object* allocate$SoftReverb($Class* clazz) {
	return $of($alloc(SoftReverb));
}

void SoftReverb::init$() {
	this->gain = (float)1;
	this->denormal_flip = false;
	this->mix = true;
	this->dirty = true;
	this->light = true;
	this->silent = true;
}

void SoftReverb::init(float samplerate, float controlrate) {
	this->samplerate = samplerate;
	double freqscale = ((double)samplerate) / 44100.0;
	int32_t stereospread = 23;
	$set(this, delay, $new($SoftReverb$Delay));
	$set(this, combL, $new($SoftReverb$CombArray, 8));
	$set(this, combR, $new($SoftReverb$CombArray, 8));
	$nc(this->combL)->set(0, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1116)))));
	$nc(this->combR)->set(0, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1116 + stereospread)))));
	$nc(this->combL)->set(1, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1188)))));
	$nc(this->combR)->set(1, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1188 + stereospread)))));
	$nc(this->combL)->set(2, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1277)))));
	$nc(this->combR)->set(2, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1277 + stereospread)))));
	$nc(this->combL)->set(3, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1356)))));
	$nc(this->combR)->set(3, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1356 + stereospread)))));
	$nc(this->combL)->set(4, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1422)))));
	$nc(this->combR)->set(4, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1422 + stereospread)))));
	$nc(this->combL)->set(5, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1491)))));
	$nc(this->combR)->set(5, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1491 + stereospread)))));
	$nc(this->combL)->set(6, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1557)))));
	$nc(this->combR)->set(6, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1557 + stereospread)))));
	$nc(this->combL)->set(7, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1617)))));
	$nc(this->combR)->set(7, $$new($SoftReverb$Comb, $cast(int32_t, (freqscale * (1617 + stereospread)))));
	$set(this, allpassL, $new($SoftReverb$AllPassArray, 4));
	$set(this, allpassR, $new($SoftReverb$AllPassArray, 4));
	$nc(this->allpassL)->set(0, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (556)))));
	$nc(this->allpassR)->set(0, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (556 + stereospread)))));
	$nc(this->allpassL)->set(1, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (441)))));
	$nc(this->allpassR)->set(1, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (441 + stereospread)))));
	$nc(this->allpassL)->set(2, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (341)))));
	$nc(this->allpassR)->set(2, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (341 + stereospread)))));
	$nc(this->allpassL)->set(3, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (225)))));
	$nc(this->allpassR)->set(3, $$new($SoftReverb$AllPass, $cast(int32_t, (freqscale * (225 + stereospread)))));
	for (int32_t i = 0; i < $nc(this->allpassL)->length; ++i) {
		$nc($nc(this->allpassL)->get(i))->setFeedBack(0.5f);
		$nc($nc(this->allpassR)->get(i))->setFeedBack(0.5f);
	}
	globalParameterControlChange($$new($ints, {1 * 128 + 1}), 0, 4);
}

void SoftReverb::setInput(int32_t pin, $SoftAudioBuffer* input) {
	if (pin == 0) {
		$set(this, inputA, input);
	}
}

void SoftReverb::setOutput(int32_t pin, $SoftAudioBuffer* output) {
	if (pin == 0) {
		$set(this, left, output);
	}
	if (pin == 1) {
		$set(this, right, output);
	}
}

void SoftReverb::setMixMode(bool mix) {
	this->mix = mix;
}

void SoftReverb::processAudio() {
	bool silent_input = $nc(this->inputA)->isSilent();
	if (!silent_input) {
		this->silent = false;
	}
	if (this->silent) {
		if (!this->mix) {
			$nc(this->left)->clear();
			$nc(this->right)->clear();
		}
		return;
	}
	$var($floats, inputA, $nc(this->inputA)->array());
	$var($floats, left, $nc(this->left)->array());
	$var($floats, right, this->right == nullptr ? ($floats*)nullptr : $nc(this->right)->array());
	int32_t numsamples = $nc(inputA)->length;
	if (this->input == nullptr || $nc(this->input)->length < numsamples) {
		$set(this, input, $new($floats, numsamples));
	}
	float again = this->gain * 0.018f / 2;
	this->denormal_flip = !this->denormal_flip;
	if (this->denormal_flip) {
		for (int32_t i = 0; i < numsamples; ++i) {
			$nc(this->input)->set(i, inputA->get(i) * again + 1.0E-20f);
		}
	} else {
		for (int32_t i = 0; i < numsamples; ++i) {
			$nc(this->input)->set(i, inputA->get(i) * again - 1.0E-20f);
		}
	}
	$nc(this->delay)->processReplace(this->input);
	if (this->light && (right != nullptr)) {
		if (this->pre1 == nullptr || $nc(this->pre1)->length < numsamples) {
			$set(this, pre1, $new($floats, numsamples));
			$set(this, pre2, $new($floats, numsamples));
			$set(this, pre3, $new($floats, numsamples));
		}
		for (int32_t i = 0; i < $nc(this->allpassL)->length; ++i) {
			$nc($nc(this->allpassL)->get(i))->processReplace(this->input);
		}
		$nc($nc(this->combL)->get(0))->processReplace(this->input, this->pre3);
		$nc($nc(this->combL)->get(1))->processReplace(this->input, this->pre3);
		$nc($nc(this->combL)->get(2))->processReplace(this->input, this->pre1);
		for (int32_t i = 4; i < $nc(this->combL)->length - 2; i += 2) {
			$nc($nc(this->combL)->get(i))->processMix(this->input, this->pre1);
		}
		$nc($nc(this->combL)->get(3))->processReplace(this->input, this->pre2);
		for (int32_t i = 5; i < $nc(this->combL)->length - 2; i += 2) {
			$nc($nc(this->combL)->get(i))->processMix(this->input, this->pre2);
		}
		if (!this->mix) {
			$Arrays::fill(right, (float)0);
			$Arrays::fill(left, (float)0);
		}
		for (int32_t i = $nc(this->combR)->length - 2; i < $nc(this->combR)->length; ++i) {
			$nc($nc(this->combR)->get(i))->processMix(this->input, right);
		}
		for (int32_t i = $nc(this->combL)->length - 2; i < $nc(this->combL)->length; ++i) {
			$nc($nc(this->combL)->get(i))->processMix(this->input, left);
		}
		for (int32_t i = 0; i < numsamples; ++i) {
			float p = $nc(this->pre1)->get(i) - $nc(this->pre2)->get(i);
			float m = $nc(this->pre3)->get(i);
			(*$nc(left))[i] += m + p;
			(*right)[i] += m - p;
		}
	} else {
		if (this->out == nullptr || $nc(this->out)->length < numsamples) {
			$set(this, out, $new($floats, numsamples));
		}
		if (right != nullptr) {
			if (!this->mix) {
				$Arrays::fill(right, (float)0);
			}
			$nc($nc(this->allpassR)->get(0))->processReplace(this->input, this->out);
			for (int32_t i = 1; i < $nc(this->allpassR)->length; ++i) {
				$nc($nc(this->allpassR)->get(i))->processReplace(this->out);
			}
			for (int32_t i = 0; i < $nc(this->combR)->length; ++i) {
				$nc($nc(this->combR)->get(i))->processMix(this->out, right);
			}
		}
		if (!this->mix) {
			$Arrays::fill(left, (float)0);
		}
		$nc($nc(this->allpassL)->get(0))->processReplace(this->input, this->out);
		for (int32_t i = 1; i < $nc(this->allpassL)->length; ++i) {
			$nc($nc(this->allpassL)->get(i))->processReplace(this->out);
		}
		for (int32_t i = 0; i < $nc(this->combL)->length; ++i) {
			$nc($nc(this->combL)->get(i))->processMix(this->out, left);
		}
	}
	if (silent_input) {
		this->silent = true;
		for (int32_t i = 0; i < numsamples; ++i) {
			float v = $nc(left)->get(i);
			if (v > 1.0E-10 || v < -1.0E-10) {
				this->silent = false;
				break;
			}
		}
	}
}

void SoftReverb::globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) {
	if ($nc(slothpath)->length == 1) {
		if (slothpath->get(0) == 1 * 128 + 1) {
			if (param == 0) {
				if (value == 0) {
					this->dirty_roomsize = (1.1f);
					this->dirty_damp = ((float)5000);
					this->dirty_predelay = ((float)0);
					this->dirty_gain = ((float)4);
					this->dirty = true;
				}
				if (value == 1) {
					this->dirty_roomsize = (1.3f);
					this->dirty_damp = ((float)5000);
					this->dirty_predelay = ((float)0);
					this->dirty_gain = ((float)3);
					this->dirty = true;
				}
				if (value == 2) {
					this->dirty_roomsize = (1.5f);
					this->dirty_damp = ((float)5000);
					this->dirty_predelay = ((float)0);
					this->dirty_gain = ((float)2);
					this->dirty = true;
				}
				if (value == 3) {
					this->dirty_roomsize = (1.8f);
					this->dirty_damp = ((float)24000);
					this->dirty_predelay = (0.02f);
					this->dirty_gain = (1.5f);
					this->dirty = true;
				}
				if (value == 4) {
					this->dirty_roomsize = (1.8f);
					this->dirty_damp = ((float)24000);
					this->dirty_predelay = (0.03f);
					this->dirty_gain = (1.5f);
					this->dirty = true;
				}
				if (value == 8) {
					this->dirty_roomsize = (1.3f);
					this->dirty_damp = ((float)2500);
					this->dirty_predelay = ((float)0);
					this->dirty_gain = ((float)6);
					this->dirty = true;
				}
			} else if (param == 1) {
				this->dirty_roomsize = ((float)($Math::exp((value - 40) * 0.025)));
				this->dirty = true;
			}
		}
	}
}

void SoftReverb::processControlLogic() {
	if (this->dirty) {
		this->dirty = false;
		setRoomSize(this->dirty_roomsize);
		setDamp(this->dirty_damp);
		setPreDelay(this->dirty_predelay);
		setGain(this->dirty_gain);
	}
}

void SoftReverb::setRoomSize(float value) {
	this->roomsize = 1 - (0.17f / value);
	for (int32_t i = 0; i < $nc(this->combL)->length; ++i) {
		$nc($nc(this->combL)->get(i))->feedback = this->roomsize;
		$nc($nc(this->combR)->get(i))->feedback = this->roomsize;
	}
}

void SoftReverb::setPreDelay(float value) {
	$nc(this->delay)->setDelay($cast(int32_t, (value * this->samplerate)));
}

void SoftReverb::setGain(float gain) {
	this->gain = gain;
}

void SoftReverb::setDamp(float value) {
	$init($Math);
	double x = (value / this->samplerate) * (2 * $Math::PI);
	double cx = 2 - $Math::cos(x);
	this->damp = (float)(cx - $Math::sqrt(cx * cx - 1));
	if (this->damp > 1) {
		this->damp = (float)1;
	}
	if (this->damp < 0) {
		this->damp = (float)0;
	}
	for (int32_t i = 0; i < $nc(this->combL)->length; ++i) {
		$nc($nc(this->combL)->get(i))->setDamp(this->damp);
		$nc($nc(this->combR)->get(i))->setDamp(this->damp);
	}
}

void SoftReverb::setLightMode(bool light) {
	this->light = light;
}

SoftReverb::SoftReverb() {
}

$Class* SoftReverb::load$($String* name, bool initialize) {
	$loadClass(SoftReverb, name, initialize, &_SoftReverb_ClassInfo_, allocate$SoftReverb);
	return class$;
}

$Class* SoftReverb::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com