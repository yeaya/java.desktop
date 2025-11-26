#ifndef _com_sun_media_sound_RealTimeSequencer$PlayThread_h_
#define _com_sun_media_sound_RealTimeSequencer$PlayThread_h_
//$ class com.sun.media.sound.RealTimeSequencer$PlayThread
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RealTimeSequencer;
				class RealTimeSequencer$DataPump;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Sequence;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class RealTimeSequencer$PlayThread : public ::java::lang::Runnable {
	$class(RealTimeSequencer$PlayThread, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RealTimeSequencer$PlayThread();
	void init$(::com::sun::media::sound::RealTimeSequencer* this$0);
	void close();
	::com::sun::media::sound::RealTimeSequencer$DataPump* getDataPump();
	void playThreadImplStop();
	virtual void run() override;
	void setSequence(::javax::sound::midi::Sequence* seq);
	void start();
	void stop();
	::com::sun::media::sound::RealTimeSequencer* this$0 = nullptr;
	$Thread* thread = nullptr;
	$Object* lock = nullptr;
	bool interrupted = false;
	bool isPumping = false;
	::com::sun::media::sound::RealTimeSequencer$DataPump* dataPump = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_RealTimeSequencer$PlayThread_h_