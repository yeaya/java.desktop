#ifndef _com_sun_media_sound_SoftAbstractResampler$ModelAbstractResamplerStream_h_
#define _com_sun_media_sound_SoftAbstractResampler$ModelAbstractResamplerStream_h_
//$ class com.sun.media.sound.SoftAbstractResampler$ModelAbstractResamplerStream
//$ extends com.sun.media.sound.SoftResamplerStreamer

#include <com/sun/media/sound/SoftResamplerStreamer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AudioFloatInputStream;
				class ModelWavetable;
				class SoftAbstractResampler;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MidiChannel;
			class VoiceStatus;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftAbstractResampler$ModelAbstractResamplerStream : public ::com::sun::media::sound::SoftResamplerStreamer {
	$class(SoftAbstractResampler$ModelAbstractResamplerStream, $NO_CLASS_INIT, ::com::sun::media::sound::SoftResamplerStreamer)
public:
	SoftAbstractResampler$ModelAbstractResamplerStream();
	void init$(::com::sun::media::sound::SoftAbstractResampler* this$0);
	virtual void close() override;
	virtual void nextBuffer();
	virtual void noteOff(int32_t velocity) override;
	virtual void noteOn(::javax::sound::midi::MidiChannel* channel, ::javax::sound::midi::VoiceStatus* voice, int32_t noteNumber, int32_t velocity) override;
	virtual void open(::com::sun::media::sound::ModelWavetable* osc, float outputsamplerate) override;
	virtual int32_t read($Array<float, 2>* buffer, int32_t offset, int32_t len) override;
	virtual void reverseBuffers();
	virtual void setPitch(float pitch) override;
	::com::sun::media::sound::SoftAbstractResampler* this$0 = nullptr;
	::com::sun::media::sound::AudioFloatInputStream* stream = nullptr;
	bool stream_eof = false;
	int32_t loopmode = 0;
	bool loopdirection = false;
	float loopstart = 0.0;
	float looplen = 0.0;
	float target_pitch = 0.0;
	$floats* current_pitch = nullptr;
	bool started = false;
	bool eof = false;
	int32_t sector_pos = 0;
	int32_t sector_size = 0;
	int32_t sector_loopstart = 0;
	bool markset = false;
	int32_t marklimit = 0;
	int32_t streampos = 0;
	int32_t nrofchannels = 0;
	bool noteOff_flag = false;
	$Array<float, 2>* ibuffer = nullptr;
	bool ibuffer_order = false;
	$floats* sbuffer = nullptr;
	int32_t pad = 0;
	int32_t pad2 = 0;
	$floats* ix = nullptr;
	$ints* ox = nullptr;
	float samplerateconv = 0.0;
	float pitchcorrection = 0.0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftAbstractResampler$ModelAbstractResamplerStream_h_