#ifndef _com_sun_media_sound_PortMixer$BoolCtrl_h_
#define _com_sun_media_sound_PortMixer$BoolCtrl_h_
//$ class com.sun.media.sound.PortMixer$BoolCtrl
//$ extends javax.sound.sampled.BooleanControl

#include <javax/sound/sampled/BooleanControl.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class BooleanControl$Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer$BoolCtrl : public ::javax::sound::sampled::BooleanControl {
	$class(PortMixer$BoolCtrl, $NO_CLASS_INIT, ::javax::sound::sampled::BooleanControl)
public:
	PortMixer$BoolCtrl();
	void init$(int64_t controlID, $String* name);
	void init$(int64_t controlID, ::javax::sound::sampled::BooleanControl$Type* typ);
	static ::javax::sound::sampled::BooleanControl$Type* createType($String* name);
	virtual bool getValue() override;
	virtual void setValue(bool value) override;
	int64_t controlID = 0;
	bool closed = false;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_PortMixer$BoolCtrl_h_