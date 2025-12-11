#include <HiddenDefaultButtonTest.h>

#include <HiddenDefaultButtonTest$1.h>
#include <HiddenDefaultButtonTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_ENTER

using $HiddenDefaultButtonTest$1 = ::HiddenDefaultButtonTest$1;
using $HiddenDefaultButtonTest$2 = ::HiddenDefaultButtonTest$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0 : public $Runnable {
	$class(HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HiddenDefaultButtonTest::lambda$disposeTestUI$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::*)()>(&HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::load$($String* name, bool initialize) {
	$loadClass(HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::class$ = nullptr;

$FieldInfo _HiddenDefaultButtonTest_FieldInfo_[] = {
	{"ButtonClickCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(HiddenDefaultButtonTest, ButtonClickCount)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HiddenDefaultButtonTest, frame)},
	{}
};

$MethodInfo _HiddenDefaultButtonTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HiddenDefaultButtonTest::*)()>(&HiddenDefaultButtonTest::init$))},
	{"createGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HiddenDefaultButtonTest::createGUI))},
	{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HiddenDefaultButtonTest::disposeTestUI)), "java.lang.Exception"},
	{"lambda$disposeTestUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HiddenDefaultButtonTest::lambda$disposeTestUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HiddenDefaultButtonTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&HiddenDefaultButtonTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HiddenDefaultButtonTest_InnerClassesInfo_[] = {
	{"HiddenDefaultButtonTest$2", nullptr, nullptr, 0},
	{"HiddenDefaultButtonTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenDefaultButtonTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HiddenDefaultButtonTest",
	"java.lang.Object",
	nullptr,
	_HiddenDefaultButtonTest_FieldInfo_,
	_HiddenDefaultButtonTest_MethodInfo_,
	nullptr,
	nullptr,
	_HiddenDefaultButtonTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HiddenDefaultButtonTest$2,HiddenDefaultButtonTest$1"
};

$Object* allocate$HiddenDefaultButtonTest($Class* clazz) {
	return $of($alloc(HiddenDefaultButtonTest));
}

int32_t HiddenDefaultButtonTest::ButtonClickCount = 0;
$JFrame* HiddenDefaultButtonTest::frame = nullptr;

void HiddenDefaultButtonTest::init$() {
}

void HiddenDefaultButtonTest::createGUI() {
	$init(HiddenDefaultButtonTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(HiddenDefaultButtonTest::frame, $new($JFrame));
	$nc(HiddenDefaultButtonTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JButton, button, $new($JButton, "Default button"_s));
	button->setDefaultCapable(true);
	button->addActionListener($$new($HiddenDefaultButtonTest$1));
	$nc(HiddenDefaultButtonTest::frame)->add(static_cast<$Component*>(button));
	button->setVisible(false);
	$nc($($nc(HiddenDefaultButtonTest::frame)->getRootPane()))->setDefaultButton(button);
	$nc(HiddenDefaultButtonTest::frame)->setSize(200, 200);
	$nc(HiddenDefaultButtonTest::frame)->setLocationRelativeTo(nullptr);
	$nc(HiddenDefaultButtonTest::frame)->setVisible(true);
}

void HiddenDefaultButtonTest::disposeTestUI() {
	$init(HiddenDefaultButtonTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0)));
}

void HiddenDefaultButtonTest::test() {
	$init(HiddenDefaultButtonTest);
	$var($Robot, testRobot, $new($Robot));
	testRobot->waitForIdle();
	testRobot->keyPress($KeyEvent::VK_ENTER);
	testRobot->delay(20);
	testRobot->keyRelease($KeyEvent::VK_ENTER);
	testRobot->delay(200);
	testRobot->keyPress($KeyEvent::VK_ENTER);
	testRobot->delay(20);
	testRobot->keyRelease($KeyEvent::VK_ENTER);
	testRobot->waitForIdle();
	if (HiddenDefaultButtonTest::ButtonClickCount != 0) {
		disposeTestUI();
		$throwNew($RuntimeException, "DefaultButton is pressed even if it is invisible"_s);
	}
}

void HiddenDefaultButtonTest::main($StringArray* args) {
	$init(HiddenDefaultButtonTest);
	$SwingUtilities::invokeAndWait($$new($HiddenDefaultButtonTest$2));
	test();
	HiddenDefaultButtonTest::disposeTestUI();
}

void HiddenDefaultButtonTest::lambda$disposeTestUI$0() {
	$init(HiddenDefaultButtonTest);
	$nc(HiddenDefaultButtonTest::frame)->dispose();
}

void clinit$HiddenDefaultButtonTest($Class* class$) {
	HiddenDefaultButtonTest::ButtonClickCount = 0;
}

HiddenDefaultButtonTest::HiddenDefaultButtonTest() {
}

$Class* HiddenDefaultButtonTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::classInfo$.name)) {
			return HiddenDefaultButtonTest$$Lambda$lambda$disposeTestUI$0::load$(name, initialize);
		}
	}
	$loadClass(HiddenDefaultButtonTest, name, initialize, &_HiddenDefaultButtonTest_ClassInfo_, clinit$HiddenDefaultButtonTest, allocate$HiddenDefaultButtonTest);
	return class$;
}

$Class* HiddenDefaultButtonTest::class$ = nullptr;