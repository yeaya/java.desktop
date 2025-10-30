#include <javax/sound/midi/MidiEvent.h>

#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MidiEvent_FieldInfo_[] = {
	{"message", "Ljavax/sound/midi/MidiMessage;", nullptr, $PRIVATE | $FINAL, $field(MidiEvent, message)},
	{"tick", "J", nullptr, $PRIVATE, $field(MidiEvent, tick)},
	{}
};

$MethodInfo _MidiEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC, $method(static_cast<void(MidiEvent::*)($MidiMessage*,int64_t)>(&MidiEvent::init$))},
	{"getMessage", "()Ljavax/sound/midi/MidiMessage;", nullptr, $PUBLIC},
	{"getTick", "()J", nullptr, $PUBLIC},
	{"setTick", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MidiEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MidiEvent",
	"java.lang.Object",
	nullptr,
	_MidiEvent_FieldInfo_,
	_MidiEvent_MethodInfo_
};

$Object* allocate$MidiEvent($Class* clazz) {
	return $of($alloc(MidiEvent));
}

void MidiEvent::init$($MidiMessage* message, int64_t tick) {
	$set(this, message, message);
	this->tick = tick;
}

$MidiMessage* MidiEvent::getMessage() {
	return this->message;
}

void MidiEvent::setTick(int64_t tick) {
	this->tick = tick;
}

int64_t MidiEvent::getTick() {
	return this->tick;
}

MidiEvent::MidiEvent() {
}

$Class* MidiEvent::load$($String* name, bool initialize) {
	$loadClass(MidiEvent, name, initialize, &_MidiEvent_ClassInfo_, allocate$MidiEvent);
	return class$;
}

$Class* MidiEvent::class$ = nullptr;

		} // midi
	} // sound
} // javax