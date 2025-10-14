#ifndef _javax_sound_sampled_LineUnavailableException_h_
#define _javax_sound_sampled_LineUnavailableException_h_
//$ class javax.sound.sampled.LineUnavailableException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $import LineUnavailableException : public ::java::lang::Exception {
	$class(LineUnavailableException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	LineUnavailableException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xE39898919BDA5A3E;
	LineUnavailableException(const LineUnavailableException& e);
	LineUnavailableException wrapper$();
	virtual void throwWrapper$() override;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_LineUnavailableException_h_