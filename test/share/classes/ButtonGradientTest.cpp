#include <ButtonGradientTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Paint.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TYPE_INT_RGB

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics2D = ::java::awt::Graphics2D;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Paint = ::java::awt::Paint;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class ButtonGradientTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGradientTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ButtonGradientTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ButtonGradientTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ButtonGradientTest$$Lambda$lambda$main$0::*)()>(&ButtonGradientTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ButtonGradientTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ButtonGradientTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ButtonGradientTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ButtonGradientTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ButtonGradientTest$$Lambda$lambda$main$0::class$ = nullptr;

class ButtonGradientTest$$Lambda$createAndShowGUI$1 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$createAndShowGUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ButtonGradientTest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ButtonGradientTest$$Lambda$createAndShowGUI$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ButtonGradientTest$$Lambda$createAndShowGUI$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ButtonGradientTest$$Lambda$createAndShowGUI$1::*)()>(&ButtonGradientTest$$Lambda$createAndShowGUI$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ButtonGradientTest$$Lambda$createAndShowGUI$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ButtonGradientTest$$Lambda$createAndShowGUI$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ButtonGradientTest$$Lambda$createAndShowGUI$1::load$($String* name, bool initialize) {
	$loadClass(ButtonGradientTest$$Lambda$createAndShowGUI$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ButtonGradientTest$$Lambda$createAndShowGUI$1::class$ = nullptr;

class ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2 : public $Runnable {
	$class(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($RectangleArray* rectangles) {
		$set(this, rectangles, rectangles);
	}
	virtual void run() override {
		ButtonGradientTest::lambda$getButtonBounds$1(rectangles);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2>());
	}
	$RectangleArray* rectangles = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::fieldInfos[2] = {
	{"rectangles", "[Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, rectangles)},
	{}
};
$MethodInfo ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::methodInfos[3] = {
	{"<init>", "([Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::*)($RectangleArray*)>(&ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::load$($String* name, bool initialize) {
	$loadClass(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::class$ = nullptr;

$FieldInfo _ButtonGradientTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, frame)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, button)},
	{"images", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(ButtonGradientTest, images)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ButtonGradientTest, robot)},
	{}
};

$MethodInfo _ButtonGradientTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ButtonGradientTest::*)()>(&ButtonGradientTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ButtonGradientTest::createAndShowGUI))},
	{"getButtonBounds", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)()>(&ButtonGradientTest::getButtonBounds)), "java.lang.Exception"},
	{"getGradientColor", "(IILjava/awt/Color;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)(int32_t,int32_t,$Color*,$Color*)>(&ButtonGradientTest::getGradientColor))},
	{"getImageFromRobot", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ButtonGradientTest::getImageFromRobot))},
	{"lambda$getButtonBounds$1", "([Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($RectangleArray*)>(&ButtonGradientTest::lambda$getButtonBounds$1))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ButtonGradientTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ButtonGradientTest::main)), "java.lang.Exception"},
	{"similar", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&ButtonGradientTest::similar))},
	{"similarColors", "(Ljava/awt/Color;Ljava/awt/Color;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Color*,$Color*)>(&ButtonGradientTest::similarColors))},
	{"testGradient", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ButtonGradientTest::testGradient)), "java.lang.Exception"},
	{}
};

$ClassInfo _ButtonGradientTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ButtonGradientTest",
	"java.lang.Object",
	nullptr,
	_ButtonGradientTest_FieldInfo_,
	_ButtonGradientTest_MethodInfo_
};

$Object* allocate$ButtonGradientTest($Class* clazz) {
	return $of($alloc(ButtonGradientTest));
}

$JFrame* ButtonGradientTest::frame = nullptr;
$JButton* ButtonGradientTest::button = nullptr;
$List* ButtonGradientTest::images = nullptr;
$Robot* ButtonGradientTest::robot = nullptr;

void ButtonGradientTest::init$() {
}

void ButtonGradientTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(ButtonGradientTest);
			$assignStatic(ButtonGradientTest::robot, $new($Robot));
			testGradient();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ButtonGradientTest$$Lambda$lambda$main$0)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ButtonGradientTest::testGradient() {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ButtonGradientTest$$Lambda$createAndShowGUI$1)));
	$init(ButtonGradientTest);
	$nc(ButtonGradientTest::robot)->waitForIdle();
	$nc(ButtonGradientTest::robot)->delay(500);
	$var($Rectangle, rect, getButtonBounds());
	$var($List, gradient, $cast($List, $UIManager::get("Button.gradient"_s)));
	float ratio = $nc(($cast($Number, $($nc(gradient)->get(0)))))->floatValue();
	$var($Color, c1, $cast($Color, gradient->get(2)));
	$var($Color, c2, $cast($Color, gradient->get(3)));
	int32_t mid = $cast(int32_t, (ratio * $nc(rect)->height));
	$var($Color, gradientColor, getGradientColor(rect->width, mid, c1, c2));
	getImageFromRobot();
	int32_t x = rect->x + rect->width / 2;
	int32_t y = rect->y + mid / 2;
	$var($Color, buttonColor, $new($Color, $nc((($cast($BufferedImage, $($nc(ButtonGradientTest::images)->get(1))))))->getRGB((x), (y))));
	if (!similarColors(buttonColor, gradientColor)) {
		$throwNew($RuntimeException, "Button gradient is changed!"_s);
	}
}

