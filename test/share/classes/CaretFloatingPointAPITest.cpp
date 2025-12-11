#include <CaretFloatingPointAPITest.h>

#include <CaretFloatingPointAPITest$1.h>
#include <CaretFloatingPointAPITest$2.h>
#include <CaretFloatingPointAPITest$CustomCaret.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES
#undef RED

using $CaretFloatingPointAPITest$1 = ::CaretFloatingPointAPITest$1;
using $CaretFloatingPointAPITest$2 = ::CaretFloatingPointAPITest$2;
using $CaretFloatingPointAPITest$CustomCaret = ::CaretFloatingPointAPITest$CustomCaret;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class CaretFloatingPointAPITest$$Lambda$createUI : public $Runnable {
	$class(CaretFloatingPointAPITest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		CaretFloatingPointAPITest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CaretFloatingPointAPITest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CaretFloatingPointAPITest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CaretFloatingPointAPITest$$Lambda$createUI::*)()>(&CaretFloatingPointAPITest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CaretFloatingPointAPITest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"CaretFloatingPointAPITest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* CaretFloatingPointAPITest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CaretFloatingPointAPITest$$Lambda$createUI::class$ = nullptr;

class CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		CaretFloatingPointAPITest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _CaretFloatingPointAPITest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CaretFloatingPointAPITest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CaretFloatingPointAPITest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CaretFloatingPointAPITest, INSTRUCTIONS)},
	{}
};

$MethodInfo _CaretFloatingPointAPITest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CaretFloatingPointAPITest::*)()>(&CaretFloatingPointAPITest::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&CaretFloatingPointAPITest::createUI))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&CaretFloatingPointAPITest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CaretFloatingPointAPITest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CaretFloatingPointAPITest_InnerClassesInfo_[] = {
	{"CaretFloatingPointAPITest$CustomCaret", "CaretFloatingPointAPITest", "CustomCaret", $STATIC},
	{"CaretFloatingPointAPITest$2", nullptr, nullptr, 0},
	{"CaretFloatingPointAPITest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CaretFloatingPointAPITest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CaretFloatingPointAPITest",
	"java.lang.Object",
	nullptr,
	_CaretFloatingPointAPITest_FieldInfo_,
	_CaretFloatingPointAPITest_MethodInfo_,
	nullptr,
	nullptr,
	_CaretFloatingPointAPITest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CaretFloatingPointAPITest$CustomCaret,CaretFloatingPointAPITest$CustomCaret$CaretMouseListener,CaretFloatingPointAPITest$2,CaretFloatingPointAPITest$1"
};

$Object* allocate$CaretFloatingPointAPITest($Class* clazz) {
	return $of($alloc(CaretFloatingPointAPITest));
}

$volatile(bool) CaretFloatingPointAPITest::testResult = false;
$volatile($CountDownLatch*) CaretFloatingPointAPITest::countDownLatch = nullptr;
$String* CaretFloatingPointAPITest::INSTRUCTIONS = nullptr;

void CaretFloatingPointAPITest::init$() {
}

void CaretFloatingPointAPITest::main($StringArray* args) {
	$init(CaretFloatingPointAPITest);
	$assignStatic(CaretFloatingPointAPITest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(CaretFloatingPointAPITest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(CaretFloatingPointAPITest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!CaretFloatingPointAPITest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void CaretFloatingPointAPITest::createUI() {
	$init(CaretFloatingPointAPITest);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, mainFrame, $new($JFrame, "Metal L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JTextField, textField, $new($JTextField, "aaaaaaaaaaaaaaaaaaaaaaa"_s));
	$var($Dimension, size, $new($Dimension, 400, 100));
	textField->setPreferredSize(size);
	textField->setFont($($nc($(textField->getFont()))->deriveFont(28.0f)));
	$init($Color);
	textField->setCaretColor($Color::RED);
	textField->setCaret($$new($CaretFloatingPointAPITest$CustomCaret));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(textField), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(CaretFloatingPointAPITest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($CaretFloatingPointAPITest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	mainFrame->add(static_cast<$Component*>(mainControlPanel));
	mainFrame->pack();
	mainFrame->addWindowListener($$new($CaretFloatingPointAPITest$2, mainFrame));
	mainFrame->setVisible(true);
}

void CaretFloatingPointAPITest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(CaretFloatingPointAPITest);
	CaretFloatingPointAPITest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(CaretFloatingPointAPITest::countDownLatch)->countDown();
}

void clinit$CaretFloatingPointAPITest($Class* class$) {
	$assignStatic(CaretFloatingPointAPITest::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify that cursor position is not rounded on HiDPI display.\n\nIf the display does not support HiDPI mode press PASS.\n\n1. Press the Right-Arrow key several times to move the red caret in the text field.\n2. Check that the caret has the same position between chars in diffrent locations.\n\nIf so, press PASS, else press FAIL.\n"_s);
	CaretFloatingPointAPITest::testResult = false;
}

CaretFloatingPointAPITest::CaretFloatingPointAPITest() {
}

$Class* CaretFloatingPointAPITest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CaretFloatingPointAPITest$$Lambda$createUI::classInfo$.name)) {
			return CaretFloatingPointAPITest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return CaretFloatingPointAPITest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(CaretFloatingPointAPITest, name, initialize, &_CaretFloatingPointAPITest_ClassInfo_, clinit$CaretFloatingPointAPITest, allocate$CaretFloatingPointAPITest);
	return class$;
}

$Class* CaretFloatingPointAPITest::class$ = nullptr;