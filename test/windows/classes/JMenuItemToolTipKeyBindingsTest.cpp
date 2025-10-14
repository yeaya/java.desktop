#include <JMenuItemToolTipKeyBindingsTest.h>

#include <JMenuItemToolTipKeyBindingsTest$1.h>
#include <JMenuItemToolTipKeyBindingsTest$2.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
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
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef SCROLLBARS_BOTH
#undef TIMEOUT

using $JMenuItemToolTipKeyBindingsTest$1 = ::JMenuItemToolTipKeyBindingsTest$1;
using $JMenuItemToolTipKeyBindingsTest$2 = ::JMenuItemToolTipKeyBindingsTest$2;
using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JMenuItemToolTipKeyBindingsTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::*)()>(&JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _JMenuItemToolTipKeyBindingsTest_FieldInfo_[] = {
	{"TIMEOUT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItemToolTipKeyBindingsTest, TIMEOUT)},
	{"testCompleted", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuItemToolTipKeyBindingsTest, testCompleted)},
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JMenuItemToolTipKeyBindingsTest, testResult)},
	{"controlDialog", "Ljava/awt/Dialog;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemToolTipKeyBindingsTest, controlDialog)},
	{"testFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuItemToolTipKeyBindingsTest, testFrame)},
	{"instructions", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuItemToolTipKeyBindingsTest, instructions)},
	{}
};

$MethodInfo _JMenuItemToolTipKeyBindingsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItemToolTipKeyBindingsTest::*)()>(&JMenuItemToolTipKeyBindingsTest::init$))},
	{"completeTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JMenuItemToolTipKeyBindingsTest::completeTest))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JMenuItemToolTipKeyBindingsTest::createAndShowGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JMenuItemToolTipKeyBindingsTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JMenuItemToolTipKeyBindingsTest::main)), "java.lang.Exception"},
	{"waitForCompleting", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JMenuItemToolTipKeyBindingsTest::waitForCompleting)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JMenuItemToolTipKeyBindingsTest_InnerClassesInfo_[] = {
	{"JMenuItemToolTipKeyBindingsTest$2", nullptr, nullptr, 0},
	{"JMenuItemToolTipKeyBindingsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenuItemToolTipKeyBindingsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JMenuItemToolTipKeyBindingsTest",
	"java.lang.Object",
	nullptr,
	_JMenuItemToolTipKeyBindingsTest_FieldInfo_,
	_JMenuItemToolTipKeyBindingsTest_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuItemToolTipKeyBindingsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JMenuItemToolTipKeyBindingsTest$2,JMenuItemToolTipKeyBindingsTest$1"
};

$Object* allocate$JMenuItemToolTipKeyBindingsTest($Class* clazz) {
	return $of($alloc(JMenuItemToolTipKeyBindingsTest));
}

$AtomicBoolean* JMenuItemToolTipKeyBindingsTest::testCompleted = nullptr;
$volatile(bool) JMenuItemToolTipKeyBindingsTest::testResult = false;
$Dialog* JMenuItemToolTipKeyBindingsTest::controlDialog = nullptr;
$JFrame* JMenuItemToolTipKeyBindingsTest::testFrame = nullptr;
$String* JMenuItemToolTipKeyBindingsTest::instructions = nullptr;

void JMenuItemToolTipKeyBindingsTest::init$() {
}

void JMenuItemToolTipKeyBindingsTest::main($StringArray* args) {
	$init(JMenuItemToolTipKeyBindingsTest);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0)));
			waitForCompleting();
			if (!JMenuItemToolTipKeyBindingsTest::testResult) {
				$throwNew($RuntimeException, "Test FAILED!"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (JMenuItemToolTipKeyBindingsTest::controlDialog != nullptr) {
				$nc(JMenuItemToolTipKeyBindingsTest::controlDialog)->dispose();
			}
			if (JMenuItemToolTipKeyBindingsTest::testFrame != nullptr) {
				$nc(JMenuItemToolTipKeyBindingsTest::testFrame)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JMenuItemToolTipKeyBindingsTest::createAndShowGUI() {
	$init(JMenuItemToolTipKeyBindingsTest);
	$assignStatic(JMenuItemToolTipKeyBindingsTest::controlDialog, $new($Dialog, ($JFrame*)nullptr, "JMenuItemToolTipKeyBindingsTest"_s));
	$var($TextArea, messageArea, $new($TextArea, JMenuItemToolTipKeyBindingsTest::instructions, 15, 80, $TextArea::SCROLLBARS_BOTH));
	$nc(JMenuItemToolTipKeyBindingsTest::controlDialog)->add("North"_s, static_cast<$Component*>(messageArea));
	$var($Button, passedButton, $new($Button, "Pass"_s));
	passedButton->addActionListener($$new($JMenuItemToolTipKeyBindingsTest$1));
	$var($Button, failedButton, $new($Button, "Fail"_s));
	failedButton->addActionListener($$new($JMenuItemToolTipKeyBindingsTest$2));
	$var($Panel, buttonPanel, $new($Panel));
	buttonPanel->add("West"_s, static_cast<$Component*>(passedButton));
	buttonPanel->add("East"_s, static_cast<$Component*>(failedButton));
	$nc(JMenuItemToolTipKeyBindingsTest::controlDialog)->add("South"_s, static_cast<$Component*>(buttonPanel));
	$nc(JMenuItemToolTipKeyBindingsTest::controlDialog)->setBounds(250, 0, 500, 500);
	$nc(JMenuItemToolTipKeyBindingsTest::controlDialog)->setVisible(true);
	$assignStatic(JMenuItemToolTipKeyBindingsTest::testFrame, $new($JFrame, "JMenuItemToolTipKeyBindingsTest"_s));
	$nc(JMenuItemToolTipKeyBindingsTest::testFrame)->setSize(200, 200);
	$var($JMenuBar, jMenuBar, $new($JMenuBar));
	$var($JMenu, jMenu, $new($JMenu, "Menu"_s));
	for (int32_t i = 0; i < 3; ++i) {
		$var($JMenuItem, jMenuItem, $new($JMenuItem, $$str({"Item "_s, $$str(i)})));
		jMenuItem->setToolTipText($$str({"Tooltip "_s, $$str(i)}));
		jMenu->add(jMenuItem);
	}
	jMenuBar->add(jMenu);
	$nc(JMenuItemToolTipKeyBindingsTest::testFrame)->setJMenuBar(jMenuBar);
	$nc(JMenuItemToolTipKeyBindingsTest::testFrame)->setVisible(true);
}

void JMenuItemToolTipKeyBindingsTest::completeTest() {
	$init(JMenuItemToolTipKeyBindingsTest);
	$nc(JMenuItemToolTipKeyBindingsTest::testCompleted)->set(true);
	$synchronized(JMenuItemToolTipKeyBindingsTest::testCompleted) {
		$nc($of(JMenuItemToolTipKeyBindingsTest::testCompleted))->notifyAll();
	}
}

void JMenuItemToolTipKeyBindingsTest::waitForCompleting() {
	$init(JMenuItemToolTipKeyBindingsTest);
	$synchronized(JMenuItemToolTipKeyBindingsTest::testCompleted) {
		int64_t startTime = $System::currentTimeMillis();
		while (!$nc(JMenuItemToolTipKeyBindingsTest::testCompleted)->get()) {
			$nc($of(JMenuItemToolTipKeyBindingsTest::testCompleted))->wait(JMenuItemToolTipKeyBindingsTest::TIMEOUT);
			if ($System::currentTimeMillis() - startTime >= JMenuItemToolTipKeyBindingsTest::TIMEOUT) {
				break;
			}
		}
	}
}

void JMenuItemToolTipKeyBindingsTest::lambda$main$0() {
	$init(JMenuItemToolTipKeyBindingsTest);
	createAndShowGUI();
}

void clinit$JMenuItemToolTipKeyBindingsTest($Class* class$) {
	$assignStatic(JMenuItemToolTipKeyBindingsTest::instructions, "Verify that \"CTRL\" + \"F1\" key sequence shows/hides tool tip message\nfor menu items.\n\n1. Open pop-up menu \"Menu\", (i.e. press \"F10\").\n2. Navigate to some menu element using keyboard.\n3. Press \"CTRL\" + \"F1\" once menu item is selected.\nIf tooltip message is displayed for the item then press \"Pass\",\n otherwise press \"Fail\"."_s);
	$assignStatic(JMenuItemToolTipKeyBindingsTest::testCompleted, $new($AtomicBoolean, false));
	JMenuItemToolTipKeyBindingsTest::testResult = false;
}

JMenuItemToolTipKeyBindingsTest::JMenuItemToolTipKeyBindingsTest() {
}

$Class* JMenuItemToolTipKeyBindingsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return JMenuItemToolTipKeyBindingsTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(JMenuItemToolTipKeyBindingsTest, name, initialize, &_JMenuItemToolTipKeyBindingsTest_ClassInfo_, clinit$JMenuItemToolTipKeyBindingsTest, allocate$JMenuItemToolTipKeyBindingsTest);
	return class$;
}

$Class* JMenuItemToolTipKeyBindingsTest::class$ = nullptr;