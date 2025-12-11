#include <MetalHiDPIIconsTest.h>

#include <MetalHiDPIIconsTest$1.h>
#include <MetalHiDPIIconsTest$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $MetalHiDPIIconsTest$1 = ::MetalHiDPIIconsTest$1;
using $MetalHiDPIIconsTest$2 = ::MetalHiDPIIconsTest$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class MetalHiDPIIconsTest$$Lambda$createUI : public $Runnable {
	$class(MetalHiDPIIconsTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MetalHiDPIIconsTest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalHiDPIIconsTest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalHiDPIIconsTest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalHiDPIIconsTest$$Lambda$createUI::*)()>(&MetalHiDPIIconsTest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalHiDPIIconsTest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"MetalHiDPIIconsTest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MetalHiDPIIconsTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(MetalHiDPIIconsTest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalHiDPIIconsTest$$Lambda$createUI::class$ = nullptr;

class MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MetalHiDPIIconsTest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _MetalHiDPIIconsTest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MetalHiDPIIconsTest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MetalHiDPIIconsTest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHiDPIIconsTest, INSTRUCTIONS)},
	{}
};

$MethodInfo _MetalHiDPIIconsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalHiDPIIconsTest::*)()>(&MetalHiDPIIconsTest::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MetalHiDPIIconsTest::createUI))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&MetalHiDPIIconsTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MetalHiDPIIconsTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _MetalHiDPIIconsTest_InnerClassesInfo_[] = {
	{"MetalHiDPIIconsTest$2", nullptr, nullptr, 0},
	{"MetalHiDPIIconsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalHiDPIIconsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetalHiDPIIconsTest",
	"java.lang.Object",
	nullptr,
	_MetalHiDPIIconsTest_FieldInfo_,
	_MetalHiDPIIconsTest_MethodInfo_,
	nullptr,
	nullptr,
	_MetalHiDPIIconsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MetalHiDPIIconsTest$2,MetalHiDPIIconsTest$1"
};

$Object* allocate$MetalHiDPIIconsTest($Class* clazz) {
	return $of($alloc(MetalHiDPIIconsTest));
}

$volatile(bool) MetalHiDPIIconsTest::testResult = false;
$volatile($CountDownLatch*) MetalHiDPIIconsTest::countDownLatch = nullptr;
$String* MetalHiDPIIconsTest::INSTRUCTIONS = nullptr;

void MetalHiDPIIconsTest::init$() {
}

void MetalHiDPIIconsTest::main($StringArray* args) {
	$init(MetalHiDPIIconsTest);
	$assignStatic(MetalHiDPIIconsTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(MetalHiDPIIconsTest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(MetalHiDPIIconsTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!MetalHiDPIIconsTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void MetalHiDPIIconsTest::createUI() {
	$init(MetalHiDPIIconsTest);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, mainFrame, $new($JFrame, "Metal L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(MetalHiDPIIconsTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($MetalHiDPIIconsTest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	mainFrame->add(static_cast<$Component*>(mainControlPanel));
	mainFrame->pack();
	mainFrame->addWindowListener($$new($MetalHiDPIIconsTest$2, mainFrame));
	mainFrame->setVisible(true);
}

void MetalHiDPIIconsTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(MetalHiDPIIconsTest);
	MetalHiDPIIconsTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(MetalHiDPIIconsTest::countDownLatch)->countDown();
}

void clinit$MetalHiDPIIconsTest($Class* class$) {
	$assignStatic(MetalHiDPIIconsTest::INSTRUCTIONS, "INSTRUCTIONS:\nVerify that icons are painted smoothly for standard Swing UI controls.\n\nIf the display does not support HiDPI mode press PASS.\n\n1. Run the SwingSet2 demo on HiDPI Display.\n2. Select Java Look and Feel. It is equivalent to Metal Look And Feel\n3. Check that the icons are painted smoothly on Swing UI controls like:\n  - JRadioButton\n  - JCheckBox\n  - JComboBox\n  - JScrollPane (vertical and horizontal scroll bars)\n  - JRadioButtonMenuItem\n  - JCheckBoxMenuItem\nand others...\n\nIf so, press PASS, else press FAIL.\n"_s);
	MetalHiDPIIconsTest::testResult = false;
}

MetalHiDPIIconsTest::MetalHiDPIIconsTest() {
}

$Class* MetalHiDPIIconsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MetalHiDPIIconsTest$$Lambda$createUI::classInfo$.name)) {
			return MetalHiDPIIconsTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return MetalHiDPIIconsTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(MetalHiDPIIconsTest, name, initialize, &_MetalHiDPIIconsTest_ClassInfo_, clinit$MetalHiDPIIconsTest, allocate$MetalHiDPIIconsTest);
	return class$;
}

$Class* MetalHiDPIIconsTest::class$ = nullptr;