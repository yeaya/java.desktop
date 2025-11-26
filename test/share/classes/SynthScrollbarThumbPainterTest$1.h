#ifndef _SynthScrollbarThumbPainterTest$1_h_
#define _SynthScrollbarThumbPainterTest$1_h_
//$ class SynthScrollbarThumbPainterTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class SynthScrollbarThumbPainterTest$1 : public ::java::lang::Runnable {
	$class(SynthScrollbarThumbPainterTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SynthScrollbarThumbPainterTest$1();
	void init$($String* val$lookAndFeelString);
	virtual void run() override;
	$String* val$lookAndFeelString = nullptr;
};

#endif // _SynthScrollbarThumbPainterTest$1_h_