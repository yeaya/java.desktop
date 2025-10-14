#include <javax/sound/midi/ShortMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

#undef ACTIVE_SENSING
#undef CHANNEL_PRESSURE
#undef CONTINUE
#undef CONTROL_CHANGE
#undef END_OF_EXCLUSIVE
#undef MIDI_TIME_CODE
#undef NOTE_OFF
#undef NOTE_ON
#undef PITCH_BEND
#undef POLY_PRESSURE
#undef PROGRAM_CHANGE
#undef SONG_POSITION_POINTER
#undef SONG_SELECT
#undef START
#undef STOP
#undef SYSTEM_RESET
#undef TIMING_CLOCK
#undef TUNE_REQUEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _ShortMessage_FieldInfo_[] = {
	{"MIDI_TIME_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, MIDI_TIME_CODE)},
	{"SONG_POSITION_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, SONG_POSITION_POINTER)},
	{"SONG_SELECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, SONG_SELECT)},
	{"TUNE_REQUEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, TUNE_REQUEST)},
	{"END_OF_EXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, END_OF_EXCLUSIVE)},
	{"TIMING_CLOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, TIMING_CLOCK)},
	{"START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, START)},
	{"CONTINUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, CONTINUE)},
	{"STOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, STOP)},
	{"ACTIVE_SENSING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, ACTIVE_SENSING)},
	{"SYSTEM_RESET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, SYSTEM_RESET)},
	{"NOTE_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, NOTE_OFF)},
	{"NOTE_ON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, NOTE_ON)},
	{"POLY_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, POLY_PRESSURE)},
	{"CONTROL_CHANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, CONTROL_CHANGE)},
	{"PROGRAM_CHANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, PROGRAM_CHANGE)},
	{"CHANNEL_PRESSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, CHANNEL_PRESSURE)},
	{"PITCH_BEND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ShortMessage, PITCH_BEND)},
	{}
};

$MethodInfo _ShortMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortMessage::*)()>(&ShortMessage::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ShortMessage::*)(int32_t)>(&ShortMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(ShortMessage::*)(int32_t,int32_t,int32_t)>(&ShortMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(ShortMessage::*)(int32_t,int32_t,int32_t,int32_t)>(&ShortMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "([B)V", nullptr, $PROTECTED, $method(static_cast<void(ShortMessage::*)($bytes*)>(&ShortMessage::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getChannel", "()I", nullptr, $PUBLIC},
	{"getCommand", "()I", nullptr, $PUBLIC},
	{"getData1", "()I", nullptr, $PUBLIC},
	{"getData2", "()I", nullptr, $PUBLIC},
	{"getDataLength", "(I)I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(ShortMessage::*)(int32_t)>(&ShortMessage::getDataLength)), "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(I)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(III)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(IIII)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _ShortMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.ShortMessage",
	"javax.sound.midi.MidiMessage",
	nullptr,
	_ShortMessage_FieldInfo_,
	_ShortMessage_MethodInfo_
};

$Object* allocate$ShortMessage($Class* clazz) {
	return $of($alloc(ShortMessage));
}

void ShortMessage::init$() {
	ShortMessage::init$($$new($bytes, 3));
	$nc(this->data)->set(0, (int8_t)((int32_t)(ShortMessage::NOTE_ON & (uint32_t)255)));
	$nc(this->data)->set(1, (int8_t)64);
	$nc(this->data)->set(2, (int8_t)127);
	this->length = 3;
}

void ShortMessage::init$(int32_t status) {
	$MidiMessage::init$(nullptr);
	setMessage(status);
}

void ShortMessage::init$(int32_t status, int32_t data1, int32_t data2) {
	$MidiMessage::init$(nullptr);
	setMessage(status, data1, data2);
}

void ShortMessage::init$(int32_t command, int32_t channel, int32_t data1, int32_t data2) {
	$MidiMessage::init$(nullptr);
	setMessage(command, channel, data1, data2);
}

void ShortMessage::init$($bytes* data) {
	$MidiMessage::init$(data);
}

void ShortMessage::setMessage(int32_t status) {
	int32_t dataLength = getDataLength(status);
	if (dataLength != 0) {
		$throwNew($InvalidMidiDataException, $$str({"Status byte; "_s, $$str(status), " requires "_s, $$str(dataLength), " data bytes"_s}));
	}
	setMessage(status, 0, 0);
}

void ShortMessage::setMessage(int32_t status, int32_t data1, int32_t data2) {
	int32_t dataLength = getDataLength(status);
	if (dataLength > 0) {
		if (data1 < 0 || data1 > 127) {
			$throwNew($InvalidMidiDataException, $$str({"data1 out of range: "_s, $$str(data1)}));
		}
		if (dataLength > 1) {
			if (data2 < 0 || data2 > 127) {
				$throwNew($InvalidMidiDataException, $$str({"data2 out of range: "_s, $$str(data2)}));
			}
		}
	}
	this->length = dataLength + 1;
	if (this->data == nullptr || $nc(this->data)->length < this->length) {
		$set(this, data, $new($bytes, 3));
	}
	$nc(this->data)->set(0, (int8_t)((int32_t)(status & (uint32_t)255)));
	if (this->length > 1) {
		$nc(this->data)->set(1, (int8_t)((int32_t)(data1 & (uint32_t)255)));
		if (this->length > 2) {
			$nc(this->data)->set(2, (int8_t)((int32_t)(data2 & (uint32_t)255)));
		}
	}
}

void ShortMessage::setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) {
	if (command >= 240 || command < 128) {
		$throwNew($InvalidMidiDataException, $$str({"command out of range: 0x"_s, $($Integer::toHexString(command))}));
	}
	if (((int32_t)(channel & (uint32_t)-16)) != 0) {
		$throwNew($InvalidMidiDataException, $$str({"channel out of range: "_s, $$str(channel)}));
	}
	setMessage(((int32_t)(command & (uint32_t)240)) | ((int32_t)(channel & (uint32_t)15)), data1, data2);
}

int32_t ShortMessage::getChannel() {
	return ((int32_t)(getStatus() & (uint32_t)15));
}

int32_t ShortMessage::getCommand() {
	return ((int32_t)(getStatus() & (uint32_t)240));
}

int32_t ShortMessage::getData1() {
	if (this->length > 1) {
		return ((int32_t)($nc(this->data)->get(1) & (uint32_t)255));
	}
	return 0;
}

int32_t ShortMessage::getData2() {
	if (this->length > 2) {
		return ((int32_t)($nc(this->data)->get(2) & (uint32_t)255));
	}
	return 0;
}

$Object* ShortMessage::clone() {
	$var($bytes, newData, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, newData, 0, newData->length);
	return $of($new(ShortMessage, newData));
}

int32_t ShortMessage::getDataLength(int32_t status) {
	switch (status) {
	case 246:
		{}
	case 247:
		{}
	case 248:
		{}
	case 249:
		{}
	case 250:
		{}
	case 251:
		{}
	case 252:
		{}
	case 253:
		{}
	case 254:
		{}
	case 255:
		{
			return 0;
		}
	case 241:
		{}
	case 243:
		{
			return 1;
		}
	case 242:
		{
			return 2;
		}
	default:
		{}
	}
	switch ((int32_t)(status & (uint32_t)240)) {
	case 128:
		{}
	case 144:
		{}
	case 160:
		{}
	case 176:
		{}
	case 224:
		{
			return 2;
		}
	case 192:
		{}
	case 208:
		{
			return 1;
		}
	default:
		{
			$throwNew($InvalidMidiDataException, $$str({"Invalid status byte: "_s, $$str(status)}));
		}
	}
}

ShortMessage::ShortMessage() {
}

$Class* ShortMessage::load$($String* name, bool initialize) {
	$loadClass(ShortMessage, name, initialize, &_ShortMessage_ClassInfo_, allocate$ShortMessage);
	return class$;
}

$Class* ShortMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax