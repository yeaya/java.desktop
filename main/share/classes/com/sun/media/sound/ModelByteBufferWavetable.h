#ifndef _com_sun_media_sound_ModelByteBufferWavetable_h_
#define _com_sun_media_sound_ModelByteBufferWavetable_h_
//$ class com.sun.media.sound.ModelByteBufferWavetable
//$ extends com.sun.media.sound.ModelWavetable

#include <com/sun/media/sound/ModelWavetable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatInputStream;
				class ModelByteBuffer;
				class ModelOscillatorStream;
			}
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

class ModelByteBufferWavetable : public ::com::sun::media::sound::ModelWavetable {
	$class(ModelByteBufferWavetable, $NO_CLASS_INIT, ::com::sun::media::sound::ModelWavetable)
public:
	ModelByteBufferWavetable();
	void init$(::com::sun::media::sound::ModelByteBuffer* buffer);
	void init$(::com::sun::media::sound::ModelByteBuffer* buffer, float pitchcorrection);
	void init$(::com::sun::media::sound::ModelByteBuffer* buffer, ::javax::sound::sampled::AudioFormat* format);
	void init$(::com::sun::media::sound::ModelByteBuffer* buffer, ::javax::sound::sampled::AudioFormat* format, float pitchcorrection);
	::com::sun::media::sound::ModelByteBuffer* get8BitExtensionBuffer();
	virtual float getAttenuation() override;
	::com::sun::media::sound::ModelByteBuffer* getBuffer();
	virtual int32_t getChannels() override;
	::javax::sound::sampled::AudioFormat* getFormat();
	virtual float getLoopLength() override;
	virtual float getLoopStart() override;
	virtual int32_t getLoopType() override;
	virtual float getPitchcorrection() override;
	virtual ::com::sun::media::sound::ModelOscillatorStream* open(float samplerate) override;
	virtual ::com::sun::media::sound::AudioFloatInputStream* openStream() override;
	void set8BitExtensionBuffer(::com::sun::media::sound::ModelByteBuffer* buffer);
	void setAttenuation(float attenuation);
	void setLoopLength(float loopLength);
	void setLoopStart(float loopStart);
	void setLoopType(int32_t loopType);
	void setPitchcorrection(float pitchcorrection);
	float loopStart = 0.0;
	float loopLength = 0.0;
	::com::sun::media::sound::ModelByteBuffer* buffer = nullptr;
	::com::sun::media::sound::ModelByteBuffer* buffer8 = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	float pitchcorrection = 0.0;
	float attenuation = 0.0;
	int32_t loopType = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelByteBufferWavetable_h_