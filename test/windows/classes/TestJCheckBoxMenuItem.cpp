#include <TestJCheckBoxMenuItem.h>

#include <TestJCheckBoxMenuItem$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
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
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef LEADING
#undef MINUTES
#undef VK_K

using $TestJCheckBoxMenuItem$1 = ::TestJCheckBoxMenuItem$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
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
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestJCheckBoxMenuItem$$Lambda$createInstructionUI : public $Runnable {
	$class(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJCheckBoxMenuItem::createInstructionUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJCheckBoxMenuItem$$Lambda$createInstructionUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJCheckBoxMenuItem$$Lambda$createInstructionUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJCheckBoxMenuItem$$Lambda$createInstructionUI::*)()>(&TestJCheckBoxMenuItem$$Lambda$createInstructionUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJCheckBoxMenuItem$$Lambda$createInstructionUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJCheckBoxMenuItem$$Lambda$createInstructionUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJCheckBoxMenuItem$$Lambda$createInstructionUI::load$($String* name, bool initialize) {
	$loadClass(TestJCheckBoxMenuItem$$Lambda$createInstructionUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$createInstructionUI::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$createTestUI$1 : public $Runnable {
	$class(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJCheckBoxMenuItem::createTestUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJCheckBoxMenuItem$$Lambda$createTestUI$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJCheckBoxMenuItem$$Lambda$createTestUI$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJCheckBoxMenuItem$$Lambda$createTestUI$1::*)()>(&TestJCheckBoxMenuItem$$Lambda$createTestUI$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJCheckBoxMenuItem$$Lambda$createTestUI$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJCheckBoxMenuItem$$Lambda$createTestUI$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJCheckBoxMenuItem$$Lambda$createTestUI$1::load$($String* name, bool initialize) {
	$loadClass(TestJCheckBoxMenuItem$$Lambda$createTestUI$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$createTestUI$1::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2 : public $ActionListener {
	$class(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJCheckBoxMenuItem::lambda$createInstructionUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::*)()>(&TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::load$($String* name, bool initialize) {
	$loadClass(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::class$ = nullptr;

class TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3 : public $ActionListener {
	$class(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJCheckBoxMenuItem::lambda$createInstructionUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::*)()>(&TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::load$($String* name, bool initialize) {
	$loadClass(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::class$ = nullptr;

$FieldInfo _TestJCheckBoxMenuItem_FieldInfo_[] = {
	{"instructionFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, instructionFrame)},
	{"testFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, testFrame)},
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJCheckBoxMenuItem, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJCheckBoxMenuItem, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, INSTRUCTIONS)},
	{"synthStyleXML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJCheckBoxMenuItem, synthStyleXML)},
	{}
};

$MethodInfo _TestJCheckBoxMenuItem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJCheckBoxMenuItem::*)()>(&TestJCheckBoxMenuItem::init$))},
	{"createInstructionUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJCheckBoxMenuItem::createInstructionUI))},
	{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJCheckBoxMenuItem::createTestUI))},
	{"disposeUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJCheckBoxMenuItem::disposeUI))},
	{"lambda$createInstructionUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJCheckBoxMenuItem::lambda$createInstructionUI$0))},
	{"lambda$createInstructionUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJCheckBoxMenuItem::lambda$createInstructionUI$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJCheckBoxMenuItem::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestJCheckBoxMenuItem_InnerClassesInfo_[] = {
	{"TestJCheckBoxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJCheckBoxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJCheckBoxMenuItem",
	"java.lang.Object",
	nullptr,
	_TestJCheckBoxMenuItem_FieldInfo_,
	_TestJCheckBoxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_TestJCheckBoxMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJCheckBoxMenuItem$1"
};

$Object* allocate$TestJCheckBoxMenuItem($Class* clazz) {
	return $of($alloc(TestJCheckBoxMenuItem));
}

$JFrame* TestJCheckBoxMenuItem::instructionFrame = nullptr;
$JFrame* TestJCheckBoxMenuItem::testFrame = nullptr;
$volatile(bool) TestJCheckBoxMenuItem::testResult = false;
$volatile($CountDownLatch*) TestJCheckBoxMenuItem::countDownLatch = nullptr;
$String* TestJCheckBoxMenuItem::INSTRUCTIONS = nullptr;
$String* TestJCheckBoxMenuItem::synthStyleXML = nullptr;

void TestJCheckBoxMenuItem::init$() {
}

void TestJCheckBoxMenuItem::main($StringArray* args) {
	$init(TestJCheckBoxMenuItem);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestJCheckBoxMenuItem::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJCheckBoxMenuItem$$Lambda$createInstructionUI)));
	$var($SynthLookAndFeel, lookAndFeel, $new($SynthLookAndFeel));
	lookAndFeel->load($$new($ByteArrayInputStream, $($nc(TestJCheckBoxMenuItem::synthStyleXML)->getBytes("UTF8"_s))), TestJCheckBoxMenuItem::class$);
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(lookAndFeel));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, ignored, $catch());
		$init($System);
		$nc($System::out)->println("Synth L&F could not be set, so this test cannot be run in this scenario "_s);
		return;
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJCheckBoxMenuItem$$Lambda$createTestUI$1)));
	$init($TimeUnit);
	$nc(TestJCheckBoxMenuItem::countDownLatch)->await(15, $TimeUnit::MINUTES);
	disposeUI();
	if (!TestJCheckBoxMenuItem::testResult) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJCheckBoxMenuItem::createInstructionUI() {
	$init(TestJCheckBoxMenuItem);
	$useLocalCurrentObjectStackCache();
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TestJCheckBoxMenuItem::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	$nc(TestJCheckBoxMenuItem::instructionFrame)->pack();
	$nc(TestJCheckBoxMenuItem::instructionFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(TestJCheckBoxMenuItem::instructionFrame)->add(static_cast<$Component*>(mainControlPanel));
	$nc(TestJCheckBoxMenuItem::instructionFrame)->pack();
	$nc(TestJCheckBoxMenuItem::instructionFrame)->addWindowListener($$new($TestJCheckBoxMenuItem$1));
	$nc(TestJCheckBoxMenuItem::instructionFrame)->setVisible(true);
}

void TestJCheckBoxMenuItem::createTestUI() {
	$init(TestJCheckBoxMenuItem);
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($JMenu, menu, $new($JMenu, "Menu"_s));
	$var($JCheckBoxMenuItem, checkBoxMenuItem, $new($JCheckBoxMenuItem));
	checkBoxMenuItem->setSelected(false);
	checkBoxMenuItem->setMnemonic($KeyEvent::VK_K);
	checkBoxMenuItem->setText("JCheckBoxMenuItem Sample Text"_s);
	checkBoxMenuItem->setHorizontalTextPosition($JCheckBoxMenuItem::LEADING);
	checkBoxMenuItem->setVerticalTextPosition($JCheckBoxMenuItem::CENTER);
	menu->add(static_cast<$JMenuItem*>(checkBoxMenuItem));
	menuBar->add(menu);
	$nc(TestJCheckBoxMenuItem::testFrame)->setJMenuBar(menuBar);
	int32_t var$1 = $nc(TestJCheckBoxMenuItem::instructionFrame)->getX();
	int32_t var$0 = var$1 + $nc(TestJCheckBoxMenuItem::instructionFrame)->getWidth();
	$nc(TestJCheckBoxMenuItem::testFrame)->setLocation(var$0, $nc(TestJCheckBoxMenuItem::instructionFrame)->getY());
	int32_t var$2 = $nc(TestJCheckBoxMenuItem::instructionFrame)->getWidth();
	$nc(TestJCheckBoxMenuItem::testFrame)->setPreferredSize($$new($Dimension, var$2, $nc(TestJCheckBoxMenuItem::instructionFrame)->getHeight()));
	$nc(TestJCheckBoxMenuItem::testFrame)->pack();
	$nc(TestJCheckBoxMenuItem::testFrame)->setTitle("Test"_s);
	$nc(TestJCheckBoxMenuItem::testFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(TestJCheckBoxMenuItem::testFrame)->setVisible(true);
}

void TestJCheckBoxMenuItem::disposeUI() {
	$init(TestJCheckBoxMenuItem);
	$nc(TestJCheckBoxMenuItem::instructionFrame)->dispose();
	$nc(TestJCheckBoxMenuItem::testFrame)->dispose();
}

void TestJCheckBoxMenuItem::lambda$createInstructionUI$1($ActionEvent* e) {
	$init(TestJCheckBoxMenuItem);
	$nc(TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

void TestJCheckBoxMenuItem::lambda$createInstructionUI$0($ActionEvent* e) {
	$init(TestJCheckBoxMenuItem);
	TestJCheckBoxMenuItem::testResult = true;
	$nc(TestJCheckBoxMenuItem::countDownLatch)->countDown();
}

void clinit$TestJCheckBoxMenuItem($Class* class$) {
	$assignStatic(TestJCheckBoxMenuItem::INSTRUCTIONS, "INSTRUCTIONS:\n\nClick on the menu \"Menu\" in Test frame. Verify that the \nJCheckBoxMenuItem is resized properly and text \n\"JCheckBoxMenuItem Sample Text\" is not truncated.\nIf yes, Press Pass, Otherwise, Press Fail."_s);
	$assignStatic(TestJCheckBoxMenuItem::synthStyleXML, "<synth><style id=\"Default\"><font name=\"Dialog\" size=\"14\" /></style><bind style=\"Default\" type=\"region\" key=\".*\" /><style id=\"Check Box Menu Item\"><imageIcon id=\"CheckBoxMenuItem_Check_Icon_Selected\" path=\"Check_Icon.png\" /><insets top=\"4\" left=\"9\" bottom=\"4\" right=\"9\" /><state><property key=\"CheckBoxMenuItem.checkIcon\" value=\"CheckBoxMenuItem_Check_Icon_Selected\" /><imagePainter method=\"checkBoxMenuItemBackground\" path=\"MenuItem_Selected.png\" sourceInsets=\"2 2 2 2\" paintCenter=\"true\" stretch=\"true\" center=\"false\" /></state></style><bind style=\"Check Box Menu Item\" type=\"region\" key=\"CheckBoxMenuItem\" /></synth>"_s);
	$assignStatic(TestJCheckBoxMenuItem::instructionFrame, $new($JFrame));
	$assignStatic(TestJCheckBoxMenuItem::testFrame, $new($JFrame));
	TestJCheckBoxMenuItem::testResult = false;
}

TestJCheckBoxMenuItem::TestJCheckBoxMenuItem() {
}

$Class* TestJCheckBoxMenuItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJCheckBoxMenuItem$$Lambda$createInstructionUI::classInfo$.name)) {
			return TestJCheckBoxMenuItem$$Lambda$createInstructionUI::load$(name, initialize);
		}
		if (name->equals(TestJCheckBoxMenuItem$$Lambda$createTestUI$1::classInfo$.name)) {
			return TestJCheckBoxMenuItem$$Lambda$createTestUI$1::load$(name, initialize);
		}
		if (name->equals(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::classInfo$.name)) {
			return TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$0$2::load$(name, initialize);
		}
		if (name->equals(TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::classInfo$.name)) {
			return TestJCheckBoxMenuItem$$Lambda$lambda$createInstructionUI$1$3::load$(name, initialize);
		}
	}
	$loadClass(TestJCheckBoxMenuItem, name, initialize, &_TestJCheckBoxMenuItem_ClassInfo_, clinit$TestJCheckBoxMenuItem, allocate$TestJCheckBoxMenuItem);
	return class$;
}

$Class* TestJCheckBoxMenuItem::class$ = nullptr;