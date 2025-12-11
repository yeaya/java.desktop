#include <bug8071705.h>

#include <bug8071705$1.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TYPE_RASTER_SCREEN

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $bug8071705$1 = ::bug8071705$1;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug8071705_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8071705::*)()>(&bug8071705::init$))},
	{"checkConfigs", "([Ljava/awt/GraphicsDevice;)Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsDevice*(*)($GraphicsDeviceArray*)>(&bug8071705::checkConfigs))},
	{"checkScreens", "()[Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsDeviceArray*(*)()>(&bug8071705::checkScreens))},
	{"createGUI", "()Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JFrame*(*)()>(&bug8071705::createGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8071705::main)), "java.lang.Exception"},
	{"runActualTest", "(Ljava/awt/GraphicsDevice;Ljava/util/concurrent/CountDownLatch;Ljavax/swing/JFrame;[Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($GraphicsDevice*,$CountDownLatch*,$JFrame*,$booleans*)>(&bug8071705::runActualTest))},
	{"setLocation", "(Ljavax/swing/JFrame;Ljava/awt/GraphicsDevice;)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)($JFrame*,$GraphicsDevice*)>(&bug8071705::setLocation))},
	{}
};

$InnerClassInfo _bug8071705_InnerClassesInfo_[] = {
	{"bug8071705$FrameListener", "bug8071705", "FrameListener", $PRIVATE | $STATIC},
	{"bug8071705$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8071705_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8071705",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8071705_MethodInfo_,
	nullptr,
	nullptr,
	_bug8071705_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8071705$FrameListener,bug8071705$1"
};

$Object* allocate$bug8071705($Class* clazz) {
	return $of($alloc(bug8071705));
}

void bug8071705::init$() {
}

void bug8071705::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($booleans, result, $new($booleans, 1));
	$SwingUtilities::invokeLater($$new($bug8071705$1, result, latch));
	latch->await();
	if (result->get(0) == false) {
		$throwNew($RuntimeException, "popup menu rendered in wrong position"_s);
	}
	$nc($System::out)->println("OK"_s);
}

$GraphicsDeviceArray* bug8071705::checkScreens() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	return $nc(ge)->getScreenDevices();
}

$JFrame* bug8071705::createGUI() {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "Some menu"_s));
	menuBar->add(menu);
	for (int32_t i = 0; i < 10; ++i) {
		menu->add($$new($JMenuItem, $$str({"Some menu #"_s, $$str(i)})));
	}
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setMinimumSize($$new($Dimension, 200, 200));
	frame->setJMenuBar(menuBar);
	return frame;
}

$GraphicsDevice* bug8071705::checkConfigs($GraphicsDeviceArray* devices) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDevice, correctDevice, nullptr);
	if ($nc(devices)->length < 2) {
		return correctDevice;
	}
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Rectangle, screenBounds, $new($Rectangle, $($nc(toolkit)->getScreenSize())));
	int32_t halfScreen = screenBounds->height / 2;
	for (int32_t i = 0; i < $nc(devices)->length; ++i) {
		if ($nc(devices->get(i))->getType() == $GraphicsDevice::TYPE_RASTER_SCREEN) {
			$var($GraphicsConfiguration, conf, $nc(devices->get(i))->getDefaultConfiguration());
			$var($Rectangle, bounds, $nc(conf)->getBounds());
			if ($nc(bounds)->y >= halfScreen) {
				$assign(correctDevice, devices->get(i));
				break;
			}
		}
	}
	return correctDevice;
}

$Rectangle* bug8071705::setLocation($JFrame* frame, $GraphicsDevice* device) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, conf, $nc(device)->getDefaultConfiguration());
	$var($Rectangle, bounds, $nc(conf)->getBounds());
	int32_t x = $nc(bounds)->x + bounds->width / 2;
	int32_t y = bounds->y + bounds->height / 2;
	$nc(frame)->setLocation(x, y);
	return bounds;
}

void bug8071705::runActualTest($GraphicsDevice* device, $CountDownLatch* latch, $JFrame* frame, $booleans* result) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, screenBounds, setLocation(frame, device));
	$var($JMenu, menu, $nc($($nc(frame)->getJMenuBar()))->getMenu(0));
	$nc(menu)->doClick();
	$var($Point, location, menu->getLocationOnScreen());
	$var($JPopupMenu, pm, menu->getPopupMenu());
	$var($Dimension, pmSize, $nc(pm)->getSize());
	int32_t yOffset = $UIManager::getInt("Menu.submenuPopupOffsetY"_s);
	int32_t height = $nc(location)->y + yOffset + $nc(pmSize)->height + menu->getHeight();
	int32_t available = $nc(screenBounds)->y + screenBounds->height - height;
	if (available > 0) {
		$var($Point, origin, pm->getLocationOnScreen());
		if ($nc(origin)->y < location->y) {
			$nc(result)->set(0, false);
		} else {
			$nc(result)->set(0, true);
		}
	} else {
		$nc(result)->set(0, true);
	}
}

bug8071705::bug8071705() {
}

$Class* bug8071705::load$($String* name, bool initialize) {
	$loadClass(bug8071705, name, initialize, &_bug8071705_ClassInfo_, allocate$bug8071705);
	return class$;
}

$Class* bug8071705::class$ = nullptr;