#include <javax/sound/midi/VoiceStatus.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _VoiceStatus_FieldInfo_[] = {
	{"active", "Z", nullptr, $PUBLIC, $field(VoiceStatus, active)},
	{"channel", "I", nullptr, $PUBLIC, $field(VoiceStatus, channel)},
	{"bank", "I", nullptr, $PUBLIC, $field(VoiceStatus, bank)},
	{"program", "I", nullptr, $PUBLIC, $field(VoiceStatus, program)},
	{"note", "I", nullptr, $PUBLIC, $field(VoiceStatus, note)},
	{"volume", "I", nullptr, $PUBLIC, $field(VoiceStatus, volume)},
	{}
};

$MethodInfo _VoiceStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VoiceStatus::*)()>(&VoiceStatus::init$))},
	{}
};

$ClassInfo _VoiceStatus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.VoiceStatus",
	"java.lang.Object",
	nullptr,
	_VoiceStatus_FieldInfo_,
	_VoiceStatus_MethodInfo_
};

$Object* allocate$VoiceStatus($Class* clazz) {
	return $of($alloc(VoiceStatus));
}

void VoiceStatus::init$() {
	this->active = false;
	this->channel = 0;
	this->bank = 0;
	this->program = 0;
	this->note = 0;
	this->volume = 0;
}

VoiceStatus::VoiceStatus() {
}

$Class* VoiceStatus::load$($String* name, bool initialize) {
	$loadClass(VoiceStatus, name, initialize, &_VoiceStatus_ClassInfo_, allocate$VoiceStatus);
	return class$;
}

$Class* VoiceStatus::class$ = nullptr;

		} // midi
	} // sound
} // javax