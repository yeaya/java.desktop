#include <TransparencyTest.h>

#include <TransparencyTest$1.h>
#include <TransparencyTest$2.h>
#include <TransparencyTest$3.h>
#include <TransparencyTest$4.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef HEIGHT
#undef OPACITY
#undef TRANSLUCENT
#undef WIDTH

using $TransparencyTest$1 = ::TransparencyTest$1;
using $TransparencyTest$2 = ::TransparencyTest$2;
using $TransparencyTest$3 = ::TransparencyTest$3;
using $TransparencyTest$4 = ::TransparencyTest$4;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _TransparencyTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TransparencyTest, frame)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE | $STATIC, $staticField(TransparencyTest, dialog)},
	{"backgroundDialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE | $STATIC, $staticField(TransparencyTest, backgroundDialog)},
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransparencyTest, WIDTH)},
	{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransparencyTest, HEIGHT)},
	{"OPACITY", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TransparencyTest, OPACITY)},
	{"dlgPos", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TransparencyTest, dlgPos)},
	{}
};

$MethodInfo _TransparencyTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransparencyTest::*)()>(&TransparencyTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&TransparencyTest::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TransparencyTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TransparencyTest_InnerClassesInfo_[] = {
	{"TransparencyTest$4", nullptr, nullptr, 0},
	{"TransparencyTest$3", nullptr, nullptr, 0},
	{"TransparencyTest$2", nullptr, nullptr, 0},
	{"TransparencyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransparencyTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TransparencyTest",
	"java.lang.Object",
	nullptr,
	_TransparencyTest_FieldInfo_,
	_TransparencyTest_MethodInfo_,
	nullptr,
	nullptr,
	_TransparencyTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TransparencyTest$4,TransparencyTest$3,TransparencyTest$2,TransparencyTest$1"
};

$Object* allocate$TransparencyTest($Class* clazz) {
	return $of($alloc(TransparencyTest));
}

$JFrame* TransparencyTest::frame = nullptr;
$JDialog* TransparencyTest::dialog = nullptr;
$JDialog* TransparencyTest::backgroundDialog = nullptr;
float TransparencyTest::OPACITY = 0.0;
$volatile($Point*) TransparencyTest::dlgPos = nullptr;

void TransparencyTest::init$() {
}

void TransparencyTest::createAndShowGUI() {
	$init(TransparencyTest);
	$assignStatic(TransparencyTest::frame, $new($JFrame, "JFrame"_s));
	$nc(TransparencyTest::frame)->setSize(TransparencyTest::WIDTH, TransparencyTest::HEIGHT);
	$nc(TransparencyTest::frame)->setLocation(100, 300);
	$assignStatic(TransparencyTest::dialog, $new($JDialog, static_cast<$Frame*>(TransparencyTest::frame), false));
	$nc(TransparencyTest::dialog)->setSize(250, 250);
	$nc(TransparencyTest::dialog)->setUndecorated(true);
	$nc(TransparencyTest::dialog)->setLocation(400, 300);
	$assignStatic(TransparencyTest::dlgPos, $nc(TransparencyTest::dialog)->getLocation());
	$assignStatic(TransparencyTest::backgroundDialog, $new($JDialog, static_cast<$Frame*>(TransparencyTest::frame), false));
	$nc(TransparencyTest::backgroundDialog)->setSize(250, 250);
	$nc(TransparencyTest::backgroundDialog)->setUndecorated(true);
	$init($Color);
	$nc($($nc(TransparencyTest::backgroundDialog)->getContentPane()))->setBackground($Color::red);
	$nc(TransparencyTest::backgroundDialog)->setLocation($nc(TransparencyTest::dlgPos)->x, $nc(TransparencyTest::dlgPos)->y);
	$nc(TransparencyTest::frame)->setVisible(true);
	$nc(TransparencyTest::backgroundDialog)->setVisible(true);
	$nc(TransparencyTest::dialog)->setVisible(true);
}

void TransparencyTest::main($StringArray* args) {
	$init(TransparencyTest);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDevice, gd, $nc(ge)->getDefaultScreenDevice());
	$init($GraphicsDevice$WindowTranslucency);
	$GraphicsDevice$WindowTranslucency* mode = $GraphicsDevice$WindowTranslucency::TRANSLUCENT;
	bool translucencyCheck = $nc(gd)->isWindowTranslucencySupported(mode);
	if (!translucencyCheck) {
		return;
	}
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($TransparencyTest$1));
	robot->waitForIdle();
	robot->delay(200);
	int32_t x = $nc(TransparencyTest::dlgPos)->x + 100;
	int32_t y = $nc(TransparencyTest::dlgPos)->y + 100;
	$var($Color, opaque, robot->getPixelColor(x, y));
	$SwingUtilities::invokeAndWait($$new($TransparencyTest$2));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait($$new($TransparencyTest$3));
	robot->waitForIdle();
	robot->delay(500);
	$SwingUtilities::invokeAndWait($$new($TransparencyTest$4));
	robot->waitForIdle();
	robot->delay(500);
	$var($Color, transparent, robot->getPixelColor(x, y));
	if ($nc(transparent)->equals(opaque)) {
		$nc(TransparencyTest::frame)->dispose();
		$throwNew($RuntimeException, "JDialog transparency lost upon iconify/deiconify sequence"_s);
	}
	$nc(TransparencyTest::frame)->dispose();
}

TransparencyTest::TransparencyTest() {
}

void clinit$TransparencyTest($Class* class$) {
	TransparencyTest::OPACITY = 0.6f;
}

$Class* TransparencyTest::load$($String* name, bool initialize) {
	$loadClass(TransparencyTest, name, initialize, &_TransparencyTest_ClassInfo_, clinit$TransparencyTest, allocate$TransparencyTest);
	return class$;
}

$Class* TransparencyTest::class$ = nullptr;