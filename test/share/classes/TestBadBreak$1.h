#ifndef _TestBadBreak$1_h_
#define _TestBadBreak$1_h_
//$ class TestBadBreak$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

class TestBadBreak$1 : public ::java::lang::Runnable {
	$class(TestBadBreak$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TestBadBreak$1();
	void init$($String* val$text, ::java::awt::image::BufferedImage* val$i1);
	virtual void run() override;
	::java::awt::image::BufferedImage* val$i1 = nullptr;
	$String* val$text = nullptr;
};

#endif // _TestBadBreak$1_h_