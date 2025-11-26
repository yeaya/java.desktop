#ifndef _com_sun_media_sound_AudioSynthesizerPropertyInfo_h_
#define _com_sun_media_sound_AudioSynthesizerPropertyInfo_h_
//$ class com.sun.media.sound.AudioSynthesizerPropertyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class AudioSynthesizerPropertyInfo : public ::java::lang::Object {
	$class(AudioSynthesizerPropertyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AudioSynthesizerPropertyInfo();
	void init$($String* name, Object$* value);
	$String* name = nullptr;
	$String* description = nullptr;
	$Object* value = nullptr;
	$Class* valueClass = nullptr;
	$ObjectArray* choices = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_AudioSynthesizerPropertyInfo_h_