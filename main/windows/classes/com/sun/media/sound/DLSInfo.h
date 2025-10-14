#ifndef _com_sun_media_sound_DLSInfo_h_
#define _com_sun_media_sound_DLSInfo_h_
//$ class com.sun.media.sound.DLSInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSInfo : public ::java::lang::Object {
	$class(DLSInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSInfo();
	void init$();
	$String* name = nullptr;
	$String* creationDate = nullptr;
	$String* engineers = nullptr;
	$String* product = nullptr;
	$String* copyright = nullptr;
	$String* comments = nullptr;
	$String* tools = nullptr;
	$String* archival_location = nullptr;
	$String* artist = nullptr;
	$String* commissioned = nullptr;
	$String* genre = nullptr;
	$String* keywords = nullptr;
	$String* medium = nullptr;
	$String* subject = nullptr;
	$String* source = nullptr;
	$String* source_form = nullptr;
	$String* technician = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSInfo_h_