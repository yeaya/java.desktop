#include <TextSelectionTest.h>

#include <TextSelectionTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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

#undef CENTER
#undef EXIT_ON_CLOSE
#undef INSTRUCTIONS
#undef MINUTES
#undef SOUTH

using $TextSelectionTest$1 = ::TextSelectionTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PrintStream = ::java::io::PrintStream;
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
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TextSelectionTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(TextSelectionTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TextSelectionTest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextSelectionTest$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TextSelectionTest$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextSelectionTest$$Lambda$createAndShowGUI::*)()>(&TextSelectionTest$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextSelectionTest$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextSelectionTest$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TextSelectionTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(TextSelectionTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextSelectionTest$$Lambda$createAndShowGUI::class$ = nullptr;

class TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1 : public $ActionListener {
	$class(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* frame) {
		$set(this, frame, frame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TextSelectionTest::lambda$createAndShowGUI$0(frame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1>());
	}
	$JFrame* frame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::fieldInfos[2] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, frame)},
	{}
};
$MethodInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::*)($JFrame*)>(&TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::load$($String* name, bool initialize) {
	$loadClass(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::class$ = nullptr;

class TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2 : public $ActionListener {
	$class(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* frame) {
		$set(this, frame, frame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		TextSelectionTest::lambda$createAndShowGUI$1(frame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2>());
	}
	$JFrame* frame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::fieldInfos[2] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, frame)},
	{}
};
$MethodInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::*)($JFrame*)>(&TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::load$($String* name, bool initialize) {
	$loadClass(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::class$ = nullptr;

$FieldInfo _TextSelectionTest_FieldInfo_[] = {
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextSelectionTest, INSTRUCTIONS)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextSelectionTest, latch)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(TextSelectionTest, passed)},
	{}
};

$MethodInfo _TextSelectionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextSelectionTest::*)()>(&TextSelectionTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TextSelectionTest::createAndShowGUI))},
	{"lambda$createAndShowGUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&TextSelectionTest::lambda$createAndShowGUI$0))},
	{"lambda$createAndShowGUI$1", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&TextSelectionTest::lambda$createAndShowGUI$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TextSelectionTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TextSelectionTest_InnerClassesInfo_[] = {
	{"TextSelectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TextSelectionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TextSelectionTest",
	"java.lang.Object",
	nullptr,
	_TextSelectionTest_FieldInfo_,
	_TextSelectionTest_MethodInfo_,
	nullptr,
	nullptr,
	_TextSelectionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TextSelectionTest$1"
};

$Object* allocate$TextSelectionTest($Class* clazz) {
	return $of($alloc(TextSelectionTest));
}

$String* TextSelectionTest::INSTRUCTIONS = nullptr;
$CountDownLatch* TextSelectionTest::latch = nullptr;
$volatile(bool) TextSelectionTest::passed = false;

void TextSelectionTest::init$() {
}

void TextSelectionTest::main($StringArray* args) {
	$init(TextSelectionTest);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TextSelectionTest$$Lambda$createAndShowGUI)));
	$init($TimeUnit);
	$nc(TextSelectionTest::latch)->await(3, $TimeUnit::MINUTES);
	$nc($System::out)->println($$str({"passed: "_s, $$str(TextSelectionTest::passed)}));
	if (!TextSelectionTest::passed) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void TextSelectionTest::createAndShowGUI() {
	$init(TextSelectionTest);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame, "Follow the instructions below:"_s));
	frame->setSize(700, 500);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JTextComponent, textComponent, $new($JTextArea, TextSelectionTest::INSTRUCTIONS));
	textComponent->setEditable(false);
	$var($Font, font, textComponent->getFont());
	$assign(font, $nc(font)->deriveFont(24.0f));
	textComponent->setFont(font);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(textComponent), $of($BorderLayout::CENTER));
	$var($JPanel, buttonsPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->addActionListener(static_cast<$ActionListener*>($$new(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1, frame)));
	$var($JButton, failsButton, $new($JButton, "Fail"_s));
	failsButton->addActionListener(static_cast<$ActionListener*>($$new(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2, frame)));
	buttonsPanel->add(static_cast<$Component*>(passButton));
	buttonsPanel->add(static_cast<$Component*>(failsButton));
	panel->add(static_cast<$Component*>(buttonsPanel), $of($BorderLayout::SOUTH));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(panel));
	frame->addWindowListener($$new($TextSelectionTest$1));
	frame->setVisible(true);
}

void TextSelectionTest::lambda$createAndShowGUI$1($JFrame* frame, $ActionEvent* e) {
	$init(TextSelectionTest);
	TextSelectionTest::passed = false;
	$nc(TextSelectionTest::latch)->countDown();
	$nc(frame)->dispose();
}

void TextSelectionTest::lambda$createAndShowGUI$0($JFrame* frame, $ActionEvent* e) {
	$init(TextSelectionTest);
	TextSelectionTest::passed = true;
	$nc(TextSelectionTest::latch)->countDown();
	$nc(frame)->dispose();
}

void clinit$TextSelectionTest($Class* class$) {
	$assignStatic(TextSelectionTest::INSTRUCTIONS, "This is a manual test.\n\nSelect the current text from the end to the beginning.\n\nIf the text is slightly shiftted from one side to another\nand back during selection press Fail.\nOtherwise, press Pass."_s);
	$assignStatic(TextSelectionTest::latch, $new($CountDownLatch, 1));
	TextSelectionTest::passed = false;
}

TextSelectionTest::TextSelectionTest() {
}

$Class* TextSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TextSelectionTest$$Lambda$createAndShowGUI::classInfo$.name)) {
			return TextSelectionTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::classInfo$.name)) {
			return TextSelectionTest$$Lambda$lambda$createAndShowGUI$0$1::load$(name, initialize);
		}
		if (name->equals(TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::classInfo$.name)) {
			return TextSelectionTest$$Lambda$lambda$createAndShowGUI$1$2::load$(name, initialize);
		}
	}
	$loadClass(TextSelectionTest, name, initialize, &_TextSelectionTest_ClassInfo_, clinit$TextSelectionTest, allocate$TextSelectionTest);
	return class$;
}

$Class* TextSelectionTest::class$ = nullptr;