void ButtonGradientTest::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$init(ButtonGradientTest);
	$assignStatic(ButtonGradientTest::frame, $new($JFrame));
	$nc(ButtonGradientTest::frame)->setSize(300, 300);
	$nc(ButtonGradientTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$assignStatic(ButtonGradientTest::button, $new($JButton, ""_s));
	panel->add(static_cast<$Component*>(ButtonGradientTest::button));
	$nc($($nc(ButtonGradientTest::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(ButtonGradientTest::frame)->setVisible(true);
}

void ButtonGradientTest::getImageFromRobot() {
	$useLocalCurrentObjectStackCache();
	try {
		$init(ButtonGradientTest);
		$var($Point, butLoc, $nc(ButtonGradientTest::button)->getLocationOnScreen());
		$var($Dimension, butSize, $nc(ButtonGradientTest::button)->getSize());
		int32_t var$0 = $cast(int32_t, $nc(butLoc)->getX());
		int32_t var$1 = $cast(int32_t, butLoc->getY());
		int32_t var$2 = $cast(int32_t, $nc(butSize)->getWidth());
		$var($MultiResolutionImage, multiResolutionImage, $nc(ButtonGradientTest::robot)->createMultiResolutionScreenCapture($$new($Rectangle, var$0, var$1, var$2, $cast(int32_t, butSize->getHeight()))));
		$assignStatic(ButtonGradientTest::images, $nc(multiResolutionImage)->getResolutionVariants());
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$init(ButtonGradientTest);
	if ($nc(ButtonGradientTest::images)->size() < 2) {
		$throwNew($RuntimeException, "HiDpi Image not captured - Check is this HiDpi display system?"_s);
	}
}

$Rectangle* ButtonGradientTest::getButtonBounds() {
	$useLocalCurrentObjectStackCache();
	$var($RectangleArray, rectangles, $new($RectangleArray, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2, rectangles)));
	return rectangles->get(0);
}

$Color* ButtonGradientTest::getGradientColor(int32_t w, int32_t h, $Color* c1, $Color* c2) {
	$useLocalCurrentObjectStackCache();
	$var($GradientPaint, gradient, $new($GradientPaint, (float)0, (float)0, c1, (float)0, (float)h, c2, true));
	$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, img->createGraphics());
	$nc(g)->setPaint(gradient);
	g->fillRect(0, 0, w, h);
	g->dispose();
	return $new($Color, img->getRGB(w / 2, h / 2));
}

bool ButtonGradientTest::similarColors($Color* c1, $Color* c2) {
	int32_t var$2 = $nc(c1)->getRed();
	bool var$1 = similar(var$2, $nc(c2)->getRed());
	if (var$1) {
		int32_t var$3 = $nc(c1)->getGreen();
		var$1 = similar(var$3, $nc(c2)->getGreen());
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$4 = $nc(c1)->getBlue();
		var$0 = similar(var$4, $nc(c2)->getBlue());
	}
	return var$0;
}

bool ButtonGradientTest::similar(int32_t i1, int32_t i2) {
	return $Math::abs(i2 - i1) < 6;
}

void ButtonGradientTest::lambda$getButtonBounds$1($RectangleArray* rectangles) {
	$useLocalCurrentObjectStackCache();
	$init(ButtonGradientTest);
	$nc(rectangles)->set(0, $($nc(ButtonGradientTest::button)->getBounds()));
	$nc(rectangles->get(0))->setLocation($($nc(ButtonGradientTest::button)->getLocationOnScreen()));
}

void ButtonGradientTest::lambda$main$0() {
	$init(ButtonGradientTest);
	if (ButtonGradientTest::frame != nullptr) {
		$nc(ButtonGradientTest::frame)->dispose();
	}
}

ButtonGradientTest::ButtonGradientTest() {
}

$Class* ButtonGradientTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ButtonGradientTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ButtonGradientTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ButtonGradientTest$$Lambda$createAndShowGUI$1::classInfo$.name)) {
			return ButtonGradientTest$$Lambda$createAndShowGUI$1::load$(name, initialize);
		}
		if (name->equals(ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::classInfo$.name)) {
			return ButtonGradientTest$$Lambda$lambda$getButtonBounds$1$2::load$(name, initialize);
		}
	}
	$loadClass(ButtonGradientTest, name, initialize, &_ButtonGradientTest_ClassInfo_, allocate$ButtonGradientTest);
	return class$;
}

$Class* ButtonGradientTest::class$ = nullptr;