#ifndef _com_sun_media_sound_ModelAbstractChannelMixer_h_
#define _com_sun_media_sound_ModelAbstractChannelMixer_h_
//$ class com.sun.media.sound.ModelAbstractChannelMixer
//$ extends com.sun.media.sound.ModelChannelMixer

#include <com/sun/media/sound/ModelChannelMixer.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelAbstractChannelMixer : public ::com::sun::media::sound::ModelChannelMixer {
	$class(ModelAbstractChannelMixer, $NO_CLASS_INIT, ::com::sun::media::sound::ModelChannelMixer)
public:
	ModelAbstractChannelMixer();
	void init$();
	virtual void allNotesOff() override;
	virtual void allSoundOff() override;
	virtual void controlChange(int32_t controller, int32_t value) override;
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
	virtual bool process($Array<float, 2>* buffer, int32_t offset, int32_t len) override {return false;}
	virtual void programChange(int32_t program) override;
	virtual void programChange(int32_t bank, int32_t program) override;
	virtual void resetAllControllers() override;
	virtual void setChannelPressure(int32_t pressure) override;
	virtual void setMono(bool on) override;
	virtual void setMute(bool mute) override;
	virtual void setOmni(bool on) override;
	virtual void setPitchBend(int32_t bend) override;
	virtual void setPolyPressure(int32_t noteNumber, int32_t pressure) override;
	virtual void setSolo(bool soloState) override;
	virtual void stop() override {}
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelAbstractChannelMixer_h_