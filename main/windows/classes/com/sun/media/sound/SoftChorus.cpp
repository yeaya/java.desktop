#include <com/sun/media/sound/SoftChorus.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftChorus$LFODelay.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef PI

using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $SoftAudioProcessor = ::com::sun::media::sound::SoftAudioProcessor;
using $SoftChorus$LFODelay = ::com::sun::media::sound::SoftChorus$LFODelay;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChorus_FieldInfo_[] = {
	{"mix", "Z", nullptr, $PRIVATE, $field(SoftChorus, mix)},
	{"inputA", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftChorus, inputA)},
	{"left", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftChorus, left)},
	{"right", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftChorus, right)},
	{"reverb", "Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, $PRIVATE, $field(SoftChorus, reverb)},
	{"vdelay1L", "Lcom/sun/media/sound/SoftChorus$LFODelay;", nullptr, $PRIVATE, $field(SoftChorus, vdelay1L)},
	{"vdelay1R", "Lcom/sun/media/sound/SoftChorus$LFODelay;", nullptr, $PRIVATE, $field(SoftChorus, vdelay1R)},
	{"rgain", "F", nullptr, $PRIVATE, $field(SoftChorus, rgain)},
	{"dirty", "Z", nullptr, $PRIVATE, $field(SoftChorus, dirty)},
	{"dirty_vdelay1L_rate", "D", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1L_rate)},
	{"dirty_vdelay1R_rate", "D", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1R_rate)},
	{"dirty_vdelay1L_depth", "D", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1L_depth)},
	{"dirty_vdelay1R_depth", "D", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1R_depth)},
	{"dirty_vdelay1L_feedback", "F", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1L_feedback)},
	{"dirty_vdelay1R_feedback", "F", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1R_feedback)},
	{"dirty_vdelay1L_reverbsendgain", "F", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1L_reverbsendgain)},
	{"dirty_vdelay1R_reverbsendgain", "F", nullptr, $PRIVATE, $field(SoftChorus, dirty_vdelay1R_reverbsendgain)},
	{"controlrate", "F", nullptr, $PRIVATE, $field(SoftChorus, controlrate)},
	{"silentcounter", "D", nullptr, 0, $field(SoftChorus, silentcounter)},
	{}
};

