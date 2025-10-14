#ifndef _com_sun_media_sound_DLSSoundbank_h_
#define _com_sun_media_sound_DLSSoundbank_h_
//$ class com.sun.media.sound.DLSSoundbank
//$ extends javax.sound.midi.Soundbank

#include <java/lang/Array.h>
#include <javax/sound/midi/Soundbank.h>

#pragma push_macro("DLS_CDL_ADD")
#undef DLS_CDL_ADD
#pragma push_macro("DLS_CDL_AND")
#undef DLS_CDL_AND
#pragma push_macro("DLS_CDL_CONST")
#undef DLS_CDL_CONST
#pragma push_macro("DLS_CDL_DIVIDE")
#undef DLS_CDL_DIVIDE
#pragma push_macro("DLS_CDL_EQ")
#undef DLS_CDL_EQ
#pragma push_macro("DLS_CDL_GE")
#undef DLS_CDL_GE
#pragma push_macro("DLS_CDL_GT")
#undef DLS_CDL_GT
#pragma push_macro("DLS_CDL_LE")
#undef DLS_CDL_LE
#pragma push_macro("DLS_CDL_LOGICAL_AND")
#undef DLS_CDL_LOGICAL_AND
#pragma push_macro("DLS_CDL_LOGICAL_OR")
#undef DLS_CDL_LOGICAL_OR
#pragma push_macro("DLS_CDL_LT")
#undef DLS_CDL_LT
#pragma push_macro("DLS_CDL_MULTIPLY")
#undef DLS_CDL_MULTIPLY
#pragma push_macro("DLS_CDL_NOT")
#undef DLS_CDL_NOT
#pragma push_macro("DLS_CDL_OR")
#undef DLS_CDL_OR
#pragma push_macro("DLS_CDL_QUERY")
#undef DLS_CDL_QUERY
#pragma push_macro("DLS_CDL_QUERYSUPPORTED")
#undef DLS_CDL_QUERYSUPPORTED
#pragma push_macro("DLS_CDL_SUBTRACT")
#undef DLS_CDL_SUBTRACT
#pragma push_macro("DLS_CDL_XOR")
#undef DLS_CDL_XOR

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DLSInfo;
				class DLSInstrument;
				class DLSRegion;
				class DLSSample;
				class DLSSampleOptions;
				class DLSSoundbank$DLSID;
				class RIFFReader;
				class RIFFWriter;
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

