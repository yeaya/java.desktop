#ifndef _bug8016833$2_h_
#define _bug8016833$2_h_
//$ class bug8016833$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug8016833;
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

class bug8016833$2 : public ::java::lang::Runnable {
	$class(bug8016833$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug8016833$2();
	void init$(::bug8016833* this$0, ::java::awt::image::BufferedImage* val$img);
	virtual void run() override;
	::bug8016833* this$0 = nullptr;
	::java::awt::image::BufferedImage* val$img = nullptr;
};

#endif // _bug8016833$2_h_