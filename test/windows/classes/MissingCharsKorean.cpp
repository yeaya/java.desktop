#include <MissingCharsKorean.h>

#include <MissingCharsKorean$1.h>
#include <java/awt/AWTException.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BOLD
#undef CENTER
#undef EXIT_ON_CLOSE
#undef NORTH
#undef SOUTH
#undef VK_BACK_SLASH
#undef VK_BACK_SPACE
#undef VK_G
#undef VK_H
#undef VK_Q
#undef VK_SLASH

using $MissingCharsKorean$1 = ::MissingCharsKorean$1;
using $intArray2 = $Array<int32_t, 2>;
using $AWTException = ::java::awt::AWTException;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class MissingCharsKorean$$Lambda$lambda$main$0 : public $Runnable {
	$class(MissingCharsKorean$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MissingCharsKorean::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MissingCharsKorean$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MissingCharsKorean$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingCharsKorean$$Lambda$lambda$main$0::*)()>(&MissingCharsKorean$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MissingCharsKorean$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MissingCharsKorean$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MissingCharsKorean$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MissingCharsKorean$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$main$0::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$setupUI$1$1 : public $ActionListener {
	$class(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* btnStartTest, $JButton* btnCancelTest) {
		$set(this, btnStartTest, btnStartTest);
		$set(this, btnCancelTest, btnCancelTest);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MissingCharsKorean::lambda$setupUI$1(btnStartTest, btnCancelTest, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MissingCharsKorean$$Lambda$lambda$setupUI$1$1>());
	}
	$JButton* btnStartTest = nullptr;
	$JButton* btnCancelTest = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MissingCharsKorean$$Lambda$lambda$setupUI$1$1::fieldInfos[3] = {
	{"btnStartTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnStartTest)},
	{"btnCancelTest", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnCancelTest)},
	{}
};
$MethodInfo MissingCharsKorean$$Lambda$lambda$setupUI$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingCharsKorean$$Lambda$lambda$setupUI$1$1::*)($JButton*,$JButton*)>(&MissingCharsKorean$$Lambda$lambda$setupUI$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MissingCharsKorean$$Lambda$lambda$setupUI$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"MissingCharsKorean$$Lambda$lambda$setupUI$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$1$1::load$($String* name, bool initialize) {
	$loadClass(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$1$1::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$setupUI$2$2 : public $ActionListener {
	$class(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		MissingCharsKorean::lambda$setupUI$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MissingCharsKorean$$Lambda$lambda$setupUI$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MissingCharsKorean$$Lambda$lambda$setupUI$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingCharsKorean$$Lambda$lambda$setupUI$2$2::*)()>(&MissingCharsKorean$$Lambda$lambda$setupUI$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MissingCharsKorean$$Lambda$lambda$setupUI$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"MissingCharsKorean$$Lambda$lambda$setupUI$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$2$2::load$($String* name, bool initialize) {
	$loadClass(MissingCharsKorean$$Lambda$lambda$setupUI$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$setupUI$2$2::class$ = nullptr;

class MissingCharsKorean$$Lambda$lambda$performTasks$3$3 : public $Runnable {
	$class(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MissingCharsKorean::lambda$performTasks$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MissingCharsKorean$$Lambda$lambda$performTasks$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MissingCharsKorean$$Lambda$lambda$performTasks$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingCharsKorean$$Lambda$lambda$performTasks$3$3::*)()>(&MissingCharsKorean$$Lambda$lambda$performTasks$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MissingCharsKorean$$Lambda$lambda$performTasks$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"MissingCharsKorean$$Lambda$lambda$performTasks$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MissingCharsKorean$$Lambda$lambda$performTasks$3$3::load$($String* name, bool initialize) {
	$loadClass(MissingCharsKorean$$Lambda$lambda$performTasks$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MissingCharsKorean$$Lambda$lambda$performTasks$3$3::class$ = nullptr;

$FieldInfo _MissingCharsKorean_FieldInfo_[] = {
	{"testPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, testPassed)},
	{"startTest", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, startTest)},
	{"expectedResults", "[I", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, expectedResults)},
	{"inKeyCodes", "[[I", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, inKeyCodes)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, frame)},
	{"lblTestStatus", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, lblTestStatus)},
	{"textFieldMain", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, textFieldMain)},
	{"testResult", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(MissingCharsKorean, testResult)},
	{"testStartLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MissingCharsKorean, testStartLatch)},
	{}
};

$MethodInfo _MissingCharsKorean_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingCharsKorean::*)()>(&MissingCharsKorean::init$))},
	{"enterInput", "(Ljava/awt/Robot;[[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,$intArray2*)>(&MissingCharsKorean::enterInput))},
	{"glyphTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MissingCharsKorean::glyphTest))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MissingCharsKorean::lambda$main$0))},
	{"lambda$performTasks$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MissingCharsKorean::lambda$performTasks$3))},
	{"lambda$setupUI$1", "(Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$JButton*,$ActionEvent*)>(&MissingCharsKorean::lambda$setupUI$1))},
	{"lambda$setupUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&MissingCharsKorean::lambda$setupUI$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MissingCharsKorean::main)), "java.lang.Exception"},
	{"performTasks", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Robot*)>(&MissingCharsKorean::performTasks))},
	{"setKeyInput", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&MissingCharsKorean::setKeyInput))},
	{"setTaskStatus", "(ZI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool,int32_t)>(&MissingCharsKorean::setTaskStatus))},
	{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MissingCharsKorean::setupUI))},
	{"validateInput", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MissingCharsKorean::validateInput))},
	{}
};

