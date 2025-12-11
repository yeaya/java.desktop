#include <TestNimbusOverride.h>

#include <TestNimbusOverride$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef VK_SPACE

using $TestNimbusOverride$1 = ::TestNimbusOverride$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Keymap = ::javax::swing::text::Keymap;

class TestNimbusOverride$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestNimbusOverride$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestNimbusOverride::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestNimbusOverride$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestNimbusOverride$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestNimbusOverride$$Lambda$lambda$main$0::*)()>(&TestNimbusOverride$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestNimbusOverride$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestNimbusOverride$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestNimbusOverride$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestNimbusOverride$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestNimbusOverride$$Lambda$lambda$main$0::class$ = nullptr;

class TestNimbusOverride$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestNimbusOverride$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestNimbusOverride::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestNimbusOverride$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestNimbusOverride$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestNimbusOverride$$Lambda$lambda$main$1$1::*)()>(&TestNimbusOverride$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestNimbusOverride$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestNimbusOverride$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestNimbusOverride$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestNimbusOverride$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestNimbusOverride$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestNimbusOverride_FieldInfo_[] = {
	{"tf", "LTestNimbusOverride;", nullptr, $PRIVATE | $STATIC, $staticField(TestNimbusOverride, tf)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestNimbusOverride, passed)},
	{}
};

$MethodInfo _TestNimbusOverride_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestNimbusOverride::*)()>(&TestNimbusOverride::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestNimbusOverride::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestNimbusOverride::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestNimbusOverride::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestNimbusOverride_InnerClassesInfo_[] = {
	{"TestNimbusOverride$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestNimbusOverride_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestNimbusOverride",
	"javax.swing.JFrame",
	nullptr,
	_TestNimbusOverride_FieldInfo_,
	_TestNimbusOverride_MethodInfo_,
	nullptr,
	nullptr,
	_TestNimbusOverride_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestNimbusOverride$1"
};

$Object* allocate$TestNimbusOverride($Class* clazz) {
	return $of($alloc(TestNimbusOverride));
}

TestNimbusOverride* TestNimbusOverride::tf = nullptr;
bool TestNimbusOverride::passed = false;

void TestNimbusOverride::main($StringArray* args) {
	$init(TestNimbusOverride);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestNimbusOverride$$Lambda$lambda$main$0)));
			robot->setAutoDelay(100);
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_SPACE);
			robot->keyRelease($KeyEvent::VK_SPACE);
			robot->waitForIdle();
			if (!TestNimbusOverride::passed) {
				$throwNew($RuntimeException, "Setting Nimbus.Overrides property affects custom keymap installation"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestNimbusOverride$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestNimbusOverride::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$var($JEditorPane, pp, $new($JEditorPane));
	$var($UIDefaults, defaults, $new($UIDefaults));
	pp->putClientProperty("Nimbus.Overrides"_s, defaults);
	$var($JPanel, contentPanel, $new($JPanel));
	contentPanel->setLayout($$new($BorderLayout));
	setContentPane(contentPanel);
	contentPanel->setPreferredSize($$new($Dimension, 400, 300));
	$init($BorderLayout);
	contentPanel->add(static_cast<$Component*>(pp), $of($BorderLayout::CENTER));
	$var($Keymap, origKeymap, pp->getKeymap());
	$var($Keymap, km, $JEditorPane::addKeymap("Test keymap"_s, origKeymap));
	$var($KeyStroke, var$0, $KeyStroke::getKeyStroke(u' '));
	$nc(km)->addActionForKeyStroke(var$0, $$new($TestNimbusOverride$1, this, "SHOW_SPACE"_s));
	pp->setKeymap(km);
}

void TestNimbusOverride::lambda$main$1() {
	$init(TestNimbusOverride);
	$nc(TestNimbusOverride::tf)->dispose();
}

void TestNimbusOverride::lambda$main$0() {
	$init(TestNimbusOverride);
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$assignStatic(TestNimbusOverride::tf, $new(TestNimbusOverride));
	$nc(TestNimbusOverride::tf)->pack();
	$nc(TestNimbusOverride::tf)->setVisible(true);
}

void clinit$TestNimbusOverride($Class* class$) {
	TestNimbusOverride::passed = false;
}

TestNimbusOverride::TestNimbusOverride() {
}

$Class* TestNimbusOverride::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestNimbusOverride$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestNimbusOverride$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestNimbusOverride$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestNimbusOverride$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestNimbusOverride, name, initialize, &_TestNimbusOverride_ClassInfo_, clinit$TestNimbusOverride, allocate$TestNimbusOverride);
	return class$;
}

$Class* TestNimbusOverride::class$ = nullptr;