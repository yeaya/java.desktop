#ifndef _bug8032667$1$1_h_
#define _bug8032667$1$1_h_
//$ class bug8032667$1$1
//$ extends java.awt.Canvas

#include <java/awt/Canvas.h>

class bug8032667$1;
namespace java {
	namespace awt {
		class Graphics;
		class Image;
	}
}

class bug8032667$1$1 : public ::java::awt::Canvas {
	$class(bug8032667$1$1, $NO_CLASS_INIT, ::java::awt::Canvas)
public:
	bug8032667$1$1();
	void init$(::bug8032667$1* this$1, ::java::awt::Image* val$image1, ::java::awt::Image* val$image2);
	virtual void paint(::java::awt::Graphics* g) override;
	::bug8032667$1* this$1 = nullptr;
	::java::awt::Image* val$image2 = nullptr;
	::java::awt::Image* val$image1 = nullptr;
};

#endif // _bug8032667$1$1_h_