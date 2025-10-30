#include <TestTranslucentLabelText.h>

#include <TestTranslucentLabelText$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef PLAIN
#undef SOUTH

using $TestTranslucentLabelText$1 = ::TestTranslucentLabelText$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestTranslucentLabelText$$Lambda$lambda$doTest$0 : public $ActionListener {
	$class(TestTranslucentLabelText$$Lambda$lambda$doTest$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTranslucentLabelText::lambda$doTest$0(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTranslucentLabelText$$Lambda$lambda$doTest$0>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestTranslucentLabelText$$Lambda$lambda$doTest$0::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$0, dialog)},
	{}
};
$MethodInfo TestTranslucentLabelText$$Lambda$lambda$doTest$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText$$Lambda$lambda$doTest$0::*)($JDialog*)>(&TestTranslucentLabelText$$Lambda$lambda$doTest$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTranslucentLabelText$$Lambda$lambda$doTest$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTranslucentLabelText$$Lambda$lambda$doTest$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$0::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$$Lambda$lambda$doTest$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$0::class$ = nullptr;

class TestTranslucentLabelText$$Lambda$lambda$doTest$1$1 : public $ActionListener {
	$class(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTranslucentLabelText::lambda$doTest$1(dialog, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTranslucentLabelText$$Lambda$lambda$doTest$1$1>());
	}
	$JDialog* dialog = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::fieldInfos[2] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1, dialog)},
	{}
};
$MethodInfo TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::*)($JDialog*)>(&TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTranslucentLabelText$$Lambda$lambda$doTest$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::class$ = nullptr;

class TestTranslucentLabelText$$Lambda$lambda$doTest$2$2 : public $ActionListener {
	$class(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton) {
		$set(this, testButton, testButton);
		$set(this, action, action);
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestTranslucentLabelText::lambda$doTest$2(testButton, action, passButton, failButton, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTranslucentLabelText$$Lambda$lambda$doTest$2$2>());
	}
	$JButton* testButton = nullptr;
	$Runnable* action = nullptr;
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::fieldInfos[5] = {
	{"testButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, testButton)},
	{"action", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, action)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, failButton)},
	{}
};
$MethodInfo TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::*)($JButton*,$Runnable*,$JButton*,$JButton*)>(&TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTranslucentLabelText$$Lambda$lambda$doTest$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::class$ = nullptr;

class TestTranslucentLabelText$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(TestTranslucentLabelText$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTranslucentLabelText::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTranslucentLabelText$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestTranslucentLabelText$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText$$Lambda$lambda$main$3$3::*)()>(&TestTranslucentLabelText$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTranslucentLabelText$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTranslucentLabelText$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestTranslucentLabelText$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTranslucentLabelText$$Lambda$lambda$main$3$3::class$ = nullptr;

class TestTranslucentLabelText$$Lambda$runTest$4 : public $Runnable {
	$class(TestTranslucentLabelText$$Lambda$runTest$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTranslucentLabelText::runTest();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTranslucentLabelText$$Lambda$runTest$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestTranslucentLabelText$$Lambda$runTest$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText$$Lambda$runTest$4::*)()>(&TestTranslucentLabelText$$Lambda$runTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTranslucentLabelText$$Lambda$runTest$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTranslucentLabelText$$Lambda$runTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestTranslucentLabelText$$Lambda$runTest$4::load$($String* name, bool initialize) {
	$loadClass(TestTranslucentLabelText$$Lambda$runTest$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTranslucentLabelText$$Lambda$runTest$4::class$ = nullptr;

$FieldInfo _TestTranslucentLabelText_FieldInfo_[] = {
	{"background", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, background)},
	{"foreground", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, foreground)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, font)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, frame)},
	{"testResult", "Z", nullptr, $STATIC, $staticField(TestTranslucentLabelText, testResult)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(TestTranslucentLabelText, latch)},
	{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, mainThread)},
	{"testPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, testPassed)},
	{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestTranslucentLabelText, testGeneratedInterrupt)},
	{}
};

$MethodInfo _TestTranslucentLabelText_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTranslucentLabelText::*)()>(&TestTranslucentLabelText::init$))},
	{"create", "(Ljava/lang/String;)Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JLabel*(*)($String*)>(&TestTranslucentLabelText::create))},
	{"doTest", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Runnable*)>(&TestTranslucentLabelText::doTest))},
	{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&TestTranslucentLabelText::fail))},
	{"lambda$doTest$0", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&TestTranslucentLabelText::lambda$doTest$0))},
	{"lambda$doTest$1", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JDialog*,$ActionEvent*)>(&TestTranslucentLabelText::lambda$doTest$1))},
	{"lambda$doTest$2", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$Runnable*,$JButton*,$JButton*,$ActionEvent*)>(&TestTranslucentLabelText::lambda$doTest$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestTranslucentLabelText::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestTranslucentLabelText::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&TestTranslucentLabelText::pass))},
	{"runTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestTranslucentLabelText::runTest))},
	{}
};

