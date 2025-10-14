#ifndef _com_sun_media_sound_SF2Soundbank_h_
#define _com_sun_media_sound_SF2Soundbank_h_
//$ class com.sun.media.sound.SF2Soundbank
//$ extends javax.sound.midi.Soundbank

#include <java/lang/Array.h>
#include <javax/sound/midi/Soundbank.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelByteBuffer;
				class RIFFReader;
				class RIFFWriter;
				class SF2Instrument;
				class SF2Layer;
				class SF2Sample;
			}
		}
	}
}
namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URL;
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

class SF2Soundbank : public ::javax::sound::midi::Soundbank {
	$class(SF2Soundbank, $NO_CLASS_INIT, ::javax::sound::midi::Soundbank)
public:
	SF2Soundbank();
	void init$();
	void init$(::java::net::URL* url);
	void init$(::java::io::File* file);
	void init$(::java::io::InputStream* inputstream);
	void addInstrument(::com::sun::media::sound::SF2Instrument* resource);
	void addResource(::javax::sound::midi::SoundbankResource* resource);
	$String* getCreationDate();
	virtual $String* getDescription() override;
	virtual ::javax::sound::midi::Instrument* getInstrument(::javax::sound::midi::Patch* patch) override;
	virtual $Array<::javax::sound::midi::Instrument>* getInstruments() override;
	$Array<::com::sun::media::sound::SF2Layer>* getLayers();
	virtual $String* getName() override;
	$String* getProduct();
	virtual $Array<::javax::sound::midi::SoundbankResource>* getResources() override;
	$String* getRomName();
	int32_t getRomVersionMajor();
	int32_t getRomVersionMinor();
	$Array<::com::sun::media::sound::SF2Sample>* getSamples();
	$String* getTargetEngine();
	$String* getTools();
	virtual $String* getVendor() override;
	virtual $String* getVersion() override;
	void readInfoChunk(::com::sun::media::sound::RIFFReader* riff);
	void readPdtaChunk(::com::sun::media::sound::RIFFReader* riff);
	void readSdtaChunk(::com::sun::media::sound::RIFFReader* riff);
	void readSoundbank(::java::io::InputStream* inputstream);
	void removeInstrument(::com::sun::media::sound::SF2Instrument* resource);
	void removeResource(::javax::sound::midi::SoundbankResource* resource);
	void save($String* name);
	void save(::java::io::File* file);
	void save(::java::io::OutputStream* out);
	void setCreationDate($String* creationDate);
	void setDescription($String* s);
	void setName($String* s);
	void setProduct($String* product);
	void setRomName($String* romName);
	void setRomVersionMajor(int32_t romVersionMajor);
	void setRomVersionMinor(int32_t romVersionMinor);
	void setTargetEngine($String* targetEngine);
	void setTools($String* tools);
	void setVendor($String* s);
	void writeGenerators(::com::sun::media::sound::RIFFWriter* writer, ::java::util::Map* generators);
	void writeInfo(::com::sun::media::sound::RIFFWriter* writer);
	void writeInfoStringChunk(::com::sun::media::sound::RIFFWriter* writer, $String* name, $String* value);
	void writeModulators(::com::sun::media::sound::RIFFWriter* writer, ::java::util::List* modulators);
	void writePdtaChunk(::com::sun::media::sound::RIFFWriter* writer);
	void writeSdtaChunk(::com::sun::media::sound::RIFFWriter* writer);
	void writeSoundbank(::com::sun::media::sound::RIFFWriter* writer);
	int32_t major = 0;
	int32_t minor = 0;
	$String* targetEngine = nullptr;
	$String* name = nullptr;
	$String* romName = nullptr;
	int32_t romVersionMajor = 0;
	int32_t romVersionMinor = 0;
	$String* creationDate = nullptr;
	$String* engineers = nullptr;
	$String* product = nullptr;
	$String* copyright = nullptr;
	$String* comments = nullptr;
	$String* tools = nullptr;
	::com::sun::media::sound::ModelByteBuffer* sampleData = nullptr;
	::com::sun::media::sound::ModelByteBuffer* sampleData24 = nullptr;
	::java::io::File* sampleFile = nullptr;
	bool largeFormat = false;
	::java::util::List* instruments = nullptr;
	::java::util::List* layers = nullptr;
	::java::util::List* samples = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2Soundbank_h_