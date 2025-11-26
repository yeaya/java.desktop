#include <bug8031573.h>

#include <bug8031573$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef INSTRUCTIONS
#undef MINUTES
#undef SOUTH

using $bug8031573$1 = ::bug8031573$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PrintStream = ::java::io::PrintStream;
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
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug8031573$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8031573$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031573::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8031573$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8031573$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031573$$Lambda$lambda$main$0::*)()>(&bug8031573$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8031573$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8031573$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8031573$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8031573$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8031573$$Lambda$lambda$main$0::class$ = nullptr;

class bug8031573$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8031573$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8031573::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8031573$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8031573$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031573$$Lambda$lambda$main$1$1::*)()>(&bug8031573$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8031573$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8031573$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8031573$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8031573$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8031573$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug8031573$$Lambda$lambda$createTestGUI$2$2 : public $ActionListener {
	$class(bug8031573$$Lambda$lambda$createTestGUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8031573::lambda$createTestGUI$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8031573$$Lambda$lambda$createTestGUI$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8031573$$Lambda$lambda$createTestGUI$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031573$$Lambda$lambda$createTestGUI$2$2::*)()>(&bug8031573$$Lambda$lambda$createTestGUI$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8031573$$Lambda$lambda$createTestGUI$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8031573$$Lambda$lambda$createTestGUI$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* bug8031573$$Lambda$lambda$createTestGUI$2$2::load$($String* name, bool initialize) {
	$loadClass(bug8031573$$Lambda$lambda$createTestGUI$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8031573$$Lambda$lambda$createTestGUI$2$2::class$ = nullptr;

class bug8031573$$Lambda$lambda$createTestGUI$3$3 : public $ActionListener {
	$class(bug8031573$$Lambda$lambda$createTestGUI$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8031573::lambda$createTestGUI$3(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8031573$$Lambda$lambda$createTestGUI$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8031573$$Lambda$lambda$createTestGUI$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031573$$Lambda$lambda$createTestGUI$3$3::*)()>(&bug8031573$$Lambda$lambda$createTestGUI$3$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8031573$$Lambda$lambda$createTestGUI$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8031573$$Lambda$lambda$createTestGUI$3$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* bug8031573$$Lambda$lambda$createTestGUI$3$3::load$($String* name, bool initialize) {
	$loadClass(bug8031573$$Lambda$lambda$createTestGUI$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8031573$$Lambda$lambda$createTestGUI$3$3::class$ = nullptr;

$FieldInfo _bug8031573_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8031573, frame)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8031573, passed)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8031573, latch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8031573, INSTRUCTIONS)},
	{}
};

$MethodInfo _bug8031573_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031573::*)()>(&bug8031573::init$))},
	{"createTestGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8031573::createTestGUI))},
	{"lambda$createTestGUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&bug8031573::lambda$createTestGUI$2))},
	{"lambda$createTestGUI$3", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&bug8031573::lambda$createTestGUI$3))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8031573::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8031573::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8031573::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8031573_InnerClassesInfo_[] = {
	{"bug8031573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8031573_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8031573",
	"java.lang.Object",
	nullptr,
	_bug8031573_FieldInfo_,
	_bug8031573_MethodInfo_,
	nullptr,
	nullptr,
	_bug8031573_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8031573$1"
};

$Object* allocate$bug8031573($Class* clazz) {
	return $of($alloc(bug8031573));
}

$volatile($JFrame*) bug8031573::frame = nullptr;
$volatile(bool) bug8031573::passed = false;
$CountDownLatch* bug8031573::latch = nullptr;
$String* bug8031573::INSTRUCTIONS = nullptr;

void bug8031573::init$() {
}

void bug8031573::main($StringArray* args) {
	$init(bug8031573);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8031573$$Lambda$lambda$main$0)));
			$init($TimeUnit);
			if (!$nc(bug8031573::latch)->await(5, $TimeUnit::MINUTES)) {
				$throwNew($RuntimeException, "Test has timed out!"_s);
			}
			if (!bug8031573::passed) {
				$throwNew($RuntimeException, "Test failed!"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8031573$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8031573::createTestGUI() {
	$init(bug8031573);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug8031573::frame, $new($JFrame, "bug8031573"_s));
	$var($JMenuBar, bar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "Menu"_s));
	$var($JCheckBoxMenuItem, checkBoxMenuItem, $new($JCheckBoxMenuItem, "JCheckBoxMenuItem"_s));
	checkBoxMenuItem->setSelected(true);
	menu->add(static_cast<$JMenuItem*>(checkBoxMenuItem));
	bar->add(menu);
	$nc(bug8031573::frame)->setJMenuBar(bar);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JTextComponent, textComponent, $new($JTextArea, bug8031573::INSTRUCTIONS));
	textComponent->setEditable(false);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(textComponent), $of($BorderLayout::CENTER));
	$var($JPanel, buttonsPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(bug8031573$$Lambda$lambda$createTestGUI$2$2)));
	$var($JButton, failsButton, $new($JButton, "Fail"_s));
	failsButton->addActionListener(static_cast<$ActionListener*>($$new(bug8031573$$Lambda$lambda$createTestGUI$3$3)));
	buttonsPanel->add(static_cast<$Component*>(passButton));
	buttonsPanel->add(static_cast<$Component*>(failsButton));
	panel->add(static_cast<$Component*>(buttonsPanel), $of($BorderLayout::SOUTH));
	$nc($($nc(bug8031573::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(bug8031573::frame)->addWindowListener($$new($bug8031573$1));
	$nc(bug8031573::frame)->pack();
	$nc(bug8031573::frame)->setLocationRelativeTo(nullptr);
	$nc(bug8031573::frame)->setVisible(true);
}

void bug8031573::lambda$createTestGUI$3($ActionEvent* e) {
	$init(bug8031573);
	bug8031573::passed = false;
	$nc(bug8031573::latch)->countDown();
}

void bug8031573::lambda$createTestGUI$2($ActionEvent* e) {
	$init(bug8031573);
	$nc($System::out)->println("Test passed!"_s);
	bug8031573::passed = true;
	$nc(bug8031573::latch)->countDown();
}

void bug8031573::lambda$main$1() {
	$init(bug8031573);
	if (bug8031573::frame != nullptr) {
		$nc(bug8031573::frame)->dispose();
	}
}

void bug8031573::lambda$main$0() {
	$init(bug8031573);
	createTestGUI();
}

void clinit$bug8031573($Class* class$) {
	$assignStatic(bug8031573::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that high resolution system icons are used for JCheckBoxMenuItem on HiDPI displays.\nIf the display does not support HiDPI mode press PASS.\n1. Run the test on HiDPI Display.\n2. Open the Menu.\n3. Check that the icon on the JCheckBoxMenuItem is smooth.\n   If so, press PASS, else press FAIL.\n"_s);
	bug8031573::passed = false;
	$assignStatic(bug8031573::latch, $new($CountDownLatch, 1));
}

bug8031573::bug8031573() {
}

$Class* bug8031573::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8031573$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8031573$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug8031573$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug8031573$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug8031573$$Lambda$lambda$createTestGUI$2$2::classInfo$.name)) {
			return bug8031573$$Lambda$lambda$createTestGUI$2$2::load$(name, initialize);
		}
		if (name->equals(bug8031573$$Lambda$lambda$createTestGUI$3$3::classInfo$.name)) {
			return bug8031573$$Lambda$lambda$createTestGUI$3$3::load$(name, initialize);
		}
	}
	$loadClass(bug8031573, name, initialize, &_bug8031573_ClassInfo_, clinit$bug8031573, allocate$bug8031573);
	return class$;
}

$Class* bug8031573::class$ = nullptr;