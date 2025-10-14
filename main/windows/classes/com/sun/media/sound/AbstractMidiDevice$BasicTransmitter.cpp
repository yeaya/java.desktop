#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>

#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiDeviceTransmitter.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$TransmitterList = ::com::sun::media::sound::AbstractMidiDevice$TransmitterList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDeviceTransmitter = ::javax::sound::midi::MidiDeviceTransmitter;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDevice$BasicTransmitter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/AbstractMidiDevice;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMidiDevice$BasicTransmitter, this$0)},
	{"receiver", "Ljavax/sound/midi/Receiver;", nullptr, $PRIVATE, $field(AbstractMidiDevice$BasicTransmitter, receiver)},
	{"tlist", "Lcom/sun/media/sound/AbstractMidiDevice$TransmitterList;", nullptr, 0, $field(AbstractMidiDevice$BasicTransmitter, tlist)},
	{}
};

$MethodInfo _AbstractMidiDevice$BasicTransmitter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AbstractMidiDevice;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractMidiDevice$BasicTransmitter::*)($AbstractMidiDevice*)>(&AbstractMidiDevice$BasicTransmitter::init$))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL},
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $FINAL},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $FINAL},
	{"setReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC | $FINAL},
	{"setTransmitterList", "(Lcom/sun/media/sound/AbstractMidiDevice$TransmitterList;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice$BasicTransmitter::*)($AbstractMidiDevice$TransmitterList*)>(&AbstractMidiDevice$BasicTransmitter::setTransmitterList))},
	{}
};

$InnerClassInfo _AbstractMidiDevice$BasicTransmitter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
	{}
};

$ClassInfo _AbstractMidiDevice$BasicTransmitter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter",
	"java.lang.Object",
	"javax.sound.midi.MidiDeviceTransmitter",
	_AbstractMidiDevice$BasicTransmitter_FieldInfo_,
	_AbstractMidiDevice$BasicTransmitter_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDevice$BasicTransmitter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDevice"
};

$Object* allocate$AbstractMidiDevice$BasicTransmitter($Class* clazz) {
	return $of($alloc(AbstractMidiDevice$BasicTransmitter));
}

void AbstractMidiDevice$BasicTransmitter::init$($AbstractMidiDevice* this$0) {
	$set(this, this$0, this$0);
	$set(this, receiver, nullptr);
	$set(this, tlist, nullptr);
}

void AbstractMidiDevice$BasicTransmitter::setTransmitterList($AbstractMidiDevice$TransmitterList* tlist) {
	$set(this, tlist, tlist);
}

void AbstractMidiDevice$BasicTransmitter::setReceiver($Receiver* receiver) {
	if (this->tlist != nullptr && this->receiver != receiver) {
		$nc(this->tlist)->receiverChanged(this, this->receiver, receiver);
		$set(this, receiver, receiver);
	}
}

$Receiver* AbstractMidiDevice$BasicTransmitter::getReceiver() {
	return this->receiver;
}

void AbstractMidiDevice$BasicTransmitter::close() {
	this->this$0->closeInternal(this);
	if (this->tlist != nullptr) {
		$nc(this->tlist)->receiverChanged(this, this->receiver, nullptr);
		$nc(this->tlist)->remove(this);
		$set(this, tlist, nullptr);
	}
}

$MidiDevice* AbstractMidiDevice$BasicTransmitter::getMidiDevice() {
	return this->this$0;
}

AbstractMidiDevice$BasicTransmitter::AbstractMidiDevice$BasicTransmitter() {
}

$Class* AbstractMidiDevice$BasicTransmitter::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDevice$BasicTransmitter, name, initialize, &_AbstractMidiDevice$BasicTransmitter_ClassInfo_, allocate$AbstractMidiDevice$BasicTransmitter);
	return class$;
}

$Class* AbstractMidiDevice$BasicTransmitter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com