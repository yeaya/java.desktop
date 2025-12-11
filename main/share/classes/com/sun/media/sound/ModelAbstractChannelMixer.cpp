#include <com/sun/media/sound/ModelAbstractChannelMixer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelAbstractChannelMixer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelAbstractChannelMixer::*)()>(&ModelAbstractChannelMixer::init$))},
	{"allNotesOff", "()V", nullptr, $PUBLIC},
	{"allSoundOff", "()V", nullptr, $PUBLIC},
	{"controlChange", "(II)V", nullptr, $PUBLIC},
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
	{"process", "([[L[F;II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"programChange", "(I)V", nullptr, $PUBLIC},
	{"programChange", "(II)V", nullptr, $PUBLIC},
	{"resetAllControllers", "()V", nullptr, $PUBLIC},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC},
	{"setMono", "(Z)V", nullptr, $PUBLIC},
	{"setMute", "(Z)V", nullptr, $PUBLIC},
	{"setOmni", "(Z)V", nullptr, $PUBLIC},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC},
	{"setSolo", "(Z)V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelAbstractChannelMixer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.ModelAbstractChannelMixer",
	"java.lang.Object",
	"com.sun.media.sound.ModelChannelMixer",
	nullptr,
	_ModelAbstractChannelMixer_MethodInfo_
};

$Object* allocate$ModelAbstractChannelMixer($Class* clazz) {
	return $of($alloc(ModelAbstractChannelMixer));
}

void ModelAbstractChannelMixer::init$() {
}

void ModelAbstractChannelMixer::allNotesOff() {
}

void ModelAbstractChannelMixer::allSoundOff() {
}

void ModelAbstractChannelMixer::controlChange(int32_t controller, int32_t value) {
}

int32_t ModelAbstractChannelMixer::getChannelPressure() {
	return 0;
}

int32_t ModelAbstractChannelMixer::getController(int32_t controller) {
	return 0;
}

bool ModelAbstractChannelMixer::getMono() {
	return false;
}

bool ModelAbstractChannelMixer::getMute() {
	return false;
}

bool ModelAbstractChannelMixer::getOmni() {
	return false;
}

int32_t ModelAbstractChannelMixer::getPitchBend() {
	return 0;
}

int32_t ModelAbstractChannelMixer::getPolyPressure(int32_t noteNumber) {
	return 0;
}

int32_t ModelAbstractChannelMixer::getProgram() {
	return 0;
}

bool ModelAbstractChannelMixer::getSolo() {
	return false;
}

bool ModelAbstractChannelMixer::localControl(bool on) {
	return false;
}

void ModelAbstractChannelMixer::noteOff(int32_t noteNumber) {
}

void ModelAbstractChannelMixer::noteOff(int32_t noteNumber, int32_t velocity) {
}

void ModelAbstractChannelMixer::noteOn(int32_t noteNumber, int32_t velocity) {
}

void ModelAbstractChannelMixer::programChange(int32_t program) {
}

void ModelAbstractChannelMixer::programChange(int32_t bank, int32_t program) {
}

void ModelAbstractChannelMixer::resetAllControllers() {
}

void ModelAbstractChannelMixer::setChannelPressure(int32_t pressure) {
}

void ModelAbstractChannelMixer::setMono(bool on) {
}

void ModelAbstractChannelMixer::setMute(bool mute) {
}

void ModelAbstractChannelMixer::setOmni(bool on) {
}

void ModelAbstractChannelMixer::setPitchBend(int32_t bend) {
}

void ModelAbstractChannelMixer::setPolyPressure(int32_t noteNumber, int32_t pressure) {
}

void ModelAbstractChannelMixer::setSolo(bool soloState) {
}

ModelAbstractChannelMixer::ModelAbstractChannelMixer() {
}

$Class* ModelAbstractChannelMixer::load$($String* name, bool initialize) {
	$loadClass(ModelAbstractChannelMixer, name, initialize, &_ModelAbstractChannelMixer_ClassInfo_, allocate$ModelAbstractChannelMixer);
	return class$;
}

$Class* ModelAbstractChannelMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com