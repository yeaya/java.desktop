#include <TestUI.h>

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
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestUI$$Lambda$lambda$createUI$0 : public $ActionListener {
	$class(TestUI$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestUI* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestUI$$Lambda$lambda$createUI$0>());
	}
	TestUI* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestUI$$Lambda$lambda$createUI$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestUI$$Lambda$lambda$createUI$0, inst$)},
	{}
};
$MethodInfo TestUI$$Lambda$lambda$createUI$0::methodInfos[3] = {
	{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(static_cast<void(TestUI$$Lambda$lambda$createUI$0::*)(TestUI*)>(&TestUI$$Lambda$lambda$createUI$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestUI$$Lambda$lambda$createUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestUI$$Lambda$lambda$createUI$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestUI$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$loadClass(TestUI$$Lambda$lambda$createUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestUI$$Lambda$lambda$createUI$0::class$ = nullptr;

class TestUI$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(TestUI$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestUI* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestUI$$Lambda$lambda$createUI$1$1>());
	}
	TestUI* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestUI$$Lambda$lambda$createUI$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestUI$$Lambda$lambda$createUI$1$1, inst$)},
	{}
};
$MethodInfo TestUI$$Lambda$lambda$createUI$1$1::methodInfos[3] = {
	{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(static_cast<void(TestUI$$Lambda$lambda$createUI$1$1::*)(TestUI*)>(&TestUI$$Lambda$lambda$createUI$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestUI$$Lambda$lambda$createUI$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestUI$$Lambda$lambda$createUI$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestUI$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$loadClass(TestUI$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestUI$$Lambda$lambda$createUI$1$1::class$ = nullptr;

$FieldInfo _TestUI_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, mainFrame)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, mainControlPanel)},
	{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, instructionTextArea)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, resultButtonPanel)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, failButton)},
	{"gbc", "Ljava/awt/GridBagConstraints;", nullptr, $PRIVATE, $field(TestUI, gbc)},
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(TestUI, layout)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(TestUI, latch)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(TestUI, testResult)},
	{}
};

$MethodInfo _TestUI_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(TestUI::*)($CountDownLatch*)>(&TestUI::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(TestUI::*)()>(&TestUI::createUI)), "java.lang.Exception"},
	{"customize", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestUI::*)()>(&TestUI::customize)), "java.lang.Exception"},
	{"disposeUI", "()V", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(TestUI::*)()>(&TestUI::initialize)), "java.lang.Exception"},
	{"lambda$createUI$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestUI::*)($ActionEvent*)>(&TestUI::lambda$createUI$0))},
	{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestUI::*)($ActionEvent*)>(&TestUI::lambda$createUI$1))},
	{}
};

$ClassInfo _TestUI_ClassInfo_ = {
	$ACC_SUPER,
	"TestUI",
	"java.lang.Object",
	nullptr,
	_TestUI_FieldInfo_,
	_TestUI_MethodInfo_
};

$Object* allocate$TestUI($Class* clazz) {
	return $of($alloc(TestUI));
}

$JFrame* TestUI::mainFrame = nullptr;
$JPanel* TestUI::mainControlPanel = nullptr;
$JTextArea* TestUI::instructionTextArea = nullptr;
$JPanel* TestUI::resultButtonPanel = nullptr;
$JButton* TestUI::passButton = nullptr;
$JButton* TestUI::failButton = nullptr;
$GridBagLayout* TestUI::layout = nullptr;

void TestUI::initialize() {
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
}

void TestUI::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
	initialize();
}

