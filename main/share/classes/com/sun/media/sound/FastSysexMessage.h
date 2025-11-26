#ifndef _com_sun_media_sound_FastSysexMessage_h_
#define _com_sun_media_sound_FastSysexMessage_h_
//$ class com.sun.media.sound.FastSysexMessage
//$ extends javax.sound.midi.SysexMessage

#include <java/lang/Array.h>
#include <javax/sound/midi/SysexMessage.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class FastSysexMessage : public ::javax::sound::midi::SysexMessage {
	$class(FastSysexMessage, $NO_CLASS_INIT, ::javax::sound::midi::SysexMessage)
public:
	FastSysexMessage();
	void init$($bytes* data);
	$bytes* getReadOnlyMessage();
	using ::javax::sound::midi::SysexMessage::setMessage;
	virtual void setMessage($bytes* data, int32_t length) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_FastSysexMessage_h_