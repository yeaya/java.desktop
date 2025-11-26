#ifndef _com_sun_media_sound_DataPusher_h_
#define _com_sun_media_sound_DataPusher_h_
//$ class com.sun.media.sound.DataPusher
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("AUTO_CLOSE_TIME")
#undef AUTO_CLOSE_TIME
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("STATE_NONE")
#undef STATE_NONE
#pragma push_macro("STATE_PLAYING")
#undef STATE_PLAYING
#pragma push_macro("STATE_STOPPED")
#undef STATE_STOPPED
#pragma push_macro("STATE_STOPPING")
#undef STATE_STOPPING
#pragma push_macro("STATE_WAITING")
#undef STATE_WAITING

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
			class AudioInputStream;
			class SourceDataLine;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DataPusher : public ::java::lang::Runnable {
	$class(DataPusher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DataPusher();
	void init$(::javax::sound::sampled::SourceDataLine* sourceLine, ::javax::sound::sampled::AudioFormat* format, $bytes* audioData, int32_t byteLength);
	void init$(::javax::sound::sampled::SourceDataLine* sourceLine, ::javax::sound::sampled::AudioInputStream* ais);
	void init$(::javax::sound::sampled::SourceDataLine* source, ::javax::sound::sampled::AudioFormat* format, ::javax::sound::sampled::AudioInputStream* ais, $bytes* audioData, int32_t audioDataByteLength);
	void close();
	virtual void run() override;
	void start();
	void start(bool loop);
	void stop();
	static const int32_t AUTO_CLOSE_TIME = 5000;
	::javax::sound::sampled::SourceDataLine* source = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
	::javax::sound::sampled::AudioInputStream* ais = nullptr;
	$bytes* audioData = nullptr;
	int32_t audioDataByteLength = 0;
	int32_t pos = 0;
	int32_t newPos = 0;
	bool looping = false;
	$Thread* pushThread = nullptr;
	int32_t wantedState = 0;
	int32_t threadState = 0;
	static const int32_t STATE_NONE = 0;
	static const int32_t STATE_PLAYING = 1;
	static const int32_t STATE_WAITING = 2;
	static const int32_t STATE_STOPPING = 3;
	static const int32_t STATE_STOPPED = 4;
	static const int32_t BUFFER_SIZE = 16384;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("AUTO_CLOSE_TIME")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("STATE_NONE")
#pragma pop_macro("STATE_PLAYING")
#pragma pop_macro("STATE_STOPPED")
#pragma pop_macro("STATE_STOPPING")
#pragma pop_macro("STATE_WAITING")

#endif // _com_sun_media_sound_DataPusher_h_