$InnerClassInfo _MissingCharsKorean_InnerClassesInfo_[] = {
	{"MissingCharsKorean$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MissingCharsKorean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MissingCharsKorean",
	"java.lang.Object",
	nullptr,
	_MissingCharsKorean_FieldInfo_,
	_MissingCharsKorean_MethodInfo_,
	nullptr,
	nullptr,
	_MissingCharsKorean_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MissingCharsKorean$1"
};

$Object* allocate$MissingCharsKorean($Class* clazz) {
	return $of($alloc(MissingCharsKorean));
}

bool MissingCharsKorean::testPassed = false;
bool MissingCharsKorean::startTest = false;
$ints* MissingCharsKorean::expectedResults = nullptr;
$intArray2* MissingCharsKorean::inKeyCodes = nullptr;
$JFrame* MissingCharsKorean::frame = nullptr;
$JLabel* MissingCharsKorean::lblTestStatus = nullptr;
$JTextField* MissingCharsKorean::textFieldMain = nullptr;
$String* MissingCharsKorean::testResult = nullptr;
$CountDownLatch* MissingCharsKorean::testStartLatch = nullptr;

void MissingCharsKorean::init$() {
}

void MissingCharsKorean::main($StringArray* args) {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MissingCharsKorean$$Lambda$lambda$main$0)));
	$nc(MissingCharsKorean::testStartLatch)->await();
	if (MissingCharsKorean::startTest) {
		glyphTest();
		$nc(MissingCharsKorean::frame)->dispose();
		if (MissingCharsKorean::testPassed) {
			$init($System);
			$nc($System::out)->println(MissingCharsKorean::testResult);
		} else {
			$throwNew($RuntimeException, $$str({"Korean text missing characters : "_s, MissingCharsKorean::testResult}));
		}
	} else {
		$throwNew($RuntimeException, "User has not executed the test"_s);
	}
}

void MissingCharsKorean::setupUI() {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	$var($String, description, " 1. Go to \"System Preferences -> Keyboard -> Input Sources\" and add \"2-Set Korean\" from Korean language group \n 2. Set current IM to \"2-Set Korean\" \n 3. Try typing in the text field to ensure that Korean keyboard has been successfully selected \n 4. Now click on \"Start Test\" button \n"_s);
	$var($String, title, "Missing Characters Korean Test (Mac OS)"_s);
	$assignStatic(MissingCharsKorean::frame, $new($JFrame, title));
	$var($JPanel, mainPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JPanel, textEditPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$assignStatic(MissingCharsKorean::textFieldMain, $new($JTextField, 20));
	$var($Font, font, $new($Font, "Source Han Serif K"_s, $Font::BOLD, 12));
	$nc(MissingCharsKorean::textFieldMain)->setFont(font);
	textEditPanel->add(static_cast<$Component*>(MissingCharsKorean::textFieldMain));
	$init($BorderLayout);
	mainPanel->add(static_cast<$Component*>(textEditPanel), $of($BorderLayout::CENTER));
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, btnStartTest, $new($JButton, "Start Test"_s));
	$var($JButton, btnCancelTest, $new($JButton, "Cancel Test"_s));
	btnStartTest->addActionListener(static_cast<$ActionListener*>($$new(MissingCharsKorean$$Lambda$lambda$setupUI$1$1, btnStartTest, btnCancelTest)));
	btnCancelTest->addActionListener(static_cast<$ActionListener*>($$new(MissingCharsKorean$$Lambda$lambda$setupUI$2$2)));
	mainPanel->add(static_cast<$Component*>(textArea), $of($BorderLayout::NORTH));
	$var($JPanel, buttonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	buttonPanel->add(static_cast<$Component*>(btnStartTest));
	buttonPanel->add(static_cast<$Component*>(btnCancelTest));
	mainPanel->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$assignStatic(MissingCharsKorean::lblTestStatus, $new($JLabel, ""_s));
	$nc(MissingCharsKorean::lblTestStatus)->setMinimumSize($$new($Dimension, 150, 20));
	$nc(MissingCharsKorean::lblTestStatus)->setPreferredSize($$new($Dimension, 150, 20));
	$nc(MissingCharsKorean::lblTestStatus)->setVisible(true);
	textEditPanel->add(static_cast<$Component*>(MissingCharsKorean::lblTestStatus));
	$nc(MissingCharsKorean::frame)->add(static_cast<$Component*>(mainPanel));
	$nc(MissingCharsKorean::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(MissingCharsKorean::frame)->pack();
	$nc(MissingCharsKorean::frame)->setLocationRelativeTo(nullptr);
	$nc(MissingCharsKorean::frame)->addWindowListener($$new($MissingCharsKorean$1));
	$nc(MissingCharsKorean::frame)->setVisible(true);
}

void MissingCharsKorean::glyphTest() {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Robot, robotKeySimulator, $new($Robot));
		performTasks(robotKeySimulator);
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		$init($System);
		$nc($System::err)->print($$str({"Creation Of Robot Failed : "_s, $(e->getMessage())}));
		MissingCharsKorean::testPassed = false;
	}
}

