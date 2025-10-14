#include <com/sun/media/sound/RealTimeSequencer$SequencerTransmitter.h>

#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
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
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RealTimeSequencer$SequencerTransmitter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$SequencerTransmitter, this$0)},
	{}
};

$MethodInfo _RealTimeSequencer$SequencerTransmitter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;)V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer$SequencerTransmitter::*)($RealTimeSequencer*)>(&RealTimeSequencer$SequencerTransmitter::init$))},
	{}
};

$InnerClassInfo _RealTimeSequencer$SequencerTransmitter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RealTimeSequencer$SequencerTransmitter", "com.sun.media.sound.RealTimeSequencer", "SequencerTransmitter", $PRIVATE},
	{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
	{}
};

$ClassInfo _RealTimeSequencer$SequencerTransmitter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencer$SequencerTransmitter",
	"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter",
	nullptr,
	_RealTimeSequencer$SequencerTransmitter_FieldInfo_,
	_RealTimeSequencer$SequencerTransmitter_MethodInfo_,
	nullptr,
	nullptr,
	_RealTimeSequencer$SequencerTransmitter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RealTimeSequencer"
};

$Object* allocate$RealTimeSequencer$SequencerTransmitter($Class* clazz) {
	return $of($alloc(RealTimeSequencer$SequencerTransmitter));
}

void RealTimeSequencer$SequencerTransmitter::init$($RealTimeSequencer* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$BasicTransmitter::init$(this$0);
}

RealTimeSequencer$SequencerTransmitter::RealTimeSequencer$SequencerTransmitter() {
}

$Class* RealTimeSequencer$SequencerTransmitter::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencer$SequencerTransmitter, name, initialize, &_RealTimeSequencer$SequencerTransmitter_ClassInfo_, allocate$RealTimeSequencer$SequencerTransmitter);
	return class$;
}

$Class* RealTimeSequencer$SequencerTransmitter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com