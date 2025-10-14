#ifndef _com_sun_media_sound_SF2Sample_h_
#define _com_sun_media_sound_SF2Sample_h_
//$ class com.sun.media.sound.SF2Sample
//$ extends javax.sound.midi.SoundbankResource

#include <java/lang/Array.h>
#include <javax/sound/midi/SoundbankResource.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelByteBuffer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Soundbank;
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

class SF2Sample : public ::javax::sound::midi::SoundbankResource {
	$class(SF2Sample, $NO_CLASS_INIT, ::javax::sound::midi::SoundbankResource)
public:
	SF2Sample();
	void init$(::javax::sound::midi::Soundbank* soundBank);
	void init$();
	virtual $Object* getData() override;
	::com::sun::media::sound::ModelByteBuffer* getData24Buffer();
	::com::sun::media::sound::ModelByteBuffer* getDataBuffer();
	int64_t getEndLoop();
	::javax::sound::sampled::AudioFormat* getFormat();
	virtual $String* getName() override;
	int32_t getOriginalPitch();
	int8_t getPitchCorrection();
	int32_t getSampleLink();
	int64_t getSampleRate();
	int32_t getSampleType();
	int64_t getStartLoop();
	void setData(::com::sun::media::sound::ModelByteBuffer* data);
	void setData($bytes* data);
	void setData($bytes* data, int32_t offset, int32_t length);
	void setData24(::com::sun::media::sound::ModelByteBuffer* data24);
	void setData24($bytes* data24);
	void setData24($bytes* data24, int32_t offset, int32_t length);
	void setEndLoop(int64_t endLoop);
	void setName($String* name);
	void setOriginalPitch(int32_t originalPitch);
	void setPitchCorrection(int8_t pitchCorrection);
	void setSampleLink(int32_t sampleLink);
	void setSampleRate(int64_t sampleRate);
	void setSampleType(int32_t sampleType);
	void setStartLoop(int64_t startLoop);
	virtual $String* toString() override;
	$String* name = nullptr;
	int64_t startLoop = 0;
	int64_t endLoop = 0;
	int64_t sampleRate = 0;
	int32_t originalPitch = 0;
	int8_t pitchCorrection = 0;
	int32_t sampleLink = 0;
	int32_t sampleType = 0;
	::com::sun::media::sound::ModelByteBuffer* data = nullptr;
	::com::sun::media::sound::ModelByteBuffer* data24 = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SF2Sample_h_