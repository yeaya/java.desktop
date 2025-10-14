#ifndef _com_sun_media_sound_SF2Layer_h_
#define _com_sun_media_sound_SF2Layer_h_
//$ class com.sun.media.sound.SF2Layer
//$ extends javax.sound.midi.SoundbankResource

#include <javax/sound/midi/SoundbankResource.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SF2GlobalRegion;
				class SF2Soundbank;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SF2Layer : public ::javax::sound::midi::SoundbankResource {
	$class(SF2Layer, $NO_CLASS_INIT, ::javax::sound::midi::SoundbankResource)
public:
	SF2Layer();
	void init$(::com::sun::media::sound::SF2Soundbank* soundBank);
	void init$();
	virtual $Object* getData() override;
	::com::sun::media::sound::SF2GlobalRegion* getGlobalRegion();
	virtual $String* getName() override;
	::java::util::List* getRegions();
	void setGlobalZone(::com::sun::media::sound::SF2GlobalRegion* zone);
	void setName($String* name);
	virtual $String* toString() override;
	$String* name = nullptr;
	::com::sun::media::sound::SF2GlobalRegion* globalregion = nullptr;
	::java::util::List* regions = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2Layer_h_