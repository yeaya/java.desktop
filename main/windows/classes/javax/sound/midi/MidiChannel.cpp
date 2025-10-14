#include <javax/sound/midi/MidiChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiChannel_MethodInfo_[] = {
	{"allNotesOff", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"allSoundOff", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"controlChange", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getChannelPressure", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getController", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMono", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getMute", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getOmni", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getPitchBend", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getProgram", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSolo", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"localControl", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"noteOff", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"noteOff", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"noteOn", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"programChange", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"programChange", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"resetAllControllers", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMono", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMute", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOmni", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSolo", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MidiChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MidiChannel",
	nullptr,
	nullptr,
	nullptr,
	_MidiChannel_MethodInfo_
};

$Object* allocate$MidiChannel($Class* clazz) {
	return $of($alloc(MidiChannel));
}

$Class* MidiChannel::load$($String* name, bool initialize) {
	$loadClass(MidiChannel, name, initialize, &_MidiChannel_ClassInfo_, allocate$MidiChannel);
	return class$;
}

$Class* MidiChannel::class$ = nullptr;

		} // midi
	} // sound
} // javax