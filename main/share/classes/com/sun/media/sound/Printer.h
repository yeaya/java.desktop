#ifndef _com_sun_media_sound_Printer_h_
#define _com_sun_media_sound_Printer_h_
//$ class com.sun.media.sound.Printer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SHOW_THREADID")
#undef SHOW_THREADID
#pragma push_macro("SHOW_TIMESTAMP")
#undef SHOW_TIMESTAMP

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class Printer : public ::java::lang::Object {
	$class(Printer, 0, ::java::lang::Object)
public:
	Printer();
	void init$();
	static void err($String* str);
	static bool isBuildInternal();
	static void println($String* s);
	static bool err$;
	static const bool SHOW_THREADID = true;
	static const bool SHOW_TIMESTAMP = true;
	static int64_t startTime;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("SHOW_THREADID")
#pragma pop_macro("SHOW_TIMESTAMP")

#endif // _com_sun_media_sound_Printer_h_