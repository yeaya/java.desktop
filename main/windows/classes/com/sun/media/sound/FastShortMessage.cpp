#include <com/sun/media/sound/FastShortMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _FastShortMessage_FieldInfo_[] = {
	{"packedMsg", "I", nullptr, $PRIVATE, $field(FastShortMessage, packedMsg)},
	{}
};

$MethodInfo _FastShortMessage_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(FastShortMessage::*)(int32_t)>(&FastShortMessage::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "(Ljavax/sound/midi/ShortMessage;)V", nullptr, 0, $method(static_cast<void(FastShortMessage::*)($ShortMessage*)>(&FastShortMessage::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getChannel", "()I", nullptr, $PUBLIC},
	{"getCommand", "()I", nullptr, $PUBLIC},
	{"getData1", "()I", nullptr, $PUBLIC},
	{"getData2", "()I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getMessage", "()[B", nullptr, $PUBLIC},
	{"getPackedMsg", "()I", nullptr, 0, $method(static_cast<int32_t(FastShortMessage::*)()>(&FastShortMessage::getPackedMsg))},
	{"getStatus", "()I", nullptr, $PUBLIC},
	{"setMessage", "(I)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(III)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setMessage", "(IIII)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _FastShortMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.FastShortMessage",
	"javax.sound.midi.ShortMessage",
	nullptr,
	_FastShortMessage_FieldInfo_,
	_FastShortMessage_MethodInfo_
};

$Object* allocate$FastShortMessage($Class* clazz) {
	return $of($alloc(FastShortMessage));
}

void FastShortMessage::init$(int32_t packedMsg) {
	$ShortMessage::init$();
	this->packedMsg = packedMsg;
	getDataLength((int32_t)(packedMsg & (uint32_t)255));
}

void FastShortMessage::init$($ShortMessage* msg) {
	$ShortMessage::init$();
	int32_t var$1 = $nc(msg)->getStatus();
	int32_t var$0 = var$1 | (msg->getData1() << 8);
	this->packedMsg = var$0 | (msg->getData2() << 16);
}

int32_t FastShortMessage::getPackedMsg() {
	return this->packedMsg;
}

$bytes* FastShortMessage::getMessage() {
	int32_t length = 0;
	try {
		length = getDataLength((int32_t)(this->packedMsg & (uint32_t)255)) + 1;
	} catch ($InvalidMidiDataException&) {
		$catch();
	}
	$var($bytes, returnedArray, $new($bytes, length));
	if (length > 0) {
		returnedArray->set(0, (int8_t)((int32_t)(this->packedMsg & (uint32_t)255)));
		if (length > 1) {
			returnedArray->set(1, (int8_t)(((int32_t)(this->packedMsg & (uint32_t)0x0000FF00)) >> 8));
			if (length > 2) {
				returnedArray->set(2, (int8_t)(((int32_t)(this->packedMsg & (uint32_t)0x00FF0000)) >> 16));
			}
		}
	}
	return returnedArray;
}

int32_t FastShortMessage::getLength() {
	try {
		return getDataLength((int32_t)(this->packedMsg & (uint32_t)255)) + 1;
	} catch ($InvalidMidiDataException&) {
		$catch();
	}
	return 0;
}

void FastShortMessage::setMessage(int32_t status) {
	int32_t dataLength = getDataLength(status);
	if (dataLength != 0) {
		$ShortMessage::setMessage(status);
	}
	this->packedMsg = ((int32_t)(this->packedMsg & (uint32_t)0x00FFFF00)) | ((int32_t)(status & (uint32_t)255));
}

void FastShortMessage::setMessage(int32_t status, int32_t data1, int32_t data2) {
	getDataLength(status);
	this->packedMsg = (((int32_t)(status & (uint32_t)255)) | (((int32_t)(data1 & (uint32_t)255)) << 8)) | (((int32_t)(data2 & (uint32_t)255)) << 16);
}

void FastShortMessage::setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) {
	getDataLength(command);
	this->packedMsg = ((((int32_t)(command & (uint32_t)240)) | ((int32_t)(channel & (uint32_t)15))) | (((int32_t)(data1 & (uint32_t)255)) << 8)) | (((int32_t)(data2 & (uint32_t)255)) << 16);
}

int32_t FastShortMessage::getChannel() {
	return (int32_t)(this->packedMsg & (uint32_t)15);
}

int32_t FastShortMessage::getCommand() {
	return (int32_t)(this->packedMsg & (uint32_t)240);
}

int32_t FastShortMessage::getData1() {
	return ((int32_t)(this->packedMsg & (uint32_t)0x0000FF00)) >> 8;
}

int32_t FastShortMessage::getData2() {
	return ((int32_t)(this->packedMsg & (uint32_t)0x00FF0000)) >> 16;
}

int32_t FastShortMessage::getStatus() {
	return (int32_t)(this->packedMsg & (uint32_t)255);
}

$Object* FastShortMessage::clone() {
	try {
		return $of($new(FastShortMessage, this->packedMsg));
	} catch ($InvalidMidiDataException&) {
		$catch();
	}
	return $of(nullptr);
}

FastShortMessage::FastShortMessage() {
}

$Class* FastShortMessage::load$($String* name, bool initialize) {
	$loadClass(FastShortMessage, name, initialize, &_FastShortMessage_ClassInfo_, allocate$FastShortMessage);
	return class$;
}

$Class* FastShortMessage::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com