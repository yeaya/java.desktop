#include <JInternalFrameIconTest.h>

#include <JInternalFrameIconTest$1.h>
#include <JInternalFrameIconTest$2.h>
#include <JInternalFrameIconTest$3.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $JInternalFrameIconTest$1 = ::JInternalFrameIconTest$1;
using $JInternalFrameIconTest$2 = ::JInternalFrameIconTest$2;
using $JInternalFrameIconTest$3 = ::JInternalFrameIconTest$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ImageIO = ::javax::imageio::ImageIO;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _JInternalFrameIconTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, frame)},
	{"desktopPane", "Ljavax/swing/JDesktopPane;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, desktopPane)},
	{"internalFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, internalFrame)},
	{"titleImageIcon", "Ljavax/swing/ImageIcon;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, titleImageIcon)},
	{"titleIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, titleIcon)},
	{"imageIconImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, imageIconImage)},
	{"iconImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, iconImage)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(JInternalFrameIconTest, robot)},
	{"errorString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JInternalFrameIconTest, errorString)},
	{}
};

$MethodInfo _JInternalFrameIconTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrameIconTest::*)()>(&JInternalFrameIconTest::init$))},
	{"bufferedImagesEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&JInternalFrameIconTest::bufferedImagesEqual))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JInternalFrameIconTest::cleanUp)), "java.lang.Exception"},
	{"createIconUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JInternalFrameIconTest::createIconUI)), "java.lang.Exception"},
	{"createImageIconUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JInternalFrameIconTest::createImageIconUI)), "java.lang.Exception"},
	{"executeCase", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JInternalFrameIconTest::executeCase)), "java.lang.Exception"},
	{"getIconBufferedImage", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JInternalFrameIconTest::getIconBufferedImage)), "java.lang.Exception"},
	{"getImageIconBufferedImage", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JInternalFrameIconTest::getImageIconBufferedImage)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JInternalFrameIconTest::main)), "java.lang.Exception"},
	{"testIfSame", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JInternalFrameIconTest::testIfSame)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&JInternalFrameIconTest::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JInternalFrameIconTest_InnerClassesInfo_[] = {
	{"JInternalFrameIconTest$3", nullptr, nullptr, 0},
	{"JInternalFrameIconTest$2", nullptr, nullptr, 0},
	{"JInternalFrameIconTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JInternalFrameIconTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JInternalFrameIconTest",
	"java.lang.Object",
	nullptr,
	_JInternalFrameIconTest_FieldInfo_,
	_JInternalFrameIconTest_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrameIconTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JInternalFrameIconTest$3,JInternalFrameIconTest$2,JInternalFrameIconTest$2$1,JInternalFrameIconTest$1,JInternalFrameIconTest$1$1"
};

$Object* allocate$JInternalFrameIconTest($Class* clazz) {
	return $of($alloc(JInternalFrameIconTest));
}

$JFrame* JInternalFrameIconTest::frame = nullptr;
$JDesktopPane* JInternalFrameIconTest::desktopPane = nullptr;
$JInternalFrame* JInternalFrameIconTest::internalFrame = nullptr;
$ImageIcon* JInternalFrameIconTest::titleImageIcon = nullptr;
$Icon* JInternalFrameIconTest::titleIcon = nullptr;
$BufferedImage* JInternalFrameIconTest::imageIconImage = nullptr;
$BufferedImage* JInternalFrameIconTest::iconImage = nullptr;
$Robot* JInternalFrameIconTest::robot = nullptr;
$volatile($String*) JInternalFrameIconTest::errorString = nullptr;

void JInternalFrameIconTest::init$() {
}

void JInternalFrameIconTest::main($StringArray* args) {
	$init(JInternalFrameIconTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(JInternalFrameIconTest::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				executeCase($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
	if (!""_s->equals(JInternalFrameIconTest::errorString)) {
		$throwNew($RuntimeException, $$str({"Error Log:\n"_s, JInternalFrameIconTest::errorString}));
	}
}

void JInternalFrameIconTest::executeCase($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	if (tryLookAndFeel(lookAndFeelString)) {
		createImageIconUI(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		getImageIconBufferedImage();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		cleanUp();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		createIconUI(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		getIconBufferedImage();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		cleanUp();
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
		testIfSame(lookAndFeelString);
		$nc(JInternalFrameIconTest::robot)->waitForIdle();
		$nc(JInternalFrameIconTest::robot)->delay(1000);
	}
}

void JInternalFrameIconTest::createImageIconUI($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$1, lookAndFeelString));
}

void JInternalFrameIconTest::createIconUI($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$2, lookAndFeelString));
}

void JInternalFrameIconTest::getImageIconBufferedImage() {
	$init(JInternalFrameIconTest);
	$useLocalCurrentObjectStackCache();
	$var($Point, point, $nc(JInternalFrameIconTest::internalFrame)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(JInternalFrameIconTest::internalFrame)->getBounds());
	int32_t var$0 = $nc(point)->x + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->left;
	int32_t var$1 = point->y + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->top;
	int32_t var$2 = $nc(JInternalFrameIconTest::titleImageIcon)->getIconWidth();
	$var($Rectangle, captureRect, $new($Rectangle, var$0, var$1, var$2, $nc(JInternalFrameIconTest::titleImageIcon)->getIconHeight()));
	$nc($System::out)->println($$str({"imageicon captureRect "_s, captureRect}));
	$assignStatic(JInternalFrameIconTest::imageIconImage, $nc(JInternalFrameIconTest::robot)->createScreenCapture(captureRect));
}

void JInternalFrameIconTest::getIconBufferedImage() {
	$init(JInternalFrameIconTest);
	$useLocalCurrentObjectStackCache();
	$var($Point, point, $nc(JInternalFrameIconTest::internalFrame)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(JInternalFrameIconTest::internalFrame)->getBounds());
	int32_t var$0 = $nc(point)->x + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->left;
	int32_t var$1 = point->y + $nc($($nc(JInternalFrameIconTest::internalFrame)->getInsets()))->top;
	int32_t var$2 = $nc(JInternalFrameIconTest::titleIcon)->getIconWidth();
	$var($Rectangle, captureRect, $new($Rectangle, var$0, var$1, var$2, $nc(JInternalFrameIconTest::titleIcon)->getIconHeight()));
	$nc($System::out)->println($$str({"icon captureRect "_s, captureRect}));
	$assignStatic(JInternalFrameIconTest::iconImage, $nc(JInternalFrameIconTest::robot)->createScreenCapture(captureRect));
}

void JInternalFrameIconTest::testIfSame($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	$useLocalCurrentObjectStackCache();
	if (!bufferedImagesEqual(JInternalFrameIconTest::imageIconImage, JInternalFrameIconTest::iconImage)) {
		$ImageIO::write(static_cast<$RenderedImage*>(JInternalFrameIconTest::imageIconImage), "png"_s, $$new($File, "imageicon-fail.png"_s));
		$ImageIO::write(static_cast<$RenderedImage*>(JInternalFrameIconTest::iconImage), "png"_s, $$new($File, "iconImage-fail.png"_s));
		$var($String, error, $str({"["_s, lookAndFeelString, "] : ERROR: icon and imageIcon not same."_s}));
		$plusAssignStatic(JInternalFrameIconTest::errorString, error);
		$nc($System::err)->println(error);
	} else {
		$nc($System::out)->println($$str({"["_s, lookAndFeelString, "] : SUCCESS: icon and imageIcon same."_s}));
	}
}

bool JInternalFrameIconTest::bufferedImagesEqual($BufferedImage* bufferedImage1, $BufferedImage* bufferedImage2) {
	$init(JInternalFrameIconTest);
	bool flag = true;
	int32_t var$1 = $nc(bufferedImage1)->getWidth();
	bool var$0 = var$1 == $nc(bufferedImage2)->getWidth();
	if (var$0) {
		int32_t var$2 = bufferedImage1->getHeight();
		var$0 = var$2 == bufferedImage2->getHeight();
	}
	if (var$0) {
		int32_t colorTolerance = 25;
		double var$3 = 0.1 * bufferedImage1->getWidth();
		int32_t mismatchTolerance = $cast(int32_t, (var$3 * bufferedImage1->getHeight()));
		int32_t mismatchCounter = 0;
		for (int32_t x = 0; x < bufferedImage1->getWidth(); ++x) {
			for (int32_t y = 0; y < bufferedImage1->getHeight(); ++y) {
				int32_t color1 = bufferedImage1->getRGB(x, y);
				int32_t red1 = (int32_t)((color1 >> 16) & (uint32_t)255);
				int32_t green1 = (int32_t)((color1 >> 8) & (uint32_t)255);
				int32_t blue1 = (int32_t)((color1) & (uint32_t)255);
				int32_t color2 = bufferedImage2->getRGB(x, y);
				int32_t red2 = (int32_t)((color2 >> 16) & (uint32_t)255);
				int32_t green2 = (int32_t)((color2 >> 8) & (uint32_t)255);
				int32_t blue2 = (int32_t)((color2) & (uint32_t)255);
				if (red1 != red2 || green1 != green2 || blue1 != blue2) {
					++mismatchCounter;
					bool var$5 = ($Math::abs(red1 - red2) > colorTolerance);
					bool var$4 = var$5 || ($Math::abs(green1 - green2) > colorTolerance);
					if (var$4 || ($Math::abs(blue1 - blue2) > colorTolerance)) {
						flag = false;
					}
				}
			}
		}
		if (mismatchCounter > mismatchTolerance) {
			flag = false;
		}
	} else {
		$nc($System::err)->println("ERROR: size is different"_s);
		flag = false;
	}
	return flag;
}

void JInternalFrameIconTest::cleanUp() {
	$init(JInternalFrameIconTest);
	$SwingUtilities::invokeAndWait($$new($JInternalFrameIconTest$3));
}

bool JInternalFrameIconTest::tryLookAndFeel($String* lookAndFeelString) {
	$init(JInternalFrameIconTest);
	bool var$0 = $nc(lookAndFeelString)->contains("motif"_s);
	if (var$0 || $nc(lookAndFeelString)->contains("gtk"_s)) {
		return false;
	}
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

void clinit$JInternalFrameIconTest($Class* class$) {
	$assignStatic(JInternalFrameIconTest::errorString, ""_s);
}

JInternalFrameIconTest::JInternalFrameIconTest() {
}

$Class* JInternalFrameIconTest::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameIconTest, name, initialize, &_JInternalFrameIconTest_ClassInfo_, clinit$JInternalFrameIconTest, allocate$JInternalFrameIconTest);
	return class$;
}

$Class* JInternalFrameIconTest::class$ = nullptr;