#ifndef _com_sun_media_sound_DLSSampleLoop_h_
#define _com_sun_media_sound_DLSSampleLoop_h_
//$ class com.sun.media.sound.DLSSampleLoop
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOOP_TYPE_FORWARD")
#undef LOOP_TYPE_FORWARD
#pragma push_macro("LOOP_TYPE_RELEASE")
#undef LOOP_TYPE_RELEASE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSSampleLoop : public ::java::lang::Object {
	$class(DLSSampleLoop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSSampleLoop();
	void init$();
	int64_t getLength();
	int64_t getStart();
	int64_t getType();
	void setLength(int64_t length);
	void setStart(int64_t start);
	void setType(int64_t type);
	static const int32_t LOOP_TYPE_FORWARD = 0;
	static const int32_t LOOP_TYPE_RELEASE = 1;
	int64_t type = 0;
	int64_t start = 0;
	int64_t length = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("LOOP_TYPE_FORWARD")
#pragma pop_macro("LOOP_TYPE_RELEASE")

#endif // _com_sun_media_sound_DLSSampleLoop_h_