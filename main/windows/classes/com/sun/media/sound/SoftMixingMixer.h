#ifndef _com_sun_media_sound_SoftMixingMixer_h_
#define _com_sun_media_sound_SoftMixingMixer_h_
//$ class com.sun.media.sound.SoftMixingMixer
//$ extends javax.sound.sampled.Mixer

#include <java/lang/Array.h>
#include <javax/sound/sampled/Mixer.h>

#pragma push_macro("INFO_DESCRIPTION")
#undef INFO_DESCRIPTION
#pragma push_macro("INFO_NAME")
#undef INFO_NAME
#pragma push_macro("INFO_VENDOR")
#undef INFO_VENDOR
#pragma push_macro("INFO_VERSION")
#undef INFO_VERSION

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioPusher;
				class SoftMixingMainMixer;
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
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class Control;
			class Control$Type;
			class Line;
			class Line$Info;
			class LineEvent;
			class LineListener;
			class Mixer$Info;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingMixer : public ::javax::sound::sampled::Mixer {
	$class(SoftMixingMixer, 0, ::javax::sound::sampled::Mixer)
public:
	SoftMixingMixer();
	void init$();
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	virtual void close() override;
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* control) override;
	float getControlRate();
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	::javax::sound::sampled::AudioFormat* getFormat();
	int64_t getLatency();
	virtual ::javax::sound::sampled::Line* getLine(::javax::sound::sampled::Line$Info* info) override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	::com::sun::media::sound::SoftMixingMainMixer* getMainMixer();
	virtual int32_t getMaxLines(::javax::sound::sampled::Line$Info* info) override;
	virtual ::javax::sound::sampled::Mixer$Info* getMixerInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getSourceLineInfo(::javax::sound::sampled::Line$Info* info) override;
	virtual $Array<::javax::sound::sampled::Line>* getSourceLines() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo() override;
	virtual $Array<::javax::sound::sampled::Line$Info>* getTargetLineInfo(::javax::sound::sampled::Line$Info* info) override;
	virtual $Array<::javax::sound::sampled::Line>* getTargetLines() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* control) override;
	virtual bool isLineSupported(::javax::sound::sampled::Line$Info* info) override;
	virtual bool isOpen() override;
	virtual bool isSynchronizationSupported($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) override;
	virtual void open() override;
	void open(::javax::sound::sampled::SourceDataLine* line);
	::javax::sound::sampled::AudioInputStream* openStream(::javax::sound::sampled::AudioFormat* targetFormat);
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	void sendEvent(::javax::sound::sampled::LineEvent* event);
	virtual void synchronize($Array<::javax::sound::sampled::Line>* lines, bool maintainSync) override;
	virtual void unsynchronize($Array<::javax::sound::sampled::Line>* lines) override;
	static $String* INFO_NAME;
	static $String* INFO_VENDOR;
	static $String* INFO_DESCRIPTION;
	static $String* INFO_VERSION;
	static ::javax::sound::sampled::Mixer$Info* info;
	$Object* control_mutex = nullptr;
	bool implicitOpen = false;
	bool open$ = false;
	::com::sun::media::sound::SoftMixingMainMixer* mainmixer = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	::javax::sound::sampled::SourceDataLine* sourceDataLine = nullptr;
	::com::sun::media::sound::SoftAudioPusher* pusher = nullptr;
	::javax::sound::sampled::AudioInputStream* pusher_stream = nullptr;
	float controlrate = 0.0;
	static const int64_t latency = 0x000186A0;
	static const bool jitter_correction = false;
	::java::util::List* listeners = nullptr;
	$Array<::javax::sound::sampled::Line$Info>* sourceLineInfo = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("INFO_DESCRIPTION")
#pragma pop_macro("INFO_NAME")
#pragma pop_macro("INFO_VENDOR")
#pragma pop_macro("INFO_VERSION")

#endif // _com_sun_media_sound_SoftMixingMixer_h_