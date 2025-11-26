#ifndef _com_sun_media_sound_PortMixer$FloatCtrl_h_
#define _com_sun_media_sound_PortMixer$FloatCtrl_h_
//$ class com.sun.media.sound.PortMixer$FloatCtrl
//$ extends javax.sound.sampled.FloatControl

#include <java/lang/Array.h>
#include <javax/sound/sampled/FloatControl.h>

#pragma push_macro("FLOAT_CONTROL_TYPES")
#undef FLOAT_CONTROL_TYPES

namespace javax {
	namespace sound {
		namespace sampled {
			class FloatControl$Type;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class PortMixer$FloatCtrl : public ::javax::sound::sampled::FloatControl {
	$class(PortMixer$FloatCtrl, 0, ::javax::sound::sampled::FloatControl)
public:
	PortMixer$FloatCtrl();
	void init$(int64_t controlID, $String* name, float min, float max, float precision, $String* units);
	void init$(int64_t controlID, int32_t type, float min, float max, float precision, $String* units);
	void init$(int64_t controlID, ::javax::sound::sampled::FloatControl$Type* typ, float min, float max, float precision, $String* units);
	virtual float getValue() override;
	virtual void setValue(float value) override;
	int64_t controlID = 0;
	bool closed = false;
	static $Array<::javax::sound::sampled::FloatControl$Type>* FLOAT_CONTROL_TYPES;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("FLOAT_CONTROL_TYPES")

#endif // _com_sun_media_sound_PortMixer$FloatCtrl_h_