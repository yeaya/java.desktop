#include <com/sun/media/sound/SoftMixingDataLine.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMixingDataLine$1.h>
#include <com/sun/media/sound/SoftMixingDataLine$ApplyReverb.h>
#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
#include <com/sun/media/sound/SoftMixingDataLine$ChorusSend.h>
#include <com/sun/media/sound/SoftMixingDataLine$Gain.h>
#include <com/sun/media/sound/SoftMixingDataLine$Mute.h>
#include <com/sun/media/sound/SoftMixingDataLine$Pan.h>
#include <com/sun/media/sound/SoftMixingDataLine$ReverbSend.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

#undef CHORUS_SEND

using $SoftAudioBufferArray = $Array<::com::sun::media::sound::SoftAudioBuffer>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $LineListenerArray = $Array<::javax::sound::sampled::LineListener>;
using $SoftMixingDataLine$1 = ::com::sun::media::sound::SoftMixingDataLine$1;
using $SoftMixingDataLine$ApplyReverb = ::com::sun::media::sound::SoftMixingDataLine$ApplyReverb;
using $SoftMixingDataLine$Balance = ::com::sun::media::sound::SoftMixingDataLine$Balance;
using $SoftMixingDataLine$ChorusSend = ::com::sun::media::sound::SoftMixingDataLine$ChorusSend;
using $SoftMixingDataLine$Gain = ::com::sun::media::sound::SoftMixingDataLine$Gain;
using $SoftMixingDataLine$Mute = ::com::sun::media::sound::SoftMixingDataLine$Mute;
using $SoftMixingDataLine$Pan = ::com::sun::media::sound::SoftMixingDataLine$Pan;
using $SoftMixingDataLine$ReverbSend = ::com::sun::media::sound::SoftMixingDataLine$ReverbSend;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $BooleanControl = ::javax::sound::sampled::BooleanControl;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine = ::javax::sound::sampled::DataLine;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingDataLine_FieldInfo_[] = {
	{"CHORUS_SEND", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SoftMixingDataLine, CHORUS_SEND)},
	{"gain_control", "Lcom/sun/media/sound/SoftMixingDataLine$Gain;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, gain_control)},
	{"mute_control", "Lcom/sun/media/sound/SoftMixingDataLine$Mute;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, mute_control)},
	{"balance_control", "Lcom/sun/media/sound/SoftMixingDataLine$Balance;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, balance_control)},
	{"pan_control", "Lcom/sun/media/sound/SoftMixingDataLine$Pan;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, pan_control)},
	{"reverbsend_control", "Lcom/sun/media/sound/SoftMixingDataLine$ReverbSend;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, reverbsend_control)},
	{"chorussend_control", "Lcom/sun/media/sound/SoftMixingDataLine$ChorusSend;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, chorussend_control)},
	{"apply_reverb", "Lcom/sun/media/sound/SoftMixingDataLine$ApplyReverb;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, apply_reverb)},
	{"controls", "[Ljavax/sound/sampled/Control;", nullptr, $PRIVATE | $FINAL, $field(SoftMixingDataLine, controls)},
	{"leftgain", "F", nullptr, 0, $field(SoftMixingDataLine, leftgain)},
	{"rightgain", "F", nullptr, 0, $field(SoftMixingDataLine, rightgain)},
	{"eff1gain", "F", nullptr, 0, $field(SoftMixingDataLine, eff1gain)},
	{"eff2gain", "F", nullptr, 0, $field(SoftMixingDataLine, eff2gain)},
	{"listeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/sampled/LineListener;>;", 0, $field(SoftMixingDataLine, listeners)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $FINAL, $field(SoftMixingDataLine, control_mutex)},
	{"mixer", "Lcom/sun/media/sound/SoftMixingMixer;", nullptr, 0, $field(SoftMixingDataLine, mixer)},
	{"info", "Ljavax/sound/sampled/DataLine$Info;", nullptr, 0, $field(SoftMixingDataLine, info)},
	{}
};

$MethodInfo _SoftMixingDataLine_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingMixer;Ljavax/sound/sampled/DataLine$Info;)V", nullptr, 0, $method(static_cast<void(SoftMixingDataLine::*)($SoftMixingMixer*,$DataLine$Info*)>(&SoftMixingDataLine::init$))},
	{"addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"calcVolume", "()V", nullptr, $FINAL, $method(static_cast<void(SoftMixingDataLine::*)()>(&SoftMixingDataLine::calcVolume))},
	{"getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"processAudioLogic", "([Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"processControlLogic", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"sendEvent", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $FINAL, $method(static_cast<void(SoftMixingDataLine::*)($LineEvent*)>(&SoftMixingDataLine::sendEvent))},
	{}
};

$InnerClassInfo _SoftMixingDataLine_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$ChorusSend", "com.sun.media.sound.SoftMixingDataLine", "ChorusSend", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$ReverbSend", "com.sun.media.sound.SoftMixingDataLine", "ReverbSend", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$Pan", "com.sun.media.sound.SoftMixingDataLine", "Pan", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$Balance", "com.sun.media.sound.SoftMixingDataLine", "Balance", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$ApplyReverb", "com.sun.media.sound.SoftMixingDataLine", "ApplyReverb", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$Mute", "com.sun.media.sound.SoftMixingDataLine", "Mute", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$Gain", "com.sun.media.sound.SoftMixingDataLine", "Gain", $PRIVATE | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$AudioFloatInputStreamResampler", "com.sun.media.sound.SoftMixingDataLine", "AudioFloatInputStreamResampler", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.media.sound.SoftMixingDataLine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMixingDataLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.SoftMixingDataLine",
	"java.lang.Object",
	"javax.sound.sampled.DataLine",
	_SoftMixingDataLine_FieldInfo_,
	_SoftMixingDataLine_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine$ChorusSend,com.sun.media.sound.SoftMixingDataLine$ReverbSend,com.sun.media.sound.SoftMixingDataLine$Pan,com.sun.media.sound.SoftMixingDataLine$Balance,com.sun.media.sound.SoftMixingDataLine$ApplyReverb,com.sun.media.sound.SoftMixingDataLine$Mute,com.sun.media.sound.SoftMixingDataLine$Gain,com.sun.media.sound.SoftMixingDataLine$AudioFloatInputStreamResampler,com.sun.media.sound.SoftMixingDataLine$1"
};

$Object* allocate$SoftMixingDataLine($Class* clazz) {
	return $of($alloc(SoftMixingDataLine));
}

$FloatControl$Type* SoftMixingDataLine::CHORUS_SEND = nullptr;

void SoftMixingDataLine::init$($SoftMixingMixer* mixer, $DataLine$Info* info) {
	$set(this, gain_control, $new($SoftMixingDataLine$Gain, this));
	$set(this, mute_control, $new($SoftMixingDataLine$Mute, this));
	$set(this, balance_control, $new($SoftMixingDataLine$Balance, this));
	$set(this, pan_control, $new($SoftMixingDataLine$Pan, this));
	$set(this, reverbsend_control, $new($SoftMixingDataLine$ReverbSend, this));
	$set(this, chorussend_control, $new($SoftMixingDataLine$ChorusSend, this));
	$set(this, apply_reverb, $new($SoftMixingDataLine$ApplyReverb, this));
	this->leftgain = (float)1;
	this->rightgain = (float)1;
	this->eff1gain = (float)0;
	this->eff2gain = (float)0;
	$set(this, listeners, $new($ArrayList));
	$set(this, mixer, mixer);
	$set(this, info, info);
	$set(this, control_mutex, $nc(mixer)->control_mutex);
	$set(this, controls, $new($ControlArray, {
		static_cast<$Control*>(this->gain_control),
		static_cast<$Control*>(this->mute_control),
		static_cast<$Control*>(this->balance_control),
		static_cast<$Control*>(this->pan_control),
		static_cast<$Control*>(this->reverbsend_control),
		static_cast<$Control*>(this->chorussend_control),
		static_cast<$Control*>(this->apply_reverb)
	}));
	calcVolume();
}

void SoftMixingDataLine::calcVolume() {
	$synchronized(this->control_mutex) {
		double gain = $Math::pow(10.0, $nc(this->gain_control)->getValue() / 20.0);
		if ($nc(this->mute_control)->getValue()) {
			gain = (double)0;
		}
		this->leftgain = (float)gain;
		this->rightgain = (float)gain;
		if ($nc($($nc(this->mixer)->getFormat()))->getChannels() > 1) {
			double balance = $nc(this->balance_control)->getValue();
			if (balance > 0) {
				this->leftgain *= (1 - balance);
			} else {
				this->rightgain *= (1 + balance);
			}
		}
	}
	this->eff1gain = (float)$Math::pow(10.0, $nc(this->reverbsend_control)->getValue() / 20.0);
	this->eff2gain = (float)$Math::pow(10.0, $nc(this->chorussend_control)->getValue() / 20.0);
	if (!$nc(this->apply_reverb)->getValue()) {
		this->eff1gain = (float)0;
	}
}

void SoftMixingDataLine::sendEvent($LineEvent* event) {
	if ($nc(this->listeners)->size() == 0) {
		return;
	}
	$var($LineListenerArray, listener_array, $fcast($LineListenerArray, $nc(this->listeners)->toArray($$new($LineListenerArray, $nc(this->listeners)->size()))));
	{
		$var($LineListenerArray, arr$, listener_array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LineListener, listener, arr$->get(i$));
			{
				$nc(listener)->update(event);
			}
		}
	}
}

void SoftMixingDataLine::addLineListener($LineListener* listener) {
	$synchronized(this->control_mutex) {
		$nc(this->listeners)->add(listener);
	}
}

void SoftMixingDataLine::removeLineListener($LineListener* listener) {
	$synchronized(this->control_mutex) {
		$nc(this->listeners)->add(listener);
	}
}

$Line$Info* SoftMixingDataLine::getLineInfo() {
	return this->info;
}

$Control* SoftMixingDataLine::getControl($Control$Type* control) {
	if (control != nullptr) {
		for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
			if ($nc($nc(this->controls)->get(i))->getType() == control) {
				return $nc(this->controls)->get(i);
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Unsupported control type : "_s, control}));
}

$ControlArray* SoftMixingDataLine::getControls() {
	return $fcast($ControlArray, $Arrays::copyOf(this->controls, $nc(this->controls)->length));
}

bool SoftMixingDataLine::isControlSupported($Control$Type* control) {
	if (control != nullptr) {
		for (int32_t i = 0; i < $nc(this->controls)->length; ++i) {
			if ($nc($nc(this->controls)->get(i))->getType() == control) {
				return true;
			}
		}
	}
	return false;
}

void clinit$SoftMixingDataLine($Class* class$) {
	$assignStatic(SoftMixingDataLine::CHORUS_SEND, $new($SoftMixingDataLine$1, "Chorus Send"_s));
}

SoftMixingDataLine::SoftMixingDataLine() {
}

$Class* SoftMixingDataLine::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine, name, initialize, &_SoftMixingDataLine_ClassInfo_, clinit$SoftMixingDataLine, allocate$SoftMixingDataLine);
	return class$;
}

$Class* SoftMixingDataLine::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com