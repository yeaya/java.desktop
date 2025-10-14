#ifndef _javax_sound_sampled_SourceDataLine_h_
#define _javax_sound_sampled_SourceDataLine_h_
//$ interface javax.sound.sampled.SourceDataLine
//$ extends javax.sound.sampled.DataLine

#include <java/lang/Array.h>
#include <javax/sound/sampled/DataLine.h>

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export SourceDataLine : public ::javax::sound::sampled::DataLine {
	$interface(SourceDataLine, $NO_CLASS_INIT, ::javax::sound::sampled::DataLine)
public:
	using ::javax::sound::sampled::DataLine::open;
	virtual void open(::javax::sound::sampled::AudioFormat* format, int32_t bufferSize) {}
	virtual void open(::javax::sound::sampled::AudioFormat* format) {}
	virtual int32_t write($bytes* b, int32_t off, int32_t len) {return 0;}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_SourceDataLine_h_