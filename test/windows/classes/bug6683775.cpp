#include <bug6683775.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LOC
#undef PERPIXEL_TRANSLUCENT
#undef RED
#undef SIZE

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6683775$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6683775$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JFrame* testFrame) {
		$set(this, testFrame, testFrame);
	}
	virtual void run() override {
		bug6683775::lambda$main$0(testFrame);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6683775$$Lambda$lambda$main$0>());
	}
	$JFrame* testFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6683775$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"testFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(bug6683775$$Lambda$lambda$main$0, testFrame)},
	{}
};
$MethodInfo bug6683775$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6683775$$Lambda$lambda$main$0::*)($JFrame*)>(&bug6683775$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6683775$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6683775$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6683775$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6683775$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6683775$$Lambda$lambda$main$0::class$ = nullptr;

class bug6683775$$Lambda$dispose$1 : public $Runnable {
	$class(bug6683775$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6683775$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6683775$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6683775$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo bug6683775$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6683775$$Lambda$dispose$1::*)($Window*)>(&bug6683775$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6683775$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6683775$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6683775$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(bug6683775$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6683775$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _bug6683775_FieldInfo_[] = {
	{"LOC", "I", nullptr, $STATIC | $FINAL, $constField(bug6683775, LOC)},
	{"SIZE", "I", nullptr, $STATIC | $FINAL, $constField(bug6683775, SIZE)},
	{}
};

$MethodInfo _bug6683775_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6683775::*)()>(&bug6683775::init$))},
	{"getGC", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsConfiguration*(*)()>(&bug6683775::getGC))},
	{"lambda$main$0", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*)>(&bug6683775::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6683775::main)), "java.lang.Exception"},
	{"setOpaque", "(Ljava/awt/Window;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*,bool)>(&bug6683775::setOpaque))},
	{}
};

$ClassInfo _bug6683775_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6683775",
	"java.lang.Object",
	nullptr,
	_bug6683775_FieldInfo_,
	_bug6683775_MethodInfo_
};

$Object* allocate$bug6683775($Class* clazz) {
	return $of($alloc(bug6683775));
}

void bug6683775::init$() {
}

void bug6683775::main($StringArray* args) {
	$var($GraphicsConfiguration, gc, getGC());
	$init($GraphicsDevice$WindowTranslucency);
	if (gc == nullptr || !$nc($($nc(gc)->getDevice()))->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT)) {
		return;
	}
	$var($Robot, robot, $new($Robot));
	$var($JFrame, testFrame, $new($JFrame, gc));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6683775$$Lambda$lambda$main$0, testFrame)));
	robot->waitForIdle();
	$Thread::sleep(1500);
	$var($BufferedImage, capture, robot->createScreenCapture($$new($Rectangle, bug6683775::LOC, bug6683775::LOC, bug6683775::SIZE, bug6683775::SIZE)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6683775$$Lambda$dispose$1, static_cast<$JFrame*>(testFrame))));
	$init($Color);
	int32_t redRGB = $nc($Color::RED)->getRGB();
	if (redRGB != $nc(capture)->getRGB(bug6683775::SIZE / 2, bug6683775::SIZE / 2)) {
		$throwNew($RuntimeException, "Transparent frame is not transparent!"_s);
	}
}

void bug6683775::setOpaque($Window* window, bool opaque) {
	$var($Color, bg, $nc(window)->getBackground());
	if (bg == nullptr) {
		$assign(bg, $new($Color, 0, 0, 0, 0));
	}
	int32_t var$0 = $nc(bg)->getRed();
	int32_t var$1 = bg->getGreen();
	window->setBackground($$new($Color, var$0, var$1, bg->getBlue(), opaque ? 255 : 0));
}

$GraphicsConfiguration* bug6683775::getGC() {
	$var($GraphicsConfiguration, transparencyCapableGC, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	if (!$nc(transparencyCapableGC)->isTranslucencyCapable()) {
		$assign(transparencyCapableGC, nullptr);
		$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$var($GraphicsDeviceArray, devices, $nc(env)->getScreenDevices());
		for (int32_t i = 0; i < $nc(devices)->length && transparencyCapableGC == nullptr; ++i) {
			$var($GraphicsConfigurationArray, configs, $nc(devices->get(i))->getConfigurations());
			for (int32_t j = 0; j < $nc(configs)->length && transparencyCapableGC == nullptr; ++j) {
				if ($nc(configs->get(j))->isTranslucencyCapable()) {
					$assign(transparencyCapableGC, configs->get(j));
				}
			}
		}
	}
	return transparencyCapableGC;
}

void bug6683775::lambda$main$0($JFrame* testFrame) {
	$var($JFrame, backgroundFrame, $new($JFrame, "Background frame"_s));
	backgroundFrame->setUndecorated(true);
	$var($JPanel, panel, $new($JPanel));
	$init($Color);
	panel->setBackground($Color::RED);
	backgroundFrame->add(static_cast<$Component*>(panel));
	backgroundFrame->setBounds(bug6683775::LOC, bug6683775::LOC, bug6683775::SIZE, bug6683775::SIZE);
	backgroundFrame->setVisible(true);
	$nc(testFrame)->setUndecorated(true);
	$var($JPanel, p, $new($JPanel));
	p->setOpaque(false);
	testFrame->add(static_cast<$Component*>(p));
	setOpaque(testFrame, false);
	testFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	testFrame->setBounds(bug6683775::LOC, bug6683775::LOC, bug6683775::SIZE, bug6683775::SIZE);
	testFrame->setVisible(true);
}

bug6683775::bug6683775() {
}

$Class* bug6683775::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6683775$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6683775$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug6683775$$Lambda$dispose$1::classInfo$.name)) {
			return bug6683775$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(bug6683775, name, initialize, &_bug6683775_ClassInfo_, allocate$bug6683775);
	return class$;
}

$Class* bug6683775::class$ = nullptr;