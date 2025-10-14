#ifndef _javax_sound_sampled_Clip_h_
#define _javax_sound_sampled_Clip_h_
//$ interface javax.sound.sampled.Clip
//$ extends javax.sound.sampled.DataLine

#include <java/lang/Array.h>
#include <javax/sound/sampled/DataLine.h>

#pragma push_macro("LOOP_CONTINUOUSLY")
#undef LOOP_CONTINUOUSLY

namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
		}
	}
}

namespace javax {
	namespace sound {
		namespace sampled {

class $export Clip : public ::javax::sound::sampled::DataLine {
	$interface(Clip, $NO_CLASS_INIT, ::javax::sound::sampled::DataLine)
public:
	virtual int32_t getFrameLength() {return 0;}
	virtual int64_t getMicrosecondLength() {return 0;}
	virtual void loop(int32_t count) {}
	using ::javax::sound::sampled::DataLine::open;
	virtual void open(::javax::sound::sampled::AudioFormat* format, $bytes* data, int32_t offset, int32_t bufferSize) {}
	virtual void open(::javax::sound::sampled::AudioInputStream* stream) {}
	virtual void setFramePosition(int32_t frames) {}
	virtual void setLoopPoints(int32_t start, int32_t end) {}
	virtual void setMicrosecondPosition(int64_t microseconds) {}
	static const int32_t LOOP_CONTINUOUSLY = (-1);
};

		} // sampled
	} // sound
} // javax

#pragma pop_macro("LOOP_CONTINUOUSLY")

#endif // _javax_sound_sampled_Clip_h_