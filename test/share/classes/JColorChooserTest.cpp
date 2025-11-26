#include <JColorChooserTest.h>

#include <JColorChooserTest$1.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JColorChooserTest$1 = ::JColorChooserTest$1;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _JColorChooserTest_FieldInfo_[] = {
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, layout)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, mainControlPanel)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, resultButtonPanel)},
	{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, instructionTextArea)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, failButton)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, mainFrame)},
	{"colorChooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE | $STATIC, $staticField(JColorChooserTest, colorChooser)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(JColorChooserTest, latch)},
	{"testResult", "Z", nullptr, $PUBLIC | $VOLATILE, $field(JColorChooserTest, testResult)},
	{}
};

$MethodInfo _JColorChooserTest_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooserTest::*)($CountDownLatch*)>(&JColorChooserTest::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JColorChooserTest::*)()>(&JColorChooserTest::createUI)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JColorChooserTest_InnerClassesInfo_[] = {
	{"JColorChooserTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JColorChooserTest_ClassInfo_ = {
	$ACC_SUPER,
	"JColorChooserTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_JColorChooserTest_FieldInfo_,
	_JColorChooserTest_MethodInfo_,
	nullptr,
	nullptr,
	_JColorChooserTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JColorChooserTest$1,JColorChooserTest$1$1"
};

$Object* allocate$JColorChooserTest($Class* clazz) {
	return $of($alloc(JColorChooserTest));
}

$GridBagLayout* JColorChooserTest::layout = nullptr;
$JPanel* JColorChooserTest::mainControlPanel = nullptr;
$JPanel* JColorChooserTest::resultButtonPanel = nullptr;
$JTextArea* JColorChooserTest::instructionTextArea = nullptr;
$JButton* JColorChooserTest::passButton = nullptr;
$JButton* JColorChooserTest::failButton = nullptr;
$JFrame* JColorChooserTest::mainFrame = nullptr;
$JColorChooser* JColorChooserTest::colorChooser = nullptr;

void JColorChooserTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void JColorChooserTest::run() {
	$useLocalCurrentObjectStackCache();
	try {
		createUI();
	} catch ($Exception& ex) {
		if (JColorChooserTest::mainFrame != nullptr) {
			$nc(JColorChooserTest::mainFrame)->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void JColorChooserTest::createUI() {
	$SwingUtilities::invokeAndWait($$new($JColorChooserTest$1, this));
}

JColorChooserTest::JColorChooserTest() {
}

$Class* JColorChooserTest::load$($String* name, bool initialize) {
	$loadClass(JColorChooserTest, name, initialize, &_JColorChooserTest_ClassInfo_, allocate$JColorChooserTest);
	return class$;
}

$Class* JColorChooserTest::class$ = nullptr;