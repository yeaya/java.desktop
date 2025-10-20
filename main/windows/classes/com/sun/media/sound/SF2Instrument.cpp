#include <com/sun/media/sound/SF2Instrument.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <com/sun/media/sound/ModelByteBufferWavetable.h>
#include <com/sun/media/sound/ModelConnectionBlock.h>
#include <com/sun/media/sound/ModelDestination.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/ModelStandardTransform.h>
#include <com/sun/media/sound/ModelTransform.h>
#include <com/sun/media/sound/ModelWavetable.h>
#include <com/sun/media/sound/SF2GlobalRegion.h>
#include <com/sun/media/sound/SF2Instrument$1.h>
#include <com/sun/media/sound/SF2InstrumentRegion.h>
#include <com/sun/media/sound/SF2Layer.h>
#include <com/sun/media/sound/SF2LayerRegion.h>
#include <com/sun/media/sound/SF2Modulator.h>
#include <com/sun/media/sound/SF2Region.h>
#include <com/sun/media/sound/SF2Sample.h>
#include <com/sun/media/sound/SF2Soundbank.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef DESTINATION_CHORUS
#undef DESTINATION_EG1_ATTACK
#undef DESTINATION_EG1_DECAY
#undef DESTINATION_EG1_DELAY
#undef DESTINATION_EG1_HOLD
#undef DESTINATION_EG1_RELEASE
#undef DESTINATION_EG1_SUSTAIN
#undef DESTINATION_EG2_ATTACK
#undef DESTINATION_EG2_DECAY
#undef DESTINATION_EG2_DELAY
#undef DESTINATION_EG2_HOLD
#undef DESTINATION_EG2_RELEASE
#undef DESTINATION_EG2_SUSTAIN
#undef DESTINATION_FILTER_FREQ
#undef DESTINATION_FILTER_Q
#undef DESTINATION_GAIN
#undef DESTINATION_KEYNUMBER
#undef DESTINATION_LFO1_DELAY
#undef DESTINATION_LFO1_FREQ
#undef DESTINATION_LFO2_DELAY
#undef DESTINATION_LFO2_FREQ
#undef DESTINATION_PAN
#undef DESTINATION_PITCH
#undef DESTINATION_REVERB
#undef DESTINATION_VELOCITY
#undef DIRECTION_MAX2MIN
#undef DIRECTION_MIN2MAX
#undef GENERATOR_ATTACKMODENV
#undef GENERATOR_ATTACKVOLENV
#undef GENERATOR_CHORUSEFFECTSSEND
#undef GENERATOR_COARSETUNE
#undef GENERATOR_DECAYMODENV
#undef GENERATOR_DECAYVOLENV
#undef GENERATOR_DELAYMODENV
#undef GENERATOR_DELAYMODLFO
#undef GENERATOR_DELAYVIBLFO
#undef GENERATOR_DELAYVOLENV
#undef GENERATOR_ENDADDRSCOARSEOFFSET
#undef GENERATOR_ENDADDRSOFFSET
#undef GENERATOR_ENDLOOPADDRSCOARSEOFFSET
#undef GENERATOR_ENDLOOPADDRSOFFSET
#undef GENERATOR_EXCLUSIVECLASS
#undef GENERATOR_FINETUNE
#undef GENERATOR_FREQMODLFO
#undef GENERATOR_FREQVIBLFO
#undef GENERATOR_HOLDMODENV
#undef GENERATOR_HOLDVOLENV
#undef GENERATOR_INITIALATTENUATION
#undef GENERATOR_INITIALFILTERFC
#undef GENERATOR_INITIALFILTERQ
#undef GENERATOR_KEYNUM
#undef GENERATOR_KEYNUMTOMODENVDECAY
#undef GENERATOR_KEYNUMTOMODENVHOLD
#undef GENERATOR_KEYNUMTOVOLENVDECAY
#undef GENERATOR_KEYNUMTOVOLENVHOLD
#undef GENERATOR_KEYRANGE
#undef GENERATOR_MODENVTOFILTERFC
#undef GENERATOR_MODENVTOPITCH
#undef GENERATOR_MODLFOTOFILTERFC
#undef GENERATOR_MODLFOTOPITCH
#undef GENERATOR_MODLFOTOVOLUME
#undef GENERATOR_OVERRIDINGROOTKEY
#undef GENERATOR_PAN
#undef GENERATOR_RELEASEMODENV
#undef GENERATOR_RELEASEVOLENV
#undef GENERATOR_REVERBEFFECTSSEND
#undef GENERATOR_SAMPLEMODES
#undef GENERATOR_SCALETUNING
#undef GENERATOR_STARTADDRSCOARSEOFFSET
#undef GENERATOR_STARTADDRSOFFSET
#undef GENERATOR_STARTLOOPADDRSCOARSEOFFSET
#undef GENERATOR_STARTLOOPADDRSOFFSET
#undef GENERATOR_SUSTAINMODENV
#undef GENERATOR_SUSTAINVOLENV
#undef GENERATOR_VELOCITY
#undef GENERATOR_VELRANGE
#undef GENERATOR_VIBLFOTOPITCH
#undef LOOP_TYPE_FORWARD
#undef LOOP_TYPE_RELEASE
#undef NEGATIVE_INFINITY
#undef POLARITY_BIPOLAR
#undef POLARITY_UNIPOLAR
#undef SOURCE_CHANNEL_PRESSURE
#undef SOURCE_DIRECTION_MAX_MIN
#undef SOURCE_EG2
#undef SOURCE_LFO1
#undef SOURCE_LFO2
#undef SOURCE_MIDI_CHANNEL_PRESSURE
#undef SOURCE_MIDI_CONTROL
#undef SOURCE_MIDI_PITCH
#undef SOURCE_MIDI_POLY_PRESSURE
#undef SOURCE_NOTEON_KEYNUMBER
#undef SOURCE_NOTEON_VELOCITY
#undef SOURCE_NOTE_ON_KEYNUMBER
#undef SOURCE_NOTE_ON_VELOCITY
#undef SOURCE_PITCH_SENSITIVITY
#undef SOURCE_PITCH_WHEEL
#undef SOURCE_POLARITY_BIPOLAR
#undef SOURCE_POLY_PRESSURE
#undef SOURCE_TYPE_CONCAVE
#undef SOURCE_TYPE_CONVEX
#undef SOURCE_TYPE_SWITCH
#undef TRANSFORM_ABSOLUTE
#undef TRANSFORM_CONCAVE
#undef TRANSFORM_CONVEX
#undef TRANSFORM_LINEAR
#undef TRANSFORM_SWITCH

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelSourceArray = $Array<::com::sun::media::sound::ModelSource>;
using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $ModelByteBufferWavetable = ::com::sun::media::sound::ModelByteBufferWavetable;
using $ModelConnectionBlock = ::com::sun::media::sound::ModelConnectionBlock;
using $ModelDestination = ::com::sun::media::sound::ModelDestination;
using $ModelIdentifier = ::com::sun::media::sound::ModelIdentifier;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ModelStandardTransform = ::com::sun::media::sound::ModelStandardTransform;
using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $ModelWavetable = ::com::sun::media::sound::ModelWavetable;
using $SF2GlobalRegion = ::com::sun::media::sound::SF2GlobalRegion;
using $SF2Instrument$1 = ::com::sun::media::sound::SF2Instrument$1;
using $SF2InstrumentRegion = ::com::sun::media::sound::SF2InstrumentRegion;
using $SF2Layer = ::com::sun::media::sound::SF2Layer;
using $SF2LayerRegion = ::com::sun::media::sound::SF2LayerRegion;
using $SF2Modulator = ::com::sun::media::sound::SF2Modulator;
using $SF2Region = ::com::sun::media::sound::SF2Region;
using $SF2Sample = ::com::sun::media::sound::SF2Sample;
using $SF2Soundbank = ::com::sun::media::sound::SF2Soundbank;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Instrument_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SF2Instrument, name)},
	{"preset", "I", nullptr, 0, $field(SF2Instrument, preset)},
	{"bank", "I", nullptr, 0, $field(SF2Instrument, bank)},
	{"library", "J", nullptr, 0, $field(SF2Instrument, library)},
	{"genre", "J", nullptr, 0, $field(SF2Instrument, genre)},
	{"morphology", "J", nullptr, 0, $field(SF2Instrument, morphology)},
	{"globalregion", "Lcom/sun/media/sound/SF2GlobalRegion;", nullptr, 0, $field(SF2Instrument, globalregion)},
	{"regions", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/SF2InstrumentRegion;>;", 0, $field(SF2Instrument, regions)},
	{}
};

