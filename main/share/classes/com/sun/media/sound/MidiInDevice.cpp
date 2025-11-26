#include <com/sun/media/sound/MidiInDevice.h>

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/MidiInDevice$MidiInTransmitter.h>
#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDeviceTransmitter.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $AbstractMidiDevice$TransmitterList = ::com::sun::media::sound::AbstractMidiDevice$TransmitterList;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $MidiInDevice$MidiInTransmitter = ::com::sun::media::sound::MidiInDevice$MidiInTransmitter;
using $MidiInDeviceProvider$MidiInDeviceInfo = ::com::sun::media::sound::MidiInDeviceProvider$MidiInDeviceInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceTransmitter = ::javax::sound::midi::MidiDeviceTransmitter;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiInDevice_FieldInfo_[] = {
	{"midiInThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $VOLATILE, $field(MidiInDevice, midiInThread)},
	{}
};

$MethodInfo _MidiInDevice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $method(static_cast<void(MidiInDevice::*)($AbstractMidiDeviceProvider$Info*)>(&MidiInDevice::init$))},
	{"callbackLongMessage", "([BJ)V", nullptr, 0, $method(static_cast<void(MidiInDevice::*)($bytes*,int64_t)>(&MidiInDevice::callbackLongMessage))},
	{"callbackShortMessage", "(IJ)V", nullptr, 0, $method(static_cast<void(MidiInDevice::*)(int32_t,int64_t)>(&MidiInDevice::callbackShortMessage))},
	{"createTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PROTECTED},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"hasTransmitters", "()Z", nullptr, $PROTECTED},
	{"implClose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"implOpen", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"nClose", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiInDevice::*)(int64_t)>(&MidiInDevice::nClose))},
	{"nGetMessages", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiInDevice::*)(int64_t)>(&MidiInDevice::nGetMessages))},
	{"nGetTimeStamp", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MidiInDevice::*)(int64_t)>(&MidiInDevice::nGetTimeStamp))},
	{"nOpen", "(I)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MidiInDevice::*)(int32_t)>(&MidiInDevice::nOpen)), "javax.sound.midi.MidiUnavailableException"},
	{"nStart", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiInDevice::*)(int64_t)>(&MidiInDevice::nStart)), "javax.sound.midi.MidiUnavailableException"},
	{"nStop", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiInDevice::*)(int64_t)>(&MidiInDevice::nStop))},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nClose 12
#define _METHOD_INDEX_nGetMessages 13
#define _METHOD_INDEX_nGetTimeStamp 14
#define _METHOD_INDEX_nOpen 15
#define _METHOD_INDEX_nStart 16
#define _METHOD_INDEX_nStop 17

$InnerClassInfo _MidiInDevice_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiInDevice$MidiInTransmitter", "com.sun.media.sound.MidiInDevice", "MidiInTransmitter", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _MidiInDevice_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiInDevice",
	"com.sun.media.sound.AbstractMidiDevice",
	"java.lang.Runnable",
	_MidiInDevice_FieldInfo_,
	_MidiInDevice_MethodInfo_,
	nullptr,
	nullptr,
	_MidiInDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiInDevice$MidiInTransmitter"
};

$Object* allocate$MidiInDevice($Class* clazz) {
	return $of($alloc(MidiInDevice));
}

void MidiInDevice::finalize() {
	this->$AbstractMidiDevice::finalize();
}

int32_t MidiInDevice::hashCode() {
	 return this->$AbstractMidiDevice::hashCode();
}

bool MidiInDevice::equals(Object$* arg0) {
	 return this->$AbstractMidiDevice::equals(arg0);
}

$Object* MidiInDevice::clone() {
	 return this->$AbstractMidiDevice::clone();
}

$String* MidiInDevice::toString() {
	 return this->$AbstractMidiDevice::toString();
}

void MidiInDevice::init$($AbstractMidiDeviceProvider$Info* info) {
	$AbstractMidiDevice::init$(info);
}

