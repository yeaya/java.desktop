#include <com/sun/media/sound/AbstractMidiDevice.h>

#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice$TransmitterList = ::com::sun::media::sound::AbstractMidiDevice$TransmitterList;
using $ReferenceCountingDevice = ::com::sun::media::sound::ReferenceCountingDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDevice_FieldInfo_[] = {
	{"receiverList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/Receiver;>;", $PRIVATE, $field(AbstractMidiDevice, receiverList)},
	{"transmitterList", "Lcom/sun/media/sound/AbstractMidiDevice$TransmitterList;", nullptr, $PRIVATE, $field(AbstractMidiDevice, transmitterList)},
	{"traRecLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AbstractMidiDevice, traRecLock)},
	{"info", "Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PRIVATE | $FINAL, $field(AbstractMidiDevice, info)},
	{"open", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractMidiDevice, open$)},
	{"openRefCount", "I", nullptr, $PRIVATE, $field(AbstractMidiDevice, openRefCount)},
	{"openKeepingObjects", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE, $field(AbstractMidiDevice, openKeepingObjects)},
	{"id", "J", nullptr, $PROTECTED | $VOLATILE, $field(AbstractMidiDevice, id)},
	{}
};

$MethodInfo _AbstractMidiDevice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/midi/MidiDevice$Info;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractMidiDevice::*)($MidiDevice$Info*)>(&AbstractMidiDevice::init$))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL},
	{"closeInternal", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractMidiDevice::*)(Object$*)>(&AbstractMidiDevice::closeInternal))},
	{"createReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PROTECTED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"createTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PROTECTED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"doClose", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractMidiDevice::*)()>(&AbstractMidiDevice::doClose))},
	{"doOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice::*)()>(&AbstractMidiDevice::doOpen)), "javax.sound.midi.MidiUnavailableException"},
	{"finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"getDeviceInfo", "()Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $FINAL},
	{"getId", "()J", nullptr, $FINAL, $method(static_cast<int64_t(AbstractMidiDevice::*)()>(&AbstractMidiDevice::getId))},
	{"getMaxReceivers", "()I", nullptr, $PUBLIC | $FINAL},
	{"getMaxTransmitters", "()I", nullptr, $PUBLIC | $FINAL},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"getOpenKeepingObjects", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$List*(AbstractMidiDevice::*)()>(&AbstractMidiDevice::getOpenKeepingObjects))},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getReceiverList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Receiver;>;", $PRIVATE, $method(static_cast<$List*(AbstractMidiDevice::*)()>(&AbstractMidiDevice::getReceiverList))},
	{"getReceiverReferenceCounting", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getReceivers", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Receiver;>;", $PUBLIC | $FINAL},
	{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitterList", "()Lcom/sun/media/sound/AbstractMidiDevice$TransmitterList;", nullptr, $FINAL, $method(static_cast<$AbstractMidiDevice$TransmitterList*(AbstractMidiDevice::*)()>(&AbstractMidiDevice::getTransmitterList))},
	{"getTransmitterReferenceCounting", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"getTransmitters", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/midi/Transmitter;>;", $PUBLIC | $FINAL},
	{"hasReceivers", "()Z", nullptr, $PROTECTED},
	{"hasTransmitters", "()Z", nullptr, $PROTECTED},
	{"implClose", "()V", nullptr, $PROTECTED},
	{"implOpen", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"openInternal", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractMidiDevice::*)(Object$*)>(&AbstractMidiDevice::openInternal)), "javax.sound.midi.MidiUnavailableException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractMidiDevice_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDevice$TransmitterList", "com.sun.media.sound.AbstractMidiDevice", "TransmitterList", $FINAL},
	{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
	{"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver", "com.sun.media.sound.AbstractMidiDevice", "AbstractReceiver", $ABSTRACT},
	{}
};

$ClassInfo _AbstractMidiDevice_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractMidiDevice",
	"java.lang.Object",
	"javax.sound.midi.MidiDevice,com.sun.media.sound.ReferenceCountingDevice",
	_AbstractMidiDevice_FieldInfo_,
	_AbstractMidiDevice_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDevice$TransmitterList,com.sun.media.sound.AbstractMidiDevice$BasicTransmitter,com.sun.media.sound.AbstractMidiDevice$AbstractReceiver"
};

$Object* allocate$AbstractMidiDevice($Class* clazz) {
	return $of($alloc(AbstractMidiDevice));
}

int32_t AbstractMidiDevice::hashCode() {
	 return this->$MidiDevice::hashCode();
}

bool AbstractMidiDevice::equals(Object$* arg0) {
	 return this->$MidiDevice::equals(arg0);
}

$Object* AbstractMidiDevice::clone() {
	 return this->$MidiDevice::clone();
}

$String* AbstractMidiDevice::toString() {
	 return this->$MidiDevice::toString();
}

void AbstractMidiDevice::init$($MidiDevice$Info* info) {
	$set(this, traRecLock, $new($Object));
	$set(this, info, info);
	this->openRefCount = 0;
}

$MidiDevice$Info* AbstractMidiDevice::getDeviceInfo() {
	return this->info;
}

void AbstractMidiDevice::open() {
	$synchronized(this) {
		this->openRefCount = -1;
		doOpen();
	}
}

void AbstractMidiDevice::openInternal(Object$* object) {
	$synchronized(this) {
		if (this->openRefCount != -1) {
			++this->openRefCount;
			$nc($(getOpenKeepingObjects()))->add(object);
		}
		doOpen();
	}
}

void AbstractMidiDevice::doOpen() {
	$synchronized(this) {
		if (!isOpen()) {
			implOpen();
			this->open$ = true;
		}
	}
}

