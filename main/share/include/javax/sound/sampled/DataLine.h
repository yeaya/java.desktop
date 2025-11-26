#ifndef _javax_sound_sampled_DataLine_h_
#define _javax_sound_sampled_DataLine_h_
//$ interface javax.sound.sampled.DataLine
//$ extends javax.sound.sampled.Line

#include <javax/sound/sampled/Line.h>

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

class $import DataLine : public ::javax::sound::sampled::Line {
	$interface(DataLine, $NO_CLASS_INIT, ::javax::sound::sampled::Line)
public:
	virtual int32_t available() {return 0;}
	virtual void drain() {}
	virtual void flush() {}
	virtual int32_t getBufferSize() {return 0;}
	virtual ::javax::sound::sampled::AudioFormat* getFormat() {return nullptr;}
	virtual int32_t getFramePosition() {return 0;}
	virtual float getLevel() {return 0.0;}
	virtual int64_t getLongFramePosition() {return 0;}
	virtual int64_t getMicrosecondPosition() {return 0;}
	virtual bool isActive() {return false;}
	virtual bool isRunning() {return false;}
	virtual void start() {}
	virtual void stop() {}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_DataLine_h_