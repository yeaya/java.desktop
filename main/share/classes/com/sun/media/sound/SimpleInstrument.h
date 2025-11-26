#ifndef _com_sun_media_sound_SimpleInstrument_h_
#define _com_sun_media_sound_SimpleInstrument_h_
//$ class com.sun.media.sound.SimpleInstrument
//$ extends com.sun.media.sound.ModelInstrument

#include <com/sun/media/sound/ModelInstrument.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
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

class SimpleInstrument : public ::com::sun::media::sound::ModelInstrument {
	$class(SimpleInstrument, $NO_CLASS_INIT, ::com::sun::media::sound::ModelInstrument)
public:
	SimpleInstrument();
	void init$();
	virtual void add($Array<::com::sun::media::sound::ModelPerformer>* performers, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass);
	virtual void add($Array<::com::sun::media::sound::ModelPerformer>* performers, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo);
	virtual void add($Array<::com::sun::media::sound::ModelPerformer>* performers, int32_t keyFrom, int32_t keyTo);
	virtual void add($Array<::com::sun::media::sound::ModelPerformer>* performers);
	virtual void add(::com::sun::media::sound::ModelPerformer* performer, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass);
	virtual void add(::com::sun::media::sound::ModelPerformer* performer, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo);
	virtual void add(::com::sun::media::sound::ModelPerformer* performer, int32_t keyFrom, int32_t keyTo);
	virtual void add(::com::sun::media::sound::ModelPerformer* performer);
	virtual void add(::com::sun::media::sound::ModelInstrument* ins, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo, int32_t exclusiveClass);
	virtual void add(::com::sun::media::sound::ModelInstrument* ins, int32_t keyFrom, int32_t keyTo, int32_t velFrom, int32_t velTo);
	virtual void add(::com::sun::media::sound::ModelInstrument* ins, int32_t keyFrom, int32_t keyTo);
	virtual void add(::com::sun::media::sound::ModelInstrument* ins);
	virtual void clear();
	virtual $Object* getData() override;
	virtual $String* getName() override;
	virtual ::javax::sound::midi::Patch* getPatch() override;
	virtual $Array<::com::sun::media::sound::ModelPerformer>* getPerformers() override;
	virtual void setName($String* name);
	virtual void setPatch(::javax::sound::midi::Patch* patch);
	int32_t preset = 0;
	int32_t bank = 0;
	bool percussion = false;
	$String* name = nullptr;
	::java::util::List* parts = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SimpleInstrument_h_