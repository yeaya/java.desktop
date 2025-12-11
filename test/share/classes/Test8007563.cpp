#include <Test8007563.h>

#include <Test8007563$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE
#undef DISPOSE_ON_CLOSE
#undef INFO
#undef LATCH
#undef LIST
#undef RED
#undef ROBOT

using $Test8007563$1 = ::Test8007563$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $Toolkit = ::java::awt::Toolkit;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ArrayList = ::java::util::ArrayList;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _Test8007563_FieldInfo_[] = {
	{"LIST", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Test8007563, LIST)},
	{"INFO", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8007563, INFO)},
	{"LATCH", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8007563, LATCH)},
	{"ROBOT", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(Test8007563, ROBOT)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(Test8007563, frame)},
	{"pane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE, $field(Test8007563, pane)},
	{}
};

$MethodInfo _Test8007563_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8007563::*)()>(&Test8007563::init$))},
	{"addOpaqueError", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&Test8007563::addOpaqueError))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8007563::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"updateLookAndFeel", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Test8007563::updateLookAndFeel))},
	{}
};

$InnerClassInfo _Test8007563_InnerClassesInfo_[] = {
	{"Test8007563$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8007563_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8007563",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test8007563_FieldInfo_,
	_Test8007563_MethodInfo_,
	nullptr,
	nullptr,
	_Test8007563_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test8007563$1"
};

$Object* allocate$Test8007563($Class* clazz) {
	return $of($alloc(Test8007563));
}

$ArrayList* Test8007563::LIST = nullptr;
$UIManager$LookAndFeelInfoArray* Test8007563::INFO = nullptr;
$CountDownLatch* Test8007563::LATCH = nullptr;
$Robot* Test8007563::ROBOT = nullptr;

void Test8007563::init$() {
}

void Test8007563::main($StringArray* args) {
	$init(Test8007563);
	$useLocalCurrentObjectStackCache();
	$assignStatic(Test8007563::ROBOT, $new($Robot));
	$SwingUtilities::invokeLater($$new(Test8007563));
	$nc(Test8007563::LATCH)->await();
	if (!$nc(Test8007563::LIST)->isEmpty()) {
		$throwNew($Error, $($nc(Test8007563::LIST)->toString()));
	}
}

void Test8007563::addOpaqueError(bool opaque) {
	$init(Test8007563);
	$useLocalCurrentObjectStackCache();
	$nc(Test8007563::LIST)->add($$str({$($nc($($UIManager::getLookAndFeel()))->getName()), " opaque="_s, $$str(opaque)}));
}

bool Test8007563::updateLookAndFeel() {
	$init(Test8007563);
	$useLocalCurrentObjectStackCache();
	int32_t index = (int32_t)$nc(Test8007563::LATCH)->getCount() - 1;
	if (index >= 0) {
		try {
			$var($UIManager$LookAndFeelInfo, info, $nc(Test8007563::INFO)->get(index));
			$nc($System::err)->println($$str({"L&F: "_s, $($nc(info)->getName())}));
			$UIManager::setLookAndFeel($($nc(info)->getClassName()));
			return true;
		} catch ($Exception& exception) {
			exception->printStackTrace();
		}
	}
	return false;
}

void Test8007563::run() {
	$useLocalCurrentObjectStackCache();
	if (this->frame == nullptr) {
		if (!updateLookAndFeel()) {
			return;
		}
		$set(this, pane, $new($JTabbedPane));
		$nc(this->pane)->setOpaque(false);
		$init($Color);
		$nc(this->pane)->setBackground($Color::RED);
		for (int32_t i = 0; i < 3; ++i) {
			$nc(this->pane)->addTab($$str({"Tab "_s, $$str(i)}), $$new($JLabel, $$str({"Content area "_s, $$str(i)})));
		}
		$set(this, frame, $new($JFrame, $($of(this)->getClass()->getSimpleName())));
		$nc($($nc(this->frame)->getContentPane()))->setBackground($Color::BLUE);
		$nc(this->frame)->add(static_cast<$Component*>(this->pane));
		$nc(this->frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
		$nc(this->frame)->setSize(400, 200);
		$nc(this->frame)->setLocationRelativeTo(nullptr);
		$nc(this->frame)->setVisible(true);
	} else {
		$var($Point, point, $new($Point, $nc(this->pane)->getWidth() - 2, 2));
		$SwingUtilities::convertPointToScreen(point, this->pane);
		$var($Color, actual, $nc(Test8007563::ROBOT)->getPixelColor(point->x, point->y));
		bool opaque = $nc(this->pane)->isOpaque();
		$var($Color, expected, opaque ? $nc(this->pane)->getBackground() : $nc($($nc(this->frame)->getContentPane()))->getBackground());
		if (!$nc(expected)->equals(actual)) {
			addOpaqueError(opaque);
		}
		if (!opaque) {
			$nc(this->pane)->setOpaque(true);
			$nc(this->pane)->repaint();
		} else {
			$nc(this->frame)->dispose();
			$set(this, frame, nullptr);
			$set(this, pane, nullptr);
			$nc(Test8007563::LATCH)->countDown();
		}
	}
	$var($SecondaryLoop, secondaryLoop, $nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->createSecondaryLoop());
	$$new($Test8007563$1, this, secondaryLoop)->start();
	$nc(secondaryLoop)->enter();
}

void clinit$Test8007563($Class* class$) {
	$assignStatic(Test8007563::LIST, $new($ArrayList));
	$assignStatic(Test8007563::INFO, $UIManager::getInstalledLookAndFeels());
	$assignStatic(Test8007563::LATCH, $new($CountDownLatch, $nc(Test8007563::INFO)->length));
}

Test8007563::Test8007563() {
}

$Class* Test8007563::load$($String* name, bool initialize) {
	$loadClass(Test8007563, name, initialize, &_Test8007563_ClassInfo_, clinit$Test8007563, allocate$Test8007563);
	return class$;
}

$Class* Test8007563::class$ = nullptr;