void AbstractMidiDevice::close() {
	$synchronized(this) {
		doClose();
		this->openRefCount = 0;
	}
}

void AbstractMidiDevice::closeInternal(Object$* object) {
	$synchronized(this) {
		if ($nc($(getOpenKeepingObjects()))->remove(object)) {
			if (this->openRefCount > 0) {
				--this->openRefCount;
				if (this->openRefCount == 0) {
					doClose();
				}
			}
		}
	}
}

void AbstractMidiDevice::doClose() {
	$synchronized(this) {
		if (isOpen()) {
			implClose();
			this->open$ = false;
		}
	}
}

bool AbstractMidiDevice::isOpen() {
	return this->open$;
}

void AbstractMidiDevice::implClose() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->traRecLock) {
		if (this->receiverList != nullptr) {
			for (int32_t i = 0; i < $nc(this->receiverList)->size(); ++i) {
				$nc(($cast($Receiver, $($nc(this->receiverList)->get(i)))))->close();
			}
			$nc(this->receiverList)->clear();
		}
		if (this->transmitterList != nullptr) {
			$nc(this->transmitterList)->close();
		}
	}
}

int64_t AbstractMidiDevice::getMicrosecondPosition() {
	return -1;
}

int32_t AbstractMidiDevice::getMaxReceivers() {
	if (hasReceivers()) {
		return -1;
	} else {
		return 0;
	}
}

int32_t AbstractMidiDevice::getMaxTransmitters() {
	if (hasTransmitters()) {
		return -1;
	} else {
		return 0;
	}
}

$Receiver* AbstractMidiDevice::getReceiver() {
	$useLocalCurrentObjectStackCache();
	$var($Receiver, receiver, nullptr);
	$synchronized(this->traRecLock) {
		$assign(receiver, createReceiver());
		$nc($(getReceiverList()))->add(receiver);
	}
	return receiver;
}

$List* AbstractMidiDevice::getReceivers() {
	$useLocalCurrentObjectStackCache();
	$var($List, recs, nullptr);
	$synchronized(this->traRecLock) {
		if (this->receiverList == nullptr) {
			$assign(recs, $Collections::unmodifiableList($$new($ArrayList, 0)));
		} else {
			$assign(recs, $Collections::unmodifiableList(($cast($List, $($nc(this->receiverList)->clone())))));
		}
	}
	return recs;
}

$Transmitter* AbstractMidiDevice::getTransmitter() {
	$useLocalCurrentObjectStackCache();
	$var($Transmitter, transmitter, nullptr);
	$synchronized(this->traRecLock) {
		$assign(transmitter, createTransmitter());
		$nc($(getTransmitterList()))->add(transmitter);
	}
	return transmitter;
}

$List* AbstractMidiDevice::getTransmitters() {
	$useLocalCurrentObjectStackCache();
	$var($List, tras, nullptr);
	$synchronized(this->traRecLock) {
		if (this->transmitterList == nullptr || $nc($nc(this->transmitterList)->transmitters)->size() == 0) {
			$assign(tras, $Collections::unmodifiableList($$new($ArrayList, 0)));
		} else {
			$assign(tras, $Collections::unmodifiableList(($cast($List, $($nc($nc(this->transmitterList)->transmitters)->clone())))));
		}
	}
	return tras;
}

int64_t AbstractMidiDevice::getId() {
	return this->id;
}

$Receiver* AbstractMidiDevice::getReceiverReferenceCounting() {
	$var($Receiver, receiver, nullptr);
	$synchronized(this->traRecLock) {
		$assign(receiver, getReceiver());
		this->openInternal(receiver);
	}
	return receiver;
}

$Transmitter* AbstractMidiDevice::getTransmitterReferenceCounting() {
	$var($Transmitter, transmitter, nullptr);
	$synchronized(this->traRecLock) {
		$assign(transmitter, getTransmitter());
		this->openInternal(transmitter);
	}
	return transmitter;
}

$List* AbstractMidiDevice::getOpenKeepingObjects() {
	$synchronized(this) {
		if (this->openKeepingObjects == nullptr) {
			$set(this, openKeepingObjects, $new($ArrayList));
		}
		return this->openKeepingObjects;
	}
}

$List* AbstractMidiDevice::getReceiverList() {
	$synchronized(this->traRecLock) {
		if (this->receiverList == nullptr) {
			$set(this, receiverList, $new($ArrayList));
		}
	}
	return this->receiverList;
}

bool AbstractMidiDevice::hasReceivers() {
	return false;
}

$Receiver* AbstractMidiDevice::createReceiver() {
	$throwNew($MidiUnavailableException, "MIDI IN receiver not available"_s);
	$shouldNotReachHere();
}

$AbstractMidiDevice$TransmitterList* AbstractMidiDevice::getTransmitterList() {
	$synchronized(this->traRecLock) {
		if (this->transmitterList == nullptr) {
			$set(this, transmitterList, $new($AbstractMidiDevice$TransmitterList, this));
		}
	}
	return this->transmitterList;
}

bool AbstractMidiDevice::hasTransmitters() {
	return false;
}

$Transmitter* AbstractMidiDevice::createTransmitter() {
	$throwNew($MidiUnavailableException, "MIDI OUT transmitter not available"_s);
	$shouldNotReachHere();
}

void AbstractMidiDevice::finalize() {
	close();
}

AbstractMidiDevice::AbstractMidiDevice() {
}

$Class* AbstractMidiDevice::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDevice, name, initialize, &_AbstractMidiDevice_ClassInfo_, allocate$AbstractMidiDevice);
	return class$;
}

$Class* AbstractMidiDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com