#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/FastShortMessage.h>
#include <com/sun/media/sound/FastSysexMessage.h>
#include <com/sun/media/sound/MidiOutDevice$MidiOutReceiver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/SysexMessage.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$AbstractReceiver = ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver;
using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $FastShortMessage = ::com::sun::media::sound::FastShortMessage;
using $FastSysexMessage = ::com::sun::media::sound::FastSysexMessage;
using $MidiOutDevice$MidiOutReceiver = ::com::sun::media::sound::MidiOutDevice$MidiOutReceiver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Receiver = ::javax::sound::midi::Receiver;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $SysexMessage = ::javax::sound::midi::SysexMessage;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDevice$TransmitterList_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/AbstractMidiDevice;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMidiDevice$TransmitterList, this$0)},
	{"transmitters", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/Transmitter;>;", $PRIVATE | $FINAL, $field(AbstractMidiDevice$TransmitterList, transmitters)},
	{"midiOutReceiver", "Lcom/sun/media/sound/MidiOutDevice$MidiOutReceiver;", nullptr, $PRIVATE, $field(AbstractMidiDevice$TransmitterList, midiOutReceiver)},
	{"optimizedReceiverCount", "I", nullptr, $PRIVATE, $field(AbstractMidiDevice$TransmitterList, optimizedReceiverCount)},
	{}
};

$MethodInfo _AbstractMidiDevice$TransmitterList_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AbstractMidiDevice;)V", nullptr, 0, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($AbstractMidiDevice*)>(&AbstractMidiDevice$TransmitterList::init$))},
	{"add", "(Ljavax/sound/midi/Transmitter;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($Transmitter*)>(&AbstractMidiDevice$TransmitterList::add))},
	{"close", "()V", nullptr, 0, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)()>(&AbstractMidiDevice$TransmitterList::close))},
	{"receiverChanged", "(Lcom/sun/media/sound/AbstractMidiDevice$BasicTransmitter;Ljavax/sound/midi/Receiver;Ljavax/sound/midi/Receiver;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($AbstractMidiDevice$BasicTransmitter*,$Receiver*,$Receiver*)>(&AbstractMidiDevice$TransmitterList::receiverChanged))},
	{"remove", "(Ljavax/sound/midi/Transmitter;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($Transmitter*)>(&AbstractMidiDevice$TransmitterList::remove))},
	{"sendMessage", "(IJ)V", nullptr, 0, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)(int32_t,int64_t)>(&AbstractMidiDevice$TransmitterList::sendMessage))},
	{"sendMessage", "([BJ)V", nullptr, 0, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($bytes*,int64_t)>(&AbstractMidiDevice$TransmitterList::sendMessage))},
	{"sendMessage", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, 0, $method(static_cast<void(AbstractMidiDevice$TransmitterList::*)($MidiMessage*,int64_t)>(&AbstractMidiDevice$TransmitterList::sendMessage))},
	{}
};

$InnerClassInfo _AbstractMidiDevice$TransmitterList_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDevice$TransmitterList", "com.sun.media.sound.AbstractMidiDevice", "TransmitterList", $FINAL},
	{}
};

$ClassInfo _AbstractMidiDevice$TransmitterList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.AbstractMidiDevice$TransmitterList",
	"java.lang.Object",
	nullptr,
	_AbstractMidiDevice$TransmitterList_FieldInfo_,
	_AbstractMidiDevice$TransmitterList_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDevice$TransmitterList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDevice"
};

$Object* allocate$AbstractMidiDevice$TransmitterList($Class* clazz) {
	return $of($alloc(AbstractMidiDevice$TransmitterList));
}

void AbstractMidiDevice$TransmitterList::init$($AbstractMidiDevice* this$0) {
	$set(this, this$0, this$0);
	$set(this, transmitters, $new($ArrayList));
	this->optimizedReceiverCount = 0;
}

void AbstractMidiDevice$TransmitterList::add($Transmitter* t) {
	$synchronized(this->transmitters) {
		$nc(this->transmitters)->add(t);
	}
	if ($instanceOf($AbstractMidiDevice$BasicTransmitter, t)) {
		$nc(($cast($AbstractMidiDevice$BasicTransmitter, t)))->setTransmitterList(this);
	}
}