void TestUI::createUI() {
	$assignStatic(TestUI::mainFrame, $new($JFrame));
	$assignStatic(TestUI::layout, $new($GridBagLayout));
	$assignStatic(TestUI::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(TestUI::layout)));
	$assignStatic(TestUI::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(TestUI::layout)));
	$set(this, gbc, $new($GridBagConstraints));
	$var($String, instructions, "Move cursor over disabled button.\nCheck if there is a border around the tooltip text \nIf yes, click on \'pass\' else click on \'fail\'\n"_s);
	$assignStatic(TestUI::instructionTextArea, $new($JTextArea));
	$nc(TestUI::instructionTextArea)->setText(instructions);
	$nc(TestUI::instructionTextArea)->setEditable(false);
	$nc(TestUI::instructionTextArea)->setBorder($($BorderFactory::createTitledBorder("Test Instructions"_s)));
	$nc(this->gbc)->gridx = 0;
	$nc(this->gbc)->gridy = 0;
	$nc(TestUI::mainControlPanel)->add(static_cast<$Component*>(TestUI::instructionTextArea), $of(this->gbc));
	customize();
	$assignStatic(TestUI::passButton, $new($JButton, "Pass"_s));
	$nc(TestUI::passButton)->setActionCommand("Pass"_s);
	$nc(TestUI::passButton)->addActionListener(static_cast<$ActionListener*>($$new(TestUI$$Lambda$lambda$createUI$0, this)));
	$assignStatic(TestUI::failButton, $new($JButton, "Fail"_s));
	$nc(TestUI::failButton)->setActionCommand("Fail"_s);
	$nc(TestUI::failButton)->addActionListener(static_cast<$ActionListener*>($$new(TestUI$$Lambda$lambda$createUI$1$1, this)));
	$nc(this->gbc)->gridx = 0;
	$nc(this->gbc)->gridy = 0;
	$nc(TestUI::resultButtonPanel)->add(static_cast<$Component*>(TestUI::passButton), $of(this->gbc));
	$nc(this->gbc)->gridx = 1;
	$nc(this->gbc)->gridy = 0;
	$nc(TestUI::resultButtonPanel)->add(static_cast<$Component*>(TestUI::failButton), $of(this->gbc));
	$nc(this->gbc)->gridx = 0;
	$nc(this->gbc)->gridy = 2;
	$nc(TestUI::mainControlPanel)->add(static_cast<$Component*>(TestUI::resultButtonPanel), $of(this->gbc));
	$nc(TestUI::mainFrame)->add(static_cast<$Component*>(TestUI::mainControlPanel));
	$nc(TestUI::mainFrame)->pack();
	$nc(TestUI::mainFrame)->setVisible(true);
}

void TestUI::disposeUI() {
	$nc(TestUI::mainFrame)->dispose();
}

void TestUI::customize() {
	$var($JPanel, customButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(TestUI::layout)));
	$nc(TestUI::mainFrame)->setTitle("TestDisabledToolTipBorder"_s);
	$var($JButton, disabledButton, $new($JButton, "Disabled Button"_s));
	disabledButton->setToolTipText("TooltipText"_s);
	disabledButton->setMargin($$new($Insets, 30, 30, 30, 30));
	disabledButton->setEnabled(false);
	$nc(this->gbc)->gridx = 0;
	$nc(this->gbc)->gridy = 0;
	customButtonPanel->add(static_cast<$Component*>(disabledButton), $of(this->gbc));
	$nc(this->gbc)->gridx = 0;
	$nc(this->gbc)->gridy = 1;
	$nc(TestUI::mainControlPanel)->add(static_cast<$Component*>(customButtonPanel), $of(this->gbc));
}

void TestUI::lambda$createUI$1($ActionEvent* e) {
	$init($System);
	$nc($System::out)->println("Fail Button pressed!"_s);
	this->testResult = false;
	$nc(this->latch)->countDown();
	disposeUI();
}

void TestUI::lambda$createUI$0($ActionEvent* e) {
	$init($System);
	$nc($System::out)->println("Pass Button pressed!"_s);
	this->testResult = true;
	$nc(this->latch)->countDown();
	disposeUI();
}

TestUI::TestUI() {
}

$Class* TestUI::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestUI$$Lambda$lambda$createUI$0::classInfo$.name)) {
			return TestUI$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
		if (name->equals(TestUI$$Lambda$lambda$createUI$1$1::classInfo$.name)) {
			return TestUI$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestUI, name, initialize, &_TestUI_ClassInfo_, allocate$TestUI);
	return class$;
}

$Class* TestUI::class$ = nullptr;