void MidiInDevice::implOpen() {
	$synchronized(this) {
		int32_t index = $nc(($cast($MidiInDeviceProvider$MidiInDeviceInfo, $(getDeviceInfo()))))->getIndex();
		this->id = nOpen(index);
		if (this->id == 0) {
			$throwNew($MidiUnavailableException, "Unable to open native device"_s);
		}
		if (this->midiInThread == nullptr) {
			$set(this, midiInThread, $JSSecurityManager::createThread(this, "Java Sound MidiInDevice Thread"_s, false, -1, true));
		}
		nStart(this->id);
	}
}

void MidiInDevice::implClose() {
	$synchronized(this) {
		int64_t oldId = this->id;
		this->id = 0;
		$AbstractMidiDevice::implClose();
		nStop(oldId);
		if (this->midiInThread != nullptr) {
			try {
				$nc(this->midiInThread)->join(1000);
			} catch ($InterruptedException& e) {
			}
		}
		nClose(oldId);
	}
}

int64_t MidiInDevice::getMicrosecondPosition() {
	int64_t timestamp = -1;
	if (isOpen()) {
		timestamp = nGetTimeStamp(this->id);
	}
	return timestamp;
}

bool MidiInDevice::hasTransmitters() {
	return true;
}

$Transmitter* MidiInDevice::createTransmitter() {
	return $new($MidiInDevice$MidiInTransmitter, this);
}

void MidiInDevice::run() {
	while (this->id != 0) {
		nGetMessages(this->id);
		if (this->id != 0) {
			try {
				$Thread::sleep(1);
			} catch ($InterruptedException& e) {
			}
		}
	}
	$set(this, midiInThread, nullptr);
}

void MidiInDevice::callbackShortMessage(int32_t packedMsg, int64_t timeStamp) {
	if (packedMsg == 0 || this->id == 0) {
		return;
	}
	$nc($(getTransmitterList()))->sendMessage(packedMsg, timeStamp);
}

void MidiInDevice::callbackLongMessage($bytes* data, int64_t timeStamp) {
	if (this->id == 0 || data == nullptr) {
		return;
	}
	$nc($(getTransmitterList()))->sendMessage(data, timeStamp);
}

int64_t MidiInDevice::nOpen(int32_t index) {
	int64_t $ret = 0;
	$prepareNative(MidiInDevice, nOpen, int64_t, int32_t index);
	$ret = $invokeNative(MidiInDevice, nOpen, index);
	$finishNative();
	return $ret;
}

void MidiInDevice::nClose(int64_t id) {
	$prepareNative(MidiInDevice, nClose, void, int64_t id);
	$invokeNative(MidiInDevice, nClose, id);
	$finishNative();
}

void MidiInDevice::nStart(int64_t id) {
	$prepareNative(MidiInDevice, nStart, void, int64_t id);
	$invokeNative(MidiInDevice, nStart, id);
	$finishNative();
}

void MidiInDevice::nStop(int64_t id) {
	$prepareNative(MidiInDevice, nStop, void, int64_t id);
	$invokeNative(MidiInDevice, nStop, id);
	$finishNative();
}

int64_t MidiInDevice::nGetTimeStamp(int64_t id) {
	int64_t $ret = 0;
	$prepareNative(MidiInDevice, nGetTimeStamp, int64_t, int64_t id);
	$ret = $invokeNative(MidiInDevice, nGetTimeStamp, id);
	$finishNative();
	return $ret;
}

void MidiInDevice::nGetMessages(int64_t id) {
	$prepareNative(MidiInDevice, nGetMessages, void, int64_t id);
	$invokeNative(MidiInDevice, nGetMessages, id);
	$finishNative();
}

MidiInDevice::MidiInDevice() {
}

$Class* MidiInDevice::load$($String* name, bool initialize) {
	$loadClass(MidiInDevice, name, initialize, &_MidiInDevice_ClassInfo_, allocate$MidiInDevice);
	return class$;
}

$Class* MidiInDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com