#ifndef _com_sun_media_sound_SMFParser_h_
#define _com_sun_media_sound_SMFParser_h_
//$ class com.sun.media.sound.SMFParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("STRICT_PARSER")
#undef STRICT_PARSER

namespace java {
	namespace io {
		class DataInputStream;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Track;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SMFParser : public ::java::lang::Object {
	$class(SMFParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SMFParser();
	void init$();
	bool nextTrack();
	void read($bytes* data);
	int32_t readIntFromStream();
	void readTrack(::javax::sound::midi::Track* track);
	int32_t readUnsigned();
	int64_t readVarInt();
	bool trackFinished();
	static const int32_t MTrk_MAGIC = 0x4D54726B;
	static const bool STRICT_PARSER = false;
	static const bool DEBUG = false;
	int32_t tracks = 0;
	::java::io::DataInputStream* stream = nullptr;
	int32_t trackLength = 0;
	$bytes* trackData = nullptr;
	int32_t pos = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("STRICT_PARSER")

#endif // _com_sun_media_sound_SMFParser_h_