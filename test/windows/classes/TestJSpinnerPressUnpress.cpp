#include <TestJSpinnerPressUnpress.h>

#include <TestJSpinnerPressUnpress$1.h>
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
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $TestJSpinnerPressUnpress$1 = ::TestJSpinnerPressUnpress$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestJSpinnerPressUnpress$$Lambda$createUI : public $Runnable {
	$class(TestJSpinnerPressUnpress$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSpinnerPressUnpress::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerPressUnpress$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSpinnerPressUnpress$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerPressUnpress$$Lambda$createUI::*)()>(&TestJSpinnerPressUnpress$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerPressUnpress$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerPressUnpress$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJSpinnerPressUnpress$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerPressUnpress$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$createUI::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$dispose$1 : public $Runnable {
	$class(TestJSpinnerPressUnpress$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerPressUnpress$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJSpinnerPressUnpress$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSpinnerPressUnpress$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestJSpinnerPressUnpress$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerPressUnpress$$Lambda$dispose$1::*)($Window*)>(&TestJSpinnerPressUnpress$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerPressUnpress$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerPressUnpress$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJSpinnerPressUnpress$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerPressUnpress$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$dispose$1::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2 : public $ActionListener {
	$class(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJSpinnerPressUnpress::lambda$createUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::*)()>(&TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::class$ = nullptr;

class TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3 : public $ActionListener {
	$class(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJSpinnerPressUnpress::lambda$createUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::*)()>(&TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::class$ = nullptr;

$FieldInfo _TestJSpinnerPressUnpress_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSpinnerPressUnpress, mainFrame)},
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJSpinnerPressUnpress, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJSpinnerPressUnpress, countDownLatch)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSpinnerPressUnpress, GTK_LAF_CLASS)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSpinnerPressUnpress, INSTRUCTIONS)},
	{}
};

$MethodInfo _TestJSpinnerPressUnpress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerPressUnpress::*)()>(&TestJSpinnerPressUnpress::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJSpinnerPressUnpress::createUI))},
	{"lambda$createUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJSpinnerPressUnpress::lambda$createUI$0))},
	{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJSpinnerPressUnpress::lambda$createUI$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJSpinnerPressUnpress::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestJSpinnerPressUnpress_InnerClassesInfo_[] = {
	{"TestJSpinnerPressUnpress$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJSpinnerPressUnpress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJSpinnerPressUnpress",
	"java.lang.Object",
	nullptr,
	_TestJSpinnerPressUnpress_FieldInfo_,
	_TestJSpinnerPressUnpress_MethodInfo_,
	nullptr,
	nullptr,
	_TestJSpinnerPressUnpress_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJSpinnerPressUnpress$1"
};

$Object* allocate$TestJSpinnerPressUnpress($Class* clazz) {
	return $of($alloc(TestJSpinnerPressUnpress));
}

$JFrame* TestJSpinnerPressUnpress::mainFrame = nullptr;
$volatile(bool) TestJSpinnerPressUnpress::testResult = false;
$volatile($CountDownLatch*) TestJSpinnerPressUnpress::countDownLatch = nullptr;
$String* TestJSpinnerPressUnpress::GTK_LAF_CLASS = nullptr;
$String* TestJSpinnerPressUnpress::INSTRUCTIONS = nullptr;

void TestJSpinnerPressUnpress::init$() {
}

void TestJSpinnerPressUnpress::main($StringArray* args) {
	$init(TestJSpinnerPressUnpress);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Linux"_s)) {
		$init($System);
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	$assignStatic(TestJSpinnerPressUnpress::countDownLatch, $new($CountDownLatch, 1));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestJSpinnerPressUnpress::GTK_LAF_CLASS)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException&) {
						$var($UnsupportedLookAndFeelException, ignored, $catch());
						$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
						return;
					}
				}
			}
		}
	}
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TestJSpinnerPressUnpress$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(TestJSpinnerPressUnpress::countDownLatch)->await(15, $TimeUnit::MINUTES);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TestJSpinnerPressUnpress$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestJSpinnerPressUnpress::mainFrame)))));
	if (!TestJSpinnerPressUnpress::testResult) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJSpinnerPressUnpress::createUI() {
	$init(TestJSpinnerPressUnpress);
	$useLocalCurrentObjectStackCache();
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>($$new($JSpinner)), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TestJSpinnerPressUnpress::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	$nc(TestJSpinnerPressUnpress::mainFrame)->add(static_cast<$Component*>(mainControlPanel));
	$nc(TestJSpinnerPressUnpress::mainFrame)->pack();
	$nc(TestJSpinnerPressUnpress::mainFrame)->addWindowListener($$new($TestJSpinnerPressUnpress$1));
	$nc(TestJSpinnerPressUnpress::mainFrame)->setVisible(true);
}

void TestJSpinnerPressUnpress::lambda$createUI$1($ActionEvent* e) {
	$init(TestJSpinnerPressUnpress);
	$nc(TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

void TestJSpinnerPressUnpress::lambda$createUI$0($ActionEvent* e) {
	$init(TestJSpinnerPressUnpress);
	TestJSpinnerPressUnpress::testResult = true;
	$nc(TestJSpinnerPressUnpress::countDownLatch)->countDown();
}

void clinit$TestJSpinnerPressUnpress($Class* class$) {
	$assignStatic(TestJSpinnerPressUnpress::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	$assignStatic(TestJSpinnerPressUnpress::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that when spinner up/down button is pressed to change\nthe spinner value, the button\'s rendering is changed to show\nthe pressed state. If yes, Press Pass, Otherwise, Press Fail."_s);
	$assignStatic(TestJSpinnerPressUnpress::mainFrame, $new($JFrame));
	TestJSpinnerPressUnpress::testResult = false;
}

TestJSpinnerPressUnpress::TestJSpinnerPressUnpress() {
}

$Class* TestJSpinnerPressUnpress::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJSpinnerPressUnpress$$Lambda$createUI::classInfo$.name)) {
			return TestJSpinnerPressUnpress$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerPressUnpress$$Lambda$dispose$1::classInfo$.name)) {
			return TestJSpinnerPressUnpress$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::classInfo$.name)) {
			return TestJSpinnerPressUnpress$$Lambda$lambda$createUI$0$2::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::classInfo$.name)) {
			return TestJSpinnerPressUnpress$$Lambda$lambda$createUI$1$3::load$(name, initialize);
		}
	}
	$loadClass(TestJSpinnerPressUnpress, name, initialize, &_TestJSpinnerPressUnpress_ClassInfo_, clinit$TestJSpinnerPressUnpress, allocate$TestJSpinnerPressUnpress);
	return class$;
}

$Class* TestJSpinnerPressUnpress::class$ = nullptr;