$MethodInfo _SF2Instrument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)()>(&SF2Instrument::init$))},
	{"<init>", "(Lcom/sun/media/sound/SF2Soundbank;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)($SF2Soundbank*)>(&SF2Instrument::init$))},
	{"addTimecentValue", "(Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelIdentifier;S)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Instrument::*)($ModelPerformer*,$ModelIdentifier*,int16_t)>(&SF2Instrument::addTimecentValue))},
	{"addValue", "(Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelIdentifier;S)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Instrument::*)($ModelPerformer*,$ModelIdentifier*,int16_t)>(&SF2Instrument::addValue))},
	{"addValue", "(Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/ModelIdentifier;D)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Instrument::*)($ModelPerformer*,$ModelIdentifier*,double)>(&SF2Instrument::addValue))},
	{"convertDestination", "(I[D[Lcom/sun/media/sound/ModelSource;)Lcom/sun/media/sound/ModelDestination;", nullptr, $STATIC, $method(static_cast<$ModelDestination*(*)(int32_t,$doubles*,$ModelSourceArray*)>(&SF2Instrument::convertDestination))},
	{"convertModulator", "(Lcom/sun/media/sound/ModelPerformer;Lcom/sun/media/sound/SF2Modulator;)V", nullptr, $PRIVATE, $method(static_cast<void(SF2Instrument::*)($ModelPerformer*,$SF2Modulator*)>(&SF2Instrument::convertModulator))},
	{"convertSource", "(I)Lcom/sun/media/sound/ModelSource;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ModelSource*(*)(int32_t)>(&SF2Instrument::convertSource))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGeneratorValue", "(Ljava/util/Map;I)S", "(Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Short;>;I)S", $PRIVATE, $method(static_cast<int16_t(SF2Instrument::*)($Map*,int32_t)>(&SF2Instrument::getGeneratorValue))},
	{"getGenre", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Instrument::*)()>(&SF2Instrument::getGenre))},
	{"getGlobalRegion", "()Lcom/sun/media/sound/SF2GlobalRegion;", nullptr, $PUBLIC, $method(static_cast<$SF2GlobalRegion*(SF2Instrument::*)()>(&SF2Instrument::getGlobalRegion))},
	{"getLibrary", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Instrument::*)()>(&SF2Instrument::getLibrary))},
	{"getMorphology", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Instrument::*)()>(&SF2Instrument::getMorphology))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC},
	{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC},
	{"getRegions", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/SF2InstrumentRegion;>;", $PUBLIC, $method(static_cast<$List*(SF2Instrument::*)()>(&SF2Instrument::getRegions))},
	{"setGenre", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)(int64_t)>(&SF2Instrument::setGenre))},
	{"setGlobalZone", "(Lcom/sun/media/sound/SF2GlobalRegion;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)($SF2GlobalRegion*)>(&SF2Instrument::setGlobalZone))},
	{"setLibrary", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)(int64_t)>(&SF2Instrument::setLibrary))},
	{"setMorphology", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)(int64_t)>(&SF2Instrument::setMorphology))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)($String*)>(&SF2Instrument::setName))},
	{"setPatch", "(Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Instrument::*)($Patch*)>(&SF2Instrument::setPatch))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SF2Instrument_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SF2Instrument$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SF2Instrument_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Instrument",
	"com.sun.media.sound.ModelInstrument",
	nullptr,
	_SF2Instrument_FieldInfo_,
	_SF2Instrument_MethodInfo_,
	nullptr,
	nullptr,
	_SF2Instrument_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SF2Instrument$1"
};

