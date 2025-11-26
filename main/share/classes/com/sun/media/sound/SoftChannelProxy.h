#ifndef _com_sun_media_sound_SoftChannelProxy_h_
#define _com_sun_media_sound_SoftChannelProxy_h_
//$ class com.sun.media.sound.SoftChannelProxy
//$ extends javax.sound.midi.MidiChannel

#include <javax/sound/midi/MidiChannel.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftChannelProxy : public ::javax::sound::midi::MidiChannel {
	$class(SoftChannelProxy, $NO_CLASS_INIT, ::javax::sound::midi::MidiChannel)
public:
	SoftChannelProxy();
	void init$();
	virtual void allNotesOff() override;
	virtual void allSoundOff() override;
	virtual void controlChange(int32_t controller, int32_t value) override;
	::javax::sound::midi::MidiChannel* getChannel();
	virtual int32_t getChannelPressure() override;
	virtual int32_t getController(int32_t controller) override;
	virtual bool getMono() override;
	virtual bool getMute() override;
	virtual bool getOmni() override;
	virtual int32_t getPitchBend() override;
	virtual int32_t getPolyPressure(int32_t noteNumber) override;
	virtual int32_t getProgram() override;
	virtual bool getSolo() override;
	virtual bool localControl(bool on) override;
	virtual void noteOff(int32_t noteNumber) override;
	virtual void noteOff(int32_t noteNumber, int32_t velocity) override;
	virtual void noteOn(int32_t noteNumber, int32_t velocity) override;
	virtual void programChange(int32_t program) override;
	virtual void programChange(int32_t bank, int32_t program) override;
	virtual void resetAllControllers() override;
	void setChannel(::javax::sound::midi::MidiChannel* channel);
	virtual void setChannelPressure(int32_t pressure) override;
	virtual void setMono(bool on) override;
	virtual void setMute(bool mute) override;
	virtual void setOmni(bool on) override;
	virtual void setPitchBend(int32_t bend) override;
	virtual void setPolyPressure(int32_t noteNumber, int32_t pressure) override;
	virtual void setSolo(bool soloState) override;
	::javax::sound::midi::MidiChannel* channel = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftChannelProxy_h_