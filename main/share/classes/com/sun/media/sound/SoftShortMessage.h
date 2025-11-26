#ifndef _com_sun_media_sound_SoftShortMessage_h_
#define _com_sun_media_sound_SoftShortMessage_h_
//$ class com.sun.media.sound.SoftShortMessage
//$ extends javax.sound.midi.ShortMessage

#include <javax/sound/midi/ShortMessage.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftShortMessage : public ::javax::sound::midi::ShortMessage {
	$class(SoftShortMessage, $NO_CLASS_INIT, ::javax::sound::midi::ShortMessage)
public:
	SoftShortMessage();
	void init$();
	virtual $Object* clone() override;
	virtual int32_t getChannel() override;
	using ::javax::sound::midi::ShortMessage::setMessage;
	virtual void setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) override;
	int32_t channel = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftShortMessage_h_