class DLSSoundbank : public ::javax::sound::midi::Soundbank {
	$class(DLSSoundbank, 0, ::javax::sound::midi::Soundbank)
public:
	DLSSoundbank();
	void init$();
	void init$(::java::net::URL* url);
	void init$(::java::io::File* file);
	void init$(::java::io::InputStream* inputstream);
	void addInstrument(::com::sun::media::sound::DLSInstrument* resource);
	void addResource(::javax::sound::midi::SoundbankResource* resource);
	bool cdlIsQuerySupported(::com::sun::media::sound::DLSSoundbank$DLSID* uuid);
	int64_t cdlQuery(::com::sun::media::sound::DLSSoundbank$DLSID* uuid);
	virtual $String* getDescription() override;
	::com::sun::media::sound::DLSInfo* getInfo();
	virtual ::javax::sound::midi::Instrument* getInstrument(::javax::sound::midi::Patch* patch) override;
	virtual $Array<::javax::sound::midi::Instrument>* getInstruments() override;
	int64_t getMajor();
	int64_t getMinor();
	virtual $String* getName() override;
	virtual $Array<::javax::sound::midi::SoundbankResource>* getResources() override;
	$Array<::com::sun::media::sound::DLSSample>* getSamples();
	virtual $String* getVendor() override;
	virtual $String* getVersion() override;
	void readArt1Chunk(::java::util::List* modulators, ::com::sun::media::sound::RIFFReader* riff);
	void readArt2Chunk(::java::util::List* modulators, ::com::sun::media::sound::RIFFReader* riff);
	bool readCdlChunk(::com::sun::media::sound::RIFFReader* riff);
	void readInfoChunk(::com::sun::media::sound::RIFFReader* riff);
	void readInsChunk(::com::sun::media::sound::RIFFReader* riff);
	void readInsInfoChunk(::com::sun::media::sound::DLSInstrument* dlsinstrument, ::com::sun::media::sound::RIFFReader* riff);
	void readLinsChunk(::com::sun::media::sound::RIFFReader* riff);
	bool readRgnChunk(::com::sun::media::sound::DLSRegion* split, ::com::sun::media::sound::RIFFReader* riff);
	void readSoundbank(::java::io::InputStream* inputstream);
	void readWaveChunk(::com::sun::media::sound::RIFFReader* riff);
	void readWaveInfoChunk(::com::sun::media::sound::DLSSample* dlssample, ::com::sun::media::sound::RIFFReader* riff);
	void readWsmpChunk(::com::sun::media::sound::DLSSampleOptions* sampleOptions, ::com::sun::media::sound::RIFFReader* riff);
	void readWvplChunk(::com::sun::media::sound::RIFFReader* riff);
	void removeInstrument(::com::sun::media::sound::DLSInstrument* resource);
	void removeResource(::javax::sound::midi::SoundbankResource* resource);
	void save($String* name);
	void save(::java::io::File* file);
	void save(::java::io::OutputStream* out);
	void setDescription($String* s);
	void setMajor(int64_t major);
	void setMinor(int64_t minor);
	void setName($String* s);
	void setVendor($String* s);
	void writeArticulators(::com::sun::media::sound::RIFFWriter* writer, ::java::util::List* modulators);
	void writeInfo(::com::sun::media::sound::RIFFWriter* writer, ::com::sun::media::sound::DLSInfo* info);
	void writeInfoStringChunk(::com::sun::media::sound::RIFFWriter* writer, $String* name, $String* value);
	void writeInstrument(::com::sun::media::sound::RIFFWriter* writer, ::com::sun::media::sound::DLSInstrument* instrument);
	void writeInstruments(::com::sun::media::sound::RIFFWriter* writer);
	void writeRegion(::com::sun::media::sound::RIFFWriter* writer, ::com::sun::media::sound::DLSRegion* region, int32_t version);
	void writeSample(::com::sun::media::sound::RIFFWriter* writer, ::com::sun::media::sound::DLSSample* sample);
	void writeSampleOptions(::com::sun::media::sound::RIFFWriter* wsmp, ::com::sun::media::sound::DLSSampleOptions* sampleoptions);
	void writeSoundbank(::com::sun::media::sound::RIFFWriter* writer);
	static const int32_t DLS_CDL_AND = 1;
	static const int32_t DLS_CDL_OR = 2;
	static const int32_t DLS_CDL_XOR = 3;
	static const int32_t DLS_CDL_ADD = 4;
	static const int32_t DLS_CDL_SUBTRACT = 5;
	static const int32_t DLS_CDL_MULTIPLY = 6;
	static const int32_t DLS_CDL_DIVIDE = 7;
	static const int32_t DLS_CDL_LOGICAL_AND = 8;
	static const int32_t DLS_CDL_LOGICAL_OR = 9;
	static const int32_t DLS_CDL_LT = 10;
	static const int32_t DLS_CDL_LE = 11;
	static const int32_t DLS_CDL_GT = 12;
	static const int32_t DLS_CDL_GE = 13;
	static const int32_t DLS_CDL_EQ = 14;
	static const int32_t DLS_CDL_NOT = 15;
	static const int32_t DLS_CDL_CONST = 16;
	static const int32_t DLS_CDL_QUERY = 17;
	static const int32_t DLS_CDL_QUERYSUPPORTED = 18;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_GMInHardware;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_GSInHardware;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_XGInHardware;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_SupportsDLS1;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_SupportsDLS2;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_SampleMemorySize;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_ManufacturersID;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_ProductID;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* DLSID_SamplePlaybackRate;
	int64_t major = 0;
	int64_t minor = 0;
	::com::sun::media::sound::DLSInfo* info = nullptr;
	::java::util::List* instruments = nullptr;
	::java::util::List* samples = nullptr;
	bool largeFormat = false;
	::java::io::File* sampleFile = nullptr;
	::java::util::Map* temp_rgnassign = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DLS_CDL_ADD")
#pragma pop_macro("DLS_CDL_AND")
#pragma pop_macro("DLS_CDL_CONST")
#pragma pop_macro("DLS_CDL_DIVIDE")
#pragma pop_macro("DLS_CDL_EQ")
#pragma pop_macro("DLS_CDL_GE")
#pragma pop_macro("DLS_CDL_GT")
#pragma pop_macro("DLS_CDL_LE")
#pragma pop_macro("DLS_CDL_LOGICAL_AND")
#pragma pop_macro("DLS_CDL_LOGICAL_OR")
#pragma pop_macro("DLS_CDL_LT")
#pragma pop_macro("DLS_CDL_MULTIPLY")
#pragma pop_macro("DLS_CDL_NOT")
#pragma pop_macro("DLS_CDL_OR")
#pragma pop_macro("DLS_CDL_QUERY")
#pragma pop_macro("DLS_CDL_QUERYSUPPORTED")
#pragma pop_macro("DLS_CDL_SUBTRACT")
#pragma pop_macro("DLS_CDL_XOR")

#endif // _com_sun_media_sound_DLSSoundbank_h_