$Object* allocate$SF2Instrument($Class* clazz) {
	return $of($alloc(SF2Instrument));
}

void SF2Instrument::init$() {
	$ModelInstrument::init$(nullptr, nullptr, nullptr, nullptr);
	$set(this, name, ""_s);
	this->preset = 0;
	this->bank = 0;
	this->library = 0;
	this->genre = 0;
	this->morphology = 0;
	$set(this, globalregion, nullptr);
	$set(this, regions, $new($ArrayList));
}

void SF2Instrument::init$($SF2Soundbank* soundbank) {
	$ModelInstrument::init$(soundbank, nullptr, nullptr, nullptr);
	$set(this, name, ""_s);
	this->preset = 0;
	this->bank = 0;
	this->library = 0;
	this->genre = 0;
	this->morphology = 0;
	$set(this, globalregion, nullptr);
	$set(this, regions, $new($ArrayList));
}

$String* SF2Instrument::getName() {
	return this->name;
}

void SF2Instrument::setName($String* name) {
	$set(this, name, name);
}

$Patch* SF2Instrument::getPatch() {
	if (this->bank == 128) {
		return $new($ModelPatch, 0, this->preset, true);
	} else {
		return $new($ModelPatch, this->bank << 7, this->preset, false);
	}
}

void SF2Instrument::setPatch($Patch* patch) {
	if ($instanceOf($ModelPatch, patch) && $nc(($cast($ModelPatch, patch)))->isPercussion()) {
		this->bank = 128;
		this->preset = $nc(patch)->getProgram();
	} else {
		this->bank = $nc(patch)->getBank() >> 7;
		this->preset = patch->getProgram();
	}
}

$Object* SF2Instrument::getData() {
	return $of(nullptr);
}

int64_t SF2Instrument::getGenre() {
	return this->genre;
}

void SF2Instrument::setGenre(int64_t genre) {
	this->genre = genre;
}

int64_t SF2Instrument::getLibrary() {
	return this->library;
}

void SF2Instrument::setLibrary(int64_t library) {
	this->library = library;
}

int64_t SF2Instrument::getMorphology() {
	return this->morphology;
}

void SF2Instrument::setMorphology(int64_t morphology) {
	this->morphology = morphology;
}

$List* SF2Instrument::getRegions() {
	return this->regions;
}

$SF2GlobalRegion* SF2Instrument::getGlobalRegion() {
	return this->globalregion;
}

void SF2Instrument::setGlobalZone($SF2GlobalRegion* zone) {
	$set(this, globalregion, zone);
}

$String* SF2Instrument::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->bank == 128) {
		return $str({"Drumkit: "_s, this->name, " preset #"_s, $$str(this->preset)});
	} else {
		return $str({"Instrument: "_s, this->name, " bank #"_s, $$str(this->bank), " preset #"_s, $$str(this->preset)});
	}
}

$ModelPerformerArray* SF2Instrument::getPerformers() {
	$useLocalCurrentObjectStackCache();
	int32_t performercount = 0;
	{
		$var($Iterator, i$, $nc(this->regions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2InstrumentRegion, presetzone, $cast($SF2InstrumentRegion, i$->next()));
			performercount += $nc($($nc($($nc(presetzone)->getLayer()))->getRegions()))->size();
		}
	}
	$var($ModelPerformerArray, performers, $new($ModelPerformerArray, performercount));
	int32_t pi = 0;
	$var($SF2GlobalRegion, presetglobal, this->globalregion);
	{
		$var($Iterator, i$, $nc(this->regions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SF2InstrumentRegion, presetzone, $cast($SF2InstrumentRegion, i$->next()));
			{
				$var($Map, pgenerators, $new($HashMap));
				pgenerators->putAll($($nc(presetzone)->getGenerators()));
				if (presetglobal != nullptr) {
					pgenerators->putAll($(presetglobal->getGenerators()));
				}
				$var($SF2Layer, layer, $nc(presetzone)->getLayer());
				$var($SF2GlobalRegion, layerglobal, $nc(layer)->getGlobalRegion());
				{
					$var($Iterator, i$, $nc($(layer->getRegions()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($SF2LayerRegion, layerzone, $cast($SF2LayerRegion, i$->next()));
						{
							$var($ModelPerformer, performer, $new($ModelPerformer));
							if ($nc(layerzone)->getSample() != nullptr) {
								performer->setName($($nc($(layerzone->getSample()))->getName()));
							} else {
								performer->setName($(layer->getName()));
							}
							performers->set(pi++, performer);
							int32_t keyfrom = 0;
							int32_t keyto = 127;
							int32_t velfrom = 0;
							int32_t velto = 127;
							if ($nc(layerzone)->contains($SF2Region::GENERATOR_EXCLUSIVECLASS)) {
								performer->setExclusiveClass(layerzone->getInteger($SF2Region::GENERATOR_EXCLUSIVECLASS));
							}
							if ($nc(layerzone)->contains($SF2Region::GENERATOR_KEYRANGE)) {
								$var($bytes, bytes, layerzone->getBytes($SF2Region::GENERATOR_KEYRANGE));
								if ($nc(bytes)->get(0) >= 0) {
									if (bytes->get(0) > keyfrom) {
										keyfrom = bytes->get(0);
									}
								}
								if ($nc(bytes)->get(1) >= 0) {
									if (bytes->get(1) < keyto) {
										keyto = bytes->get(1);
									}
								}
							}
							if ($nc(layerzone)->contains($SF2Region::GENERATOR_VELRANGE)) {
								$var($bytes, bytes, layerzone->getBytes($SF2Region::GENERATOR_VELRANGE));
								if ($nc(bytes)->get(0) >= 0) {
									if (bytes->get(0) > velfrom) {
										velfrom = bytes->get(0);
									}
								}
								if ($nc(bytes)->get(1) >= 0) {
									if (bytes->get(1) < velto) {
										velto = bytes->get(1);
									}
								}
							}
							if (presetzone->contains($SF2Region::GENERATOR_KEYRANGE)) {
								$var($bytes, bytes, presetzone->getBytes($SF2Region::GENERATOR_KEYRANGE));
								if ($nc(bytes)->get(0) > keyfrom) {
									keyfrom = bytes->get(0);
								}
								if ($nc(bytes)->get(1) < keyto) {
									keyto = bytes->get(1);
								}
							}
							if (presetzone->contains($SF2Region::GENERATOR_VELRANGE)) {
								$var($bytes, bytes, presetzone->getBytes($SF2Region::GENERATOR_VELRANGE));
								if ($nc(bytes)->get(0) > velfrom) {
									velfrom = bytes->get(0);
								}
								if ($nc(bytes)->get(1) < velto) {
									velto = bytes->get(1);
								}
							}
							performer->setKeyFrom(keyfrom);
							performer->setKeyTo(keyto);
							performer->setVelFrom(velfrom);
							performer->setVelTo(velto);
							int32_t startAddrsOffset = $nc(layerzone)->getShort($SF2Region::GENERATOR_STARTADDRSOFFSET);
							int32_t endAddrsOffset = layerzone->getShort($SF2Region::GENERATOR_ENDADDRSOFFSET);
							int32_t startloopAddrsOffset = layerzone->getShort($SF2Region::GENERATOR_STARTLOOPADDRSOFFSET);
							int32_t endloopAddrsOffset = layerzone->getShort($SF2Region::GENERATOR_ENDLOOPADDRSOFFSET);
							startAddrsOffset += layerzone->getShort($SF2Region::GENERATOR_STARTADDRSCOARSEOFFSET) * 32768;
							endAddrsOffset += layerzone->getShort($SF2Region::GENERATOR_ENDADDRSCOARSEOFFSET) * 32768;
							startloopAddrsOffset += layerzone->getShort($SF2Region::GENERATOR_STARTLOOPADDRSCOARSEOFFSET) * 32768;
							endloopAddrsOffset += layerzone->getShort($SF2Region::GENERATOR_ENDLOOPADDRSCOARSEOFFSET) * 32768;
							startloopAddrsOffset -= startAddrsOffset;
							endloopAddrsOffset -= startAddrsOffset;
							$var($SF2Sample, sample, layerzone->getSample());
							int32_t rootkey = $nc(sample)->originalPitch;
							if (layerzone->getShort($SF2Region::GENERATOR_OVERRIDINGROOTKEY) != -1) {
								rootkey = layerzone->getShort($SF2Region::GENERATOR_OVERRIDINGROOTKEY);
							}
							float pitchcorrection = (float)((-rootkey * 100) + sample->pitchCorrection);
							$var($ModelByteBuffer, buff, sample->getDataBuffer());
							$var($ModelByteBuffer, buff24, sample->getData24Buffer());
							if (startAddrsOffset != 0 || endAddrsOffset != 0) {
								$assign(buff, $nc(buff)->subbuffer(startAddrsOffset * 2, buff->capacity() + endAddrsOffset * 2));
								if (buff24 != nullptr) {
									$assign(buff24, buff24->subbuffer(startAddrsOffset, buff24->capacity() + endAddrsOffset));
								}
							}
							$var($ModelByteBufferWavetable, osc, $new($ModelByteBufferWavetable, buff, $(sample->getFormat()), pitchcorrection));
							if (buff24 != nullptr) {
								osc->set8BitExtensionBuffer(buff24);
							}
							$var($Map, generators, $new($HashMap));
							if (layerglobal != nullptr) {
								generators->putAll($(layerglobal->getGenerators()));
							}
							generators->putAll($(layerzone->getGenerators()));
							{
								$var($Iterator, i$, $nc($(pgenerators->entrySet()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Map$Entry, gen, $cast($Map$Entry, i$->next()));
									{
										int16_t val = 0;
										if (!generators->containsKey($($nc(gen)->getKey()))) {
											val = layerzone->getShort($nc(($cast($Integer, $($nc(gen)->getKey()))))->intValue());
										} else {
											val = $nc(($cast($Short, $(generators->get($($nc(gen)->getKey()))))))->shortValue();
										}
										val += $nc(($cast($Short, $($nc(gen)->getValue()))))->shortValue();
										$var($Object, var$0, $cast($Integer, gen->getKey()));
										generators->put(var$0, $($Short::valueOf(val)));
									}
								}
							}
							int32_t sampleMode = getGeneratorValue(generators, $SF2Region::GENERATOR_SAMPLEMODES);
							if ((sampleMode == 1) || (sampleMode == 3)) {
								if (sample->startLoop >= 0 && sample->endLoop > 0) {
									osc->setLoopStart((float)(int32_t)(sample->startLoop + startloopAddrsOffset));
									osc->setLoopLength((float)(int32_t)(sample->endLoop - sample->startLoop + endloopAddrsOffset - startloopAddrsOffset));
									if (sampleMode == 1) {
										osc->setLoopType($ModelWavetable::LOOP_TYPE_FORWARD);
									}
									if (sampleMode == 3) {
										osc->setLoopType($ModelWavetable::LOOP_TYPE_RELEASE);
									}
								}
							}
							$nc($(performer->getOscillators()))->add(osc);
							int16_t volDelay = getGeneratorValue(generators, $SF2Region::GENERATOR_DELAYVOLENV);
							int16_t volAttack = getGeneratorValue(generators, $SF2Region::GENERATOR_ATTACKVOLENV);
							int16_t volHold = getGeneratorValue(generators, $SF2Region::GENERATOR_HOLDVOLENV);
							int16_t volDecay = getGeneratorValue(generators, $SF2Region::GENERATOR_DECAYVOLENV);
							int16_t volSustain = getGeneratorValue(generators, $SF2Region::GENERATOR_SUSTAINVOLENV);
							int16_t volRelease = getGeneratorValue(generators, $SF2Region::GENERATOR_RELEASEVOLENV);
							if (volHold != -12000) {
								int16_t volKeyNumToHold = getGeneratorValue(generators, $SF2Region::GENERATOR_KEYNUMTOVOLENVHOLD);
								volHold += 60 * volKeyNumToHold;
								float fvalue = (float)(-volKeyNumToHold * 128);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
								$init($ModelDestination);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_EG1_HOLD);
								$var($ModelSource, var$1, $new($ModelSource, src));
								double var$2 = (double)fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$1, var$2, $$new($ModelDestination, dest)));
							}
							if (volDecay != -12000) {
								int16_t volKeyNumToDecay = getGeneratorValue(generators, $SF2Region::GENERATOR_KEYNUMTOVOLENVDECAY);
								volDecay += 60 * volKeyNumToDecay;
								float fvalue = (float)(-volKeyNumToDecay * 128);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
								$init($ModelDestination);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_EG1_DECAY);
								$var($ModelSource, var$3, $new($ModelSource, src));
								double var$4 = (double)fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$3, var$4, $$new($ModelDestination, dest)));
							}
							$init($ModelDestination);
							addTimecentValue(performer, $ModelDestination::DESTINATION_EG1_DELAY, volDelay);
							addTimecentValue(performer, $ModelDestination::DESTINATION_EG1_ATTACK, volAttack);
							addTimecentValue(performer, $ModelDestination::DESTINATION_EG1_HOLD, volHold);
							addTimecentValue(performer, $ModelDestination::DESTINATION_EG1_DECAY, volDecay);
							volSustain = (int16_t)(1000 - volSustain);
							if (volSustain < 0) {
								volSustain = (int16_t)0;
							}
							if (volSustain > 1000) {
								volSustain = (int16_t)1000;
							}
							addValue(performer, $ModelDestination::DESTINATION_EG1_SUSTAIN, volSustain);
							addTimecentValue(performer, $ModelDestination::DESTINATION_EG1_RELEASE, volRelease);
							bool var$5 = getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOFILTERFC) != 0;
							if (var$5 || getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOPITCH) != 0) {
								int16_t modDelay = getGeneratorValue(generators, $SF2Region::GENERATOR_DELAYMODENV);
								int16_t modAttack = getGeneratorValue(generators, $SF2Region::GENERATOR_ATTACKMODENV);
								int16_t modHold = getGeneratorValue(generators, $SF2Region::GENERATOR_HOLDMODENV);
								int16_t modDecay = getGeneratorValue(generators, $SF2Region::GENERATOR_DECAYMODENV);
								int16_t modSustain = getGeneratorValue(generators, $SF2Region::GENERATOR_SUSTAINMODENV);
								int16_t modRelease = getGeneratorValue(generators, $SF2Region::GENERATOR_RELEASEMODENV);
								if (modHold != -12000) {
									int16_t modKeyNumToHold = getGeneratorValue(generators, $SF2Region::GENERATOR_KEYNUMTOMODENVHOLD);
									modHold += 60 * modKeyNumToHold;
									float fvalue = (float)(-modKeyNumToHold * 128);
									$init($ModelSource);
									$var($ModelIdentifier, src, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_EG2_HOLD);
									$var($ModelSource, var$6, $new($ModelSource, src));
									double var$7 = (double)fvalue;
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$6, var$7, $$new($ModelDestination, dest)));
								}
								if (modDecay != -12000) {
									int16_t modKeyNumToDecay = getGeneratorValue(generators, $SF2Region::GENERATOR_KEYNUMTOMODENVDECAY);
									modDecay += 60 * modKeyNumToDecay;
									float fvalue = (float)(-modKeyNumToDecay * 128);
									$init($ModelSource);
									$var($ModelIdentifier, src, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_EG2_DECAY);
									$var($ModelSource, var$8, $new($ModelSource, src));
									double var$9 = (double)fvalue;
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$8, var$9, $$new($ModelDestination, dest)));
								}
								addTimecentValue(performer, $ModelDestination::DESTINATION_EG2_DELAY, modDelay);
								addTimecentValue(performer, $ModelDestination::DESTINATION_EG2_ATTACK, modAttack);
								addTimecentValue(performer, $ModelDestination::DESTINATION_EG2_HOLD, modHold);
								addTimecentValue(performer, $ModelDestination::DESTINATION_EG2_DECAY, modDecay);
								if (modSustain < 0) {
									modSustain = (int16_t)0;
								}
								if (modSustain > 1000) {
									modSustain = (int16_t)1000;
								}
								addValue(performer, $ModelDestination::DESTINATION_EG2_SUSTAIN, (double)(1000 - modSustain));
								addTimecentValue(performer, $ModelDestination::DESTINATION_EG2_RELEASE, modRelease);
								if (getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOFILTERFC) != 0) {
									double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOFILTERFC);
									$init($ModelSource);
									$var($ModelIdentifier, src, $ModelSource::SOURCE_EG2);
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_FILTER_FREQ);
									$var($ModelSource, var$10, $new($ModelSource, src));
									double var$11 = fvalue;
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$10, var$11, $$new($ModelDestination, dest)));
								}
								if (getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOPITCH) != 0) {
									double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_MODENVTOPITCH);
									$init($ModelSource);
									$var($ModelIdentifier, src, $ModelSource::SOURCE_EG2);
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
									$var($ModelSource, var$12, $new($ModelSource, src));
									double var$13 = fvalue;
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$12, var$13, $$new($ModelDestination, dest)));
								}
							}
							bool var$15 = getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOFILTERFC) != 0;
							bool var$14 = var$15 || getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOPITCH) != 0;
							if (var$14 || getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOVOLUME) != 0) {
								int16_t lfo_freq = getGeneratorValue(generators, $SF2Region::GENERATOR_FREQMODLFO);
								int16_t lfo_delay = getGeneratorValue(generators, $SF2Region::GENERATOR_DELAYMODLFO);
								addTimecentValue(performer, $ModelDestination::DESTINATION_LFO1_DELAY, lfo_delay);
								addValue(performer, $ModelDestination::DESTINATION_LFO1_FREQ, lfo_freq);
							}
							int16_t vib_freq = getGeneratorValue(generators, $SF2Region::GENERATOR_FREQVIBLFO);
							int16_t vib_delay = getGeneratorValue(generators, $SF2Region::GENERATOR_DELAYVIBLFO);
							addTimecentValue(performer, $ModelDestination::DESTINATION_LFO2_DELAY, vib_delay);
							addValue(performer, $ModelDestination::DESTINATION_LFO2_FREQ, vib_freq);
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_VIBLFOTOPITCH) != 0) {
								double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_VIBLFOTOPITCH);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_LFO2);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
								$var($ModelSource, var$16, $new($ModelSource, src, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
								double var$17 = fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$16, var$17, $$new($ModelDestination, dest)));
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOFILTERFC) != 0) {
								double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOFILTERFC);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_LFO1);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_FILTER_FREQ);
								$var($ModelSource, var$18, $new($ModelSource, src, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
								double var$19 = fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$18, var$19, $$new($ModelDestination, dest)));
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOPITCH) != 0) {
								double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOPITCH);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_LFO1);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
								$var($ModelSource, var$20, $new($ModelSource, src, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
								double var$21 = fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$20, var$21, $$new($ModelDestination, dest)));
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOVOLUME) != 0) {
								double fvalue = (double)getGeneratorValue(generators, $SF2Region::GENERATOR_MODLFOTOVOLUME);
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_LFO1);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_GAIN);
								$var($ModelSource, var$22, $new($ModelSource, src, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
								double var$23 = fvalue;
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$22, var$23, $$new($ModelDestination, dest)));
							}
							if (layerzone->getShort($SF2Region::GENERATOR_KEYNUM) != -1) {
								double val = layerzone->getShort($SF2Region::GENERATOR_KEYNUM) / 128.0;
								addValue(performer, $ModelDestination::DESTINATION_KEYNUMBER, val);
							}
							if (layerzone->getShort($SF2Region::GENERATOR_VELOCITY) != -1) {
								double val = layerzone->getShort($SF2Region::GENERATOR_VELOCITY) / 128.0;
								addValue(performer, $ModelDestination::DESTINATION_VELOCITY, val);
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_INITIALFILTERFC) < 13500) {
								int16_t filter_freq = getGeneratorValue(generators, $SF2Region::GENERATOR_INITIALFILTERFC);
								int16_t filter_q = getGeneratorValue(generators, $SF2Region::GENERATOR_INITIALFILTERQ);
								addValue(performer, $ModelDestination::DESTINATION_FILTER_FREQ, filter_freq);
								addValue(performer, $ModelDestination::DESTINATION_FILTER_Q, filter_q);
							}
							int32_t tune = 100 * getGeneratorValue(generators, $SF2Region::GENERATOR_COARSETUNE);
							tune += getGeneratorValue(generators, $SF2Region::GENERATOR_FINETUNE);
							if (tune != 0) {
								addValue(performer, $ModelDestination::DESTINATION_PITCH, (int16_t)tune);
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_PAN) != 0) {
								int16_t val = getGeneratorValue(generators, $SF2Region::GENERATOR_PAN);
								addValue(performer, $ModelDestination::DESTINATION_PAN, val);
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_INITIALATTENUATION) != 0) {
								int16_t val = getGeneratorValue(generators, $SF2Region::GENERATOR_INITIALATTENUATION);
								addValue(performer, $ModelDestination::DESTINATION_GAIN, (double)(-0.376287f * val));
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_CHORUSEFFECTSSEND) != 0) {
								int16_t val = getGeneratorValue(generators, $SF2Region::GENERATOR_CHORUSEFFECTSSEND);
								addValue(performer, $ModelDestination::DESTINATION_CHORUS, val);
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_REVERBEFFECTSSEND) != 0) {
								int16_t val = getGeneratorValue(generators, $SF2Region::GENERATOR_REVERBEFFECTSSEND);
								addValue(performer, $ModelDestination::DESTINATION_REVERB, val);
							}
							if (getGeneratorValue(generators, $SF2Region::GENERATOR_SCALETUNING) != 100) {
								int16_t fvalue = getGeneratorValue(generators, $SF2Region::GENERATOR_SCALETUNING);
								if (fvalue == 0) {
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, ($ModelSource*)nullptr, (double)(rootkey * 100), $$new($ModelDestination, dest)));
								} else {
									$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
									$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, ($ModelSource*)nullptr, (double)(rootkey * (100 - fvalue)), $$new($ModelDestination, dest)));
								}
								$init($ModelSource);
								$var($ModelIdentifier, src, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
								$var($ModelIdentifier, dest, $ModelDestination::DESTINATION_PITCH);
								$var($ModelSource, var$24, $new($ModelSource, src));
								double var$25 = (double)(128 * fvalue);
								$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$24, var$25, $$new($ModelDestination, dest)));
							}
							$init($ModelSource);
							$var($ModelSource, var$26, $new($ModelSource, $ModelSource::SOURCE_NOTEON_VELOCITY, static_cast<$ModelTransform*>($$new($SF2Instrument$1, this))));
							$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$26, (double)-2400, $$new($ModelDestination, $ModelDestination::DESTINATION_FILTER_FREQ)));
							$var($ModelSource, var$27, $new($ModelSource, $ModelSource::SOURCE_LFO2, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
							$var($ModelSource, var$28, $new($ModelSource, $$new($ModelIdentifier, "midi_cc"_s, "1"_s, 0), $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_UNIPOLAR, $ModelStandardTransform::TRANSFORM_LINEAR));
							$nc($(performer->getConnectionBlocks()))->add($$new($ModelConnectionBlock, var$27, var$28, (double)50, $$new($ModelDestination, $ModelDestination::DESTINATION_PITCH)));
							if (layer->getGlobalRegion() != nullptr) {
								{
									$var($Iterator, i$, $nc($($nc($(layer->getGlobalRegion()))->getModulators()))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($SF2Modulator, modulator, $cast($SF2Modulator, i$->next()));
										{
											convertModulator(performer, modulator);
										}
									}
								}
							}
							{
								$var($Iterator, i$, $nc($(layerzone->getModulators()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($SF2Modulator, modulator, $cast($SF2Modulator, i$->next()));
									convertModulator(performer, modulator);
								}
							}
							if (presetglobal != nullptr) {
								{
									$var($Iterator, i$, $nc($(presetglobal->getModulators()))->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($SF2Modulator, modulator, $cast($SF2Modulator, i$->next()));
										convertModulator(performer, modulator);
									}
								}
							}
							{
								$var($Iterator, i$, $nc($(presetzone->getModulators()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($SF2Modulator, modulator, $cast($SF2Modulator, i$->next()));
									convertModulator(performer, modulator);
								}
							}
						}
					}
				}
			}
		}
	}
	return performers;
}

void SF2Instrument::convertModulator($ModelPerformer* performer, $SF2Modulator* modulator) {
	$useLocalCurrentObjectStackCache();
	$var($ModelSource, src1, convertSource($nc(modulator)->getSourceOperator()));
	$var($ModelSource, src2, convertSource($nc(modulator)->getAmountSourceOperator()));
	if (src1 == nullptr && $nc(modulator)->getSourceOperator() != 0) {
		return;
	}
	if (src2 == nullptr && $nc(modulator)->getAmountSourceOperator() != 0) {
		return;
	}
	double amount = (double)$nc(modulator)->getAmount();
	$var($doubles, amountcorrection, $new($doubles, 1));
	$var($ModelSourceArray, extrasrc, $new($ModelSourceArray, 1));
	amountcorrection->set(0, (double)1);
	$var($ModelDestination, dst, convertDestination(modulator->getDestinationOperator(), amountcorrection, extrasrc));
	amount *= amountcorrection->get(0);
	if (dst == nullptr) {
		return;
	}
	if (modulator->getTransportOperator() == $SF2Modulator::TRANSFORM_ABSOLUTE) {
		$nc(($cast($ModelStandardTransform, $($nc(dst)->getTransform()))))->setTransform($ModelStandardTransform::TRANSFORM_ABSOLUTE);
	}
	$var($ModelConnectionBlock, conn, $new($ModelConnectionBlock, src1, src2, amount, dst));
	if (extrasrc->get(0) != nullptr) {
		conn->addSource(extrasrc->get(0));
	}
	$nc($($nc(performer)->getConnectionBlocks()))->add(conn);
}

$ModelSource* SF2Instrument::convertSource(int32_t src) {
	$init(SF2Instrument);
	$useLocalCurrentObjectStackCache();
	if (src == 0) {
		return nullptr;
	}
	$var($ModelIdentifier, id, nullptr);
	int32_t idsrc = (int32_t)(src & (uint32_t)127);
	if (((int32_t)(src & (uint32_t)$SF2Modulator::SOURCE_MIDI_CONTROL)) != 0) {
		$assign(id, $new($ModelIdentifier, "midi_cc"_s, $($Integer::toString(idsrc))));
	} else {
		if (idsrc == $SF2Modulator::SOURCE_NOTE_ON_VELOCITY) {
			$init($ModelSource);
			$assign(id, $ModelSource::SOURCE_NOTEON_VELOCITY);
		}
		if (idsrc == $SF2Modulator::SOURCE_NOTE_ON_KEYNUMBER) {
			$init($ModelSource);
			$assign(id, $ModelSource::SOURCE_NOTEON_KEYNUMBER);
		}
		if (idsrc == $SF2Modulator::SOURCE_POLY_PRESSURE) {
			$init($ModelSource);
			$assign(id, $ModelSource::SOURCE_MIDI_POLY_PRESSURE);
		}
		if (idsrc == $SF2Modulator::SOURCE_CHANNEL_PRESSURE) {
			$init($ModelSource);
			$assign(id, $ModelSource::SOURCE_MIDI_CHANNEL_PRESSURE);
		}
		if (idsrc == $SF2Modulator::SOURCE_PITCH_WHEEL) {
			$init($ModelSource);
			$assign(id, $ModelSource::SOURCE_MIDI_PITCH);
		}
		if (idsrc == $SF2Modulator::SOURCE_PITCH_SENSITIVITY) {
			$assign(id, $new($ModelIdentifier, "midi_rpn"_s, "0"_s));
		}
	}
	if (id == nullptr) {
		return nullptr;
	}
	$var($ModelSource, msrc, $new($ModelSource, id));
	$var($ModelStandardTransform, transform, $cast($ModelStandardTransform, msrc->getTransform()));
	if (((int32_t)($SF2Modulator::SOURCE_DIRECTION_MAX_MIN & (uint32_t)src)) != 0) {
		$nc(transform)->setDirection($ModelStandardTransform::DIRECTION_MAX2MIN);
	} else {
		$nc(transform)->setDirection($ModelStandardTransform::DIRECTION_MIN2MAX);
	}
	if (((int32_t)($SF2Modulator::SOURCE_POLARITY_BIPOLAR & (uint32_t)src)) != 0) {
		$nc(transform)->setPolarity($ModelStandardTransform::POLARITY_BIPOLAR);
	} else {
		$nc(transform)->setPolarity($ModelStandardTransform::POLARITY_UNIPOLAR);
	}
	if (((int32_t)($SF2Modulator::SOURCE_TYPE_CONCAVE & (uint32_t)src)) != 0) {
		$nc(transform)->setTransform($ModelStandardTransform::TRANSFORM_CONCAVE);
	}
	if (((int32_t)($SF2Modulator::SOURCE_TYPE_CONVEX & (uint32_t)src)) != 0) {
		$nc(transform)->setTransform($ModelStandardTransform::TRANSFORM_CONVEX);
	}
	if (((int32_t)($SF2Modulator::SOURCE_TYPE_SWITCH & (uint32_t)src)) != 0) {
		$nc(transform)->setTransform($ModelStandardTransform::TRANSFORM_SWITCH);
	}
	return msrc;
}

$ModelDestination* SF2Instrument::convertDestination(int32_t dst, $doubles* amountcorrection, $ModelSourceArray* extrasrc) {
	$init(SF2Instrument);
	$useLocalCurrentObjectStackCache();
	$var($ModelIdentifier, id, nullptr);
	switch (dst) {
	case $SF2Region::GENERATOR_INITIALFILTERFC:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_FILTER_FREQ);
			break;
		}
	case $SF2Region::GENERATOR_INITIALFILTERQ:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_FILTER_Q);
			break;
		}
	case $SF2Region::GENERATOR_CHORUSEFFECTSSEND:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_CHORUS);
			break;
		}
	case $SF2Region::GENERATOR_REVERBEFFECTSSEND:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_REVERB);
			break;
		}
	case $SF2Region::GENERATOR_PAN:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PAN);
			break;
		}
	case $SF2Region::GENERATOR_DELAYMODLFO:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_LFO1_DELAY);
			break;
		}
	case $SF2Region::GENERATOR_FREQMODLFO:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_LFO1_FREQ);
			break;
		}
	case $SF2Region::GENERATOR_DELAYVIBLFO:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_LFO2_DELAY);
			break;
		}
	case $SF2Region::GENERATOR_FREQVIBLFO:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_LFO2_FREQ);
			break;
		}
	case $SF2Region::GENERATOR_DELAYMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_DELAY);
			break;
		}
	case $SF2Region::GENERATOR_ATTACKMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_ATTACK);
			break;
		}
	case $SF2Region::GENERATOR_HOLDMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_HOLD);
			break;
		}
	case $SF2Region::GENERATOR_DECAYMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_DECAY);
			break;
		}
	case $SF2Region::GENERATOR_SUSTAINMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_SUSTAIN);
			$nc(amountcorrection)->set(0, (double)-1);
			break;
		}
	case $SF2Region::GENERATOR_RELEASEMODENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG2_RELEASE);
			break;
		}
	case $SF2Region::GENERATOR_DELAYVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_DELAY);
			break;
		}
	case $SF2Region::GENERATOR_ATTACKVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_ATTACK);
			break;
		}
	case $SF2Region::GENERATOR_HOLDVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_HOLD);
			break;
		}
	case $SF2Region::GENERATOR_DECAYVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_DECAY);
			break;
		}
	case $SF2Region::GENERATOR_SUSTAINVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_SUSTAIN);
			$nc(amountcorrection)->set(0, (double)-1);
			break;
		}
	case $SF2Region::GENERATOR_RELEASEVOLENV:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_EG1_RELEASE);
			break;
		}
	case $SF2Region::GENERATOR_KEYNUM:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_KEYNUMBER);
			break;
		}
	case $SF2Region::GENERATOR_VELOCITY:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_VELOCITY);
			break;
		}
	case $SF2Region::GENERATOR_COARSETUNE:
		{
			$nc(amountcorrection)->set(0, (double)100);
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PITCH);
			break;
		}
	case $SF2Region::GENERATOR_FINETUNE:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PITCH);
			break;
		}
	case $SF2Region::GENERATOR_INITIALATTENUATION:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_GAIN);
			$nc(amountcorrection)->set(0, -0.376287f);
			break;
		}
	case $SF2Region::GENERATOR_VIBLFOTOPITCH:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PITCH);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_LFO2, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	case $SF2Region::GENERATOR_MODLFOTOPITCH:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PITCH);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	case $SF2Region::GENERATOR_MODLFOTOFILTERFC:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_FILTER_FREQ);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	case $SF2Region::GENERATOR_MODLFOTOVOLUME:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_GAIN);
			$nc(amountcorrection)->set(0, -0.376287f);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_LFO1, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	case $SF2Region::GENERATOR_MODENVTOPITCH:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_PITCH);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_EG2, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	case $SF2Region::GENERATOR_MODENVTOFILTERFC:
		{
			$init($ModelDestination);
			$assign(id, $ModelDestination::DESTINATION_FILTER_FREQ);
			$init($ModelSource);
			$nc(extrasrc)->set(0, $$new($ModelSource, $ModelSource::SOURCE_EG2, $ModelStandardTransform::DIRECTION_MIN2MAX, $ModelStandardTransform::POLARITY_BIPOLAR));
			break;
		}
	default:
		{
			break;
		}
	}
	if (id != nullptr) {
		return $new($ModelDestination, id);
	}
	return nullptr;
}

void SF2Instrument::addTimecentValue($ModelPerformer* performer, $ModelIdentifier* dest, int16_t value) {
	$useLocalCurrentObjectStackCache();
	double fvalue = 0.0;
	if (value == -12000) {
		$init($Double);
		fvalue = $Double::NEGATIVE_INFINITY;
	} else {
		fvalue = (double)value;
	}
	$nc($($nc(performer)->getConnectionBlocks()))->add($$new($ModelConnectionBlock, fvalue, $$new($ModelDestination, dest)));
}

void SF2Instrument::addValue($ModelPerformer* performer, $ModelIdentifier* dest, int16_t value) {
	$useLocalCurrentObjectStackCache();
	double fvalue = (double)value;
	$nc($($nc(performer)->getConnectionBlocks()))->add($$new($ModelConnectionBlock, fvalue, $$new($ModelDestination, dest)));
}

void SF2Instrument::addValue($ModelPerformer* performer, $ModelIdentifier* dest, double value) {
	$useLocalCurrentObjectStackCache();
	double fvalue = value;
	$nc($($nc(performer)->getConnectionBlocks()))->add($$new($ModelConnectionBlock, fvalue, $$new($ModelDestination, dest)));
}

int16_t SF2Instrument::getGeneratorValue($Map* generators, int32_t gen) {
	$useLocalCurrentObjectStackCache();
	if ($nc(generators)->containsKey($($Integer::valueOf(gen)))) {
		return $nc(($cast($Short, $(generators->get($($Integer::valueOf(gen)))))))->shortValue();
	}
	return $SF2Region::getDefaultValue(gen);
}

SF2Instrument::SF2Instrument() {
}

$Class* SF2Instrument::load$($String* name, bool initialize) {
	$loadClass(SF2Instrument, name, initialize, &_SF2Instrument_ClassInfo_, allocate$SF2Instrument);
	return class$;
}

$Class* SF2Instrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com