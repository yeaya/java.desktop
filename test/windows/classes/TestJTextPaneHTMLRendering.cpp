#include <TestJTextPaneHTMLRendering.h>

#include <TestJTextPaneHTMLRendering$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Image.h>
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
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Dictionary.h>
#include <java/util/Hashtable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef INSTRUCTIONS
#undef MINUTES
#undef NORTH
#undef SCALE_SMOOTH
#undef SOUTH

using $TestJTextPaneHTMLRendering$1 = ::TestJTextPaneHTMLRendering$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Image = ::java::awt::Image;
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
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $Dictionary = ::java::util::Dictionary;
using $Hashtable = ::java::util::Hashtable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestJTextPaneHTMLRendering$$Lambda$createUI : public $Runnable {
	$class(TestJTextPaneHTMLRendering$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTextPaneHTMLRendering::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneHTMLRendering$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTextPaneHTMLRendering$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering$$Lambda$createUI::*)()>(&TestJTextPaneHTMLRendering$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneHTMLRendering$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneHTMLRendering$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJTextPaneHTMLRendering$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneHTMLRendering$$Lambda$createUI::class$ = nullptr;

class TestJTextPaneHTMLRendering$$Lambda$dispose$1 : public $Runnable {
	$class(TestJTextPaneHTMLRendering$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneHTMLRendering$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJTextPaneHTMLRendering$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJTextPaneHTMLRendering$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestJTextPaneHTMLRendering$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering$$Lambda$dispose$1::*)($Window*)>(&TestJTextPaneHTMLRendering$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneHTMLRendering$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneHTMLRendering$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJTextPaneHTMLRendering$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneHTMLRendering$$Lambda$dispose$1::class$ = nullptr;

class TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2 : public $ActionListener {
	$class(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJTextPaneHTMLRendering::lambda$createUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::*)()>(&TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::class$ = nullptr;

class TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3 : public $ActionListener {
	$class(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TestJTextPaneHTMLRendering::lambda$createUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::*)()>(&TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::class$ = nullptr;

class TestJTextPaneHTMLRendering$$Lambda$runTest$4 : public $Runnable {
	$class(TestJTextPaneHTMLRendering$$Lambda$runTest$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTextPaneHTMLRendering::runTest();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneHTMLRendering$$Lambda$runTest$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTextPaneHTMLRendering$$Lambda$runTest$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering$$Lambda$runTest$4::*)()>(&TestJTextPaneHTMLRendering$$Lambda$runTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneHTMLRendering$$Lambda$runTest$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneHTMLRendering$$Lambda$runTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJTextPaneHTMLRendering$$Lambda$runTest$4::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneHTMLRendering$$Lambda$runTest$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneHTMLRendering$$Lambda$runTest$4::class$ = nullptr;

$FieldInfo _TestJTextPaneHTMLRendering_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneHTMLRendering, mainFrame)},
	{"cache", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/net/URL;Ljava/awt/Image;>;", $PRIVATE | $STATIC, $staticField(TestJTextPaneHTMLRendering, cache)},
	{"textPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneHTMLRendering, textPane)},
	{"urlArrow", "Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneHTMLRendering, urlArrow)},
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJTextPaneHTMLRendering, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TestJTextPaneHTMLRendering, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJTextPaneHTMLRendering, INSTRUCTIONS)},
	{}
};

$MethodInfo _TestJTextPaneHTMLRendering_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneHTMLRendering::*)()>(&TestJTextPaneHTMLRendering::init$))},
	{"createTestUI", "(Ljavax/swing/JPanel;)V", nullptr, $STATIC, $method(static_cast<void(*)($JPanel*)>(&TestJTextPaneHTMLRendering::createTestUI))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJTextPaneHTMLRendering::createUI))},
	{"lambda$createUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJTextPaneHTMLRendering::lambda$createUI$0))},
	{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&TestJTextPaneHTMLRendering::lambda$createUI$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJTextPaneHTMLRendering::main)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestJTextPaneHTMLRendering::runTest))},
	{}
};

