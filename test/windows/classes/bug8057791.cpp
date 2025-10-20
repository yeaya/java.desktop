#include <bug8057791.h>

#include <bug8057791$1.h>
#include <bug8057791$2.h>
#include <bug8057791$3.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef SELECTED_INDEX
#undef TYPE_INT_ARGB

using $bug8057791$1 = ::bug8057791$1;
using $bug8057791$2 = ::bug8057791$2;
using $bug8057791$3 = ::bug8057791$3;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _bug8057791_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8057791, frame)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(bug8057791, list)},
	{"model", "Ljavax/swing/DefaultListModel;", "Ljavax/swing/DefaultListModel<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(bug8057791, model)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8057791, robot)},
	{"SELECTED_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8057791, SELECTED_INDEX)},
	{"errorString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8057791, errorString)},
	{}
};

$MethodInfo _bug8057791_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8057791::*)()>(&bug8057791::init$))},
	{"checkColor", "(Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Color*,$Rectangle*)>(&bug8057791::checkColor))},
	{"checkNotColor", "(Ljava/awt/Color;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Color*,$Rectangle*)>(&bug8057791::checkNotColor))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8057791::cleanUp)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8057791::createUI)), "java.lang.Exception"},
	{"findColor", "(Ljava/awt/Color;Ljava/awt/Rectangle;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Color*,$Rectangle*)>(&bug8057791::findColor))},
	{"isMac", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&bug8057791::isMac))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8057791::main)), "java.lang.Exception"},
	{"runColorTestCase", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8057791::runColorTestCase)), "java.lang.Exception"},
	{"runSteps", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8057791::runSteps)), "java.lang.Exception"},
	{"tryNimbusLookAndFeel", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&bug8057791::tryNimbusLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8057791_InnerClassesInfo_[] = {
	{"bug8057791$3", nullptr, nullptr, 0},
	{"bug8057791$2", nullptr, nullptr, 0},
	{"bug8057791$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057791_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8057791",
	"java.lang.Object",
	nullptr,
	_bug8057791_FieldInfo_,
	_bug8057791_MethodInfo_,
	nullptr,
	nullptr,
	_bug8057791_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8057791$3,bug8057791$2,bug8057791$1"
};

$Object* allocate$bug8057791($Class* clazz) {
	return $of($alloc(bug8057791));
}

$JFrame* bug8057791::frame = nullptr;
$JList* bug8057791::list = nullptr;
$DefaultListModel* bug8057791::model = nullptr;
$Robot* bug8057791::robot = nullptr;
$volatile($String*) bug8057791::errorString = nullptr;

void bug8057791::init$() {
}

void bug8057791::main($StringArray* args) {
	$init(bug8057791);
	$assignStatic(bug8057791::robot, $new($Robot));
	$nc(bug8057791::robot)->waitForIdle();
	runSteps();
	if (!$nc(bug8057791::errorString)->isEmpty()) {
		$throwNew($RuntimeException, $$str({"Error Log:\n"_s, bug8057791::errorString}));
	}
}

void bug8057791::runSteps() {
	$init(bug8057791);
	if (tryNimbusLookAndFeel()) {
		createUI();
		$nc(bug8057791::robot)->waitForIdle();
		runColorTestCase();
		$nc(bug8057791::robot)->waitForIdle();
		cleanUp();
	}
}

bool bug8057791::tryNimbusLookAndFeel() {
	$init(bug8057791);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		$plusAssignStatic(bug8057791::errorString, $(e->getMessage()));
		return false;
	}
	return true;
}

void bug8057791::createUI() {
	$init(bug8057791);
	$SwingUtilities::invokeAndWait($$new($bug8057791$1));
}

void bug8057791::runColorTestCase() {
	$init(bug8057791);
	$SwingUtilities::invokeAndWait($$new($bug8057791$2));
}

void bug8057791::checkColor($Color* colorCheck, $Rectangle* bounds) {
	$init(bug8057791);
	$useLocalCurrentObjectStackCache();
	if (!findColor(colorCheck, bounds)) {
		$var($String, error, $str({"[ERROR]["_s, $($nc(colorCheck)->toString()), "] Not found in selected cell"_s}));
		$plusAssignStatic(bug8057791::errorString, error);
	}
}

void bug8057791::checkNotColor($Color* colorCheck, $Rectangle* bounds) {
	$init(bug8057791);
	$useLocalCurrentObjectStackCache();
	if (findColor(colorCheck, bounds)) {
		$var($String, error, $str({"[ERROR]["_s, $($nc(colorCheck)->toString()), "] is found in selected cell. Not supposed to be found in negative test case"_s}));
		$plusAssignStatic(bug8057791::errorString, error);
	}
}

bool bug8057791::findColor($Color* colorCheck, $Rectangle* bounds) {
	$init(bug8057791);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, img, $new($BufferedImage, $nc(bounds)->width, bounds->height, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, img->getGraphics());
	$nc(bug8057791::list)->paint(g);
	$nc(g)->dispose();
	for (int32_t x = 0; x < $nc(bounds)->width; ++x) {
		for (int32_t y = 0; y < bounds->height; ++y) {
			$var($Point, relativePointCheck, $new($Point, bounds->x + x, bounds->y + y));
			$nc(bug8057791::robot)->mouseMove(relativePointCheck->x, relativePointCheck->y);
			$var($Color, detectedColor, $nc(bug8057791::robot)->getPixelColor(relativePointCheck->x, relativePointCheck->y));
			if ($nc(detectedColor)->equals(colorCheck)) {
				return true;
			}
			if (isMac()) {
				$assign(detectedColor, $new($Color, img->getRGB(x, y), true));
				if (detectedColor->equals(colorCheck)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool bug8057791::isMac() {
	$init(bug8057791);
	$var($String, osName, $System::getProperty("os.name"_s));
	return $nc(osName)->contains("Mac"_s);
}

void bug8057791::cleanUp() {
	$init(bug8057791);
	$SwingUtilities::invokeAndWait($$new($bug8057791$3));
}

void clinit$bug8057791($Class* class$) {
	$assignStatic(bug8057791::errorString, ""_s);
}

bug8057791::bug8057791() {
}

$Class* bug8057791::load$($String* name, bool initialize) {
	$loadClass(bug8057791, name, initialize, &_bug8057791_ClassInfo_, clinit$bug8057791, allocate$bug8057791);
	return class$;
}

$Class* bug8057791::class$ = nullptr;