#ifndef _com_sun_media_sound_SoftMixingDataLine_h_
#define _com_sun_media_sound_SoftMixingDataLine_h_
//$ class com.sun.media.sound.SoftMixingDataLine
//$ extends javax.sound.sampled.DataLine

#include <java/lang/Array.h>
#include <javax/sound/sampled/DataLine.h>

#pragma push_macro("CHORUS_SEND")
#undef CHORUS_SEND

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class SoftAudioBuffer;
				class SoftMixingDataLine$ApplyReverb;
				class SoftMixingDataLine$Balance;
				class SoftMixingDataLine$ChorusSend;
				class SoftMixingDataLine$Gain;
				class SoftMixingDataLine$Mute;
				class SoftMixingDataLine$Pan;
				class SoftMixingDataLine$ReverbSend;
				class SoftMixingMixer;
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
			class Control;
			class Control$Type;
			class DataLine$Info;
			class FloatControl$Type;
			class Line$Info;
			class LineEvent;
			class LineListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftMixingDataLine : public ::javax::sound::sampled::DataLine {
	$class(SoftMixingDataLine, 0, ::javax::sound::sampled::DataLine)
public:
	SoftMixingDataLine();
	void init$(::com::sun::media::sound::SoftMixingMixer* mixer, ::javax::sound::sampled::DataLine$Info* info);
	virtual void addLineListener(::javax::sound::sampled::LineListener* listener) override;
	void calcVolume();
	virtual ::javax::sound::sampled::Control* getControl(::javax::sound::sampled::Control$Type* control) override;
	virtual $Array<::javax::sound::sampled::Control>* getControls() override;
	virtual ::javax::sound::sampled::Line$Info* getLineInfo() override;
	virtual bool isControlSupported(::javax::sound::sampled::Control$Type* control) override;
	virtual void processAudioLogic($Array<::com::sun::media::sound::SoftAudioBuffer>* buffers) {}
	virtual void processControlLogic() {}
	virtual void removeLineListener(::javax::sound::sampled::LineListener* listener) override;
	void sendEvent(::javax::sound::sampled::LineEvent* event);
	static ::javax::sound::sampled::FloatControl$Type* CHORUS_SEND;
	::com::sun::media::sound::SoftMixingDataLine$Gain* gain_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$Mute* mute_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$Balance* balance_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$Pan* pan_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$ReverbSend* reverbsend_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$ChorusSend* chorussend_control = nullptr;
	::com::sun::media::sound::SoftMixingDataLine$ApplyReverb* apply_reverb = nullptr;
	$Array<::javax::sound::sampled::Control>* controls = nullptr;
	float leftgain = 0.0;
	float rightgain = 0.0;
	float eff1gain = 0.0;
	float eff2gain = 0.0;
	::java::util::List* listeners = nullptr;
	$Object* control_mutex = nullptr;
	::com::sun::media::sound::SoftMixingMixer* mixer = nullptr;
	::javax::sound::sampled::DataLine$Info* info = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("CHORUS_SEND")

#endif // _com_sun_media_sound_SoftMixingDataLine_h_