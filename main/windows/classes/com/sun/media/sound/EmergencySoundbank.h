#ifndef _com_sun_media_sound_EmergencySoundbank_h_
#define _com_sun_media_sound_EmergencySoundbank_h_
//$ class com.sun.media.sound.EmergencySoundbank
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SF2Instrument;
				class SF2Layer;
				class SF2Sample;
				class SF2Soundbank;
			}
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Patch;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class EmergencySoundbank : public ::java::lang::Object {
	$class(EmergencySoundbank, 0, ::java::lang::Object)
public:
	EmergencySoundbank();
	void init$();
	static void complexGaussianDist($doubles* cdata, double m, double s, double v);
	static ::com::sun::media::sound::SF2Soundbank* createSoundbank();
	static void fadeUp($doubles* data, int32_t samples);
	static void fadeUp($floats* data, int32_t samples);
	static void fft($doubles* data);
	static void ifft($doubles* data);
	static $doubles* imgPart($doubles* in);
	static $doubles* loopExtend($doubles* data, int32_t newsize);
	static $floats* loopExtend($floats* data, int32_t newsize);
	static ::com::sun::media::sound::SF2Instrument* newInstrument(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, ::javax::sound::midi::Patch* patch, $Array<::com::sun::media::sound::SF2Layer>* layers);
	static ::com::sun::media::sound::SF2Layer* newLayer(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, ::com::sun::media::sound::SF2Sample* sample);
	static ::com::sun::media::sound::SF2Sample* newSimpleDrumSample(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, $doubles* data);
	static ::com::sun::media::sound::SF2Sample* newSimpleFFTSample(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, $doubles* data, double base);
	static ::com::sun::media::sound::SF2Sample* newSimpleFFTSample(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, $doubles* data, double base, int32_t fadeuptime);
	static ::com::sun::media::sound::SF2Sample* newSimpleFFTSample_dist(::com::sun::media::sound::SF2Soundbank* sf2, $String* name, $doubles* data, double base, double preamp);
	static ::com::sun::media::sound::SF2Layer* new_bass1(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_bass2(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_bass_drum(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_bassoon(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_bell(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_brass_section(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_ch_organ(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_choir(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_clarinet(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_closed_hihat(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_crash_cymbal(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_epiano1(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_epiano2(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_flute(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_gpiano(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_gpiano2(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_guitar1(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_guitar_dist(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_guitar_pick(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_horn(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_melodic_toms(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_oboe(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_open_hihat(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_orchhit(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_organ(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_piano1(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_piano_hammer(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_reverse_cymbal(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_sax(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_side_stick(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_snare_drum(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_solostring(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_string2(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_synthbass(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_timpani(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_tom(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_trombone(::com::sun::media::sound::SF2Soundbank* sf2);
	static ::com::sun::media::sound::SF2Layer* new_trumpet(::com::sun::media::sound::SF2Soundbank* sf2);
	static void normalize($doubles* data, double target);
	static void normalize($floats* data, double target);
	static void randomPhase($doubles* data);
	static void randomPhase($doubles* data, ::java::util::Random* random);
	static $doubles* realPart($doubles* in);
	static $bytes* toBytes($floats* in, ::javax::sound::sampled::AudioFormat* format);
	static $floats* toFloat($doubles* in);
	static $StringArray* general_midi_instruments;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_EmergencySoundbank_h_