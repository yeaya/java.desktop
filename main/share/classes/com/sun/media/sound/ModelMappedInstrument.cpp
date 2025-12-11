#include <com/sun/media/sound/ModelMappedInstrument.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelMappedInstrument_FieldInfo_[] = {
	{"ins", "Lcom/sun/media/sound/ModelInstrument;", nullptr, $PRIVATE | $FINAL, $field(ModelMappedInstrument, ins)},
	{}
};

$MethodInfo _ModelMappedInstrument_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelInstrument;Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelMappedInstrument::*)($ModelInstrument*,$Patch*)>(&ModelMappedInstrument::init$))},
	{"getChannelMixer", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/sampled/AudioFormat;)Lcom/sun/media/sound/ModelChannelMixer;", nullptr, $PUBLIC},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDirector", "([Lcom/sun/media/sound/ModelPerformer;Ljavax/sound/midi/MidiChannel;Lcom/sun/media/sound/ModelDirectedPlayer;)Lcom/sun/media/sound/ModelDirector;", nullptr, $PUBLIC},
	{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelMappedInstrument_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelMappedInstrument",
	"com.sun.media.sound.ModelInstrument",
	nullptr,
	_ModelMappedInstrument_FieldInfo_,
	_ModelMappedInstrument_MethodInfo_
};

$Object* allocate$ModelMappedInstrument($Class* clazz) {
	return $of($alloc(ModelMappedInstrument));
}

void ModelMappedInstrument::init$($ModelInstrument* ins, $Patch* patch) {
	$useLocalCurrentObjectStackCache();
	$var($Soundbank, var$0, $nc(ins)->getSoundbank());
	$var($Patch, var$1, patch);
	$var($String, var$2, ins->getName());
	$ModelInstrument::init$(var$0, var$1, var$2, ins->getDataClass());
	$set(this, ins, ins);
}

$Object* ModelMappedInstrument::getData() {
	return $of($nc(this->ins)->getData());
}

$ModelPerformerArray* ModelMappedInstrument::getPerformers() {
	return $nc(this->ins)->getPerformers();
}

$ModelDirector* ModelMappedInstrument::getDirector($ModelPerformerArray* performers, $MidiChannel* channel, $ModelDirectedPlayer* player) {
	return $nc(this->ins)->getDirector(performers, channel, player);
}

$ModelChannelMixer* ModelMappedInstrument::getChannelMixer($MidiChannel* channel, $AudioFormat* format) {
	return $nc(this->ins)->getChannelMixer(channel, format);
}

ModelMappedInstrument::ModelMappedInstrument() {
}

$Class* ModelMappedInstrument::load$($String* name, bool initialize) {
	$loadClass(ModelMappedInstrument, name, initialize, &_ModelMappedInstrument_ClassInfo_, allocate$ModelMappedInstrument);
	return class$;
}

$Class* ModelMappedInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com