#include <com/sun/media/sound/MidiOutDevice.h>

#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiOutDevice$MidiOutReceiver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$AbstractReceiver = ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDevice$MidiOutReceiver = ::com::sun::media::sound::MidiOutDevice$MidiOutReceiver;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceReceiver = ::javax::sound::midi::MidiDeviceReceiver;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Receiver = ::javax::sound::midi::Receiver;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _MidiOutDevice_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $method(static_cast<void(MidiOutDevice::*)($AbstractMidiDeviceProvider$Info*)>(&MidiOutDevice::init$))},
	{"createReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PROTECTED},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"hasReceivers", "()Z", nullptr, $PROTECTED},
	{"implClose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"implOpen", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"nClose", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiOutDevice::*)(int64_t)>(&MidiOutDevice::nClose))},
	{"nGetTimeStamp", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MidiOutDevice::*)(int64_t)>(&MidiOutDevice::nGetTimeStamp))},
	{"nOpen", "(I)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(MidiOutDevice::*)(int32_t)>(&MidiOutDevice::nOpen)), "javax.sound.midi.MidiUnavailableException"},
	{"nSendLongMessage", "(J[BIJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiOutDevice::*)(int64_t,$bytes*,int32_t,int64_t)>(&MidiOutDevice::nSendLongMessage))},
	{"nSendShortMessage", "(JIJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(MidiOutDevice::*)(int64_t,int32_t,int64_t)>(&MidiOutDevice::nSendShortMessage))},
	{}
};

#define _METHOD_INDEX_nClose 6
#define _METHOD_INDEX_nGetTimeStamp 7
#define _METHOD_INDEX_nOpen 8
#define _METHOD_INDEX_nSendLongMessage 9
#define _METHOD_INDEX_nSendShortMessage 10

$InnerClassInfo _MidiOutDevice_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiOutDevice$MidiOutReceiver", "com.sun.media.sound.MidiOutDevice", "MidiOutReceiver", $FINAL},
	{}
};

$ClassInfo _MidiOutDevice_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiOutDevice",
	"com.sun.media.sound.AbstractMidiDevice",
	nullptr,
	nullptr,
	_MidiOutDevice_MethodInfo_,
	nullptr,
	nullptr,
	_MidiOutDevice_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiOutDevice$MidiOutReceiver"
};

$Object* allocate$MidiOutDevice($Class* clazz) {
	return $of($alloc(MidiOutDevice));
}

void MidiOutDevice::init$($AbstractMidiDeviceProvider$Info* info) {
	$AbstractMidiDevice::init$(info);
}

void MidiOutDevice::implOpen() {
	$synchronized(this) {
		int32_t index = $nc(($cast($AbstractMidiDeviceProvider$Info, $(getDeviceInfo()))))->getIndex();
		this->id = nOpen(index);
		if (this->id == 0) {
			$throwNew($MidiUnavailableException, "Unable to open native device"_s);
		}
	}
}

void MidiOutDevice::implClose() {
	$synchronized(this) {
		int64_t oldId = this->id;
		this->id = 0;
		$AbstractMidiDevice::implClose();
		nClose(oldId);
	}
}

int64_t MidiOutDevice::getMicrosecondPosition() {
	int64_t timestamp = -1;
	if (isOpen()) {
		timestamp = nGetTimeStamp(this->id);
	}
	return timestamp;
}

bool MidiOutDevice::hasReceivers() {
	return true;
}

$Receiver* MidiOutDevice::createReceiver() {
	return $new($MidiOutDevice$MidiOutReceiver, this);
}

int64_t MidiOutDevice::nOpen(int32_t index) {
	int64_t $ret = 0;
	$prepareNative(MidiOutDevice, nOpen, int64_t, int32_t index);
	$ret = $invokeNative(MidiOutDevice, nOpen, index);
	$finishNative();
	return $ret;
}

void MidiOutDevice::nClose(int64_t id) {
	$prepareNative(MidiOutDevice, nClose, void, int64_t id);
	$invokeNative(MidiOutDevice, nClose, id);
	$finishNative();
}

void MidiOutDevice::nSendShortMessage(int64_t id, int32_t packedMsg, int64_t timeStamp) {
	$prepareNative(MidiOutDevice, nSendShortMessage, void, int64_t id, int32_t packedMsg, int64_t timeStamp);
	$invokeNative(MidiOutDevice, nSendShortMessage, id, packedMsg, timeStamp);
	$finishNative();
}

void MidiOutDevice::nSendLongMessage(int64_t id, $bytes* data, int32_t size, int64_t timeStamp) {
	$prepareNative(MidiOutDevice, nSendLongMessage, void, int64_t id, $bytes* data, int32_t size, int64_t timeStamp);
	$invokeNative(MidiOutDevice, nSendLongMessage, id, data, size, timeStamp);
	$finishNative();
}

int64_t MidiOutDevice::nGetTimeStamp(int64_t id) {
	int64_t $ret = 0;
	$prepareNative(MidiOutDevice, nGetTimeStamp, int64_t, int64_t id);
	$ret = $invokeNative(MidiOutDevice, nGetTimeStamp, id);
	$finishNative();
	return $ret;
}

MidiOutDevice::MidiOutDevice() {
}

$Class* MidiOutDevice::load$($String* name, bool initialize) {
	$loadClass(MidiOutDevice, name, initialize, &_MidiOutDevice_ClassInfo_, allocate$MidiOutDevice);
	return class$;
}

$Class* MidiOutDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com