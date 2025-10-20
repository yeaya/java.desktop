#include <com/sun/media/sound/ModelInstrument.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/ModelStandardIndexedDirector.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ModelStandardIndexedDirector = ::com::sun::media::sound::ModelStandardIndexedDirector;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instrument = ::javax::sound::midi::Instrument;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelInstrument_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(ModelInstrument::*)($Soundbank*,$Patch*,$String*,$Class*)>(&ModelInstrument::init$))},
	{"getChannelMixer", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/sampled/AudioFormat;)Lcom/sun/media/sound/ModelChannelMixer;", nullptr, $PUBLIC},
	{"getChannels", "()[Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<$booleans*(ModelInstrument::*)()>(&ModelInstrument::getChannels))},
	{"getDirector", "([Lcom/sun/media/sound/ModelPerformer;Ljavax/sound/midi/MidiChannel;Lcom/sun/media/sound/ModelDirectedPlayer;)Lcom/sun/media/sound/ModelDirector;", nullptr, $PUBLIC},
	{"getKeys", "()[Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$StringArray*(ModelInstrument::*)()>(&ModelInstrument::getKeys))},
	{"getPatchAlias", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Patch*(ModelInstrument::*)()>(&ModelInstrument::getPatchAlias))},
	{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelInstrument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.ModelInstrument",
	"javax.sound.midi.Instrument",
	nullptr,
	nullptr,
	_ModelInstrument_MethodInfo_
};

$Object* allocate$ModelInstrument($Class* clazz) {
	return $of($alloc(ModelInstrument));
}

void ModelInstrument::init$($Soundbank* soundbank, $Patch* patch, $String* name, $Class* dataClass) {
	$Instrument::init$(soundbank, patch, name, dataClass);
}

$ModelDirector* ModelInstrument::getDirector($ModelPerformerArray* performers, $MidiChannel* channel, $ModelDirectedPlayer* player) {
	return $new($ModelStandardIndexedDirector, performers, player);
}

$ModelPerformerArray* ModelInstrument::getPerformers() {
	return $new($ModelPerformerArray, 0);
}

$ModelChannelMixer* ModelInstrument::getChannelMixer($MidiChannel* channel, $AudioFormat* format) {
	return nullptr;
}

$Patch* ModelInstrument::getPatchAlias() {
	$useLocalCurrentObjectStackCache();
	$var($Patch, patch, getPatch());
	int32_t program = $nc(patch)->getProgram();
	int32_t bank = patch->getBank();
	if (bank != 0) {
		return patch;
	}
	bool percussion = false;
	if ($instanceOf($ModelPatch, $(getPatch()))) {
		percussion = $nc(($cast($ModelPatch, $(getPatch()))))->isPercussion();
	}
	if (percussion) {
		return $new($Patch, 120 << 7, program);
	} else {
		return $new($Patch, 121 << 7, program);
	}
}

$StringArray* ModelInstrument::getKeys() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, keys, $new($StringArray, 128));
	{
		$var($ModelPerformerArray, arr$, getPerformers());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModelPerformer, performer, arr$->get(i$));
			{
				for (int32_t k = $nc(performer)->getKeyFrom(); k <= performer->getKeyTo(); ++k) {
					if (k >= 0 && k < 128 && keys->get(k) == nullptr) {
						$var($String, name, performer->getName());
						if (name == nullptr) {
							$assign(name, "untitled"_s);
						}
						keys->set(k, name);
					}
				}
			}
		}
	}
	return keys;
}

$booleans* ModelInstrument::getChannels() {
	$useLocalCurrentObjectStackCache();
	bool percussion = false;
	if ($instanceOf($ModelPatch, $(getPatch()))) {
		percussion = $nc(($cast($ModelPatch, $(getPatch()))))->isPercussion();
	}
	if (percussion) {
		$var($booleans, ch, $new($booleans, 16));
		for (int32_t i = 0; i < ch->length; ++i) {
			ch->set(i, false);
		}
		ch->set(9, true);
		return ch;
	}
	int32_t bank = $nc($(getPatch()))->getBank();
	if (bank >> 7 == 120 || bank >> 7 == 121) {
		$var($booleans, ch, $new($booleans, 16));
		for (int32_t i = 0; i < ch->length; ++i) {
			ch->set(i, true);
		}
		return ch;
	}
	$var($booleans, ch, $new($booleans, 16));
	for (int32_t i = 0; i < ch->length; ++i) {
		ch->set(i, true);
	}
	ch->set(9, false);
	return ch;
}

ModelInstrument::ModelInstrument() {
}

$Class* ModelInstrument::load$($String* name, bool initialize) {
	$loadClass(ModelInstrument, name, initialize, &_ModelInstrument_ClassInfo_, allocate$ModelInstrument);
	return class$;
}

$Class* ModelInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com