$InnerClassInfo _TestJTextPaneHTMLRendering_InnerClassesInfo_[] = {
	{"TestJTextPaneHTMLRendering$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTextPaneHTMLRendering_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJTextPaneHTMLRendering",
	"java.lang.Object",
	nullptr,
	_TestJTextPaneHTMLRendering_FieldInfo_,
	_TestJTextPaneHTMLRendering_MethodInfo_,
	nullptr,
	nullptr,
	_TestJTextPaneHTMLRendering_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJTextPaneHTMLRendering$1"
};

$Object* allocate$TestJTextPaneHTMLRendering($Class* clazz) {
	return $of($alloc(TestJTextPaneHTMLRendering));
}

$JFrame* TestJTextPaneHTMLRendering::mainFrame = nullptr;
$Dictionary* TestJTextPaneHTMLRendering::cache = nullptr;
$JTextPane* TestJTextPaneHTMLRendering::textPane = nullptr;
$URL* TestJTextPaneHTMLRendering::urlArrow = nullptr;
$volatile(bool) TestJTextPaneHTMLRendering::testResult = false;
$volatile($CountDownLatch*) TestJTextPaneHTMLRendering::countDownLatch = nullptr;
$String* TestJTextPaneHTMLRendering::INSTRUCTIONS = nullptr;

void TestJTextPaneHTMLRendering::init$() {
}

void TestJTextPaneHTMLRendering::main($StringArray* args) {
	$init(TestJTextPaneHTMLRendering);
	$assignStatic(TestJTextPaneHTMLRendering::urlArrow, $new($URL, "http:\\arrow.png"_s));
	$assignStatic(TestJTextPaneHTMLRendering::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TestJTextPaneHTMLRendering$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(TestJTextPaneHTMLRendering::countDownLatch)->await(15, $TimeUnit::MINUTES);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TestJTextPaneHTMLRendering$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestJTextPaneHTMLRendering::mainFrame)))));
	if (!TestJTextPaneHTMLRendering::testResult) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void TestJTextPaneHTMLRendering::createUI() {
	$init(TestJTextPaneHTMLRendering);
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout, 20, 20))));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout))));
	createTestUI(mainControlPanel);
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TestJTextPaneHTMLRendering::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	$init($BorderLayout);
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of($BorderLayout::NORTH));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener(static_cast<$ActionListener*>($$new(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of($BorderLayout::SOUTH));
	$nc(TestJTextPaneHTMLRendering::mainFrame)->add(static_cast<$Component*>(mainControlPanel));
	$nc(TestJTextPaneHTMLRendering::mainFrame)->pack();
	$nc(TestJTextPaneHTMLRendering::mainFrame)->addWindowListener($$new($TestJTextPaneHTMLRendering$1));
	$nc(TestJTextPaneHTMLRendering::mainFrame)->setVisible(true);
}

void TestJTextPaneHTMLRendering::createTestUI($JPanel* panel) {
	$init(TestJTextPaneHTMLRendering);
	$beforeCallerSensitive();
	$assignStatic(TestJTextPaneHTMLRendering::textPane, $new($JTextPane));
	$init($BorderLayout);
	$nc(panel)->add(static_cast<$Component*>(TestJTextPaneHTMLRendering::textPane), $of($BorderLayout::CENTER));
	$var($EditorKit, l_kit, $nc(TestJTextPaneHTMLRendering::textPane)->getEditorKitForContentType("text/html"_s));
	$nc(TestJTextPaneHTMLRendering::textPane)->setEditable(false);
	$nc(TestJTextPaneHTMLRendering::textPane)->setEditorKit(l_kit);
	$assignStatic(TestJTextPaneHTMLRendering::cache, $cast($Dictionary, $nc($($nc(TestJTextPaneHTMLRendering::textPane)->getDocument()))->getProperty("imageCache"_s)));
	if (TestJTextPaneHTMLRendering::cache == nullptr) {
		$assignStatic(TestJTextPaneHTMLRendering::cache, $new($Hashtable));
		$nc($($nc(TestJTextPaneHTMLRendering::textPane)->getDocument()))->putProperty("imageCache"_s, TestJTextPaneHTMLRendering::cache);
	}
	$var($URL, arrowLocationUrl, TestJTextPaneHTMLRendering::class$->getResource("arrow.png"_s));
	$var($ImageIcon, imageIcon, $new($ImageIcon, arrowLocationUrl));
	$var($Image, image, imageIcon->getImage());
	$var($Image, scaledImage, $nc(image)->getScaledInstance(24, 24, $Image::SCALE_SMOOTH));
	$nc(TestJTextPaneHTMLRendering::cache)->put(TestJTextPaneHTMLRendering::urlArrow, scaledImage);
	$$new($Thread, static_cast<$Runnable*>($$new(TestJTextPaneHTMLRendering$$Lambda$runTest$4)))->start();
}

void TestJTextPaneHTMLRendering::runTest() {
	$init(TestJTextPaneHTMLRendering);
	for (int32_t i = 0; i < 10; ++i) {
		$var($StringBuffer, sb, $new($StringBuffer));
		sb->append($$str({"<html><body bgcolor=\"#BBBBBB\"><center>Iteration "_s, $$str((i + 1)), " -> <br>"_s}));
		for (int32_t j = 1; j < 201; ++j) {
			sb->append($$str({"<img src=\""_s, TestJTextPaneHTMLRendering::urlArrow, "\">"_s}));
			if (j % 20 == 0) {
				sb->append("<br>"_s);
			}
		}
		$nc(TestJTextPaneHTMLRendering::textPane)->setText($(sb->toString()));
		$nc(TestJTextPaneHTMLRendering::textPane)->validate();
		$nc(TestJTextPaneHTMLRendering::textPane)->repaint();
		try {
			$($Thread::currentThread())->sleep(1000);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			$init($System);
			$nc($System::err)->println($of(e));
		}
	}
}

void TestJTextPaneHTMLRendering::lambda$createUI$1($ActionEvent* e) {
	$init(TestJTextPaneHTMLRendering);
	$nc(TestJTextPaneHTMLRendering::countDownLatch)->countDown();
}

void TestJTextPaneHTMLRendering::lambda$createUI$0($ActionEvent* e) {
	$init(TestJTextPaneHTMLRendering);
	TestJTextPaneHTMLRendering::testResult = true;
	$nc(TestJTextPaneHTMLRendering::countDownLatch)->countDown();
}

void clinit$TestJTextPaneHTMLRendering($Class* class$) {
	$assignStatic(TestJTextPaneHTMLRendering::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that the JTextPane is filled with blue arrow images.\nThere should be 200 images (10 rows of 20 images each).\nThis test will run for 10 iterations and the current iteration\nis being displayed at top of JTextPane. JTextpane will be\nrepainted each time  and should have same output\nIf yes, Press Pass, Otherwise, Press Fail.\n"_s);
	$assignStatic(TestJTextPaneHTMLRendering::mainFrame, $new($JFrame));
	TestJTextPaneHTMLRendering::testResult = false;
}

TestJTextPaneHTMLRendering::TestJTextPaneHTMLRendering() {
}

$Class* TestJTextPaneHTMLRendering::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJTextPaneHTMLRendering$$Lambda$createUI::classInfo$.name)) {
			return TestJTextPaneHTMLRendering$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(TestJTextPaneHTMLRendering$$Lambda$dispose$1::classInfo$.name)) {
			return TestJTextPaneHTMLRendering$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::classInfo$.name)) {
			return TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$0$2::load$(name, initialize);
		}
		if (name->equals(TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::classInfo$.name)) {
			return TestJTextPaneHTMLRendering$$Lambda$lambda$createUI$1$3::load$(name, initialize);
		}
		if (name->equals(TestJTextPaneHTMLRendering$$Lambda$runTest$4::classInfo$.name)) {
			return TestJTextPaneHTMLRendering$$Lambda$runTest$4::load$(name, initialize);
		}
	}
	$loadClass(TestJTextPaneHTMLRendering, name, initialize, &_TestJTextPaneHTMLRendering_ClassInfo_, clinit$TestJTextPaneHTMLRendering, allocate$TestJTextPaneHTMLRendering);
	return class$;
}

$Class* TestJTextPaneHTMLRendering::class$ = nullptr;