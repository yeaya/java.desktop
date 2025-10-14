#include <com/sun/media/sound/SoftChannelProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/MidiChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiChannel = ::javax::sound::midi::MidiChannel;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannelProxy_FieldInfo_[] = {
	{"channel", "Ljavax/sound/midi/MidiChannel;", nullptr, $PRIVATE, $field(SoftChannelProxy, channel)},
	{}
};

$MethodInfo _SoftChannelProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannelProxy::*)()>(&SoftChannelProxy::init$))},
	{"allNotesOff", "()V", nullptr, $PUBLIC},
	{"allSoundOff", "()V", nullptr, $PUBLIC},
	{"controlChange", "(II)V", nullptr, $PUBLIC},
	{"getChannel", "()Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC, $method(static_cast<$MidiChannel*(SoftChannelProxy::*)()>(&SoftChannelProxy::getChannel))},
	{"getChannelPressure", "()I", nullptr, $PUBLIC},
	{"getController", "(I)I", nullptr, $PUBLIC},
	{"getMono", "()Z", nullptr, $PUBLIC},
	{"getMute", "()Z", nullptr, $PUBLIC},
	{"getOmni", "()Z", nullptr, $PUBLIC},
	{"getPitchBend", "()I", nullptr, $PUBLIC},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC},
	{"getProgram", "()I", nullptr, $PUBLIC},
	{"getSolo", "()Z", nullptr, $PUBLIC},
	{"localControl", "(Z)Z", nullptr, $PUBLIC},
	{"noteOff", "(I)V", nullptr, $PUBLIC},
	{"noteOff", "(II)V", nullptr, $PUBLIC},
	{"noteOn", "(II)V", nullptr, $PUBLIC},
	{"programChange", "(I)V", nullptr, $PUBLIC},
	{"programChange", "(II)V", nullptr, $PUBLIC},
	{"resetAllControllers", "()V", nullptr, $PUBLIC},
	{"setChannel", "(Ljavax/sound/midi/MidiChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftChannelProxy::*)($MidiChannel*)>(&SoftChannelProxy::setChannel))},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC},
	{"setMono", "(Z)V", nullptr, $PUBLIC},
	{"setMute", "(Z)V", nullptr, $PUBLIC},
	{"setOmni", "(Z)V", nullptr, $PUBLIC},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC},
	{"setSolo", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftChannelProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftChannelProxy",
	"java.lang.Object",
	"javax.sound.midi.MidiChannel",
	_SoftChannelProxy_FieldInfo_,
	_SoftChannelProxy_MethodInfo_
};

$Object* allocate$SoftChannelProxy($Class* clazz) {
	return $of($alloc(SoftChannelProxy));
}

void SoftChannelProxy::init$() {
	$set(this, channel, nullptr);
}

$MidiChannel* SoftChannelProxy::getChannel() {
	return this->channel;
}

void SoftChannelProxy::setChannel($MidiChannel* channel) {
	$set(this, channel, channel);
}

void SoftChannelProxy::allNotesOff() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->allNotesOff();
}

void SoftChannelProxy::allSoundOff() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->allSoundOff();
}

void SoftChannelProxy::controlChange(int32_t controller, int32_t value) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->controlChange(controller, value);
}

int32_t SoftChannelProxy::getChannelPressure() {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getChannelPressure();
}

int32_t SoftChannelProxy::getController(int32_t controller) {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getController(controller);
}

bool SoftChannelProxy::getMono() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getMono();
}

bool SoftChannelProxy::getMute() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getMute();
}

bool SoftChannelProxy::getOmni() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getOmni();
}

int32_t SoftChannelProxy::getPitchBend() {
	if (this->channel == nullptr) {
		return 8192;
	}
	return $nc(this->channel)->getPitchBend();
}

int32_t SoftChannelProxy::getPolyPressure(int32_t noteNumber) {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getPolyPressure(noteNumber);
}

int32_t SoftChannelProxy::getProgram() {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getProgram();
}

bool SoftChannelProxy::getSolo() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getSolo();
}

bool SoftChannelProxy::localControl(bool on) {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->localControl(on);
}

void SoftChannelProxy::noteOff(int32_t noteNumber) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOff(noteNumber);
}

void SoftChannelProxy::noteOff(int32_t noteNumber, int32_t velocity) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOff(noteNumber, velocity);
}

void SoftChannelProxy::noteOn(int32_t noteNumber, int32_t velocity) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOn(noteNumber, velocity);
}

void SoftChannelProxy::programChange(int32_t program) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->programChange(program);
}

void SoftChannelProxy::programChange(int32_t bank, int32_t program) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->programChange(bank, program);
}

void SoftChannelProxy::resetAllControllers() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->resetAllControllers();
}

void SoftChannelProxy::setChannelPressure(int32_t pressure) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setChannelPressure(pressure);
}

void SoftChannelProxy::setMono(bool on) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setMono(on);
}

void SoftChannelProxy::setMute(bool mute) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setMute(mute);
}

void SoftChannelProxy::setOmni(bool on) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setOmni(on);
}

void SoftChannelProxy::setPitchBend(int32_t bend) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setPitchBend(bend);
}

void SoftChannelProxy::setPolyPressure(int32_t noteNumber, int32_t pressure) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setPolyPressure(noteNumber, pressure);
}

void SoftChannelProxy::setSolo(bool soloState) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setSolo(soloState);
}

SoftChannelProxy::SoftChannelProxy() {
}

$Class* SoftChannelProxy::load$($String* name, bool initialize) {
	$loadClass(SoftChannelProxy, name, initialize, &_SoftChannelProxy_ClassInfo_, allocate$SoftChannelProxy);
	return class$;
}

$Class* SoftChannelProxy::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com