$InnerClassInfo _TestTranslucentLabelText_InnerClassesInfo_[] = {
	{"TestTranslucentLabelText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTranslucentLabelText_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestTranslucentLabelText",
	"java.lang.Object",
	nullptr,
	_TestTranslucentLabelText_FieldInfo_,
	_TestTranslucentLabelText_MethodInfo_,
	nullptr,
	nullptr,
	_TestTranslucentLabelText_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestTranslucentLabelText$1"
};

$Object* allocate$TestTranslucentLabelText($Class* clazz) {
	return $of($alloc(TestTranslucentLabelText));
}

$Color* TestTranslucentLabelText::background = nullptr;
$Color* TestTranslucentLabelText::foreground = nullptr;
$Font* TestTranslucentLabelText::font = nullptr;
$JFrame* TestTranslucentLabelText::frame = nullptr;
bool TestTranslucentLabelText::testResult = false;
$CountDownLatch* TestTranslucentLabelText::latch = nullptr;
$Thread* TestTranslucentLabelText::mainThread = nullptr;
bool TestTranslucentLabelText::testPassed = false;
bool TestTranslucentLabelText::testGeneratedInterrupt = false;

void TestTranslucentLabelText::init$() {
}

void TestTranslucentLabelText::doTest($Runnable* action) {
	$init(TestTranslucentLabelText);
	$useLocalCurrentObjectStackCache();
	$var($String, description, " A frame with 2 labels will be shown in middle of screen.\n Left side label text should be opaque.\n  Right side label text should be translucent.\n If Right side label text is translucent, press PASS else press FAIL"_s);
	$var($JDialog, dialog, $new($JDialog));
	dialog->setTitle("JLabelTranslucentTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, testButton, $new($JButton, "Start Test"_s));
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->setEnabled(false);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TestTranslucentLabelText$$Lambda$lambda$doTest$0, dialog)));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->setEnabled(false);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1, dialog)));
	testButton->addActionListener(static_cast<$ActionListener*>($$new(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2, testButton, action, passButton, failButton)));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::CENTER));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(testButton));
	buttonPanel->add(static_cast<$Component*>(passButton));
	buttonPanel->add(static_cast<$Component*>(failButton));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	dialog->add(static_cast<$Component*>(mainPanel));
	dialog->pack();
	dialog->setVisible(true);
	dialog->addWindowListener($$new($TestTranslucentLabelText$1));
}

void TestTranslucentLabelText::pass() {
	$load(TestTranslucentLabelText);
	$synchronized(class$) {
		$init(TestTranslucentLabelText);
		TestTranslucentLabelText::testPassed = true;
		TestTranslucentLabelText::testGeneratedInterrupt = true;
		$nc(TestTranslucentLabelText::mainThread)->interrupt();
	}
}

void TestTranslucentLabelText::fail() {
	$load(TestTranslucentLabelText);
	$synchronized(class$) {
		$init(TestTranslucentLabelText);
		TestTranslucentLabelText::testPassed = false;
		TestTranslucentLabelText::testGeneratedInterrupt = true;
		$nc(TestTranslucentLabelText::mainThread)->interrupt();
	}
}

$JLabel* TestTranslucentLabelText::create($String* text) {
	$init(TestTranslucentLabelText);
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, text));
	label->setOpaque(true);
	label->setBackground(TestTranslucentLabelText::background);
	label->setForeground(TestTranslucentLabelText::foreground);
	label->setFont(TestTranslucentLabelText::font);
	label->setPreferredSize($$new($Dimension, 200, 40));
	$nc(TestTranslucentLabelText::frame)->add(static_cast<$Component*>(label));
	return label;
}