void MissingCharsKorean::performTasks($Robot* robotForKeyInput) {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	int32_t taskCount = 0;
	$nc(MissingCharsKorean::lblTestStatus)->setText("Running Tests.."_s);
	$nc(robotForKeyInput)->setAutoDelay(500);
	while (setKeyInput(taskCount)) {
		$nc(MissingCharsKorean::textFieldMain)->setText(""_s);
		$nc(MissingCharsKorean::textFieldMain)->requestFocusInWindow();
		enterInput(robotForKeyInput, MissingCharsKorean::inKeyCodes);
		++taskCount;
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MissingCharsKorean$$Lambda$lambda$performTasks$3$3)));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($System);
			$nc($System::err)->print($$str({"validateInput Failed : "_s, $(e->getMessage())}));
			MissingCharsKorean::testPassed = false;
			break;
		}
		if (!MissingCharsKorean::testPassed) {
			break;
		}
		setTaskStatus(false, taskCount);
	}
	setTaskStatus(true, taskCount);
}

bool MissingCharsKorean::setKeyInput(int32_t iCount) {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	bool inputSet = true;
	switch (iCount) {
	case 0:
		{
			$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
				12610,
				47
			}));
			$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_SLASH})
			}));
			break;
		}
	case 1:
		{
			$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
				12610,
				47,
				0x0000D638,
				92
			}));
			$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_SLASH}),
				$$new($ints, {$KeyEvent::VK_G}),
				$$new($ints, {$KeyEvent::VK_H}),
				$$new($ints, {$KeyEvent::VK_BACK_SLASH})
			}));
			break;
		}
	case 2:
		{
			$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
				12610,
				47,
				0x0000D649,
				92
			}));
			$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_SLASH}),
				$$new($ints, {$KeyEvent::VK_G}),
				$$new($ints, {$KeyEvent::VK_H}),
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_BACK_SLASH})
			}));
			break;
		}
	case 3:
		{
			$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
				12610,
				47,
				0x0000D638,
				92
			}));
			$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_SLASH}),
				$$new($ints, {$KeyEvent::VK_G}),
				$$new($ints, {$KeyEvent::VK_H}),
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
				$$new($ints, {$KeyEvent::VK_BACK_SLASH})
			}));
			break;
		}
	case 4:
		{
			$assignStatic(MissingCharsKorean::expectedResults, $new($ints, {
				12610,
				47,
				12622,
				92
			}));
			$assignStatic(MissingCharsKorean::inKeyCodes, $new($intArray2, {
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_SLASH}),
				$$new($ints, {$KeyEvent::VK_G}),
				$$new($ints, {$KeyEvent::VK_H}),
				$$new($ints, {$KeyEvent::VK_Q}),
				$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
				$$new($ints, {$KeyEvent::VK_BACK_SPACE}),
				$$new($ints, {$KeyEvent::VK_BACK_SLASH})
			}));
			break;
		}
	default:
		{
			inputSet = false;
			break;
		}
	}
	return inputSet;
}

void MissingCharsKorean::enterInput($Robot* robotKeyInput, $intArray2* keyInputs) {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(keyInputs)->length; ++i) {
		$var($String, strKeyInput, "KeyPress=>"_s);
		int32_t noOfKeyInputs = $nc(keyInputs->get(i))->length;
		for (int32_t j = 0; j < noOfKeyInputs; ++j) {
			$nc(robotKeyInput)->keyPress($nc(keyInputs->get(i))->get(j));
			$plusAssign(strKeyInput, $$str({($($Integer::toHexString($nc(keyInputs->get(i))->get(j)))), ":"_s}));
		}
		$plusAssign(strKeyInput, "KeyRelease=>"_s);
		for (int32_t j = noOfKeyInputs - 1; j >= 0; --j) {
			$nc(robotKeyInput)->keyRelease($nc(keyInputs->get(i))->get(j));
			$plusAssign(strKeyInput, $$str({($($Integer::toHexString($nc(keyInputs->get(i))->get(j)))), ":"_s}));
		}
		$init($System);
		$nc($System::out)->println(strKeyInput);
	}
}

