#include <TooMuchWheelRotationEventsTest.h>

#include <TooMuchWheelRotationEventsTest$1.h>
#include <TooMuchWheelRotationEventsTest$2.h>
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
#include <java/lang/AbstractStringBuilder.h>
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
#include <java/lang/StringBuilder.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES
#undef Y_AXIS

using $TooMuchWheelRotationEventsTest$1 = ::TooMuchWheelRotationEventsTest$1;
using $TooMuchWheelRotationEventsTest$2 = ::TooMuchWheelRotationEventsTest$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
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
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
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
using $BoxLayout = ::javax::swing::BoxLayout;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TooMuchWheelRotationEventsTest$$Lambda$createUI : public $Runnable {
	$class(TooMuchWheelRotationEventsTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TooMuchWheelRotationEventsTest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TooMuchWheelRotationEventsTest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TooMuchWheelRotationEventsTest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TooMuchWheelRotationEventsTest$$Lambda$createUI::*)()>(&TooMuchWheelRotationEventsTest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TooMuchWheelRotationEventsTest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TooMuchWheelRotationEventsTest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TooMuchWheelRotationEventsTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(TooMuchWheelRotationEventsTest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TooMuchWheelRotationEventsTest$$Lambda$createUI::class$ = nullptr;

class TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TooMuchWheelRotationEventsTest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _TooMuchWheelRotationEventsTest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TooMuchWheelRotationEventsTest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TooMuchWheelRotationEventsTest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TooMuchWheelRotationEventsTest, INSTRUCTIONS)},
	{}
};

$MethodInfo _TooMuchWheelRotationEventsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TooMuchWheelRotationEventsTest::*)()>(&TooMuchWheelRotationEventsTest::init$))},
	{"createTestPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JPanel*(*)()>(&TooMuchWheelRotationEventsTest::createTestPanel))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TooMuchWheelRotationEventsTest::createUI))},
	{"getLongString", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&TooMuchWheelRotationEventsTest::getLongString))},
	{"getLongString", "(CC)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(char16_t,char16_t)>(&TooMuchWheelRotationEventsTest::getLongString))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&TooMuchWheelRotationEventsTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TooMuchWheelRotationEventsTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TooMuchWheelRotationEventsTest_InnerClassesInfo_[] = {
	{"TooMuchWheelRotationEventsTest$2", nullptr, nullptr, 0},
	{"TooMuchWheelRotationEventsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TooMuchWheelRotationEventsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TooMuchWheelRotationEventsTest",
	"java.lang.Object",
	nullptr,
	_TooMuchWheelRotationEventsTest_FieldInfo_,
	_TooMuchWheelRotationEventsTest_MethodInfo_,
	nullptr,
	nullptr,
	_TooMuchWheelRotationEventsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TooMuchWheelRotationEventsTest$2,TooMuchWheelRotationEventsTest$1"
};

$Object* allocate$TooMuchWheelRotationEventsTest($Class* clazz) {
	return $of($alloc(TooMuchWheelRotationEventsTest));
}

$volatile(bool) TooMuchWheelRotationEventsTest::testResult = false;
$volatile($CountDownLatch*) TooMuchWheelRotationEventsTest::countDownLatch = nullptr;
$String* TooMuchWheelRotationEventsTest::INSTRUCTIONS = nullptr;

void TooMuchWheelRotationEventsTest::init$() {
}

void TooMuchWheelRotationEventsTest::main($StringArray* args) {
	$init(TooMuchWheelRotationEventsTest);
	$assignStatic(TooMuchWheelRotationEventsTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(TooMuchWheelRotationEventsTest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(TooMuchWheelRotationEventsTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!TooMuchWheelRotationEventsTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void TooMuchWheelRotationEventsTest::createUI() {
	$init(TooMuchWheelRotationEventsTest);
	$var($JFrame, mainFrame, $new($JFrame, "Trackpad scrolling test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JPanel, testPanel, createTestPanel());
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(testPanel), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(TooMuchWheelRotationEventsTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($TooMuchWheelRotationEventsTest$1, mainFrame));
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
	mainFrame->addWindowListener($$new($TooMuchWheelRotationEventsTest$2, mainFrame));
	mainFrame->setLocationRelativeTo(nullptr);
	mainFrame->setVisible(true);
}

$JPanel* TooMuchWheelRotationEventsTest::createTestPanel() {
	$init(TooMuchWheelRotationEventsTest);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BoxLayout, panel, $BoxLayout::Y_AXIS));
	$var($JTextArea, textArea, $new($JTextArea, 20, 20));
	textArea->setText($(getLongString()));
	$var($JScrollPane, scrollPane, $new($JScrollPane, textArea));
	panel->add(static_cast<$Component*>(scrollPane));
	return panel;
}

$String* TooMuchWheelRotationEventsTest::getLongString() {
	$init(TooMuchWheelRotationEventsTest);
	$var($String, lowCaseString, getLongString(u'a', u'z'));
	$var($String, upperCaseString, getLongString(u'A', u'Z'));
	$var($String, digitsString, getLongString(u'0', u'9'));
	int32_t repeat = 30;
	$var($StringBuilder, lowCaseBuilder, $new($StringBuilder));
	$var($StringBuilder, upperCaseBuilder, $new($StringBuilder));
	$var($StringBuilder, digitsBuilder, $new($StringBuilder));
	for (int32_t i = 0; i < repeat; ++i) {
		lowCaseBuilder->append(lowCaseString)->append(u' ');
		upperCaseBuilder->append(upperCaseString)->append(u' ');
		digitsBuilder->append(digitsString)->append(u' ');
	}
	$var($StringBuilder, builder, $new($StringBuilder));
	for (int32_t i = 0; i < 200; ++i) {
		builder->append(static_cast<$CharSequence*>(upperCaseBuilder))->append(u'\n')->append(static_cast<$CharSequence*>(lowCaseBuilder))->append(u'\n')->append(static_cast<$CharSequence*>(digitsBuilder))->append("\n\n\n"_s);
	}
	return builder->toString();
}

$String* TooMuchWheelRotationEventsTest::getLongString(char16_t c1, char16_t c2) {
	$init(TooMuchWheelRotationEventsTest);
	$var($chars, chars, $new($chars, c2 - c1 + 1));
	for (char16_t i = c1; i <= c2; ++i) {
		chars->set(i - c1, i);
	}
	return $new($String, chars);
}

void TooMuchWheelRotationEventsTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(TooMuchWheelRotationEventsTest);
	TooMuchWheelRotationEventsTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(TooMuchWheelRotationEventsTest::countDownLatch)->countDown();
}

void clinit$TooMuchWheelRotationEventsTest($Class* class$) {
	$assignStatic(TooMuchWheelRotationEventsTest::INSTRUCTIONS, " INSTRUCTIONS:\n Try to check the issue with trackpad\n\n If the trackpad is not supported, press PASS\n\n Use the trackpad to slightly scroll the JTextArea horizontally and vertically.\n If the text area is scrolled too fast press FAIL, else press PASS."_s);
	TooMuchWheelRotationEventsTest::testResult = false;
}

TooMuchWheelRotationEventsTest::TooMuchWheelRotationEventsTest() {
}

$Class* TooMuchWheelRotationEventsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TooMuchWheelRotationEventsTest$$Lambda$createUI::classInfo$.name)) {
			return TooMuchWheelRotationEventsTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return TooMuchWheelRotationEventsTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(TooMuchWheelRotationEventsTest, name, initialize, &_TooMuchWheelRotationEventsTest_ClassInfo_, clinit$TooMuchWheelRotationEventsTest, allocate$TooMuchWheelRotationEventsTest);
	return class$;
}

$Class* TooMuchWheelRotationEventsTest::class$ = nullptr;