void TestTranslucentLabelText::runTest() {
	$init(TestTranslucentLabelText);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestTranslucentLabelText::frame, $new($JFrame));
	$nc(TestTranslucentLabelText::frame)->setUndecorated(true);
	$nc(TestTranslucentLabelText::frame)->setLayout($$new($FlowLayout));
	$var($JLabel, opqLabel, create("<html><p style=\"color:rgba(255, 0, 0, 1.00)\">TestLabel</p></html>"_s));
	$var($JLabel, tranLabel, create("<html><p style=\"color:rgba(255, 0, 0, 0.5)\">TestLabel</p></html>"_s));
	$nc(TestTranslucentLabelText::frame)->pack();
	$nc(TestTranslucentLabelText::frame)->setLocationRelativeTo(nullptr);
	$nc(TestTranslucentLabelText::frame)->setVisible(true);
	$nc(TestTranslucentLabelText::frame)->toFront();
}

void TestTranslucentLabelText::main($StringArray* args) {
	$init(TestTranslucentLabelText);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTranslucentLabelText$$Lambda$lambda$main$3$3)));
	$assignStatic(TestTranslucentLabelText::mainThread, $Thread::currentThread());
	try {
		$Thread::sleep(0x0002BF20);
	} catch ($InterruptedException& e) {
		if (!TestTranslucentLabelText::testPassed && TestTranslucentLabelText::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Label HTML text does not support translucent text colors"_s);
		}
	}
	if (!TestTranslucentLabelText::testGeneratedInterrupt) {
		$throwNew($RuntimeException, "user has not executed the test"_s);
	}
}

void TestTranslucentLabelText::lambda$main$3() {
	$init(TestTranslucentLabelText);
	doTest(static_cast<$Runnable*>($$new(TestTranslucentLabelText$$Lambda$runTest$4)));
}

void TestTranslucentLabelText::lambda$doTest$2($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton, $ActionEvent* e) {
	$init(TestTranslucentLabelText);
	$nc(testButton)->setEnabled(false);
	$nc(action)->run();
	$nc(passButton)->setEnabled(true);
	$nc(failButton)->setEnabled(true);
}

void TestTranslucentLabelText::lambda$doTest$1($JDialog* dialog, $ActionEvent* e) {
	$init(TestTranslucentLabelText);
	$nc(dialog)->dispose();
	$nc(TestTranslucentLabelText::frame)->dispose();
	fail();
}

void TestTranslucentLabelText::lambda$doTest$0($JDialog* dialog, $ActionEvent* e) {
	$init(TestTranslucentLabelText);
	$nc(dialog)->dispose();
	$nc(TestTranslucentLabelText::frame)->dispose();
	pass();
}

void clinit$TestTranslucentLabelText($Class* class$) {
	$assignStatic(TestTranslucentLabelText::background, $new($Color, 0, 150, 0));
	$assignStatic(TestTranslucentLabelText::foreground, $new($Color, 255, 255, 255, 120));
	$assignStatic(TestTranslucentLabelText::font, $new($Font, "Sans Serif"_s, $Font::PLAIN, 24));
}

TestTranslucentLabelText::TestTranslucentLabelText() {
}

$Class* TestTranslucentLabelText::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestTranslucentLabelText$$Lambda$lambda$doTest$0::classInfo$.name)) {
			return TestTranslucentLabelText$$Lambda$lambda$doTest$0::load$(name, initialize);
		}
		if (name->equals(TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::classInfo$.name)) {
			return TestTranslucentLabelText$$Lambda$lambda$doTest$1$1::load$(name, initialize);
		}
		if (name->equals(TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::classInfo$.name)) {
			return TestTranslucentLabelText$$Lambda$lambda$doTest$2$2::load$(name, initialize);
		}
		if (name->equals(TestTranslucentLabelText$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return TestTranslucentLabelText$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(TestTranslucentLabelText$$Lambda$runTest$4::classInfo$.name)) {
			return TestTranslucentLabelText$$Lambda$runTest$4::load$(name, initialize);
		}
	}
	$loadClass(TestTranslucentLabelText, name, initialize, &_TestTranslucentLabelText_ClassInfo_, clinit$TestTranslucentLabelText, allocate$TestTranslucentLabelText);
	return class$;
}

$Class* TestTranslucentLabelText::class$ = nullptr;