#include <com/sun/media/sound/SoftInstrument.h>

#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $SoftPerformerArray = $Array<::com::sun::media::sound::SoftPerformer>;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instrument = ::javax::sound::midi::Instrument;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftInstrument_FieldInfo_[] = {
	{"performers", "[Lcom/sun/media/sound/SoftPerformer;", nullptr, $PRIVATE, $field(SoftInstrument, performers)},
	{"modelperformers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PRIVATE, $field(SoftInstrument, modelperformers)},
	{"data", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftInstrument, data)},
	{"ins", "Lcom/sun/media/sound/ModelInstrument;", nullptr, $PRIVATE | $FINAL, $field(SoftInstrument, ins)},
	{}
};

$MethodInfo _SoftInstrument_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/ModelInstrument;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftInstrument::*)($ModelInstrument*)>(&SoftInstrument::init$))},
	{"<init>", "(Lcom/sun/media/sound/ModelInstrument;[Lcom/sun/media/sound/ModelPerformer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftInstrument::*)($ModelInstrument*,$ModelPerformerArray*)>(&SoftInstrument::init$))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDirector", "(Ljavax/sound/midi/MidiChannel;Lcom/sun/media/sound/ModelDirectedPlayer;)Lcom/sun/media/sound/ModelDirector;", nullptr, $PUBLIC, $method(static_cast<$ModelDirector*(SoftInstrument::*)($MidiChannel*,$ModelDirectedPlayer*)>(&SoftInstrument::getDirector))},
	{"getPerformer", "(I)Lcom/sun/media/sound/SoftPerformer;", nullptr, $PUBLIC, $method(static_cast<$SoftPerformer*(SoftInstrument::*)(int32_t)>(&SoftInstrument::getPerformer))},
	{"getSourceInstrument", "()Lcom/sun/media/sound/ModelInstrument;", nullptr, $PUBLIC, $method(static_cast<$ModelInstrument*(SoftInstrument::*)()>(&SoftInstrument::getSourceInstrument))},
	{"initPerformers", "([Lcom/sun/media/sound/ModelPerformer;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftInstrument::*)($ModelPerformerArray*)>(&SoftInstrument::initPerformers))},
	{}
};

$ClassInfo _SoftInstrument_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftInstrument",
	"javax.sound.midi.Instrument",
	nullptr,
	_SoftInstrument_FieldInfo_,
	_SoftInstrument_MethodInfo_
};

$Object* allocate$SoftInstrument($Class* clazz) {
	return $of($alloc(SoftInstrument));
}

void SoftInstrument::init$($ModelInstrument* ins) {
	$var($Soundbank, var$0, $nc(ins)->getSoundbank());
	$var($Patch, var$1, ins->getPatch());
	$var($String, var$2, ins->getName());
	$Instrument::init$(var$0, var$1, var$2, ins->getDataClass());
	$set(this, data, $nc(ins)->getData());
	$set(this, ins, ins);
	initPerformers($(ins->getPerformers()));
}

void SoftInstrument::init$($ModelInstrument* ins, $ModelPerformerArray* overrideperformers) {
	$var($Soundbank, var$0, $nc(ins)->getSoundbank());
	$var($Patch, var$1, ins->getPatch());
	$var($String, var$2, ins->getName());
	$Instrument::init$(var$0, var$1, var$2, ins->getDataClass());
	$set(this, data, $nc(ins)->getData());
	$set(this, ins, ins);
	initPerformers(overrideperformers);
}

void SoftInstrument::initPerformers($ModelPerformerArray* modelperformers) {
	$set(this, modelperformers, modelperformers);
	$set(this, performers, $new($SoftPerformerArray, $nc(modelperformers)->length));
	for (int32_t i = 0; i < modelperformers->length; ++i) {
		$nc(this->performers)->set(i, $$new($SoftPerformer, modelperformers->get(i)));
	}
}

$ModelDirector* SoftInstrument::getDirector($MidiChannel* channel, $ModelDirectedPlayer* player) {
	return $nc(this->ins)->getDirector(this->modelperformers, channel, player);
}

$ModelInstrument* SoftInstrument::getSourceInstrument() {
	return this->ins;
}

$Object* SoftInstrument::getData() {
	return $of(this->data);
}

$SoftPerformer* SoftInstrument::getPerformer(int32_t index) {
	return $nc(this->performers)->get(index);
}

SoftInstrument::SoftInstrument() {
}

$Class* SoftInstrument::load$($String* name, bool initialize) {
	$loadClass(SoftInstrument, name, initialize, &_SoftInstrument_ClassInfo_, allocate$SoftInstrument);
	return class$;
}

$Class* SoftInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com