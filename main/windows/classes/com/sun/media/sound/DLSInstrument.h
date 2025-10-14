#ifndef _com_sun_media_sound_DLSInstrument_h_
#define _com_sun_media_sound_DLSInstrument_h_
//$ class com.sun.media.sound.DLSInstrument
//$ extends com.sun.media.sound.ModelInstrument

#include <com/sun/media/sound/ModelInstrument.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DLSInfo;
				class DLSModulator;
				class DLSSoundbank;
				class ModelConnectionBlock;
				class ModelIdentifier;
				class ModelPerformer;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class DLSInstrument : public ::com::sun::media::sound::ModelInstrument {
	$class(DLSInstrument, $NO_CLASS_INIT, ::com::sun::media::sound::ModelInstrument)
public:
	DLSInstrument();
	void init$();
	void init$(::com::sun::media::sound::DLSSoundbank* soundbank);
	::com::sun::media::sound::ModelConnectionBlock* convertToModel(::com::sun::media::sound::DLSModulator* mod);
	::com::sun::media::sound::ModelIdentifier* convertToModelDest(int32_t dest);
	::com::sun::media::sound::ModelIdentifier* convertToModelSrc(int32_t src);
	virtual $Object* getData() override;
	$bytes* getGuid();
	::com::sun::media::sound::DLSInfo* getInfo();
	::java::util::List* getModulators();
	virtual $String* getName() override;
	virtual ::javax::sound::midi::Patch* getPatch() override;
	virtual $Array<::com::sun::media::sound::ModelPerformer>* getPerformers() override;
	::java::util::List* getRegions();
	void setGuid($bytes* guid);
	void setName($String* name);
	void setPatch(::javax::sound::midi::Patch* patch);
	virtual $String* toString() override;
	int32_t preset = 0;
	int32_t bank = 0;
	bool druminstrument = false;
	$bytes* guid = nullptr;
	::com::sun::media::sound::DLSInfo* info = nullptr;
	::java::util::List* regions = nullptr;
	::java::util::List* modulators = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSInstrument_h_