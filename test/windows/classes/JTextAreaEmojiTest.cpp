#include <JTextAreaEmojiTest.h>

#include <JTextAreaEmojiTest$1.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $JTextAreaEmojiTest$1 = ::JTextAreaEmojiTest$1;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $EventObject = ::java::util::EventObject;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _JTextAreaEmojiTest_FieldInfo_[] = {
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, layout)},
	{"textAreaPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, textAreaPanel)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, mainControlPanel)},
	{"instructionPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, instructionPanel)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, resultButtonPanel)},
	{"controlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, controlPanel)},
	{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, instructionTextArea)},
	{"emojiTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, emojiTextArea)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, failButton)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTextAreaEmojiTest, mainFrame)},
	{"testRunLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextAreaEmojiTest, testRunLatch)},
	{}
};

$MethodInfo _JTextAreaEmojiTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaEmojiTest::*)()>(&JTextAreaEmojiTest::init$)), "java.lang.Exception"},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JTextAreaEmojiTest::cleanUp))},
	{"createControlPanelUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JTextAreaEmojiTest::*)()>(&JTextAreaEmojiTest::createControlPanelUI)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTextAreaEmojiTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JTextAreaEmojiTest_InnerClassesInfo_[] = {
	{"JTextAreaEmojiTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextAreaEmojiTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTextAreaEmojiTest",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JTextAreaEmojiTest_FieldInfo_,
	_JTextAreaEmojiTest_MethodInfo_,
	nullptr,
	nullptr,
	_JTextAreaEmojiTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JTextAreaEmojiTest$1"
};

$Object* allocate$JTextAreaEmojiTest($Class* clazz) {
	return $of($alloc(JTextAreaEmojiTest));
}

$GridBagLayout* JTextAreaEmojiTest::layout = nullptr;
$JPanel* JTextAreaEmojiTest::textAreaPanel = nullptr;
$JPanel* JTextAreaEmojiTest::mainControlPanel = nullptr;
$JPanel* JTextAreaEmojiTest::instructionPanel = nullptr;
$JPanel* JTextAreaEmojiTest::resultButtonPanel = nullptr;
$JPanel* JTextAreaEmojiTest::controlPanel = nullptr;
$JTextArea* JTextAreaEmojiTest::instructionTextArea = nullptr;
$JTextArea* JTextAreaEmojiTest::emojiTextArea = nullptr;
$JButton* JTextAreaEmojiTest::passButton = nullptr;
$JButton* JTextAreaEmojiTest::failButton = nullptr;
$JFrame* JTextAreaEmojiTest::mainFrame = nullptr;
$CountDownLatch* JTextAreaEmojiTest::testRunLatch = nullptr;

void JTextAreaEmojiTest::main($StringArray* args) {
	$init(JTextAreaEmojiTest);
	$var(JTextAreaEmojiTest, test, $new(JTextAreaEmojiTest));
	$init($TimeUnit);
	bool status = $nc(JTextAreaEmojiTest::testRunLatch)->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$throwNew($RuntimeException, "Test timed out"_s);
	}
}

void JTextAreaEmojiTest::init$() {
	createControlPanelUI();
}

void JTextAreaEmojiTest::createControlPanelUI() {
	$SwingUtilities::invokeAndWait($$new($JTextAreaEmojiTest$1, this));
}

void JTextAreaEmojiTest::actionPerformed($ActionEvent* evt) {
	if ($instanceOf($JButton, $($nc(evt)->getSource()))) {
		$var($JButton, btn, $cast($JButton, evt->getSource()));
		{
			$var($String, s6251$, $nc(btn)->getActionCommand());
			int32_t tmp6251$ = -1;
			switch ($nc(s6251$)->hashCode()) {
			case 0x0025D831:
				{
					if (s6251$->equals("Pass"_s)) {
						tmp6251$ = 0;
					}
					break;
				}
			case 0x00214B3E:
				{
					if (s6251$->equals("Fail"_s)) {
						tmp6251$ = 1;
					}
					break;
				}
			}
			switch (tmp6251$) {
			case 0:
				{
					break;
				}
			case 1:
				{
					$throwNew($AssertionError, $of("Test case has failed!"_s));
				}
			}
		}
		cleanUp();
	}
}

void JTextAreaEmojiTest::cleanUp() {
	$init(JTextAreaEmojiTest);
	$nc(JTextAreaEmojiTest::mainFrame)->dispose();
	$nc(JTextAreaEmojiTest::testRunLatch)->countDown();
}

void clinit$JTextAreaEmojiTest($Class* class$) {
	$assignStatic(JTextAreaEmojiTest::testRunLatch, $new($CountDownLatch, 1));
}

JTextAreaEmojiTest::JTextAreaEmojiTest() {
}

$Class* JTextAreaEmojiTest::load$($String* name, bool initialize) {
	$loadClass(JTextAreaEmojiTest, name, initialize, &_JTextAreaEmojiTest_ClassInfo_, clinit$JTextAreaEmojiTest, allocate$JTextAreaEmojiTest);
	return class$;
}

$Class* JTextAreaEmojiTest::class$ = nullptr;