#include <JMenuItemsTest.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class JMenuItemsTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JMenuItemsTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JMenuItemsTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMenuItemsTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMenuItemsTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItemsTest$$Lambda$lambda$main$0::*)()>(&JMenuItemsTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMenuItemsTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JMenuItemsTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JMenuItemsTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(JMenuItemsTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMenuItemsTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _JMenuItemsTest_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, mainFrame)},
	{"disabledMenu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, disabledMenu)},
	{"disabledMenuItem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemsTest, disabledMenuItem)},
	{}
};

$MethodInfo _JMenuItemsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItemsTest::*)()>(&JMenuItemsTest::init$))},
	{"createUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItemsTest::*)()>(&JMenuItemsTest::createUI))},
	{"dispose", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItemsTest::*)()>(&JMenuItemsTest::dispose))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JMenuItemsTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JMenuItemsTest::main)), "java.lang.Exception"},
	{"testDisabledStateOfJMenu", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItemsTest::*)()>(&JMenuItemsTest::testDisabledStateOfJMenu))},
	{"testDisabledStateOfJMenuItem", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItemsTest::*)()>(&JMenuItemsTest::testDisabledStateOfJMenuItem))},
	{}
};

$ClassInfo _JMenuItemsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JMenuItemsTest",
	"java.lang.Object",
	nullptr,
	_JMenuItemsTest_FieldInfo_,
	_JMenuItemsTest_MethodInfo_
};

$Object* allocate$JMenuItemsTest($Class* clazz) {
	return $of($alloc(JMenuItemsTest));
}

$JFrame* JMenuItemsTest::mainFrame = nullptr;
$JMenu* JMenuItemsTest::disabledMenu = nullptr;
$JMenuItem* JMenuItemsTest::disabledMenuItem = nullptr;

void JMenuItemsTest::init$() {
	createUI();
}

void JMenuItemsTest::createUI() {
	$assignStatic(JMenuItemsTest::mainFrame, $new($JFrame, "Test"_s));
	$assignStatic(JMenuItemsTest::disabledMenu, $new($JMenu, "Disabled Menu"_s));
	$init($Color);
	$nc(JMenuItemsTest::disabledMenu)->setForeground($Color::BLUE);
	$nc(JMenuItemsTest::disabledMenu)->setEnabled(false);
	$assignStatic(JMenuItemsTest::disabledMenuItem, $new($JMenuItem, "Disabled MenuItem"_s));
	$nc(JMenuItemsTest::disabledMenuItem)->setForeground($Color::BLUE);
	$nc(JMenuItemsTest::disabledMenuItem)->setEnabled(false);
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assign(menuBar, $new($JMenuBar));
	menuBar->add(JMenuItemsTest::disabledMenu);
	menuBar->add(static_cast<$Component*>(JMenuItemsTest::disabledMenuItem));
	$nc(JMenuItemsTest::mainFrame)->add(static_cast<$Component*>(menuBar));
	$nc(JMenuItemsTest::mainFrame)->pack();
	$nc(JMenuItemsTest::mainFrame)->setVisible(true);
}

void JMenuItemsTest::dispose() {
	$nc(JMenuItemsTest::mainFrame)->dispose();
}

void JMenuItemsTest::testDisabledStateOfJMenu() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $nc(JMenuItemsTest::disabledMenu)->getBounds());
	$var($BufferedImage, image, $new($BufferedImage, $nc(rect)->width, rect->height, $BufferedImage::TYPE_INT_ARGB));
	$nc(JMenuItemsTest::disabledMenu)->paint($(image->getGraphics()));
	int32_t y = image->getHeight() / 2;
	for (int32_t x = 0; x < image->getWidth(); ++x) {
		$var($Color, c, $new($Color, image->getRGB(x, y)));
		$init($Color);
		if (c->equals($Color::BLUE)) {
			dispose();
			$throwNew($RuntimeException, "JMenu Disabled State not Valid."_s);
		}
	}
}

void JMenuItemsTest::testDisabledStateOfJMenuItem() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $nc(JMenuItemsTest::disabledMenuItem)->getBounds());
	$var($BufferedImage, image, $new($BufferedImage, $nc(rect)->width, rect->height, $BufferedImage::TYPE_INT_ARGB));
	$nc(JMenuItemsTest::disabledMenuItem)->paint($(image->getGraphics()));
	int32_t y = image->getHeight() / 2;
	for (int32_t x = 0; x < image->getWidth(); ++x) {
		$var($Color, c, $new($Color, image->getRGB(x, y)));
		$init($Color);
		if (c->equals($Color::BLUE)) {
			dispose();
			$throwNew($RuntimeException, "JMenuItem Disabled State not Valid."_s);
		}
	}
}

void JMenuItemsTest::main($StringArray* args) {
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JMenuItemsTest$$Lambda$lambda$main$0)));
}

void JMenuItemsTest::lambda$main$0() {
	try {
		$var(JMenuItemsTest, obj, $new(JMenuItemsTest));
		obj->testDisabledStateOfJMenu();
		obj->testDisabledStateOfJMenuItem();
		obj->dispose();
	} catch ($Exception& ex) {
		$throw(ex);
	}
}

JMenuItemsTest::JMenuItemsTest() {
}

$Class* JMenuItemsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JMenuItemsTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return JMenuItemsTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(JMenuItemsTest, name, initialize, &_JMenuItemsTest_ClassInfo_, allocate$JMenuItemsTest);
	return class$;
}

$Class* JMenuItemsTest::class$ = nullptr;