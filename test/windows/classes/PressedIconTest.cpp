#include <PressedIconTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BaseMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BLUE
#undef BUTTON1_MASK
#undef CENTER
#undef COLOR_1X
#undef COLOR_2X
#undef EXIT_ON_CLOSE
#undef IMAGE_SIZE
#undef RED
#undef TYPE_INT_RGB

using $ImageArray = $Array<::java::awt::Image>;
using $BufferedImageArray = $Array<::java::awt::image::BufferedImage>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BaseMultiResolutionImage = ::java::awt::image::BaseMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class PressedIconTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(PressedIconTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PressedIconTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PressedIconTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PressedIconTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PressedIconTest$$Lambda$lambda$main$0::*)()>(&PressedIconTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PressedIconTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"PressedIconTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* PressedIconTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(PressedIconTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PressedIconTest$$Lambda$lambda$main$0::class$ = nullptr;

class PressedIconTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(PressedIconTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PressedIconTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PressedIconTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PressedIconTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PressedIconTest$$Lambda$lambda$main$1$1::*)()>(&PressedIconTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PressedIconTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"PressedIconTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* PressedIconTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(PressedIconTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PressedIconTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class PressedIconTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(PressedIconTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PressedIconTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PressedIconTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PressedIconTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PressedIconTest$$Lambda$lambda$main$2$2::*)()>(&PressedIconTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PressedIconTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"PressedIconTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* PressedIconTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(PressedIconTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PressedIconTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _PressedIconTest_FieldInfo_[] = {
	{"IMAGE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PressedIconTest, IMAGE_SIZE)},
	{"COLOR_1X", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PressedIconTest, COLOR_1X)},
	{"COLOR_2X", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PressedIconTest, COLOR_2X)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(PressedIconTest, frame)},
	{"scale", "D", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(PressedIconTest, scale)},
	{"centerX", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(PressedIconTest, centerX)},
	{"centerY", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(PressedIconTest, centerY)},
	{}
};

$MethodInfo _PressedIconTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PressedIconTest::*)()>(&PressedIconTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PressedIconTest::createAndShowGUI))},
	{"generateImage", "(ILjava/awt/Color;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)(int32_t,$Color*)>(&PressedIconTest::generateImage))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PressedIconTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PressedIconTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PressedIconTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PressedIconTest::main)), "java.lang.Exception"},
	{"similar", "(Ljava/awt/Color;Ljava/awt/Color;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Color*,$Color*)>(&PressedIconTest::similar))},
	{"similar", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&PressedIconTest::similar))},
	{}
};

$ClassInfo _PressedIconTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PressedIconTest",
	"java.lang.Object",
	nullptr,
	_PressedIconTest_FieldInfo_,
	_PressedIconTest_MethodInfo_
};

$Object* allocate$PressedIconTest($Class* clazz) {
	return $of($alloc(PressedIconTest));
}

$Color* PressedIconTest::COLOR_1X = nullptr;
$Color* PressedIconTest::COLOR_2X = nullptr;
$JFrame* PressedIconTest::frame = nullptr;
$volatile(double) PressedIconTest::scale = 0.0;
$volatile(int32_t) PressedIconTest::centerX = 0;
$volatile(int32_t) PressedIconTest::centerY = 0;

void PressedIconTest::init$() {
}

void PressedIconTest::main($StringArray* args) {
	$init(PressedIconTest);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(PressedIconTest$$Lambda$lambda$main$0)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(PressedIconTest$$Lambda$lambda$main$1$1)));
	robot->waitForIdle();
	robot->mouseMove(PressedIconTest::centerX, PressedIconTest::centerY);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$Thread::sleep(100);
	$var($Color, color, robot->getPixelColor(PressedIconTest::centerX, PressedIconTest::centerY));
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(PressedIconTest$$Lambda$lambda$main$2$2)));
	bool var$0 = (PressedIconTest::scale == 1 && !similar(color, PressedIconTest::COLOR_1X));
	if (var$0 || (PressedIconTest::scale == 2 && !similar(color, PressedIconTest::COLOR_2X))) {
		$throwNew($RuntimeException, "Colors are different!"_s);
	}
}

void PressedIconTest::createAndShowGUI() {
	$init(PressedIconTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(PressedIconTest::frame, $new($JFrame));
	$nc(PressedIconTest::frame)->setSize(PressedIconTest::IMAGE_SIZE, PressedIconTest::IMAGE_SIZE);
	$nc(PressedIconTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($BufferedImage, img1x, generateImage(1, PressedIconTest::COLOR_1X));
	$var($BufferedImage, img2x, generateImage(2, PressedIconTest::COLOR_2X));
	$var($BaseMultiResolutionImage, mri, $new($BaseMultiResolutionImage, $fcast($ImageArray, $$new($BufferedImageArray, {
		img1x,
		img2x
	}))));
	$var($Icon, mrIcon, $new($ImageIcon, static_cast<$Image*>(mri)));
	$var($JToggleButton, button, $new($JToggleButton));
	button->setIcon(mrIcon);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(button), $of($BorderLayout::CENTER));
	$nc($($nc(PressedIconTest::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(PressedIconTest::frame)->setVisible(true);
}

bool PressedIconTest::similar($Color* c1, $Color* c2) {
	$init(PressedIconTest);
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

bool PressedIconTest::similar(int32_t n, int32_t m) {
	$init(PressedIconTest);
	return $Math::abs(n - m) <= 50;
}

$BufferedImage* PressedIconTest::generateImage(int32_t scale, $Color* c) {
	$init(PressedIconTest);
	$useLocalCurrentObjectStackCache();
	int32_t size = PressedIconTest::IMAGE_SIZE * scale;
	$var($BufferedImage, img, $new($BufferedImage, size, size, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics, g, img->createGraphics());
	$nc(g)->setColor(c);
	g->fillRect(0, 0, size, size);
	g->dispose();
	return img;
}

void PressedIconTest::lambda$main$2() {
	$init(PressedIconTest);
	$nc(PressedIconTest::frame)->dispose();
}

void PressedIconTest::lambda$main$1() {
	$init(PressedIconTest);
	$useLocalCurrentObjectStackCache();
	PressedIconTest::scale = $nc($($nc($($nc(PressedIconTest::frame)->getGraphicsConfiguration()))->getDefaultTransform()))->getScaleX();
	$var($Point, location, $nc(PressedIconTest::frame)->getLocation());
	$var($Dimension, size, $nc(PressedIconTest::frame)->getSize());
	PressedIconTest::centerX = $nc(location)->x + $nc(size)->width / 2;
	PressedIconTest::centerY = location->y + size->height / 2;
}

void PressedIconTest::lambda$main$0() {
	$init(PressedIconTest);
	createAndShowGUI();
}

void clinit$PressedIconTest($Class* class$) {
	$init($Color);
	$assignStatic(PressedIconTest::COLOR_1X, $Color::RED);
	$assignStatic(PressedIconTest::COLOR_2X, $Color::BLUE);
	PressedIconTest::scale = (double)-1;
}

PressedIconTest::PressedIconTest() {
}

$Class* PressedIconTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PressedIconTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return PressedIconTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(PressedIconTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return PressedIconTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(PressedIconTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return PressedIconTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(PressedIconTest, name, initialize, &_PressedIconTest_ClassInfo_, clinit$PressedIconTest, allocate$PressedIconTest);
	return class$;
}

$Class* PressedIconTest::class$ = nullptr;