#ifndef _com_sun_media_sound_SimpleSoundbank_h_
#define _com_sun_media_sound_SimpleSoundbank_h_
//$ class com.sun.media.sound.SimpleSoundbank
//$ extends javax.sound.midi.Soundbank

#include <java/lang/Array.h>
#include <javax/sound/midi/Soundbank.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Instrument;
			class Patch;
			class SoundbankResource;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SimpleSoundbank : public ::javax::sound::midi::Soundbank {
	$class(SimpleSoundbank, $NO_CLASS_INIT, ::javax::sound::midi::Soundbank)
public:
	SimpleSoundbank();
	void init$();
	virtual void addAllInstruments(::javax::sound::midi::Soundbank* soundbank);
	virtual void addInstrument(::javax::sound::midi::Instrument* resource);
	virtual void addResource(::javax::sound::midi::SoundbankResource* resource);
	virtual $String* getDescription() override;
	virtual ::javax::sound::midi::Instrument* getInstrument(::javax::sound::midi::Patch* patch) override;
	virtual $Array<::javax::sound::midi::Instrument>* getInstruments() override;
	virtual $String* getName() override;
	virtual $Array<::javax::sound::midi::SoundbankResource>* getResources() override;
	virtual $String* getVendor() override;
	virtual $String* getVersion() override;
	virtual void removeAllInstruments(::javax::sound::midi::Soundbank* soundbank);
	virtual void removeInstrument(::javax::sound::midi::Instrument* resource);
	virtual void removeResource(::javax::sound::midi::SoundbankResource* resource);
	virtual void setDescription($String* description);
	virtual void setName($String* name);
	virtual void setVendor($String* vendor);
	virtual void setVersion($String* version);
	$String* name = nullptr;
	$String* version = nullptr;
	$String* vendor = nullptr;
	$String* description = nullptr;
	::java::util::List* resources = nullptr;
	::java::util::List* instruments = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SimpleSoundbank_h_