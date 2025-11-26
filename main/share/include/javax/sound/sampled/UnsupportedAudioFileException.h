#ifndef _javax_sound_sampled_UnsupportedAudioFileException_h_
#define _javax_sound_sampled_UnsupportedAudioFileException_h_
//$ class javax.sound.sampled.UnsupportedAudioFileException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $import UnsupportedAudioFileException : public ::java::lang::Exception {
	$class(UnsupportedAudioFileException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	UnsupportedAudioFileException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xFE11B85AF813CBD0;
	UnsupportedAudioFileException(const UnsupportedAudioFileException& e);
	virtual void throw$() override;
	inline UnsupportedAudioFileException* operator ->() {
		return (UnsupportedAudioFileException*)throwing$;
	}
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_UnsupportedAudioFileException_h_