void MissingCharsKorean::validateInput() {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	MissingCharsKorean::testPassed = false;
	if (MissingCharsKorean::expectedResults != nullptr) {
		$var($String, strCurr, $nc(MissingCharsKorean::textFieldMain)->getText());
		if ($nc(MissingCharsKorean::expectedResults)->length == $nc(strCurr)->length()) {
			MissingCharsKorean::testPassed = true;
			for (int32_t i = 0; i < strCurr->length(); ++i) {
				int32_t charActual = strCurr->charAt(i);
				if (charActual != $nc(MissingCharsKorean::expectedResults)->get(i)) {
					$init($System);
					$nc($System::err)->println($$str({"<"_s, $$str(i), "> Actual = "_s, $$str(charActual), " Expected = "_s, $$str($nc(MissingCharsKorean::expectedResults)->get(i))}));
					MissingCharsKorean::testPassed = false;
					break;
				}
			}
		}
	}
}

void MissingCharsKorean::setTaskStatus(bool allTasksPerformed, int32_t taskCount) {
	$init(MissingCharsKorean);
	$useLocalCurrentObjectStackCache();
	if (MissingCharsKorean::testPassed) {
		if (allTasksPerformed) {
			$assignStatic(MissingCharsKorean::testResult, "All Tests Passed"_s);
		} else {
			$assignStatic(MissingCharsKorean::testResult, $str({"Test "_s, $($Integer::toString(taskCount)), " Passed"_s}));
		}
	} else {
		$assignStatic(MissingCharsKorean::testResult, $str({"Test "_s, $($Integer::toString(taskCount)), " Failed"_s}));
	}
	$nc(MissingCharsKorean::lblTestStatus)->setText(MissingCharsKorean::testResult);
}

void MissingCharsKorean::lambda$performTasks$3() {
	$init(MissingCharsKorean);
	validateInput();
}

void MissingCharsKorean::lambda$setupUI$2($ActionEvent* e) {
	$init(MissingCharsKorean);
	$nc(MissingCharsKorean::frame)->dispose();
	$nc(MissingCharsKorean::testStartLatch)->countDown();
}

void MissingCharsKorean::lambda$setupUI$1($JButton* btnStartTest, $JButton* btnCancelTest, $ActionEvent* e) {
	$init(MissingCharsKorean);
	$nc(btnStartTest)->setEnabled(false);
	$nc(btnCancelTest)->setEnabled(false);
	MissingCharsKorean::startTest = true;
	$nc(MissingCharsKorean::testStartLatch)->countDown();
}

void MissingCharsKorean::lambda$main$0() {
	$init(MissingCharsKorean);
	setupUI();
}

void clinit$MissingCharsKorean($Class* class$) {
	MissingCharsKorean::testPassed = false;
	MissingCharsKorean::startTest = false;
	$assignStatic(MissingCharsKorean::expectedResults, nullptr);
	$assignStatic(MissingCharsKorean::inKeyCodes, nullptr);
	$assignStatic(MissingCharsKorean::frame, nullptr);
	$assignStatic(MissingCharsKorean::lblTestStatus, nullptr);
	$assignStatic(MissingCharsKorean::textFieldMain, nullptr);
	$assignStatic(MissingCharsKorean::testStartLatch, $new($CountDownLatch, 1));
}

MissingCharsKorean::MissingCharsKorean() {
}

$Class* MissingCharsKorean::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MissingCharsKorean$$Lambda$lambda$main$0::classInfo$.name)) {
			return MissingCharsKorean$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(MissingCharsKorean$$Lambda$lambda$setupUI$1$1::classInfo$.name)) {
			return MissingCharsKorean$$Lambda$lambda$setupUI$1$1::load$(name, initialize);
		}
		if (name->equals(MissingCharsKorean$$Lambda$lambda$setupUI$2$2::classInfo$.name)) {
			return MissingCharsKorean$$Lambda$lambda$setupUI$2$2::load$(name, initialize);
		}
		if (name->equals(MissingCharsKorean$$Lambda$lambda$performTasks$3$3::classInfo$.name)) {
			return MissingCharsKorean$$Lambda$lambda$performTasks$3$3::load$(name, initialize);
		}
	}
	$loadClass(MissingCharsKorean, name, initialize, &_MissingCharsKorean_ClassInfo_, clinit$MissingCharsKorean, allocate$MissingCharsKorean);
	return class$;
}

$Class* MissingCharsKorean::class$ = nullptr;