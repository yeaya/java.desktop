#include <WindowsClassicHiDPIIconsTest.h>

#include <WindowsClassicHiDPIIconsTest$1.h>
#include <WindowsClassicHiDPIIconsTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
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
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef INSTRUCTIONS
#undef MINUTES
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef Y_AXIS

using $WindowsClassicHiDPIIconsTest$1 = ::WindowsClassicHiDPIIconsTest$1;
using $WindowsClassicHiDPIIconsTest$2 = ::WindowsClassicHiDPIIconsTest$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
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
using $BoxLayout = ::javax::swing::BoxLayout;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JToggleButton = ::javax::swing::JToggleButton;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class WindowsClassicHiDPIIconsTest$$Lambda$createUI : public $Runnable {
	$class(WindowsClassicHiDPIIconsTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WindowsClassicHiDPIIconsTest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsClassicHiDPIIconsTest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsClassicHiDPIIconsTest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsClassicHiDPIIconsTest$$Lambda$createUI::*)()>(&WindowsClassicHiDPIIconsTest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsClassicHiDPIIconsTest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"WindowsClassicHiDPIIconsTest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* WindowsClassicHiDPIIconsTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(WindowsClassicHiDPIIconsTest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsClassicHiDPIIconsTest$$Lambda$createUI::class$ = nullptr;

class WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		WindowsClassicHiDPIIconsTest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _WindowsClassicHiDPIIconsTest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(WindowsClassicHiDPIIconsTest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(WindowsClassicHiDPIIconsTest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsClassicHiDPIIconsTest, INSTRUCTIONS)},
	{}
};

$MethodInfo _WindowsClassicHiDPIIconsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsClassicHiDPIIconsTest::*)()>(&WindowsClassicHiDPIIconsTest::init$))},
	{"createJPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JPanel*(*)()>(&WindowsClassicHiDPIIconsTest::createJPanel))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WindowsClassicHiDPIIconsTest::createUI))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&WindowsClassicHiDPIIconsTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WindowsClassicHiDPIIconsTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _WindowsClassicHiDPIIconsTest_InnerClassesInfo_[] = {
	{"WindowsClassicHiDPIIconsTest$2", nullptr, nullptr, 0},
	{"WindowsClassicHiDPIIconsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsClassicHiDPIIconsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WindowsClassicHiDPIIconsTest",
	"java.lang.Object",
	nullptr,
	_WindowsClassicHiDPIIconsTest_FieldInfo_,
	_WindowsClassicHiDPIIconsTest_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsClassicHiDPIIconsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WindowsClassicHiDPIIconsTest$2,WindowsClassicHiDPIIconsTest$1"
};

$Object* allocate$WindowsClassicHiDPIIconsTest($Class* clazz) {
	return $of($alloc(WindowsClassicHiDPIIconsTest));
}

$volatile(bool) WindowsClassicHiDPIIconsTest::testResult = false;
$volatile($CountDownLatch*) WindowsClassicHiDPIIconsTest::countDownLatch = nullptr;
$String* WindowsClassicHiDPIIconsTest::INSTRUCTIONS = nullptr;

void WindowsClassicHiDPIIconsTest::init$() {
}

void WindowsClassicHiDPIIconsTest::main($StringArray* args) {
	$init(WindowsClassicHiDPIIconsTest);
	$assignStatic(WindowsClassicHiDPIIconsTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(WindowsClassicHiDPIIconsTest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(WindowsClassicHiDPIIconsTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!WindowsClassicHiDPIIconsTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void WindowsClassicHiDPIIconsTest::createUI() {
	$init(WindowsClassicHiDPIIconsTest);
	$var($JFrame, mainFrame, $new($JFrame, "Windows Classic L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JPanel, testPanel, createJPanel());
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(testPanel), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(WindowsClassicHiDPIIconsTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($WindowsClassicHiDPIIconsTest$1, mainFrame));
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
	mainFrame->addWindowListener($$new($WindowsClassicHiDPIIconsTest$2, mainFrame));
	mainFrame->setVisible(true);
}

$JPanel* WindowsClassicHiDPIIconsTest::createJPanel() {
	$init(WindowsClassicHiDPIIconsTest);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BoxLayout, panel, $BoxLayout::Y_AXIS));
	$var($JPanel, iconPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JRadioButton, radioButton, $new($JRadioButton));
	radioButton->setSelected(false);
	iconPanel->add(static_cast<$Component*>(radioButton));
	$assign(radioButton, $new($JRadioButton));
	radioButton->setSelected(true);
	iconPanel->add(static_cast<$Component*>(radioButton));
	panel->add(static_cast<$Component*>(iconPanel));
	$assign(iconPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JCheckBox, checkBox, $new($JCheckBox));
	checkBox->setSelected(false);
	iconPanel->add(static_cast<$Component*>(checkBox));
	$assign(checkBox, $new($JCheckBox));
	checkBox->setSelected(true);
	iconPanel->add(static_cast<$Component*>(checkBox));
	panel->add(static_cast<$Component*>(iconPanel));
	$assign(iconPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JComboBox, comboBox, $new($JComboBox, $$new($StringArray, {
		"111"_s,
		"222"_s
	})));
	iconPanel->add(static_cast<$Component*>(comboBox));
	panel->add(static_cast<$Component*>(iconPanel));
	$assign(iconPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JTextArea, textArea, $new($JTextArea, 3, 7));
	textArea->setText("AAA"_s);
	$var($JScrollPane, scrollPane, $new($JScrollPane, textArea));
	scrollPane->setHorizontalScrollBarPolicy($ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS);
	scrollPane->setVerticalScrollBarPolicy($ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS);
	iconPanel->add(static_cast<$Component*>(scrollPane));
	panel->add(static_cast<$Component*>(iconPanel));
	return panel;
}

void WindowsClassicHiDPIIconsTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(WindowsClassicHiDPIIconsTest);
	WindowsClassicHiDPIIconsTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(WindowsClassicHiDPIIconsTest::countDownLatch)->countDown();
}

void clinit$WindowsClassicHiDPIIconsTest($Class* class$) {
	$assignStatic(WindowsClassicHiDPIIconsTest::INSTRUCTIONS, "INSTRUCTIONS:\nCheck that the icons are painted smoothly on Swing UI controls:\n  - JRadioButton\n  - JCheckBox\n  - JComboBox\n  - JScrollPane (vertical and horizontal scroll bars)\n\nIf so, press PASS, else press FAIL.\n"_s);
	WindowsClassicHiDPIIconsTest::testResult = false;
}

WindowsClassicHiDPIIconsTest::WindowsClassicHiDPIIconsTest() {
}

$Class* WindowsClassicHiDPIIconsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WindowsClassicHiDPIIconsTest$$Lambda$createUI::classInfo$.name)) {
			return WindowsClassicHiDPIIconsTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return WindowsClassicHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(WindowsClassicHiDPIIconsTest, name, initialize, &_WindowsClassicHiDPIIconsTest_ClassInfo_, clinit$WindowsClassicHiDPIIconsTest, allocate$WindowsClassicHiDPIIconsTest);
	return class$;
}

$Class* WindowsClassicHiDPIIconsTest::class$ = nullptr;