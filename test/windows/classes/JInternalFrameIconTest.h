#ifndef _JInternalFrameIconTest_h_
#define _JInternalFrameIconTest_h_
//$ class JInternalFrameIconTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
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
		class Icon;
		class ImageIcon;
		class JDesktopPane;
		class JFrame;
		class JInternalFrame;
	}
}

class $export JInternalFrameIconTest : public ::java::lang::Object {
	$class(JInternalFrameIconTest, 0, ::java::lang::Object)
public:
	JInternalFrameIconTest();
	void init$();
	static bool bufferedImagesEqual(::java::awt::image::BufferedImage* bufferedImage1, ::java::awt::image::BufferedImage* bufferedImage2);
	static void cleanUp();
	static void createIconUI($String* lookAndFeelString);
	static void createImageIconUI($String* lookAndFeelString);
	static void executeCase($String* lookAndFeelString);
	static void getIconBufferedImage();
	static void getImageIconBufferedImage();
	static void main($StringArray* args);
	static void testIfSame($String* lookAndFeelString);
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JDesktopPane* desktopPane;
	static ::javax::swing::JInternalFrame* internalFrame;
	static ::javax::swing::ImageIcon* titleImageIcon;
	static ::javax::swing::Icon* titleIcon;
	static ::java::awt::image::BufferedImage* imageIconImage;
	static ::java::awt::image::BufferedImage* iconImage;
	static ::java::awt::Robot* robot;
	static $volatile($String*) errorString;
};

#endif // _JInternalFrameIconTest_h_