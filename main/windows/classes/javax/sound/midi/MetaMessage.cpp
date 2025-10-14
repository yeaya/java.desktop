#include <javax/sound/midi/MetaMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

#undef META

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MetaMessage_FieldInfo_[] = {
	{"META", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MetaMessage, META)},
	{"dataLength", "I", nullptr, $PRIVATE, $field(MetaMessage, dataLength)},
	{"mask", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetaMessage, mask)},
	{}
};

$MethodInfo _MetaMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetaMessage::*)()>(&MetaMessage::init$))},
	{"<init>", "(I[BI)V", nullptr, $PUBLIC, $method(static_cast<void(MetaMessage::*)(int32_t,$bytes*,int32_t)>(&MetaMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "([B)V", nullptr, $PROTECTED, $method(static_cast<void(MetaMessage::*)($bytes*)>(&MetaMessage::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getData", "()[B", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"getVarIntLength", "(J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetaMessage::*)(int64_t)>(&MetaMessage::getVarIntLength))},
	{"setMessage", "(I[BI)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"writeVarInt", "([BIJ)V", nullptr, $PRIVATE, $method(static_cast<void(MetaMessage::*)($bytes*,int32_t,int64_t)>(&MetaMessage::writeVarInt))},
	{}
};

$ClassInfo _MetaMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MetaMessage",
	"javax.sound.midi.MidiMessage",
	nullptr,
	_MetaMessage_FieldInfo_,
	_MetaMessage_MethodInfo_
};

$Object* allocate$MetaMessage($Class* clazz) {
	return $of($alloc(MetaMessage));
}

void MetaMessage::init$() {
	MetaMessage::init$($$new($bytes, {
		(int8_t)MetaMessage::META,
		(int8_t)0
	}));
}

void MetaMessage::init$(int32_t type, $bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	this->dataLength = 0;
	setMessage(type, data, length);
}

void MetaMessage::init$($bytes* data) {
	$MidiMessage::init$(data);
	this->dataLength = 0;
	if ($nc(data)->length >= 3) {
		this->dataLength = data->length - 3;
		int32_t pos = 2;
		while (pos < data->length && ((int32_t)(data->get(pos) & (uint32_t)128)) != 0) {
			--this->dataLength;
			++pos;
		}
	}
}

void MetaMessage::setMessage(int32_t type, $bytes* data, int32_t length) {
	if (type >= 128 || type < 0) {
		$throwNew($InvalidMidiDataException, $$str({"Invalid meta event with type "_s, $$str(type)}));
	}
	if ((length > 0 && length > $nc(data)->length) || length < 0) {
		$throwNew($InvalidMidiDataException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = 2 + getVarIntLength(length) + length;
	this->dataLength = length;
	$set(this, data, $new($bytes, this->length));
	$nc(this->data)->set(0, (int8_t)MetaMessage::META);
	$nc(this->data)->set(1, (int8_t)type);
	writeVarInt(this->data, 2, length);
	if (length > 0) {
		$System::arraycopy(data, 0, this->data, this->length - this->dataLength, this->dataLength);
	}
}

int32_t MetaMessage::getType() {
	if (this->length >= 2) {
		return (int32_t)($nc(this->data)->get(1) & (uint32_t)255);
	}
	return 0;
}

$bytes* MetaMessage::getData() {
	$var($bytes, returnedArray, $new($bytes, this->dataLength));
	$System::arraycopy(this->data, (this->length - this->dataLength), returnedArray, 0, this->dataLength);
	return returnedArray;
}

$Object* MetaMessage::clone() {
	$var($bytes, newData, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, newData, 0, newData->length);
	return $of($new(MetaMessage, newData));
}

int32_t MetaMessage::getVarIntLength(int64_t value) {
	int32_t length = 0;
	do {
		value = value >> 7;
		++length;
	} while (value > 0);
	return length;
}

void MetaMessage::writeVarInt($bytes* data, int32_t off, int64_t value) {
	int32_t shift = 63;
	while ((shift > 0) && (((int64_t)(value & (uint64_t)($sl(MetaMessage::mask, shift)))) == 0)) {
		shift -= 7;
	}
	while (shift > 0) {
		$nc(data)->set(off++, (int8_t)(($sr((int64_t)(value & (uint64_t)($sl(MetaMessage::mask, shift))), shift)) | 128));
		shift -= 7;
	}
	$nc(data)->set(off, (int8_t)((int64_t)(value & (uint64_t)MetaMessage::mask)));
}

MetaMessage::MetaMessage() {
}

$Class* MetaMessage::load$($String* name, bool initialize) {
	$loadClass(MetaMessage, name, initialize, &_MetaMessage_ClassInfo_, allocate$MetaMessage);
	return class$;
}

$Class* MetaMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax