#include <com/sun/media/sound/EmergencySoundbank.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <com/sun/media/sound/FFT.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <com/sun/media/sound/SF2GlobalRegion.h>
#include <com/sun/media/sound/SF2Instrument.h>
#include <com/sun/media/sound/SF2InstrumentRegion.h>
#include <com/sun/media/sound/SF2Layer.h>
#include <com/sun/media/sound/SF2LayerRegion.h>
#include <com/sun/media/sound/SF2Region.h>
#include <com/sun/media/sound/SF2Sample.h>
#include <com/sun/media/sound/SF2Soundbank.h>
#include <java/lang/Math.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef GENERATOR_ATTACKMODENV
#undef GENERATOR_ATTACKVOLENV
#undef GENERATOR_COARSETUNE
#undef GENERATOR_DECAYVOLENV
#undef GENERATOR_EXCLUSIVECLASS
#undef GENERATOR_FINETUNE
#undef GENERATOR_FREQVIBLFO
#undef GENERATOR_INITIALATTENUATION
#undef GENERATOR_INITIALFILTERFC
#undef GENERATOR_INITIALFILTERQ
#undef GENERATOR_KEYRANGE
#undef GENERATOR_MODENVTOFILTERFC
#undef GENERATOR_RELEASEMODENV
#undef GENERATOR_RELEASEVOLENV
#undef GENERATOR_SAMPLEMODES
#undef GENERATOR_SCALETUNING
#undef GENERATOR_SUSTAINVOLENV
#undef GENERATOR_VIBLFOTOPITCH
#undef PI

using $SF2InstrumentArray = $Array<::com::sun::media::sound::SF2Instrument>;
using $SF2LayerArray = $Array<::com::sun::media::sound::SF2Layer>;
using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $FFT = ::com::sun::media::sound::FFT;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $SF2GlobalRegion = ::com::sun::media::sound::SF2GlobalRegion;
using $SF2Instrument = ::com::sun::media::sound::SF2Instrument;
using $SF2InstrumentRegion = ::com::sun::media::sound::SF2InstrumentRegion;
using $SF2Layer = ::com::sun::media::sound::SF2Layer;
using $SF2LayerRegion = ::com::sun::media::sound::SF2LayerRegion;
using $SF2Region = ::com::sun::media::sound::SF2Region;
using $SF2Sample = ::com::sun::media::sound::SF2Sample;
using $SF2Soundbank = ::com::sun::media::sound::SF2Soundbank;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _EmergencySoundbank_FieldInfo_[] = {
	{"general_midi_instruments", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmergencySoundbank, general_midi_instruments)},
	{}
};

$MethodInfo _EmergencySoundbank_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmergencySoundbank::*)()>(&EmergencySoundbank::init$))},
	{"complexGaussianDist", "([DDDD)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,double,double,double)>(&EmergencySoundbank::complexGaussianDist))},
	{"createSoundbank", "()Lcom/sun/media/sound/SF2Soundbank;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Soundbank*(*)()>(&EmergencySoundbank::createSoundbank)), "java.lang.Exception"},
	{"fadeUp", "([DI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t)>(&EmergencySoundbank::fadeUp))},
	{"fadeUp", "([FI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,int32_t)>(&EmergencySoundbank::fadeUp))},
	{"fft", "([D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*)>(&EmergencySoundbank::fft))},
	{"ifft", "([D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*)>(&EmergencySoundbank::ifft))},
	{"imgPart", "([D)[D", nullptr, $PUBLIC | $STATIC, $method(static_cast<$doubles*(*)($doubles*)>(&EmergencySoundbank::imgPart))},
	{"loopExtend", "([DI)[D", nullptr, $PUBLIC | $STATIC, $method(static_cast<$doubles*(*)($doubles*,int32_t)>(&EmergencySoundbank::loopExtend))},
	{"loopExtend", "([FI)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)($floats*,int32_t)>(&EmergencySoundbank::loopExtend))},
	{"newInstrument", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;Ljavax/sound/midi/Patch;[Lcom/sun/media/sound/SF2Layer;)Lcom/sun/media/sound/SF2Instrument;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$SF2Instrument*(*)($SF2Soundbank*,$String*,$Patch*,$SF2LayerArray*)>(&EmergencySoundbank::newInstrument))},
	{"newLayer", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;Lcom/sun/media/sound/SF2Sample;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*,$String*,$SF2Sample*)>(&EmergencySoundbank::newLayer))},
	{"newSimpleDrumSample", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;[D)Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Sample*(*)($SF2Soundbank*,$String*,$doubles*)>(&EmergencySoundbank::newSimpleDrumSample))},
	{"newSimpleFFTSample", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;[DD)Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Sample*(*)($SF2Soundbank*,$String*,$doubles*,double)>(&EmergencySoundbank::newSimpleFFTSample))},
	{"newSimpleFFTSample", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;[DDI)Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Sample*(*)($SF2Soundbank*,$String*,$doubles*,double,int32_t)>(&EmergencySoundbank::newSimpleFFTSample))},
	{"newSimpleFFTSample_dist", "(Lcom/sun/media/sound/SF2Soundbank;Ljava/lang/String;[DDD)Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Sample*(*)($SF2Soundbank*,$String*,$doubles*,double,double)>(&EmergencySoundbank::newSimpleFFTSample_dist))},
	{"new_bass1", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_bass1))},
	{"new_bass2", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_bass2))},
	{"new_bass_drum", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_bass_drum))},
	{"new_bassoon", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_bassoon))},
	{"new_bell", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_bell))},
	{"new_brass_section", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_brass_section))},
	{"new_ch_organ", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_ch_organ))},
	{"new_choir", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_choir))},
	{"new_clarinet", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_clarinet))},
	{"new_closed_hihat", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_closed_hihat))},
	{"new_crash_cymbal", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_crash_cymbal))},
	{"new_epiano1", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_epiano1))},
	{"new_epiano2", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_epiano2))},
	{"new_flute", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_flute))},
	{"new_gpiano", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_gpiano))},
	{"new_gpiano2", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_gpiano2))},
	{"new_guitar1", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_guitar1))},
	{"new_guitar_dist", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_guitar_dist))},
	{"new_guitar_pick", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_guitar_pick))},
	{"new_horn", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_horn))},
	{"new_melodic_toms", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_melodic_toms))},
	{"new_oboe", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_oboe))},
	{"new_open_hihat", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_open_hihat))},
	{"new_orchhit", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_orchhit))},
	{"new_organ", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_organ))},
	{"new_piano1", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_piano1))},
	{"new_piano_hammer", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_piano_hammer))},
	{"new_reverse_cymbal", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_reverse_cymbal))},
	{"new_sax", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_sax))},
	{"new_side_stick", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_side_stick))},
	{"new_snare_drum", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_snare_drum))},
	{"new_solostring", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_solostring))},
	{"new_string2", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_string2))},
	{"new_synthbass", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_synthbass))},
	{"new_timpani", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_timpani))},
	{"new_tom", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_tom))},
	{"new_trombone", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_trombone))},
	{"new_trumpet", "(Lcom/sun/media/sound/SF2Soundbank;)Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SF2Layer*(*)($SF2Soundbank*)>(&EmergencySoundbank::new_trumpet))},
	{"normalize", "([DD)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,double)>(&EmergencySoundbank::normalize))},
	{"normalize", "([FD)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,double)>(&EmergencySoundbank::normalize))},
	{"randomPhase", "([D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*)>(&EmergencySoundbank::randomPhase))},
	{"randomPhase", "([DLjava/util/Random;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,$Random*)>(&EmergencySoundbank::randomPhase))},
	{"realPart", "([D)[D", nullptr, $PUBLIC | $STATIC, $method(static_cast<$doubles*(*)($doubles*)>(&EmergencySoundbank::realPart))},
	{"toBytes", "([FLjavax/sound/sampled/AudioFormat;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($floats*,$AudioFormat*)>(&EmergencySoundbank::toBytes))},
	{"toFloat", "([D)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)($doubles*)>(&EmergencySoundbank::toFloat))},
	{}
};

$ClassInfo _EmergencySoundbank_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.EmergencySoundbank",
	"java.lang.Object",
	nullptr,
	_EmergencySoundbank_FieldInfo_,
	_EmergencySoundbank_MethodInfo_
};

$Object* allocate$EmergencySoundbank($Class* clazz) {
	return $of($alloc(EmergencySoundbank));
}

$StringArray* EmergencySoundbank::general_midi_instruments = nullptr;

void EmergencySoundbank::init$() {
}

$SF2Soundbank* EmergencySoundbank::createSoundbank() {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($SF2Soundbank, sf2, $new($SF2Soundbank));
	sf2->setName("Emergency GM sound set"_s);
	sf2->setVendor("Generated"_s);
	sf2->setDescription("Emergency generated soundbank"_s);
	$var($SF2Layer, bass_drum, new_bass_drum(sf2));
	$var($SF2Layer, snare_drum, new_snare_drum(sf2));
	$var($SF2Layer, tom, new_tom(sf2));
	$var($SF2Layer, open_hihat, new_open_hihat(sf2));
	$var($SF2Layer, closed_hihat, new_closed_hihat(sf2));
	$var($SF2Layer, crash_cymbal, new_crash_cymbal(sf2));
	$var($SF2Layer, side_stick, new_side_stick(sf2));
	$var($SF2LayerArray, drums, $new($SF2LayerArray, 128));
	drums->set(35, bass_drum);
	drums->set(36, bass_drum);
	drums->set(38, snare_drum);
	drums->set(40, snare_drum);
	drums->set(41, tom);
	drums->set(43, tom);
	drums->set(45, tom);
	drums->set(47, tom);
	drums->set(48, tom);
	drums->set(50, tom);
	drums->set(42, closed_hihat);
	drums->set(44, closed_hihat);
	drums->set(46, open_hihat);
	drums->set(49, crash_cymbal);
	drums->set(51, crash_cymbal);
	drums->set(52, crash_cymbal);
	drums->set(55, crash_cymbal);
	drums->set(57, crash_cymbal);
	drums->set(59, crash_cymbal);
	drums->set(37, side_stick);
	drums->set(39, side_stick);
	drums->set(53, side_stick);
	drums->set(54, side_stick);
	drums->set(56, side_stick);
	drums->set(58, side_stick);
	drums->set(69, side_stick);
	drums->set(70, side_stick);
	drums->set(75, side_stick);
	drums->set(60, side_stick);
	drums->set(61, side_stick);
	drums->set(62, side_stick);
	drums->set(63, side_stick);
	drums->set(64, side_stick);
	drums->set(65, side_stick);
	drums->set(66, side_stick);
	drums->set(67, side_stick);
	drums->set(68, side_stick);
	drums->set(71, side_stick);
	drums->set(72, side_stick);
	drums->set(73, side_stick);
	drums->set(74, side_stick);
	drums->set(76, side_stick);
	drums->set(77, side_stick);
	drums->set(78, side_stick);
	drums->set(79, side_stick);
	drums->set(80, side_stick);
	drums->set(81, side_stick);
	$var($SF2Instrument, drum_instrument, $new($SF2Instrument, sf2));
	drum_instrument->setName("Standard Kit"_s);
	drum_instrument->setPatch($$new($ModelPatch, 0, 0, true));
	sf2->addInstrument(drum_instrument);
	for (int32_t i = 0; i < drums->length; ++i) {
		if (drums->get(i) != nullptr) {
			$var($SF2InstrumentRegion, region, $new($SF2InstrumentRegion));
			region->setLayer(drums->get(i));
			region->putBytes($SF2InstrumentRegion::GENERATOR_KEYRANGE, $$new($bytes, {
				(int8_t)i,
				(int8_t)i
			}));
			$nc($(drum_instrument->getRegions()))->add(region);
		}
	}
	$var($SF2Layer, gpiano, new_gpiano(sf2));
	$var($SF2Layer, gpiano2, new_gpiano2(sf2));
	$var($SF2Layer, gpiano_hammer, new_piano_hammer(sf2));
	$var($SF2Layer, piano1, new_piano1(sf2));
	$var($SF2Layer, epiano1, new_epiano1(sf2));
	$var($SF2Layer, epiano2, new_epiano2(sf2));
	$var($SF2Layer, guitar, new_guitar1(sf2));
	$var($SF2Layer, guitar_pick, new_guitar_pick(sf2));
	$var($SF2Layer, guitar_dist, new_guitar_dist(sf2));
	$var($SF2Layer, bass1, new_bass1(sf2));
	$var($SF2Layer, bass2, new_bass2(sf2));
	$var($SF2Layer, synthbass, new_synthbass(sf2));
	$var($SF2Layer, string2, new_string2(sf2));
	$var($SF2Layer, orchhit, new_orchhit(sf2));
	$var($SF2Layer, choir, new_choir(sf2));
	$var($SF2Layer, solostring, new_solostring(sf2));
	$var($SF2Layer, organ, new_organ(sf2));
	$var($SF2Layer, ch_organ, new_ch_organ(sf2));
	$var($SF2Layer, bell, new_bell(sf2));
	$var($SF2Layer, flute, new_flute(sf2));
	$var($SF2Layer, timpani, new_timpani(sf2));
	$var($SF2Layer, melodic_toms, new_melodic_toms(sf2));
	$var($SF2Layer, trumpet, new_trumpet(sf2));
	$var($SF2Layer, trombone, new_trombone(sf2));
	$var($SF2Layer, brass_section, new_brass_section(sf2));
	$var($SF2Layer, horn, new_horn(sf2));
	$var($SF2Layer, sax, new_sax(sf2));
	$var($SF2Layer, oboe, new_oboe(sf2));
	$var($SF2Layer, bassoon, new_bassoon(sf2));
	$var($SF2Layer, clarinet, new_clarinet(sf2));
	$var($SF2Layer, reverse_cymbal, new_reverse_cymbal(sf2));
	$var($SF2Layer, defaultsound, piano1);
	newInstrument(sf2, "Piano"_s, $$new($Patch, 0, 0), $$new($SF2LayerArray, {
		gpiano,
		gpiano_hammer
	}));
	newInstrument(sf2, "Piano"_s, $$new($Patch, 0, 1), $$new($SF2LayerArray, {
		gpiano2,
		gpiano_hammer
	}));
	newInstrument(sf2, "Piano"_s, $$new($Patch, 0, 2), $$new($SF2LayerArray, {piano1}));
	{
		$var($SF2Instrument, ins, newInstrument(sf2, "Honky-tonk Piano"_s, $$new($Patch, 0, 3), $$new($SF2LayerArray, {
			piano1,
			piano1
		})));
		$var($SF2InstrumentRegion, region, $cast($SF2InstrumentRegion, $nc($($nc(ins)->getRegions()))->get(0)));
		$nc(region)->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 80);
		region->putInteger($SF2Region::GENERATOR_FINETUNE, 30);
		$assign(region, $cast($SF2InstrumentRegion, $nc($(ins->getRegions()))->get(1)));
		region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 30);
	}
	newInstrument(sf2, "Rhodes"_s, $$new($Patch, 0, 4), $$new($SF2LayerArray, {epiano2}));
	newInstrument(sf2, "Rhodes"_s, $$new($Patch, 0, 5), $$new($SF2LayerArray, {epiano2}));
	newInstrument(sf2, "Clavinet"_s, $$new($Patch, 0, 6), $$new($SF2LayerArray, {epiano1}));
	newInstrument(sf2, "Clavinet"_s, $$new($Patch, 0, 7), $$new($SF2LayerArray, {epiano1}));
	newInstrument(sf2, "Rhodes"_s, $$new($Patch, 0, 8), $$new($SF2LayerArray, {epiano2}));
	newInstrument(sf2, "Bell"_s, $$new($Patch, 0, 9), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Bell"_s, $$new($Patch, 0, 10), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Vibraphone"_s, $$new($Patch, 0, 11), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Marimba"_s, $$new($Patch, 0, 12), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Marimba"_s, $$new($Patch, 0, 13), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Bell"_s, $$new($Patch, 0, 14), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Rock Organ"_s, $$new($Patch, 0, 15), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Rock Organ"_s, $$new($Patch, 0, 16), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Perc Organ"_s, $$new($Patch, 0, 17), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Rock Organ"_s, $$new($Patch, 0, 18), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Church Organ"_s, $$new($Patch, 0, 19), $$new($SF2LayerArray, {ch_organ}));
	newInstrument(sf2, "Accordion"_s, $$new($Patch, 0, 20), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Accordion"_s, $$new($Patch, 0, 21), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Accordion"_s, $$new($Patch, 0, 22), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Accordion"_s, $$new($Patch, 0, 23), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 24), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 25), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 26), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 27), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 28), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Distorted Guitar"_s, $$new($Patch, 0, 29), $$new($SF2LayerArray, {guitar_dist}));
	newInstrument(sf2, "Distorted Guitar"_s, $$new($Patch, 0, 30), $$new($SF2LayerArray, {guitar_dist}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 31), $$new($SF2LayerArray, {
		guitar,
		guitar_pick
	}));
	newInstrument(sf2, "Finger Bass"_s, $$new($Patch, 0, 32), $$new($SF2LayerArray, {bass1}));
	newInstrument(sf2, "Finger Bass"_s, $$new($Patch, 0, 33), $$new($SF2LayerArray, {bass1}));
	newInstrument(sf2, "Finger Bass"_s, $$new($Patch, 0, 34), $$new($SF2LayerArray, {bass1}));
	newInstrument(sf2, "Frettless Bass"_s, $$new($Patch, 0, 35), $$new($SF2LayerArray, {bass2}));
	newInstrument(sf2, "Frettless Bass"_s, $$new($Patch, 0, 36), $$new($SF2LayerArray, {bass2}));
	newInstrument(sf2, "Frettless Bass"_s, $$new($Patch, 0, 37), $$new($SF2LayerArray, {bass2}));
	newInstrument(sf2, "Synth Bass1"_s, $$new($Patch, 0, 38), $$new($SF2LayerArray, {synthbass}));
	newInstrument(sf2, "Synth Bass2"_s, $$new($Patch, 0, 39), $$new($SF2LayerArray, {synthbass}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 40), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 41), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 42), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 43), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 44), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 45), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Harp"_s, $$new($Patch, 0, 46), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Timpani"_s, $$new($Patch, 0, 47), $$new($SF2LayerArray, {timpani}));
	newInstrument(sf2, "Strings"_s, $$new($Patch, 0, 48), $$new($SF2LayerArray, {string2}));
	$var($SF2Instrument, slow_strings, newInstrument(sf2, "Slow Strings"_s, $$new($Patch, 0, 49), $$new($SF2LayerArray, {string2})));
	$var($SF2InstrumentRegion, region, $cast($SF2InstrumentRegion, $nc($($nc(slow_strings)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, 2500);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 2000);
	newInstrument(sf2, "Synth Strings"_s, $$new($Patch, 0, 50), $$new($SF2LayerArray, {string2}));
	newInstrument(sf2, "Synth Strings"_s, $$new($Patch, 0, 51), $$new($SF2LayerArray, {string2}));
	newInstrument(sf2, "Choir"_s, $$new($Patch, 0, 52), $$new($SF2LayerArray, {choir}));
	newInstrument(sf2, "Choir"_s, $$new($Patch, 0, 53), $$new($SF2LayerArray, {choir}));
	newInstrument(sf2, "Choir"_s, $$new($Patch, 0, 54), $$new($SF2LayerArray, {choir}));
	{
		$var($SF2Instrument, ins, newInstrument(sf2, "Orch Hit"_s, $$new($Patch, 0, 55), $$new($SF2LayerArray, {
			orchhit,
			orchhit,
			timpani
		})));
		$assign(region, $cast($SF2InstrumentRegion, $nc($($nc(ins)->getRegions()))->get(0)));
		$nc(region)->putInteger($SF2Region::GENERATOR_COARSETUNE, -12);
		region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	}
	newInstrument(sf2, "Trumpet"_s, $$new($Patch, 0, 56), $$new($SF2LayerArray, {trumpet}));
	newInstrument(sf2, "Trombone"_s, $$new($Patch, 0, 57), $$new($SF2LayerArray, {trombone}));
	newInstrument(sf2, "Trombone"_s, $$new($Patch, 0, 58), $$new($SF2LayerArray, {trombone}));
	newInstrument(sf2, "Trumpet"_s, $$new($Patch, 0, 59), $$new($SF2LayerArray, {trumpet}));
	newInstrument(sf2, "Horn"_s, $$new($Patch, 0, 60), $$new($SF2LayerArray, {horn}));
	newInstrument(sf2, "Brass Section"_s, $$new($Patch, 0, 61), $$new($SF2LayerArray, {brass_section}));
	newInstrument(sf2, "Brass Section"_s, $$new($Patch, 0, 62), $$new($SF2LayerArray, {brass_section}));
	newInstrument(sf2, "Brass Section"_s, $$new($Patch, 0, 63), $$new($SF2LayerArray, {brass_section}));
	newInstrument(sf2, "Sax"_s, $$new($Patch, 0, 64), $$new($SF2LayerArray, {sax}));
	newInstrument(sf2, "Sax"_s, $$new($Patch, 0, 65), $$new($SF2LayerArray, {sax}));
	newInstrument(sf2, "Sax"_s, $$new($Patch, 0, 66), $$new($SF2LayerArray, {sax}));
	newInstrument(sf2, "Sax"_s, $$new($Patch, 0, 67), $$new($SF2LayerArray, {sax}));
	newInstrument(sf2, "Oboe"_s, $$new($Patch, 0, 68), $$new($SF2LayerArray, {oboe}));
	newInstrument(sf2, "Horn"_s, $$new($Patch, 0, 69), $$new($SF2LayerArray, {horn}));
	newInstrument(sf2, "Bassoon"_s, $$new($Patch, 0, 70), $$new($SF2LayerArray, {bassoon}));
	newInstrument(sf2, "Clarinet"_s, $$new($Patch, 0, 71), $$new($SF2LayerArray, {clarinet}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 72), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 73), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 74), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 75), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 76), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 77), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 78), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 79), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 80), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 81), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Flute"_s, $$new($Patch, 0, 82), $$new($SF2LayerArray, {flute}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 83), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 84), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Choir"_s, $$new($Patch, 0, 85), $$new($SF2LayerArray, {choir}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 86), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 87), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Synth Strings"_s, $$new($Patch, 0, 88), $$new($SF2LayerArray, {string2}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 89), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 90), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Choir"_s, $$new($Patch, 0, 91), $$new($SF2LayerArray, {choir}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 92), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 93), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 94), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 95), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 96), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 97), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Bell"_s, $$new($Patch, 0, 98), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 99), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 100), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Organ"_s, $$new($Patch, 0, 101), $$new($SF2LayerArray, {organ}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 102), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Synth Strings"_s, $$new($Patch, 0, 103), $$new($SF2LayerArray, {string2}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 104), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 105), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 106), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 107), $$new($SF2LayerArray, {defaultsound}));
	newInstrument(sf2, "Marimba"_s, $$new($Patch, 0, 108), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Sax"_s, $$new($Patch, 0, 109), $$new($SF2LayerArray, {sax}));
	newInstrument(sf2, "Solo String"_s, $$new($Patch, 0, 110), $$new($SF2LayerArray, {
		string2,
		solostring
	}));
	newInstrument(sf2, "Oboe"_s, $$new($Patch, 0, 111), $$new($SF2LayerArray, {oboe}));
	newInstrument(sf2, "Bell"_s, $$new($Patch, 0, 112), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Melodic Toms"_s, $$new($Patch, 0, 113), $$new($SF2LayerArray, {melodic_toms}));
	newInstrument(sf2, "Marimba"_s, $$new($Patch, 0, 114), $$new($SF2LayerArray, {bell}));
	newInstrument(sf2, "Melodic Toms"_s, $$new($Patch, 0, 115), $$new($SF2LayerArray, {melodic_toms}));
	newInstrument(sf2, "Melodic Toms"_s, $$new($Patch, 0, 116), $$new($SF2LayerArray, {melodic_toms}));
	newInstrument(sf2, "Melodic Toms"_s, $$new($Patch, 0, 117), $$new($SF2LayerArray, {melodic_toms}));
	newInstrument(sf2, "Reverse Cymbal"_s, $$new($Patch, 0, 118), $$new($SF2LayerArray, {reverse_cymbal}));
	newInstrument(sf2, "Reverse Cymbal"_s, $$new($Patch, 0, 119), $$new($SF2LayerArray, {reverse_cymbal}));
	newInstrument(sf2, "Guitar"_s, $$new($Patch, 0, 120), $$new($SF2LayerArray, {guitar}));
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 121), $$new($SF2LayerArray, {defaultsound}));
	{
		$var($SF2Instrument, ins, newInstrument(sf2, "Seashore/Reverse Cymbal"_s, $$new($Patch, 0, 122), $$new($SF2LayerArray, {reverse_cymbal})));
		$assign(region, $cast($SF2InstrumentRegion, $nc($($nc(ins)->getRegions()))->get(0)));
		$nc(region)->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
		region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 18500);
		region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 4500);
		region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, -4500);
	}
	{
		$var($SF2Instrument, ins, newInstrument(sf2, "Bird/Flute"_s, $$new($Patch, 0, 123), $$new($SF2LayerArray, {flute})));
		$assign(region, $cast($SF2InstrumentRegion, $nc($($nc(ins)->getRegions()))->get(0)));
		$nc(region)->putInteger($SF2Region::GENERATOR_COARSETUNE, 24);
		region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, -3000);
		region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	}
	newInstrument(sf2, "Def"_s, $$new($Patch, 0, 124), $$new($SF2LayerArray, {side_stick}));
	{
		$var($SF2Instrument, ins, newInstrument(sf2, "Seashore/Reverse Cymbal"_s, $$new($Patch, 0, 125), $$new($SF2LayerArray, {reverse_cymbal})));
		$assign(region, $cast($SF2InstrumentRegion, $nc($($nc(ins)->getRegions()))->get(0)));
		$nc(region)->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
		region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 18500);
		region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 4500);
		region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, -4500);
	}
	newInstrument(sf2, "Applause/crash_cymbal"_s, $$new($Patch, 0, 126), $$new($SF2LayerArray, {crash_cymbal}));
	newInstrument(sf2, "Gunshot/side_stick"_s, $$new($Patch, 0, 127), $$new($SF2LayerArray, {side_stick}));
	{
		$var($SF2InstrumentArray, arr$, $fcast($SF2InstrumentArray, sf2->getInstruments()));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SF2Instrument, instrument, arr$->get(i$));
			{
				$var($Patch, patch, $nc(instrument)->getPatch());
				if ($instanceOf($ModelPatch, patch)) {
					if ($nc(($cast($ModelPatch, patch)))->isPercussion()) {
						continue;
					}
				}
				instrument->setName($nc(EmergencySoundbank::general_midi_instruments)->get($nc(patch)->getProgram()));
			}
		}
	}
	return sf2;
}

$SF2Layer* EmergencySoundbank::new_bell($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($Random, random, $new($Random, 0x0614DB79));
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.01;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 1.0E-5;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		double detune = 1 + (random->nextDouble() * 2 - 1) * 0.01;
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1) * detune, w, a);
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "EPiano"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "EPiano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, 1200);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -9000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 16000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_guitar1($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.01;
	double end_w = 0.01;
	double start_a = (double)2;
	double end_a = 0.01;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	$var($doubles, aa, $new($doubles, 40));
	for (int32_t i = 0; i < 40; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	aa->set(0, (double)2);
	aa->set(1, 0.5);
	aa->set(2, 0.45);
	aa->set(3, 0.2);
	aa->set(4, (double)1);
	aa->set(5, 0.5);
	aa->set(6, (double)2);
	aa->set(7, (double)1);
	aa->set(8, 0.5);
	aa->set(9, (double)1);
	aa->set(9, 0.5);
	aa->set(10, 0.2);
	aa->set(11, (double)1);
	aa->set(12, 0.7);
	aa->set(13, 0.5);
	aa->set(14, (double)1);
	for (int32_t i = 0; i < 40; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Guitar"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Guitar"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 2400);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -100);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -6000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 16000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -20);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_guitar_dist($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.01;
	double end_w = 0.01;
	double start_a = (double)2;
	double end_a = 0.01;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	$var($doubles, aa, $new($doubles, 40));
	for (int32_t i = 0; i < 40; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	aa->set(0, (double)5);
	aa->set(1, (double)2);
	aa->set(2, 0.45);
	aa->set(3, 0.2);
	aa->set(4, (double)1);
	aa->set(5, 0.5);
	aa->set(6, (double)2);
	aa->set(7, (double)1);
	aa->set(8, 0.5);
	aa->set(9, (double)1);
	aa->set(9, 0.5);
	aa->set(10, 0.2);
	aa->set(11, (double)1);
	aa->set(12, 0.7);
	aa->set(13, 0.5);
	aa->set(14, (double)1);
	for (int32_t i = 0; i < 40; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample_dist(sf2, "Distorted Guitar"_s, data, base, 10000.0));
	$var($SF2Layer, layer, newLayer(sf2, "Distorted Guitar"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 8000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_guitar_pick($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	{
		int32_t m = 2;
		int32_t fftlen = 4096 * m;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)));
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 2048 * m; ++i) {
			double var$0 = $Math::exp(-$Math::abs((i - 23) / ((double)m)) * 1.2);
			(*data)[i] *= var$0 + $Math::exp(-$Math::abs((i - 40) / ((double)m)) * 0.9);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.8);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9994;
		}
		$assign(datab, data);
		fadeUp(data, 80);
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Guitar Noise"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Guitar Noise"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_gpiano($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 15.0);
	$var($doubles, aa, $new($doubles, 30));
	for (int32_t i = 0; i < 30; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 2;
	(*aa)[4] *= 2;
	(*aa)[12] *= 0.9;
	(*aa)[13] *= 0.7;
	for (int32_t i = 14; i < 30; ++i) {
		(*aa)[i] *= 0.5;
	}
	for (int32_t i = 0; i < 30; ++i) {
		double w = 0.2;
		double ai = aa->get(i);
		if (i > 10) {
			w = (double)5;
			ai *= 10;
		}
		int32_t adjust = 0;
		if (i > 5) {
			adjust = (i - 5) * 7;
		}
		complexGaussianDist(data, base * (i + 1) + adjust, w, ai);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Grand Piano"_s, data, base, 200));
	$var($SF2Layer, layer, newLayer(sf2, "Grand Piano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -7000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -5500);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 18000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_gpiano2($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 20.0);
	$var($doubles, aa, $new($doubles, 30));
	for (int32_t i = 0; i < 30; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 1;
	(*aa)[4] *= 2;
	(*aa)[12] *= 0.9;
	(*aa)[13] *= 0.7;
	for (int32_t i = 14; i < 30; ++i) {
		(*aa)[i] *= 0.5;
	}
	for (int32_t i = 0; i < 30; ++i) {
		double w = 0.2;
		double ai = aa->get(i);
		if (i > 10) {
			w = (double)5;
			ai *= 10;
		}
		int32_t adjust = 0;
		if (i > 5) {
			adjust = (i - 5) * 7;
		}
		complexGaussianDist(data, base * (i + 1) + adjust, w, ai);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Grand Piano"_s, data, base, 200));
	$var($SF2Layer, layer, newLayer(sf2, "Grand Piano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -7000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -5500);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 18000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_piano_hammer($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	{
		int32_t m = 2;
		int32_t fftlen = 4096 * m;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)));
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 2048 * m; ++i) {
			(*data)[i] *= $Math::exp(-$Math::abs((i - 37) / ((double)m)) * 0.05);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.6);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9997;
		}
		$assign(datab, data);
		fadeUp(data, 80);
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Piano Hammer"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Piano Hammer"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_piano1($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_a = 0.2;
	double end_a = 1.0E-4;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	$var($doubles, aa, $new($doubles, 30));
	for (int32_t i = 0; i < 30; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 5;
	(*aa)[2] *= 0.1;
	(*aa)[7] *= 5;
	for (int32_t i = 0; i < 30; ++i) {
		double w = 0.2;
		double ai = aa->get(i);
		if (i > 12) {
			w = (double)5;
			ai *= 10;
		}
		int32_t adjust = 0;
		if (i > 5) {
			adjust = (i - 5) * 7;
		}
		complexGaussianDist(data, base * (i + 1) + adjust, w, ai);
	}
	complexGaussianDist(data, base * (15.5), (double)1, 0.1);
	complexGaussianDist(data, base * (17.5), (double)1, 0.01);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "EPiano"_s, data, base, 200));
	$var($SF2Layer, layer, newLayer(sf2, "EPiano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -1200);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -5500);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 16000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_epiano1($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($Random, random, $new($Random, 0x12009D79));
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.05;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 1.0E-4;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		double detune = 1 + (random->nextDouble() * 2 - 1) * 1.0E-4;
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1) * detune, w, a);
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "EPiano"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "EPiano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, 1200);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -9000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 16000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_epiano2($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($Random, random, $new($Random, 0x12009D79));
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.01;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 1.0E-5;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		double detune = 1 + (random->nextDouble() * 2 - 1) * 1.0E-4;
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1) * detune, w, a);
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "EPiano"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "EPiano"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 8000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, 2400);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -9000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 16000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_bass1($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.05;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 0.02;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 25.0);
	$var($doubles, aa, $new($doubles, 25));
	for (int32_t i = 0; i < 25; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 8;
	(*aa)[1] *= 4;
	(*aa)[3] *= 8;
	(*aa)[5] *= 8;
	for (int32_t i = 0; i < 25; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Bass"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Bass"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -3000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 11000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_synthbass($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.05;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 0.02;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 25.0);
	$var($doubles, aa, $new($doubles, 25));
	for (int32_t i = 0; i < 25; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 16;
	(*aa)[1] *= 4;
	(*aa)[3] *= 16;
	(*aa)[5] *= 8;
	for (int32_t i = 0; i < 25; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Bass"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Bass"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -3000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, -3000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERQ, 100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 8000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_bass2($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = 0.05;
	double end_w = 0.05;
	double start_a = 0.2;
	double end_a = 0.002;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 25.0);
	$var($doubles, aa, $new($doubles, 25));
	for (int32_t i = 0; i < 25; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 8;
	(*aa)[1] *= 4;
	(*aa)[3] *= 8;
	(*aa)[5] *= 8;
	for (int32_t i = 0; i < 25; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Bass2"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Bass2"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -8000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_solostring($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = (double)2;
	double end_w = (double)2;
	double start_a = 0.2;
	double end_a = 0.01;
	$var($doubles, aa, $new($doubles, 18));
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < aa->length; ++i) {
		a *= a_step;
		aa->set(i, a);
	}
	(*aa)[0] *= 5;
	(*aa)[1] *= 5;
	(*aa)[2] *= 5;
	(*aa)[3] *= 4;
	(*aa)[4] *= 4;
	(*aa)[5] *= 3;
	(*aa)[6] *= 3;
	(*aa)[7] *= 2;
	for (int32_t i = 0; i < aa->length; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, a);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Strings"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Strings"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -5000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	region->putInteger($SF2Region::GENERATOR_FREQVIBLFO, -1000);
	region->putInteger($SF2Region::GENERATOR_VIBLFOTOPITCH, 15);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_orchhit($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = (double)2;
	double end_w = (double)80;
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, a);
		a *= a_step;
	}
	complexGaussianDist(data, base * 4, (double)300, (double)1);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Och Strings"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Och Strings"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -5000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 200);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 200);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_string2($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = (double)2;
	double end_w = (double)80;
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, a);
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Strings"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Strings"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -5000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_choir($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 25);
	double start_w = (double)2;
	double end_w = (double)80;
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	$var($doubles, aa, $new($doubles, 40));
	for (int32_t i = 0; i < aa->length; ++i) {
		a *= a_step;
		aa->set(i, a);
	}
	(*aa)[5] *= 0.1;
	(*aa)[6] *= 0.01;
	(*aa)[7] *= 0.1;
	(*aa)[8] *= 0.1;
	for (int32_t i = 0; i < aa->length; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Strings"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Strings"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -5000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_organ($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($Random, random, $new($Random, 0x0614DB79));
	int32_t x = 1;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_w = 0.01;
	double end_w = 0.01;
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 12; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, a * (0.5 + 3 * (random->nextDouble())));
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Organ"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Organ"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_ch_organ($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 1;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_w = 0.01;
	double end_w = 0.01;
	double start_a = 0.2;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 60.0);
	$var($doubles, aa, $new($doubles, 60));
	for (int32_t i = 0; i < aa->length; ++i) {
		a *= a_step;
		aa->set(i, a);
	}
	(*aa)[0] *= 5;
	(*aa)[1] *= 2;
	aa->set(2, (double)0);
	aa->set(4, (double)0);
	aa->set(5, (double)0);
	(*aa)[7] *= 7;
	aa->set(9, (double)0);
	aa->set(10, (double)0);
	aa->set(12, (double)0);
	(*aa)[15] *= 7;
	aa->set(18, (double)0);
	aa->set(20, (double)0);
	aa->set(24, (double)0);
	(*aa)[27] *= 5;
	aa->set(29, (double)0);
	aa->set(30, (double)0);
	aa->set(33, (double)0);
	(*aa)[36] *= 4;
	aa->set(37, (double)0);
	aa->set(39, (double)0);
	aa->set(42, (double)0);
	aa->set(43, (double)0);
	aa->set(47, (double)0);
	(*aa)[50] *= 4;
	aa->set(52, (double)0);
	aa->set(55, (double)0);
	aa->set(57, (double)0);
	(*aa)[10] *= 0.1;
	(*aa)[11] *= 0.1;
	(*aa)[12] *= 0.1;
	(*aa)[13] *= 0.1;
	(*aa)[17] *= 0.1;
	(*aa)[18] *= 0.1;
	(*aa)[19] *= 0.1;
	(*aa)[20] *= 0.1;
	for (int32_t i = 0; i < 60; ++i) {
		double w = start_w + (end_w - start_w) * (i / 40.0);
		complexGaussianDist(data, base * (i + 1), w, aa->get(i));
		a *= a_step;
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Organ"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Organ"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -10000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_flute($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	complexGaussianDist(data, base * 1, 0.001, 0.5);
	complexGaussianDist(data, base * 2, 0.001, 0.5);
	complexGaussianDist(data, base * 3, 0.001, 0.5);
	complexGaussianDist(data, base * 4, 0.01, 0.5);
	complexGaussianDist(data, base * 4, (double)100, (double)120);
	complexGaussianDist(data, base * 6, (double)100, (double)40);
	complexGaussianDist(data, base * 8, (double)100, (double)80);
	complexGaussianDist(data, base * 5, 0.001, 0.05);
	complexGaussianDist(data, base * 6, 0.001, 0.06);
	complexGaussianDist(data, base * 7, 0.001, 0.04);
	complexGaussianDist(data, base * 8, 0.005, 0.06);
	complexGaussianDist(data, base * 9, 0.005, 0.06);
	complexGaussianDist(data, base * 10, 0.01, 0.1);
	complexGaussianDist(data, base * 11, 0.08, 0.7);
	complexGaussianDist(data, base * 12, 0.08, 0.6);
	complexGaussianDist(data, base * 13, 0.08, 0.6);
	complexGaussianDist(data, base * 14, 0.08, 0.6);
	complexGaussianDist(data, base * 15, 0.08, 0.5);
	complexGaussianDist(data, base * 16, 0.08, 0.5);
	complexGaussianDist(data, base * 17, 0.08, 0.2);
	complexGaussianDist(data, base * 1, (double)10, (double)8);
	complexGaussianDist(data, base * 2, (double)10, (double)8);
	complexGaussianDist(data, base * 3, (double)10, (double)8);
	complexGaussianDist(data, base * 4, (double)10, (double)8);
	complexGaussianDist(data, base * 5, (double)10, (double)8);
	complexGaussianDist(data, base * 6, (double)20, (double)9);
	complexGaussianDist(data, base * 7, (double)20, (double)9);
	complexGaussianDist(data, base * 8, (double)20, (double)9);
	complexGaussianDist(data, base * 9, (double)20, (double)8);
	complexGaussianDist(data, base * 10, (double)30, (double)8);
	complexGaussianDist(data, base * 11, (double)30, (double)9);
	complexGaussianDist(data, base * 12, (double)30, (double)9);
	complexGaussianDist(data, base * 13, (double)30, (double)8);
	complexGaussianDist(data, base * 14, (double)30, (double)8);
	complexGaussianDist(data, base * 15, (double)30, (double)7);
	complexGaussianDist(data, base * 16, (double)30, (double)7);
	complexGaussianDist(data, base * 17, (double)30, (double)6);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Flute"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Flute"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_horn($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_a = 0.5;
	double end_a = 1.0E-11;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		if (i == 0) {
			complexGaussianDist(data, base * (i + 1), 0.1, a * 0.2);
		} else {
			complexGaussianDist(data, base * (i + 1), 0.1, a);
		}
		a *= a_step;
	}
	complexGaussianDist(data, base * 2, (double)100, (double)1);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Horn"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Horn"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -500);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 4500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_trumpet($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_a = 0.5;
	double end_a = 1.0E-5;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 80.0);
	$var($doubles, aa, $new($doubles, 80));
	for (int32_t i = 0; i < 80; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 0.05;
	(*aa)[1] *= 0.2;
	(*aa)[2] *= 0.5;
	(*aa)[3] *= 0.85;
	for (int32_t i = 0; i < 80; ++i) {
		complexGaussianDist(data, base * (i + 1), 0.1, aa->get(i));
	}
	complexGaussianDist(data, base * 5, (double)300, (double)3);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Trumpet"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Trumpet"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -10000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 0);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -4000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, -2500);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 4500);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERQ, 10);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_brass_section($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_a = 0.5;
	double end_a = 0.005;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 30.0);
	$var($doubles, aa, $new($doubles, 30));
	for (int32_t i = 0; i < 30; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 0.8;
	(*aa)[1] *= 0.9;
	double w = (double)5;
	for (int32_t i = 0; i < 30; ++i) {
		complexGaussianDist(data, base * (i + 1), 0.1 * w, aa->get(i) * w);
		w += 6;
	}
	complexGaussianDist(data, base * 6, (double)300, (double)2);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Brass Section"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Brass Section"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -9200);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -3000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 4500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_trombone($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_a = 0.5;
	double end_a = 0.001;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 80.0);
	$var($doubles, aa, $new($doubles, 80));
	for (int32_t i = 0; i < 80; ++i) {
		aa->set(i, a);
		a *= a_step;
	}
	(*aa)[0] *= 0.3;
	(*aa)[1] *= 0.7;
	for (int32_t i = 0; i < 80; ++i) {
		complexGaussianDist(data, base * (i + 1), 0.1, aa->get(i));
	}
	complexGaussianDist(data, base * 6, (double)300, (double)2);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Trombone"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Trombone"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -8000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -2000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 4500);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERQ, 10);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_sax($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	double start_a = 0.5;
	double end_a = 0.01;
	double a = start_a;
	double a_step = $Math::pow(end_a / start_a, 1.0 / 40.0);
	for (int32_t i = 0; i < 40; ++i) {
		if (i == 0 || i == 2) {
			complexGaussianDist(data, base * (i + 1), 0.1, a * 4);
		} else {
			complexGaussianDist(data, base * (i + 1), 0.1, a);
		}
		a *= a_step;
	}
	complexGaussianDist(data, base * 4, (double)200, (double)1);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Sax"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Sax"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_ATTACKMODENV, -3000);
	region->putInteger($SF2Region::GENERATOR_RELEASEMODENV, 12000);
	region->putInteger($SF2Region::GENERATOR_MODENVTOFILTERFC, 5000);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 4500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_oboe($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	complexGaussianDist(data, base * 5, (double)100, (double)80);
	complexGaussianDist(data, base * 1, 0.01, 0.53);
	complexGaussianDist(data, base * 2, 0.01, 0.51);
	complexGaussianDist(data, base * 3, 0.01, 0.48);
	complexGaussianDist(data, base * 4, 0.01, 0.49);
	complexGaussianDist(data, base * 5, 0.01, (double)5);
	complexGaussianDist(data, base * 6, 0.01, 0.51);
	complexGaussianDist(data, base * 7, 0.01, 0.5);
	complexGaussianDist(data, base * 8, 0.01, 0.59);
	complexGaussianDist(data, base * 9, 0.01, 0.61);
	complexGaussianDist(data, base * 10, 0.01, 0.52);
	complexGaussianDist(data, base * 11, 0.01, 0.49);
	complexGaussianDist(data, base * 12, 0.01, 0.51);
	complexGaussianDist(data, base * 13, 0.01, 0.48);
	complexGaussianDist(data, base * 14, 0.01, 0.51);
	complexGaussianDist(data, base * 15, 0.01, 0.46);
	complexGaussianDist(data, base * 16, 0.01, 0.35);
	complexGaussianDist(data, base * 17, 0.01, 0.2);
	complexGaussianDist(data, base * 18, 0.01, 0.1);
	complexGaussianDist(data, base * 19, 0.01, 0.5);
	complexGaussianDist(data, base * 20, 0.01, 0.1);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Oboe"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Oboe"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_bassoon($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	complexGaussianDist(data, base * 2, (double)100, (double)40);
	complexGaussianDist(data, base * 4, (double)100, (double)20);
	complexGaussianDist(data, base * 1, 0.01, 0.53);
	complexGaussianDist(data, base * 2, 0.01, (double)5);
	complexGaussianDist(data, base * 3, 0.01, 0.51);
	complexGaussianDist(data, base * 4, 0.01, 0.48);
	complexGaussianDist(data, base * 5, 0.01, 1.49);
	complexGaussianDist(data, base * 6, 0.01, 0.51);
	complexGaussianDist(data, base * 7, 0.01, 0.5);
	complexGaussianDist(data, base * 8, 0.01, 0.59);
	complexGaussianDist(data, base * 9, 0.01, 0.61);
	complexGaussianDist(data, base * 10, 0.01, 0.52);
	complexGaussianDist(data, base * 11, 0.01, 0.49);
	complexGaussianDist(data, base * 12, 0.01, 0.51);
	complexGaussianDist(data, base * 13, 0.01, 0.48);
	complexGaussianDist(data, base * 14, 0.01, 0.51);
	complexGaussianDist(data, base * 15, 0.01, 0.46);
	complexGaussianDist(data, base * 16, 0.01, 0.35);
	complexGaussianDist(data, base * 17, 0.01, 0.2);
	complexGaussianDist(data, base * 18, 0.01, 0.1);
	complexGaussianDist(data, base * 19, 0.01, 0.5);
	complexGaussianDist(data, base * 20, 0.01, 0.1);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Flute"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Flute"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_clarinet($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t x = 8;
	int32_t fftsize = 4096 * x;
	$var($doubles, data, $new($doubles, fftsize * 2));
	double base = (double)(x * 15);
	complexGaussianDist(data, base * 1, 0.001, 0.5);
	complexGaussianDist(data, base * 2, 0.001, 0.02);
	complexGaussianDist(data, base * 3, 0.001, 0.2);
	complexGaussianDist(data, base * 4, 0.01, 0.1);
	complexGaussianDist(data, base * 4, (double)100, (double)60);
	complexGaussianDist(data, base * 6, (double)100, (double)20);
	complexGaussianDist(data, base * 8, (double)100, (double)20);
	complexGaussianDist(data, base * 5, 0.001, 0.1);
	complexGaussianDist(data, base * 6, 0.001, 0.09);
	complexGaussianDist(data, base * 7, 0.001, 0.02);
	complexGaussianDist(data, base * 8, 0.005, 0.16);
	complexGaussianDist(data, base * 9, 0.005, 0.96);
	complexGaussianDist(data, base * 10, 0.01, 0.9);
	complexGaussianDist(data, base * 11, 0.08, 1.2);
	complexGaussianDist(data, base * 12, 0.08, 1.8);
	complexGaussianDist(data, base * 13, 0.08, 1.6);
	complexGaussianDist(data, base * 14, 0.08, 1.2);
	complexGaussianDist(data, base * 15, 0.08, 0.9);
	complexGaussianDist(data, base * 16, 0.08, 0.5);
	complexGaussianDist(data, base * 17, 0.08, 0.2);
	complexGaussianDist(data, base * 1, (double)10, (double)8);
	complexGaussianDist(data, base * 2, (double)10, (double)8);
	complexGaussianDist(data, base * 3, (double)10, (double)8);
	complexGaussianDist(data, base * 4, (double)10, (double)8);
	complexGaussianDist(data, base * 5, (double)10, (double)8);
	complexGaussianDist(data, base * 6, (double)20, (double)9);
	complexGaussianDist(data, base * 7, (double)20, (double)9);
	complexGaussianDist(data, base * 8, (double)20, (double)9);
	complexGaussianDist(data, base * 9, (double)20, (double)8);
	complexGaussianDist(data, base * 10, (double)30, (double)8);
	complexGaussianDist(data, base * 11, (double)30, (double)9);
	complexGaussianDist(data, base * 12, (double)30, (double)9);
	complexGaussianDist(data, base * 13, (double)30, (double)8);
	complexGaussianDist(data, base * 14, (double)30, (double)8);
	complexGaussianDist(data, base * 15, (double)30, (double)7);
	complexGaussianDist(data, base * 16, (double)30, (double)7);
	complexGaussianDist(data, base * 17, (double)30, (double)6);
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Clarinet"_s, data, base));
	$var($SF2Layer, layer, newLayer(sf2, "Clarinet"_s, sample));
	$var($SF2Region, region, $cast($SF2Region, $nc($($nc(layer)->getRegions()))->get(0)));
	$nc(region)->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -6000);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 4000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, -100);
	region->putInteger($SF2Region::GENERATOR_INITIALFILTERFC, 9500);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_timpani($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 8;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		double base = (double)48;
		complexGaussianDist(data, base * 2, 0.2, (double)1);
		complexGaussianDist(data, base * 3, 0.2, 0.7);
		complexGaussianDist(data, base * 5, (double)10, (double)1);
		complexGaussianDist(data, base * 6, (double)9, (double)1);
		complexGaussianDist(data, base * 8, (double)15, (double)1);
		complexGaussianDist(data, base * 9, (double)18, 0.8);
		complexGaussianDist(data, base * 11, (double)21, 0.5);
		complexGaussianDist(data, base * 13, (double)28, 0.3);
		complexGaussianDist(data, base * 14, (double)22, 0.1);
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.5);
		$assign(data, realPart(data));
		double d_len = (double)$nc(data)->length;
		for (int32_t i = 0; i < data->length; ++i) {
			double g = (1.0 - (i / d_len));
			(*data)[i] *= g * g;
		}
		fadeUp(data, 40);
		$assign(datab, data);
	}
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 300; ++i) {
			double g = (1.0 - (i / 300.0));
			(*data)[i] *= 1.0 + 20 * g * g;
		}
		for (int32_t i = 0; i < 24; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9998;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < $nc(datah)->length; ++i) {
		(*$nc(datab))[i] += datah->get(i) * 0.02;
	}
	normalize(datab, 0.9);
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Timpani"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Timpani"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_melodic_toms($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		complexGaussianDist(data, (double)30, 0.5, (double)1);
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.8);
		$assign(data, realPart(data));
		double d_len = (double)$nc(data)->length;
		for (int32_t i = 0; i < data->length; ++i) {
			(*data)[i] *= (1.0 - (i / d_len));
		}
		$assign(datab, data);
	}
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 200; ++i) {
			double g = (1.0 - (i / 200.0));
			(*data)[i] *= 1.0 + 20 * g * g;
		}
		for (int32_t i = 0; i < 30; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9996;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < $nc(datah)->length; ++i) {
		(*$nc(datab))[i] += datah->get(i) * 0.5;
	}
	for (int32_t i = 0; i < 5; ++i) {
		(*$nc(datab))[i] *= i / 5.0;
	}
	normalize(datab, 0.99);
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Melodic Toms"_s, datab));
	$nc(sample)->setOriginalPitch(63);
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Melodic Toms"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_reverse_cymbal($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)));
		}
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 100; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 512 * 2; ++i) {
			double gain = ($div(i, (512.0 * 2.0)));
			data->set(i, 1 - gain);
		}
		$assign(datah, data);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Reverse Cymbal"_s, datah, (double)100, 20));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Reverse Cymbal"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_ATTACKVOLENV, -200);
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, -12000);
	region->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, -1000);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_snare_drum($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		complexGaussianDist(data, (double)24, 0.5, (double)1);
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.5);
		$assign(data, realPart(data));
		double d_len = (double)$nc(data)->length;
		for (int32_t i = 0; i < data->length; ++i) {
			(*data)[i] *= (1.0 - (i / d_len));
		}
		$assign(datab, data);
	}
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 300; ++i) {
			double g = (1.0 - (i / 300.0));
			(*data)[i] *= 1.0 + 20 * g * g;
		}
		for (int32_t i = 0; i < 24; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9998;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < $nc(datah)->length; ++i) {
		(*$nc(datab))[i] += datah->get(i);
	}
	for (int32_t i = 0; i < 5; ++i) {
		(*$nc(datab))[i] *= i / 5.0;
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Snare Drum"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Snare Drum"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_bass_drum($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		complexGaussianDist(data, 1.8 * 5 + 1, (double)2, (double)1);
		complexGaussianDist(data, 1.8 * 9 + 1, (double)2, (double)1);
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double d_len = (double)$nc(data)->length;
		for (int32_t i = 0; i < data->length; ++i) {
			(*data)[i] *= (1.0 - (i / d_len));
		}
		$assign(datab, data);
	}
	{
		int32_t fftlen = 4096;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024; i < 2048; ++i) {
			data->set(i, 1.0 - (i - 1024) / 1024.0);
		}
		for (int32_t i = 0; i < 512; ++i) {
			data->set(i, 10 * i / 512.0);
		}
		for (int32_t i = 0; i < 10; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.999;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < $nc(datah)->length; ++i) {
		(*$nc(datab))[i] += datah->get(i) * 0.5;
	}
	for (int32_t i = 0; i < 5; ++i) {
		(*$nc(datab))[i] *= i / 5.0;
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Bass Drum"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Bass Drum"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_tom($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		complexGaussianDist(data, (double)30, 0.5, (double)1);
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.8);
		$assign(data, realPart(data));
		double d_len = (double)$nc(data)->length;
		for (int32_t i = 0; i < data->length; ++i) {
			(*data)[i] *= (1.0 - (i / d_len));
		}
		$assign(datab, data);
	}
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 200; ++i) {
			double g = (1.0 - (i / 200.0));
			(*data)[i] *= 1.0 + 20 * g * g;
		}
		for (int32_t i = 0; i < 30; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9996;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < $nc(datah)->length; ++i) {
		(*$nc(datab))[i] += datah->get(i) * 0.5;
	}
	for (int32_t i = 0; i < 5; ++i) {
		(*$nc(datab))[i] *= i / 5.0;
	}
	normalize(datab, 0.99);
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Tom"_s, datab));
	$nc(sample)->setOriginalPitch(50);
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Tom"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -100);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_closed_hihat($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 2048; ++i) {
			data->set(i, 0.2 + 0.8 * (i / 2048.0));
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9996;
		}
		$assign(datah, data);
	}
	for (int32_t i = 0; i < 5; ++i) {
		(*$nc(datah))[i] *= i / 5.0;
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Closed Hi-Hat"_s, datah));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Closed Hi-Hat"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->putInteger($SF2Region::GENERATOR_EXCLUSIVECLASS, 1);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_open_hihat($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)));
		}
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 200; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 2048 * 4; ++i) {
			double gain = ($div(i, (2048.0 * 4.0)));
			data->set(i, gain);
		}
		$assign(datah, data);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Open Hi-Hat"_s, datah, (double)1000, 5));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Open Hi-Hat"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 1500);
	region->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 1500);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->putInteger($SF2Region::GENERATOR_EXCLUSIVECLASS, 1);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_crash_cymbal($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datah, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)));
		}
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 100; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 0; i < 512 * 2; ++i) {
			double gain = ($div(i, (512.0 * 2.0)));
			data->set(i, gain);
		}
		$assign(datah, data);
	}
	$var($SF2Sample, sample, newSimpleFFTSample(sf2, "Crash Cymbal"_s, datah, (double)1000, 5));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Crash Cymbal"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_DECAYVOLENV, 1800);
	region->putInteger($SF2Region::GENERATOR_SAMPLEMODES, 1);
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 1800);
	region->putInteger($SF2Region::GENERATOR_SUSTAINVOLENV, 1000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Layer* EmergencySoundbank::new_side_stick($SF2Soundbank* sf2) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, datab, nullptr);
	{
		int32_t fftlen = 4096 * 4;
		$var($doubles, data, $new($doubles, 2 * fftlen));
		$var($Random, random, $new($Random, 0x002E89B8));
		for (int32_t i = 0; i < data->length; i += 2) {
			data->set(i, (2.0 * (random->nextDouble() - 0.5)) * 0.1);
		}
		fft(data);
		for (int32_t i = fftlen / 2; i < data->length; ++i) {
			data->set(i, (double)0);
		}
		for (int32_t i = 1024 * 4; i < 2048 * 4; ++i) {
			data->set(i, 1.0 - (i - 4096) / 4096.0);
		}
		for (int32_t i = 0; i < 200; ++i) {
			double g = (1.0 - (i / 200.0));
			(*data)[i] *= 1.0 + 20 * g * g;
		}
		for (int32_t i = 0; i < 30; ++i) {
			data->set(i, (double)0);
		}
		randomPhase(data, $$new($Random, 0x002E89B8));
		ifft(data);
		normalize(data, 0.9);
		$assign(data, realPart(data));
		double gain = 1.0;
		for (int32_t i = 0; i < $nc(data)->length; ++i) {
			(*data)[i] *= gain;
			gain *= 0.9996;
		}
		$assign(datab, data);
	}
	for (int32_t i = 0; i < 10; ++i) {
		(*$nc(datab))[i] *= i / 10.0;
	}
	$var($SF2Sample, sample, newSimpleDrumSample(sf2, "Side Stick"_s, datab));
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName("Side Stick"_s);
	$var($SF2GlobalRegion, global, $new($SF2GlobalRegion));
	layer->setGlobalZone(global);
	$nc(sf2)->addResource(layer);
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->putInteger($SF2Region::GENERATOR_RELEASEVOLENV, 12000);
	region->putInteger($SF2Region::GENERATOR_SCALETUNING, 0);
	region->putInteger($SF2Region::GENERATOR_INITIALATTENUATION, -50);
	region->setSample(sample);
	$nc($(layer->getRegions()))->add(region);
	return layer;
}

$SF2Sample* EmergencySoundbank::newSimpleFFTSample($SF2Soundbank* sf2, $String* name, $doubles* data, double base) {
	$init(EmergencySoundbank);
	return newSimpleFFTSample(sf2, name, data, base, 10);
}

$SF2Sample* EmergencySoundbank::newSimpleFFTSample($SF2Soundbank* sf2, $String* name, $doubles* data$renamed, double base, int32_t fadeuptime) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, data, data$renamed);
	int32_t fftsize = $nc(data)->length / 2;
	$var($AudioFormat, format, $new($AudioFormat, (float)0x0000AC44, 16, 1, true, false));
	double basefreq = (base / fftsize) * format->getSampleRate() * 0.5;
	randomPhase(data);
	ifft(data);
	$assign(data, realPart(data));
	normalize(data, 0.9);
	$var($floats, fdata, toFloat(data));
	$assign(fdata, loopExtend(fdata, $nc(fdata)->length + 512));
	fadeUp(fdata, fadeuptime);
	$var($bytes, bdata, toBytes(fdata, format));
	$var($SF2Sample, sample, $new($SF2Sample, sf2));
	sample->setName(name);
	sample->setData(bdata);
	sample->setStartLoop(256);
	sample->setEndLoop(fftsize + 256);
	sample->setSampleRate($cast(int64_t, format->getSampleRate()));
	int32_t var$0 = (69 + 12);
	double var$2 = 12 * $Math::log(basefreq / 440.0);
	double var$1 = (var$2 / $Math::log((double)2));
	double orgnote = var$0 + var$1;
	sample->setOriginalPitch($cast(int32_t, orgnote));
	sample->setPitchCorrection($cast(int8_t, (-(orgnote - $cast(int32_t, orgnote)) * 100.0)));
	$nc(sf2)->addResource(sample);
	return sample;
}

$SF2Sample* EmergencySoundbank::newSimpleFFTSample_dist($SF2Soundbank* sf2, $String* name, $doubles* data$renamed, double base, double preamp) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($doubles, data, data$renamed);
	int32_t fftsize = $nc(data)->length / 2;
	$var($AudioFormat, format, $new($AudioFormat, (float)0x0000AC44, 16, 1, true, false));
	double basefreq = (base / fftsize) * format->getSampleRate() * 0.5;
	randomPhase(data);
	ifft(data);
	$assign(data, realPart(data));
	for (int32_t i = 0; i < data->length; ++i) {
		double var$0 = (1 - $Math::exp(-$Math::abs(data->get(i) * preamp)));
		data->set(i, var$0 * $Math::signum(data->get(i)));
	}
	normalize(data, 0.9);
	$var($floats, fdata, toFloat(data));
	$assign(fdata, loopExtend(fdata, $nc(fdata)->length + 512));
	fadeUp(fdata, 80);
	$var($bytes, bdata, toBytes(fdata, format));
	$var($SF2Sample, sample, $new($SF2Sample, sf2));
	sample->setName(name);
	sample->setData(bdata);
	sample->setStartLoop(256);
	sample->setEndLoop(fftsize + 256);
	sample->setSampleRate($cast(int64_t, format->getSampleRate()));
	int32_t var$1 = (69 + 12);
	double var$3 = 12 * $Math::log(basefreq / 440.0);
	double var$2 = (var$3 / $Math::log((double)2));
	double orgnote = var$1 + var$2;
	sample->setOriginalPitch($cast(int32_t, orgnote));
	sample->setPitchCorrection($cast(int8_t, (-(orgnote - $cast(int32_t, orgnote)) * 100.0)));
	$nc(sf2)->addResource(sample);
	return sample;
}

$SF2Sample* EmergencySoundbank::newSimpleDrumSample($SF2Soundbank* sf2, $String* name, $doubles* data) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	int32_t fftsize = $nc(data)->length;
	$var($AudioFormat, format, $new($AudioFormat, (float)0x0000AC44, 16, 1, true, false));
	$var($bytes, bdata, toBytes($(toFloat($(realPart(data)))), format));
	$var($SF2Sample, sample, $new($SF2Sample, sf2));
	sample->setName(name);
	sample->setData(bdata);
	sample->setStartLoop(256);
	sample->setEndLoop(fftsize + 256);
	sample->setSampleRate($cast(int64_t, format->getSampleRate()));
	sample->setOriginalPitch(60);
	$nc(sf2)->addResource(sample);
	return sample;
}

$SF2Layer* EmergencySoundbank::newLayer($SF2Soundbank* sf2, $String* name, $SF2Sample* sample) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($SF2LayerRegion, region, $new($SF2LayerRegion));
	region->setSample(sample);
	$var($SF2Layer, layer, $new($SF2Layer, sf2));
	layer->setName(name);
	$nc($(layer->getRegions()))->add(region);
	$nc(sf2)->addResource(layer);
	return layer;
}

$SF2Instrument* EmergencySoundbank::newInstrument($SF2Soundbank* sf2, $String* name, $Patch* patch, $SF2LayerArray* layers) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($SF2Instrument, ins, $new($SF2Instrument, sf2));
	ins->setPatch(patch);
	ins->setName(name);
	$nc(sf2)->addInstrument(ins);
	for (int32_t i = 0; i < $nc(layers)->length; ++i) {
		$var($SF2InstrumentRegion, insregion, $new($SF2InstrumentRegion));
		insregion->setLayer(layers->get(i));
		$nc($(ins->getRegions()))->add(insregion);
	}
	return ins;
}

void EmergencySoundbank::ifft($doubles* data) {
	$init(EmergencySoundbank);
	$$new($FFT, $nc(data)->length / 2, 1)->transform(data);
}

void EmergencySoundbank::fft($doubles* data) {
	$init(EmergencySoundbank);
	$$new($FFT, $nc(data)->length / 2, -1)->transform(data);
}

void EmergencySoundbank::complexGaussianDist($doubles* cdata, double m, double s, double v) {
	$init(EmergencySoundbank);
	for (int32_t x = 0; x < $nc(cdata)->length / 4; ++x) {
		double var$0 = v;
		$init($Math);
		double var$2 = 1.0 / (s * $Math::sqrt(2 * $Math::PI));
		double var$1 = (var$2 * $Math::exp((-1.0 / 2.0) * $Math::pow((x - m) / s, 2.0)));
		(*cdata)[x * 2] += var$0 * var$1;
	}
}

void EmergencySoundbank::randomPhase($doubles* data) {
	$init(EmergencySoundbank);
	for (int32_t i = 0; i < $nc(data)->length; i += 2) {
		$init($Math);
		double phase = $Math::random() * 2 * $Math::PI;
		double d = data->get(i);
		data->set(i, $Math::sin(phase) * d);
		data->set(i + 1, $Math::cos(phase) * d);
	}
}

void EmergencySoundbank::randomPhase($doubles* data, $Random* random) {
	$init(EmergencySoundbank);
	for (int32_t i = 0; i < $nc(data)->length; i += 2) {
		$init($Math);
		double phase = $nc(random)->nextDouble() * 2 * $Math::PI;
		double d = data->get(i);
		data->set(i, $Math::sin(phase) * d);
		data->set(i + 1, $Math::cos(phase) * d);
	}
}

void EmergencySoundbank::normalize($doubles* data, double target) {
	$init(EmergencySoundbank);
	double maxvalue = (double)0;
	for (int32_t i = 0; i < $nc(data)->length; ++i) {
		if (data->get(i) > maxvalue) {
			maxvalue = data->get(i);
		}
		if (-data->get(i) > maxvalue) {
			maxvalue = -data->get(i);
		}
	}
	if (maxvalue == 0) {
		return;
	}
	double gain = target / maxvalue;
	for (int32_t i = 0; i < $nc(data)->length; ++i) {
		(*data)[i] *= gain;
	}
}

void EmergencySoundbank::normalize($floats* data, double target) {
	$init(EmergencySoundbank);
	double maxvalue = 0.5;
	for (int32_t i = 0; i < $nc(data)->length; ++i) {
		if (data->get(i * 2) > maxvalue) {
			maxvalue = data->get(i * 2);
		}
		if (-data->get(i * 2) > maxvalue) {
			maxvalue = -data->get(i * 2);
		}
	}
	double gain = target / maxvalue;
	for (int32_t i = 0; i < $nc(data)->length; ++i) {
		(*data)[i * 2] *= gain;
	}
}

$doubles* EmergencySoundbank::realPart($doubles* in) {
	$init(EmergencySoundbank);
	$var($doubles, out, $new($doubles, $nc(in)->length / 2));
	for (int32_t i = 0; i < out->length; ++i) {
		out->set(i, in->get(i * 2));
	}
	return out;
}

$doubles* EmergencySoundbank::imgPart($doubles* in) {
	$init(EmergencySoundbank);
	$var($doubles, out, $new($doubles, $nc(in)->length / 2));
	for (int32_t i = 0; i < out->length; ++i) {
		out->set(i, in->get(i * 2));
	}
	return out;
}

$floats* EmergencySoundbank::toFloat($doubles* in) {
	$init(EmergencySoundbank);
	$var($floats, out, $new($floats, $nc(in)->length));
	for (int32_t i = 0; i < out->length; ++i) {
		out->set(i, (float)in->get(i));
	}
	return out;
}

$bytes* EmergencySoundbank::toBytes($floats* in, $AudioFormat* format) {
	$init(EmergencySoundbank);
	$useLocalCurrentObjectStackCache();
	$var($bytes, out, $new($bytes, $nc(in)->length * $nc(format)->getFrameSize()));
	return $nc($($AudioFloatConverter::getConverter(format)))->toByteArray(in, out);
}

void EmergencySoundbank::fadeUp($doubles* data, int32_t samples) {
	$init(EmergencySoundbank);
	double dsamples = (double)samples;
	for (int32_t i = 0; i < samples; ++i) {
		(*$nc(data))[i] *= i / dsamples;
	}
}

void EmergencySoundbank::fadeUp($floats* data, int32_t samples) {
	$init(EmergencySoundbank);
	double dsamples = (double)samples;
	for (int32_t i = 0; i < samples; ++i) {
		(*$nc(data))[i] *= i / dsamples;
	}
}

$doubles* EmergencySoundbank::loopExtend($doubles* data, int32_t newsize) {
	$init(EmergencySoundbank);
	$var($doubles, outdata, $new($doubles, newsize));
	int32_t p_len = $nc(data)->length;
	int32_t p_ps = 0;
	for (int32_t i = 0; i < outdata->length; ++i) {
		outdata->set(i, data->get(p_ps));
		++p_ps;
		if (p_ps == p_len) {
			p_ps = 0;
		}
	}
	return outdata;
}

$floats* EmergencySoundbank::loopExtend($floats* data, int32_t newsize) {
	$init(EmergencySoundbank);
	$var($floats, outdata, $new($floats, newsize));
	int32_t p_len = $nc(data)->length;
	int32_t p_ps = 0;
	for (int32_t i = 0; i < outdata->length; ++i) {
		outdata->set(i, data->get(p_ps));
		++p_ps;
		if (p_ps == p_len) {
			p_ps = 0;
		}
	}
	return outdata;
}

void clinit$EmergencySoundbank($Class* class$) {
	$assignStatic(EmergencySoundbank::general_midi_instruments, $new($StringArray, {
		"Acoustic Grand Piano"_s,
		"Bright Acoustic Piano"_s,
		"Electric Grand Piano"_s,
		"Honky-tonk Piano"_s,
		"Electric Piano 1"_s,
		"Electric Piano 2"_s,
		"Harpsichord"_s,
		"Clavi"_s,
		"Celesta"_s,
		"Glockenspiel"_s,
		"Music Box"_s,
		"Vibraphone"_s,
		"Marimba"_s,
		"Xylophone"_s,
		"Tubular Bells"_s,
		"Dulcimer"_s,
		"Drawbar Organ"_s,
		"Percussive Organ"_s,
		"Rock Organ"_s,
		"Church Organ"_s,
		"Reed Organ"_s,
		"Accordion"_s,
		"Harmonica"_s,
		"Tango Accordion"_s,
		"Acoustic Guitar (nylon)"_s,
		"Acoustic Guitar (steel)"_s,
		"Electric Guitar (jazz)"_s,
		"Electric Guitar (clean)"_s,
		"Electric Guitar (muted)"_s,
		"Overdriven Guitar"_s,
		"Distortion Guitar"_s,
		"Guitar harmonics"_s,
		"Acoustic Bass"_s,
		"Electric Bass (finger)"_s,
		"Electric Bass (pick)"_s,
		"Fretless Bass"_s,
		"Slap Bass 1"_s,
		"Slap Bass 2"_s,
		"Synth Bass 1"_s,
		"Synth Bass 2"_s,
		"Violin"_s,
		"Viola"_s,
		"Cello"_s,
		"Contrabass"_s,
		"Tremolo Strings"_s,
		"Pizzicato Strings"_s,
		"Orchestral Harp"_s,
		"Timpani"_s,
		"String Ensemble 1"_s,
		"String Ensemble 2"_s,
		"SynthStrings 1"_s,
		"SynthStrings 2"_s,
		"Choir Aahs"_s,
		"Voice Oohs"_s,
		"Synth Voice"_s,
		"Orchestra Hit"_s,
		"Trumpet"_s,
		"Trombone"_s,
		"Tuba"_s,
		"Muted Trumpet"_s,
		"French Horn"_s,
		"Brass Section"_s,
		"SynthBrass 1"_s,
		"SynthBrass 2"_s,
		"Soprano Sax"_s,
		"Alto Sax"_s,
		"Tenor Sax"_s,
		"Baritone Sax"_s,
		"Oboe"_s,
		"English Horn"_s,
		"Bassoon"_s,
		"Clarinet"_s,
		"Piccolo"_s,
		"Flute"_s,
		"Recorder"_s,
		"Pan Flute"_s,
		"Blown Bottle"_s,
		"Shakuhachi"_s,
		"Whistle"_s,
		"Ocarina"_s,
		"Lead 1 (square)"_s,
		"Lead 2 (sawtooth)"_s,
		"Lead 3 (calliope)"_s,
		"Lead 4 (chiff)"_s,
		"Lead 5 (charang)"_s,
		"Lead 6 (voice)"_s,
		"Lead 7 (fifths)"_s,
		"Lead 8 (bass + lead)"_s,
		"Pad 1 (new age)"_s,
		"Pad 2 (warm)"_s,
		"Pad 3 (polysynth)"_s,
		"Pad 4 (choir)"_s,
		"Pad 5 (bowed)"_s,
		"Pad 6 (metallic)"_s,
		"Pad 7 (halo)"_s,
		"Pad 8 (sweep)"_s,
		"FX 1 (rain)"_s,
		"FX 2 (soundtrack)"_s,
		"FX 3 (crystal)"_s,
		"FX 4 (atmosphere)"_s,
		"FX 5 (brightness)"_s,
		"FX 6 (goblins)"_s,
		"FX 7 (echoes)"_s,
		"FX 8 (sci-fi)"_s,
		"Sitar"_s,
		"Banjo"_s,
		"Shamisen"_s,
		"Koto"_s,
		"Kalimba"_s,
		"Bag pipe"_s,
		"Fiddle"_s,
		"Shanai"_s,
		"Tinkle Bell"_s,
		"Agogo"_s,
		"Steel Drums"_s,
		"Woodblock"_s,
		"Taiko Drum"_s,
		"Melodic Tom"_s,
		"Synth Drum"_s,
		"Reverse Cymbal"_s,
		"Guitar Fret Noise"_s,
		"Breath Noise"_s,
		"Seashore"_s,
		"Bird Tweet"_s,
		"Telephone Ring"_s,
		"Helicopter"_s,
		"Applause"_s,
		"Gunshot"_s
	}));
}

EmergencySoundbank::EmergencySoundbank() {
}

$Class* EmergencySoundbank::load$($String* name, bool initialize) {
	$loadClass(EmergencySoundbank, name, initialize, &_EmergencySoundbank_ClassInfo_, clinit$EmergencySoundbank, allocate$EmergencySoundbank);
	return class$;
}

$Class* EmergencySoundbank::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com