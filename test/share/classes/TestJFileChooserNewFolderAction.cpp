#include <TestJFileChooserNewFolderAction.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestJFileChooserNewFolderAction$$Lambda$createInstructionUI : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::createInstructionUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJFileChooserNewFolderAction$$Lambda$createInstructionUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::*)()>(&TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJFileChooserNewFolderAction$$Lambda$createInstructionUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::load$($String* name, bool initialize) {
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$createTestUI$1 : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::createTestUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJFileChooserNewFolderAction$$Lambda$createTestUI$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::*)()>(&TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJFileChooserNewFolderAction$$Lambda$createTestUI$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::load$($String* name, bool initialize) {
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$disposeUI$2 : public $Runnable {
	$class(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJFileChooserNewFolderAction::disposeUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJFileChooserNewFolderAction$$Lambda$disposeUI$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::*)()>(&TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJFileChooserNewFolderAction$$Lambda$disposeUI$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::load$($String* name, bool initialize) {
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3 : public $ActionListener {
	$class(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJFileChooserNewFolderAction::lambda$createInstructionUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::*)()>(&TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::load$($String* name, bool initialize) {
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::class$ = nullptr;

class TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4 : public $ActionListener {
	$class(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJFileChooserNewFolderAction::lambda$createInstructionUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::*)()>(&TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::load$($String* name, bool initialize) {
	$loadClass(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::class$ = nullptr;

$FieldInfo _TestJFileChooserNewFolderAction_FieldInfo_[] = {
	{"instructionFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, instructionFrame)},
	{"lafName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, lafName)},
	{"testPassed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJFileChooserNewFolderAction, testPassed)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJFileChooserNewFolderAction, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJFileChooserNewFolderAction, INSTRUCTIONS)},
	{}
};

$MethodInfo _TestJFileChooserNewFolderAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJFileChooserNewFolderAction::*)()>(&TestJFileChooserNewFolderAction::init$))},
	{"createInstructionUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJFileChooserNewFolderAction::createInstructionUI))},
	{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJFileChooserNewFolderAction::createTestUI))},
	{"disposeUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJFileChooserNewFolderAction::disposeUI))},
	{"lambda$createInstructionUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJFileChooserNewFolderAction::lambda$createInstructionUI$0))},
	{"lambda$createInstructionUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJFileChooserNewFolderAction::lambda$createInstructionUI$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJFileChooserNewFolderAction::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestJFileChooserNewFolderAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJFileChooserNewFolderAction",
	"java.lang.Object",
	nullptr,
	_TestJFileChooserNewFolderAction_FieldInfo_,
	_TestJFileChooserNewFolderAction_MethodInfo_
};

$Object* allocate$TestJFileChooserNewFolderAction($Class* clazz) {
	return $of($alloc(TestJFileChooserNewFolderAction));
}

$JFrame* TestJFileChooserNewFolderAction::instructionFrame = nullptr;
$String* TestJFileChooserNewFolderAction::lafName = nullptr;
$volatile(bool) TestJFileChooserNewFolderAction::testPassed = false;
$volatile($CountDownLatch*) TestJFileChooserNewFolderAction::countDownLatch = nullptr;
$String* TestJFileChooserNewFolderAction::INSTRUCTIONS = nullptr;

void TestJFileChooserNewFolderAction::init$() {
}

void TestJFileChooserNewFolderAction::main($StringArray* args) {
	$init(TestJFileChooserNewFolderAction);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Mac"_s)) {
		$nc($System::out)->println("This test is meant for Mac platform only"_s);
		return;
	}
	$assignStatic(TestJFileChooserNewFolderAction::countDownLatch, $new($CountDownLatch, 1));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestJFileChooserNewFolderAction::lafName)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException& ignored) {
						$nc($System::out)->println("Aqua L&F could not be set, so this test can not be run in this scenario "_s);
						return;
					}
				}
			}
		}
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1)));
	$init($TimeUnit);
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->await(15, $TimeUnit::MINUTES);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2)));
	if (!TestJFileChooserNewFolderAction::testPassed) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJFileChooserNewFolderAction::createInstructionUI() {
	$init(TestJFileChooserNewFolderAction);
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
	instructionTextArea->setText(TestJFileChooserNewFolderAction::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->pack();
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->add(static_cast<$Component*>(mainControlPanel));
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->pack();
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->setVisible(true);
}

void TestJFileChooserNewFolderAction::createTestUI() {
	$init(TestJFileChooserNewFolderAction);
	$$new($JFileChooser)->showSaveDialog(nullptr);
}

void TestJFileChooserNewFolderAction::disposeUI() {
	$init(TestJFileChooserNewFolderAction);
	$nc(TestJFileChooserNewFolderAction::instructionFrame)->dispose();
}

void TestJFileChooserNewFolderAction::lambda$createInstructionUI$1($ActionEvent* e) {
	$init(TestJFileChooserNewFolderAction);
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->countDown();
}

void TestJFileChooserNewFolderAction::lambda$createInstructionUI$0($ActionEvent* e) {
	$init(TestJFileChooserNewFolderAction);
	TestJFileChooserNewFolderAction::testPassed = true;
	$nc(TestJFileChooserNewFolderAction::countDownLatch)->countDown();
}

void clinit$TestJFileChooserNewFolderAction($Class* class$) {
	$assignStatic(TestJFileChooserNewFolderAction::lafName, "AquaLookAndFeel"_s);
	$assignStatic(TestJFileChooserNewFolderAction::INSTRUCTIONS, "INSTRUCTIONS:\n\nMake sure there is no folder named \"uninitializedValue\" in\nJFileChooser directory, else change JFileChooser directory.\nClick on \"New Folder\" button in JFileChooser. \nA JOptionPane will be opened to write the name of the folder.\nPress \"ESC\" key to close the JOptionPane without creating \nnew folder. Verify that JFileChooser current directory has not\nchanged and there is no folder named \"uninitializedValue\"\ncreated in the JFileChooser directory.\nIf yes, Press Pass, Otherwise, Press Fail.\n"_s);
	$assignStatic(TestJFileChooserNewFolderAction::instructionFrame, $new($JFrame));
	TestJFileChooserNewFolderAction::testPassed = false;
}

TestJFileChooserNewFolderAction::TestJFileChooserNewFolderAction() {
}

$Class* TestJFileChooserNewFolderAction::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::classInfo$.name)) {
			return TestJFileChooserNewFolderAction$$Lambda$createInstructionUI::load$(name, initialize);
		}
		if (name->equals(TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::classInfo$.name)) {
			return TestJFileChooserNewFolderAction$$Lambda$createTestUI$1::load$(name, initialize);
		}
		if (name->equals(TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::classInfo$.name)) {
			return TestJFileChooserNewFolderAction$$Lambda$disposeUI$2::load$(name, initialize);
		}
		if (name->equals(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::classInfo$.name)) {
			return TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$0$3::load$(name, initialize);
		}
		if (name->equals(TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::classInfo$.name)) {
			return TestJFileChooserNewFolderAction$$Lambda$lambda$createInstructionUI$1$4::load$(name, initialize);
		}
	}
	$loadClass(TestJFileChooserNewFolderAction, name, initialize, &_TestJFileChooserNewFolderAction_ClassInfo_, clinit$TestJFileChooserNewFolderAction, allocate$TestJFileChooserNewFolderAction);
	return class$;
}

$Class* TestJFileChooserNewFolderAction::class$ = nullptr;