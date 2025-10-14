#ifndef _com_sun_media_sound_JavaSoundAudioClip_h_
#define _com_sun_media_sound_JavaSoundAudioClip_h_
//$ class com.sun.media.sound.JavaSoundAudioClip
//$ extends java.applet.AudioClip
//$ implements javax.sound.midi.MetaEventListener,javax.sound.sampled.LineListener

#include <java/applet/AudioClip.h>
#include <java/lang/Array.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/sampled/LineListener.h>

#pragma push_macro("CLIP_THRESHOLD")
#undef CLIP_THRESHOLD
#pragma push_macro("MINIMUM_PLAY_DELAY")
#undef MINIMUM_PLAY_DELAY
#pragma push_macro("STREAM_BUFFER_SIZE")
#undef STREAM_BUFFER_SIZE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class AutoClosingClip;
				class DataPusher;
			}
		}
	}
}
namespace java {
	namespace io {
		class BufferedInputStream;
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class MetaMessage;
			class Sequence;
			class Sequencer;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class LineEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JavaSoundAudioClip : public ::java::applet::AudioClip, public ::javax::sound::midi::MetaEventListener, public ::javax::sound::sampled::LineListener {
	$class(JavaSoundAudioClip, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::applet::AudioClip, ::javax::sound::midi::MetaEventListener, ::javax::sound::sampled::LineListener)
public:
	JavaSoundAudioClip();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual int32_t hashCode() override;
	void init$();
	static ::com::sun::media::sound::JavaSoundAudioClip* create(::java::net::URLConnection* uc);
	static ::com::sun::media::sound::JavaSoundAudioClip* create(::java::net::URL* url);
	bool createClip();
	bool createSequencer(::java::io::BufferedInputStream* in);
	bool createSourceDataLine();
	virtual void finalize() override;
	void init(::java::io::InputStream* in);
	bool loadAudioData(::javax::sound::sampled::AudioInputStream* as);
	virtual void loop() override;
	virtual void meta(::javax::sound::midi::MetaMessage* message) override;
	virtual void play() override;
	void readStream(::javax::sound::sampled::AudioInputStream* as, int64_t byteLen);
	void readStream(::javax::sound::sampled::AudioInputStream* as);
	void startImpl(bool loop);
	virtual void stop() override;
	virtual $String* toString() override;
	virtual void update(::javax::sound::sampled::LineEvent* event) override;
	int64_t lastPlayCall = 0;
	static const int32_t MINIMUM_PLAY_DELAY = 30;
	$bytes* loadedAudio = nullptr;
	int32_t loadedAudioByteLength = 0;
	::javax::sound::sampled::AudioFormat* loadedAudioFormat = nullptr;
	::com::sun::media::sound::AutoClosingClip* clip = nullptr;
	bool clipLooping = false;
	::com::sun::media::sound::DataPusher* datapusher = nullptr;
	::javax::sound::midi::Sequencer* sequencer = nullptr;
	::javax::sound::midi::Sequence* sequence = nullptr;
	bool sequencerloop = false;
	$volatile(bool) success = false;
	static const int64_t CLIP_THRESHOLD = 0x00100000;
	static const int32_t STREAM_BUFFER_SIZE = 1024;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CLIP_THRESHOLD")
#pragma pop_macro("MINIMUM_PLAY_DELAY")
#pragma pop_macro("STREAM_BUFFER_SIZE")

#endif // _com_sun_media_sound_JavaSoundAudioClip_h_