#ifndef _com_sun_media_sound_FastShortMessage_h_
#define _com_sun_media_sound_FastShortMessage_h_
//$ class com.sun.media.sound.FastShortMessage
//$ extends javax.sound.midi.ShortMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/ShortMessage.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class FastShortMessage : public ::javax::sound::midi::ShortMessage {
	$class(FastShortMessage, $NO_CLASS_INIT, ::javax::sound::midi::ShortMessage)
public:
	FastShortMessage();
	void init$(int32_t packedMsg);
	void init$(::javax::sound::midi::ShortMessage* msg);
	virtual $Object* clone() override;
	virtual int32_t getChannel() override;
	virtual int32_t getCommand() override;
	virtual int32_t getData1() override;
	virtual int32_t getData2() override;
	virtual int32_t getLength() override;
	virtual $bytes* getMessage() override;
	int32_t getPackedMsg();
	virtual int32_t getStatus() override;
	using ::javax::sound::midi::ShortMessage::setMessage;
	virtual void setMessage(int32_t status) override;
	virtual void setMessage(int32_t status, int32_t data1, int32_t data2) override;
	virtual void setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) override;
	int32_t packedMsg = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_FastShortMessage_h_