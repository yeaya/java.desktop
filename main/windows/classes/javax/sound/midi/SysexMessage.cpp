#include <javax/sound/midi/SysexMessage.h>

#include <com/sun/media/sound/MidiUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

#undef END_OF_EXCLUSIVE
#undef SPECIAL_SYSTEM_EXCLUSIVE
#undef SYSTEM_EXCLUSIVE

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _SysexMessage_FieldInfo_[] = {
	{"SYSTEM_EXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SysexMessage, SYSTEM_EXCLUSIVE)},
	{"SPECIAL_SYSTEM_EXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SysexMessage, SPECIAL_SYSTEM_EXCLUSIVE)},
	{}
};

$MethodInfo _SysexMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SysexMessage::*)()>(&SysexMessage::init$))},
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(SysexMessage::*)($bytes*,int32_t)>(&SysexMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "(I[BI)V", nullptr, $PUBLIC, $method(static_cast<void(SysexMessage::*)(int32_t,$bytes*,int32_t)>(&SysexMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "([B)V", nullptr, $PROTECTED, $method(static_cast<void(SysexMessage::*)($bytes*)>(&SysexMessage::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getData", "()[B", nullptr, $PUBLIC},
	{"setMessage", "([BI)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(I[BI)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _SysexMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.SysexMessage",
	"javax.sound.midi.MidiMessage",
	nullptr,
	_SysexMessage_FieldInfo_,
	_SysexMessage_MethodInfo_
};

$Object* allocate$SysexMessage($Class* clazz) {
	return $of($alloc(SysexMessage));
}

void SysexMessage::init$() {
	SysexMessage::init$($$new($bytes, 2));
	$nc(this->data)->set(0, (int8_t)((int32_t)(SysexMessage::SYSTEM_EXCLUSIVE & (uint32_t)255)));
	$nc(this->data)->set(1, (int8_t)((int32_t)($ShortMessage::END_OF_EXCLUSIVE & (uint32_t)255)));
}

void SysexMessage::init$($bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	setMessage(data, length);
}

void SysexMessage::init$(int32_t status, $bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	setMessage(status, data, length);
}

void SysexMessage::init$($bytes* data) {
	$MidiMessage::init$(data);
}

void SysexMessage::setMessage($bytes* data, int32_t length) {
	$MidiUtils::checkSysexStatus(data, length);
	$MidiMessage::setMessage(data, length);
}

void SysexMessage::setMessage(int32_t status, $bytes* data, int32_t length) {
	$MidiUtils::checkSysexStatus(status);
	if (length < 0 || length > $nc(data)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = length + 1;
	if (this->data == nullptr || $nc(this->data)->length < this->length) {
		$set(this, data, $new($bytes, this->length));
	}
	$nc(this->data)->set(0, (int8_t)((int32_t)(status & (uint32_t)255)));
	if (length > 0) {
		$System::arraycopy(data, 0, this->data, 1, length);
	}
}

$bytes* SysexMessage::getData() {
	$var($bytes, returnedArray, $new($bytes, this->length - 1));
	$System::arraycopy(this->data, 1, returnedArray, 0, (this->length - 1));
	return returnedArray;
}

$Object* SysexMessage::clone() {
	$var($bytes, newData, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, newData, 0, newData->length);
	return $of($new(SysexMessage, newData));
}

SysexMessage::SysexMessage() {
}

$Class* SysexMessage::load$($String* name, bool initialize) {
	$loadClass(SysexMessage, name, initialize, &_SysexMessage_ClassInfo_, allocate$SysexMessage);
	return class$;
}

$Class* SysexMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax