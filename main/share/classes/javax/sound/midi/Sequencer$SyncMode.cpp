#include <javax/sound/midi/Sequencer$SyncMode.h>

#include <javax/sound/midi/Sequencer.h>
#include <jcpp.h>

#undef INTERNAL_CLOCK
#undef MIDI_SYNC
#undef MIDI_TIME_CODE
#undef NO_SYNC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sequencer = ::javax::sound::midi::Sequencer;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Sequencer$SyncMode_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Sequencer$SyncMode, name)},
	{"INTERNAL_CLOCK", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, INTERNAL_CLOCK)},
	{"MIDI_SYNC", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, MIDI_SYNC)},
	{"MIDI_TIME_CODE", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, MIDI_TIME_CODE)},
	{"NO_SYNC", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, NO_SYNC)},
	{}
};

$MethodInfo _Sequencer$SyncMode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Sequencer$SyncMode::*)($String*)>(&Sequencer$SyncMode::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Sequencer$SyncMode_InnerClassesInfo_[] = {
	{"javax.sound.midi.Sequencer$SyncMode", "javax.sound.midi.Sequencer", "SyncMode", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Sequencer$SyncMode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.Sequencer$SyncMode",
	"java.lang.Object",
	nullptr,
	_Sequencer$SyncMode_FieldInfo_,
	_Sequencer$SyncMode_MethodInfo_,
	nullptr,
	nullptr,
	_Sequencer$SyncMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.midi.Sequencer"
};

$Object* allocate$Sequencer$SyncMode($Class* clazz) {
	return $of($alloc(Sequencer$SyncMode));
}

Sequencer$SyncMode* Sequencer$SyncMode::INTERNAL_CLOCK = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::MIDI_SYNC = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::MIDI_TIME_CODE = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::NO_SYNC = nullptr;

void Sequencer$SyncMode::init$($String* name) {
	$set(this, name, name);
}

bool Sequencer$SyncMode::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t Sequencer$SyncMode::hashCode() {
	return $Object::hashCode();
}

$String* Sequencer$SyncMode::toString() {
	return this->name;
}

void clinit$Sequencer$SyncMode($Class* class$) {
	$assignStatic(Sequencer$SyncMode::INTERNAL_CLOCK, $new(Sequencer$SyncMode, "Internal Clock"_s));
	$assignStatic(Sequencer$SyncMode::MIDI_SYNC, $new(Sequencer$SyncMode, "MIDI Sync"_s));
	$assignStatic(Sequencer$SyncMode::MIDI_TIME_CODE, $new(Sequencer$SyncMode, "MIDI Time Code"_s));
	$assignStatic(Sequencer$SyncMode::NO_SYNC, $new(Sequencer$SyncMode, "No Timing"_s));
}

Sequencer$SyncMode::Sequencer$SyncMode() {
}

$Class* Sequencer$SyncMode::load$($String* name, bool initialize) {
	$loadClass(Sequencer$SyncMode, name, initialize, &_Sequencer$SyncMode_ClassInfo_, clinit$Sequencer$SyncMode, allocate$Sequencer$SyncMode);
	return class$;
}

$Class* Sequencer$SyncMode::class$ = nullptr;

		} // midi
	} // sound
} // javax