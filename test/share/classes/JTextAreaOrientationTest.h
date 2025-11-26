#ifndef _JTextAreaOrientationTest_h_
#define _JTextAreaOrientationTest_h_
//$ class JTextAreaOrientationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class ComponentOrientation;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export JTextAreaOrientationTest : public ::java::lang::Object {
	$class(JTextAreaOrientationTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTextAreaOrientationTest();
	void init$();
	static bool compareBufferedImages(::java::awt::image::BufferedImage* bufferedImage0, ::java::awt::image::BufferedImage* bufferedImage1);
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$test$1(::java::awt::ComponentOrientation* orientation);
	static void lambda$test$2();
	static void lambda$test$3();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static ::java::awt::image::BufferedImage* test(::java::awt::ComponentOrientation* orientation);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Rectangle* bounds;
};

#endif // _JTextAreaOrientationTest_h_