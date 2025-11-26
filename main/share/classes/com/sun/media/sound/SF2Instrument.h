#ifndef _com_sun_media_sound_SF2Instrument_h_
#define _com_sun_media_sound_SF2Instrument_h_
//$ class com.sun.media.sound.SF2Instrument
//$ extends com.sun.media.sound.ModelInstrument

#include <com/sun/media/sound/ModelInstrument.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelDestination;
				class ModelIdentifier;
				class ModelPerformer;
				class ModelSource;
				class SF2GlobalRegion;
				class SF2Modulator;
				class SF2Soundbank;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Patch;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2Instrument : public ::com::sun::media::sound::ModelInstrument {
	$class(SF2Instrument, $NO_CLASS_INIT, ::com::sun::media::sound::ModelInstrument)
public:
	SF2Instrument();
	void init$();
	void init$(::com::sun::media::sound::SF2Soundbank* soundbank);
	void addTimecentValue(::com::sun::media::sound::ModelPerformer* performer, ::com::sun::media::sound::ModelIdentifier* dest, int16_t value);
	void addValue(::com::sun::media::sound::ModelPerformer* performer, ::com::sun::media::sound::ModelIdentifier* dest, int16_t value);
	void addValue(::com::sun::media::sound::ModelPerformer* performer, ::com::sun::media::sound::ModelIdentifier* dest, double value);
	static ::com::sun::media::sound::ModelDestination* convertDestination(int32_t dst, $doubles* amountcorrection, $Array<::com::sun::media::sound::ModelSource>* extrasrc);
	void convertModulator(::com::sun::media::sound::ModelPerformer* performer, ::com::sun::media::sound::SF2Modulator* modulator);
	static ::com::sun::media::sound::ModelSource* convertSource(int32_t src);
	virtual $Object* getData() override;
	int16_t getGeneratorValue(::java::util::Map* generators, int32_t gen);
	int64_t getGenre();
	::com::sun::media::sound::SF2GlobalRegion* getGlobalRegion();
	int64_t getLibrary();
	int64_t getMorphology();
	virtual $String* getName() override;
	virtual ::javax::sound::midi::Patch* getPatch() override;
	virtual $Array<::com::sun::media::sound::ModelPerformer>* getPerformers() override;
	::java::util::List* getRegions();
	void setGenre(int64_t genre);
	void setGlobalZone(::com::sun::media::sound::SF2GlobalRegion* zone);
	void setLibrary(int64_t library);
	void setMorphology(int64_t morphology);
	void setName($String* name);
	void setPatch(::javax::sound::midi::Patch* patch);
	virtual $String* toString() override;
	$String* name = nullptr;
	int32_t preset = 0;
	int32_t bank = 0;
	int64_t library = 0;
	int64_t genre = 0;
	int64_t morphology = 0;
	::com::sun::media::sound::SF2GlobalRegion* globalregion = nullptr;
	::java::util::List* regions = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2Instrument_h_