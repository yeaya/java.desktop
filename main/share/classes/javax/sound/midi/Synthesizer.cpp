#include <javax/sound/midi/Synthesizer.h>

#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Synthesizer_MethodInfo_[] = {
	{"getAvailableInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChannels", "()[Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultSoundbank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLatency", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoadedInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaxPolyphony", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getVoiceStatus", "()[Ljavax/sound/midi/VoiceStatus;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSoundbankSupported", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"loadAllInstruments", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"loadInstrument", "(Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"loadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"remapInstrument", "(Ljavax/sound/midi/Instrument;Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unloadAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unloadInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unloadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Synthesizer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Synthesizer",
	nullptr,
	"javax.sound.midi.MidiDevice",
	nullptr,
	_Synthesizer_MethodInfo_
};

$Object* allocate$Synthesizer($Class* clazz) {
	return $of($alloc(Synthesizer));
}

$Class* Synthesizer::load$($String* name, bool initialize) {
	$loadClass(Synthesizer, name, initialize, &_Synthesizer_ClassInfo_, allocate$Synthesizer);
	return class$;
}

$Class* Synthesizer::class$ = nullptr;

		} // midi
	} // sound
} // javax