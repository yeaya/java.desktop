#include <com/sun/media/sound/MidiInDevice$MidiInTransmitter.h>

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/MidiInDevice.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $MidiInDevice = ::com::sun::media::sound::MidiInDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiInDevice$MidiInTransmitter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/MidiInDevice;", nullptr, $FINAL | $SYNTHETIC, $field(MidiInDevice$MidiInTransmitter, this$0)},
	{}
};

$MethodInfo _MidiInDevice$MidiInTransmitter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/MidiInDevice;)V", nullptr, $PRIVATE, $method(static_cast<void(MidiInDevice$MidiInTransmitter::*)($MidiInDevice*)>(&MidiInDevice$MidiInTransmitter::init$))},
	{}
};

$InnerClassInfo _MidiInDevice$MidiInTransmitter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiInDevice$MidiInTransmitter", "com.sun.media.sound.MidiInDevice", "MidiInTransmitter", $PRIVATE | $FINAL},
	{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
	{}
};

$ClassInfo _MidiInDevice$MidiInTransmitter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiInDevice$MidiInTransmitter",
	"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter",
	nullptr,
	_MidiInDevice$MidiInTransmitter_FieldInfo_,
	_MidiInDevice$MidiInTransmitter_MethodInfo_,
	nullptr,
	nullptr,
	_MidiInDevice$MidiInTransmitter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiInDevice"
};

$Object* allocate$MidiInDevice$MidiInTransmitter($Class* clazz) {
	return $of($alloc(MidiInDevice$MidiInTransmitter));
}

void MidiInDevice$MidiInTransmitter::init$($MidiInDevice* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$BasicTransmitter::init$(this$0);
}

MidiInDevice$MidiInTransmitter::MidiInDevice$MidiInTransmitter() {
}

$Class* MidiInDevice$MidiInTransmitter::load$($String* name, bool initialize) {
	$loadClass(MidiInDevice$MidiInTransmitter, name, initialize, &_MidiInDevice$MidiInTransmitter_ClassInfo_, allocate$MidiInDevice$MidiInTransmitter);
	return class$;
}

$Class* MidiInDevice$MidiInTransmitter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com