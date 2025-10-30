#include <com/sun/media/sound/FastSysexMessage.h>

#include <com/sun/media/sound/MidiUtils.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/SysexMessage.h>
#include <jcpp.h>

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $SysexMessage = ::javax::sound::midi::SysexMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _FastSysexMessage_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(FastSysexMessage::*)($bytes*)>(&FastSysexMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"getReadOnlyMessage", "()[B", nullptr, 0, $method(static_cast<$bytes*(FastSysexMessage::*)()>(&FastSysexMessage::getReadOnlyMessage))},
	{"setMessage", "([BI)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _FastSysexMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.FastSysexMessage",
	"javax.sound.midi.SysexMessage",
	nullptr,
	nullptr,
	_FastSysexMessage_MethodInfo_
};

$Object* allocate$FastSysexMessage($Class* clazz) {
	return $of($alloc(FastSysexMessage));
}

void FastSysexMessage::init$($bytes* data) {
	$SysexMessage::init$(data);
	$MidiUtils::checkSysexStatus(data, $nc(data)->length);
}

$bytes* FastSysexMessage::getReadOnlyMessage() {
	return this->data;
}

void FastSysexMessage::setMessage($bytes* data, int32_t length) {
	$MidiUtils::checkSysexStatus(data, length);
	this->length = length;
	$set(this, data, $new($bytes, this->length));
	$System::arraycopy(data, 0, this->data, 0, length);
}

FastSysexMessage::FastSysexMessage() {
}

$Class* FastSysexMessage::load$($String* name, bool initialize) {
	$loadClass(FastSysexMessage, name, initialize, &_FastSysexMessage_ClassInfo_, allocate$FastSysexMessage);
	return class$;
}

$Class* FastSysexMessage::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com