void AbstractMidiDevice$TransmitterList::remove($Transmitter* t) {
	$synchronized(this->transmitters) {
		int32_t index = $nc(this->transmitters)->indexOf(t);
		if (index >= 0) {
			$nc(this->transmitters)->remove(index);
		}
	}
}

void AbstractMidiDevice$TransmitterList::receiverChanged($AbstractMidiDevice$BasicTransmitter* t, $Receiver* oldR, $Receiver* newR) {
	$synchronized(this->transmitters) {
		if ($equals(this->midiOutReceiver, oldR)) {
			$set(this, midiOutReceiver, nullptr);
		}
		if (newR != nullptr) {
			if (($instanceOf($MidiOutDevice$MidiOutReceiver, newR)) && (this->midiOutReceiver == nullptr)) {
				$set(this, midiOutReceiver, $cast($MidiOutDevice$MidiOutReceiver, newR));
			}
		}
		this->optimizedReceiverCount = ((this->midiOutReceiver != nullptr) ? 1 : 0);
	}
}

void AbstractMidiDevice$TransmitterList::close() {
	$synchronized(this->transmitters) {
		for (int32_t i = 0; i < $nc(this->transmitters)->size(); ++i) {
			$nc(($cast($Transmitter, $($nc(this->transmitters)->get(i)))))->close();
		}
		$nc(this->transmitters)->clear();
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage(int32_t packedMessage, int64_t timeStamp) {
	try {
		$synchronized(this->transmitters) {
			int32_t size = $nc(this->transmitters)->size();
			if (this->optimizedReceiverCount == size) {
				if (this->midiOutReceiver != nullptr) {
					$nc(this->midiOutReceiver)->sendPackedMidiMessage(packedMessage, timeStamp);
				}
			} else {
				for (int32_t i = 0; i < size; ++i) {
					$var($Receiver, receiver, $nc(($cast($Transmitter, $($nc(this->transmitters)->get(i)))))->getReceiver());
					if (receiver != nullptr) {
						if (this->optimizedReceiverCount > 0) {
							if ($instanceOf($MidiOutDevice$MidiOutReceiver, receiver)) {
								$nc(($cast($MidiOutDevice$MidiOutReceiver, receiver)))->sendPackedMidiMessage(packedMessage, timeStamp);
							} else {
								receiver->send($$new($FastShortMessage, packedMessage), timeStamp);
							}
						} else {
							receiver->send($$new($FastShortMessage, packedMessage), timeStamp);
						}
					}
				}
			}
		}
	} catch ($InvalidMidiDataException&) {
		$catch();
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage($bytes* data, int64_t timeStamp) {
	try {
		$synchronized(this->transmitters) {
			int32_t size = $nc(this->transmitters)->size();
			for (int32_t i = 0; i < size; ++i) {
				$var($Receiver, receiver, $nc(($cast($Transmitter, $($nc(this->transmitters)->get(i)))))->getReceiver());
				if (receiver != nullptr) {
					receiver->send($$new($FastSysexMessage, data), timeStamp);
				}
			}
		}
	} catch ($InvalidMidiDataException&) {
		$var($InvalidMidiDataException, e, $catch());
		return;
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage($MidiMessage* message, int64_t timeStamp) {
	if ($instanceOf($FastShortMessage, message)) {
		sendMessage($nc(($cast($FastShortMessage, message)))->getPackedMsg(), timeStamp);
		return;
	}
	$synchronized(this->transmitters) {
		int32_t size = $nc(this->transmitters)->size();
		if (this->optimizedReceiverCount == size) {
			if (this->midiOutReceiver != nullptr) {
				$nc(this->midiOutReceiver)->send(message, timeStamp);
			}
		} else {
			for (int32_t i = 0; i < size; ++i) {
				$var($Receiver, receiver, $nc(($cast($Transmitter, $($nc(this->transmitters)->get(i)))))->getReceiver());
				if (receiver != nullptr) {
					receiver->send(message, timeStamp);
				}
			}
		}
	}
}

AbstractMidiDevice$TransmitterList::AbstractMidiDevice$TransmitterList() {
}

$Class* AbstractMidiDevice$TransmitterList::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDevice$TransmitterList, name, initialize, &_AbstractMidiDevice$TransmitterList_ClassInfo_, allocate$AbstractMidiDevice$TransmitterList);
	return class$;
}

$Class* AbstractMidiDevice$TransmitterList::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com