$MethodInfo _SoftChorus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftChorus::*)()>(&SoftChorus::init$))},
	{"globalParameterControlChange", "([IJJ)V", nullptr, $PUBLIC},
	{"init", "(FF)V", nullptr, $PUBLIC},
	{"processAudio", "()V", nullptr, $PUBLIC},
	{"processControlLogic", "()V", nullptr, $PUBLIC},
	{"setInput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{"setMixMode", "(Z)V", nullptr, $PUBLIC},
	{"setOutput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftChorus_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChorus$LFODelay", "com.sun.media.sound.SoftChorus", "LFODelay", $PRIVATE | $STATIC},
	{"com.sun.media.sound.SoftChorus$VariableDelay", "com.sun.media.sound.SoftChorus", "VariableDelay", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftChorus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftChorus",
	"java.lang.Object",
	"com.sun.media.sound.SoftAudioProcessor",
	_SoftChorus_FieldInfo_,
	_SoftChorus_MethodInfo_,
	nullptr,
	nullptr,
	_SoftChorus_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChorus$LFODelay,com.sun.media.sound.SoftChorus$VariableDelay"
};

$Object* allocate$SoftChorus($Class* clazz) {
	return $of($alloc(SoftChorus));
}

void SoftChorus::init$() {
	this->mix = true;
	this->rgain = (float)0;
	this->dirty = true;
	this->silentcounter = (double)1000;
}

void SoftChorus::init(float samplerate, float controlrate) {
	this->controlrate = controlrate;
	$set(this, vdelay1L, $new($SoftChorus$LFODelay, samplerate, controlrate));
	$set(this, vdelay1R, $new($SoftChorus$LFODelay, samplerate, controlrate));
	$nc(this->vdelay1L)->setGain(1.0f);
	$nc(this->vdelay1R)->setGain(1.0f);
	$init($Math);
	$nc(this->vdelay1L)->setPhase(0.5 * $Math::PI);
	$nc(this->vdelay1R)->setPhase((double)0);
	globalParameterControlChange($$new($ints, {1 * 128 + 2}), 0, 2);
}

void SoftChorus::globalParameterControlChange($ints* slothpath, int64_t param, int64_t value) {
	if ($nc(slothpath)->length == 1) {
		if (slothpath->get(0) == 1 * 128 + 2) {
			if (param == 0) {
				switch ((int32_t)value) {
				case 0:
					{
						globalParameterControlChange(slothpath, 3, 0);
						globalParameterControlChange(slothpath, 1, 3);
						globalParameterControlChange(slothpath, 2, 5);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				case 1:
					{
						globalParameterControlChange(slothpath, 3, 5);
						globalParameterControlChange(slothpath, 1, 9);
						globalParameterControlChange(slothpath, 2, 19);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				case 2:
					{
						globalParameterControlChange(slothpath, 3, 8);
						globalParameterControlChange(slothpath, 1, 3);
						globalParameterControlChange(slothpath, 2, 19);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				case 3:
					{
						globalParameterControlChange(slothpath, 3, 16);
						globalParameterControlChange(slothpath, 1, 9);
						globalParameterControlChange(slothpath, 2, 16);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				case 4:
					{
						globalParameterControlChange(slothpath, 3, 64);
						globalParameterControlChange(slothpath, 1, 2);
						globalParameterControlChange(slothpath, 2, 24);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				case 5:
					{
						globalParameterControlChange(slothpath, 3, 112);
						globalParameterControlChange(slothpath, 1, 1);
						globalParameterControlChange(slothpath, 2, 5);
						globalParameterControlChange(slothpath, 4, 0);
						break;
					}
				default:
					{
						break;
					}
				}
			} else if (param == 1) {
				this->dirty_vdelay1L_rate = (value * 0.122);
				this->dirty_vdelay1R_rate = (value * 0.122);
				this->dirty = true;
			} else if (param == 2) {
				this->dirty_vdelay1L_depth = ((value + 1) / 3200.0);
				this->dirty_vdelay1R_depth = ((value + 1) / 3200.0);
				this->dirty = true;
			} else if (param == 3) {
				this->dirty_vdelay1L_feedback = (value * 0.00763f);
				this->dirty_vdelay1R_feedback = (value * 0.00763f);
				this->dirty = true;
			}
			if (param == 4) {
				this->rgain = value * 0.00787f;
				this->dirty_vdelay1L_reverbsendgain = (value * 0.00787f);
				this->dirty_vdelay1R_reverbsendgain = (value * 0.00787f);
				this->dirty = true;
			}
		}
	}
}

void SoftChorus::processControlLogic() {
	if (this->dirty) {
		this->dirty = false;
		$nc(this->vdelay1L)->setRate(this->dirty_vdelay1L_rate);
		$nc(this->vdelay1R)->setRate(this->dirty_vdelay1R_rate);
		$nc(this->vdelay1L)->setDepth(this->dirty_vdelay1L_depth);
		$nc(this->vdelay1R)->setDepth(this->dirty_vdelay1R_depth);
		$nc(this->vdelay1L)->setFeedBack(this->dirty_vdelay1L_feedback);
		$nc(this->vdelay1R)->setFeedBack(this->dirty_vdelay1R_feedback);
		$nc(this->vdelay1L)->setReverbSendGain(this->dirty_vdelay1L_reverbsendgain);
		$nc(this->vdelay1R)->setReverbSendGain(this->dirty_vdelay1R_reverbsendgain);
	}
}

void SoftChorus::processAudio() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->inputA)->isSilent()) {
		this->silentcounter += 1 / this->controlrate;
		if (this->silentcounter > 1) {
			if (!this->mix) {
				$nc(this->left)->clear();
				$nc(this->right)->clear();
			}
			return;
		}
	} else {
		this->silentcounter = (double)0;
	}
	$var($floats, inputA, $nc(this->inputA)->array());
	$var($floats, left, $nc(this->left)->array());
	$var($floats, right, this->right == nullptr ? ($floats*)nullptr : $nc(this->right)->array());
	$var($floats, reverb, this->rgain != 0 ? $nc(this->reverb)->array() : ($floats*)nullptr);
	if (this->mix) {
		$nc(this->vdelay1L)->processMix(inputA, left, reverb);
		if (right != nullptr) {
			$nc(this->vdelay1R)->processMix(inputA, right, reverb);
		}
	} else {
		$nc(this->vdelay1L)->processReplace(inputA, left, reverb);
		if (right != nullptr) {
			$nc(this->vdelay1R)->processReplace(inputA, right, reverb);
		}
	}
}

void SoftChorus::setInput(int32_t pin, $SoftAudioBuffer* input) {
	if (pin == 0) {
		$set(this, inputA, input);
	}
}

void SoftChorus::setMixMode(bool mix) {
	this->mix = mix;
}

void SoftChorus::setOutput(int32_t pin, $SoftAudioBuffer* output) {
	if (pin == 0) {
		$set(this, left, output);
	}
	if (pin == 1) {
		$set(this, right, output);
	}
	if (pin == 2) {
		$set(this, reverb, output);
	}
}

SoftChorus::SoftChorus() {
}

$Class* SoftChorus::load$($String* name, bool initialize) {
	$loadClass(SoftChorus, name, initialize, &_SoftChorus_ClassInfo_, allocate$SoftChorus);
	return class$;
}

$Class* SoftChorus::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com