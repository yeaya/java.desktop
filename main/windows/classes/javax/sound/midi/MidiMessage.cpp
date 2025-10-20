#include <javax/sound/midi/MidiMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MidiMessage_FieldInfo_[] = {
	{"data", "[B", nullptr, $PROTECTED, $field(MidiMessage, data)},
	{"length", "I", nullptr, $PROTECTED, $field(MidiMessage, length)},
	{}
};

$MethodInfo _MidiMessage_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "([B)V", nullptr, $PROTECTED, $method(static_cast<void(MidiMessage::*)($bytes*)>(&MidiMessage::init$))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getMessage", "()[B", nullptr, $PUBLIC},
	{"getStatus", "()I", nullptr, $PUBLIC},
	{"setMessage", "([BI)V", nullptr, $PROTECTED, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _MidiMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.MidiMessage",
	"java.lang.Object",
	"java.lang.Cloneable",
	_MidiMessage_FieldInfo_,
	_MidiMessage_MethodInfo_
};

$Object* allocate$MidiMessage($Class* clazz) {
	return $of($alloc(MidiMessage));
}

$Object* MidiMessage::clone() {
	 return this->$Cloneable::clone();
}

void MidiMessage::init$($bytes* data) {
	this->length = 0;
	$set(this, data, data);
	if (data != nullptr) {
		this->length = data->length;
	}
}

void MidiMessage::setMessage($bytes* data, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (length < 0 || (length > 0 && length > $nc(data)->length)) {
		$throwNew($IndexOutOfBoundsException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = length;
	if (this->data == nullptr || $nc(this->data)->length < this->length) {
		$set(this, data, $new($bytes, this->length));
	}
	$System::arraycopy(data, 0, this->data, 0, length);
}

$bytes* MidiMessage::getMessage() {
	$var($bytes, returnedArray, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, returnedArray, 0, this->length);
	return returnedArray;
}

int32_t MidiMessage::getStatus() {
	if (this->length > 0) {
		return ((int32_t)($nc(this->data)->get(0) & (uint32_t)255));
	}
	return 0;
}

int32_t MidiMessage::getLength() {
	return this->length;
}

MidiMessage::MidiMessage() {
}

$Class* MidiMessage::load$($String* name, bool initialize) {
	$loadClass(MidiMessage, name, initialize, &_MidiMessage_ClassInfo_, allocate$MidiMessage);
	return class$;
}

$Class* MidiMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax