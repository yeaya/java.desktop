#include <TitledBorder.h>

#include <TitledBorder$1.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $TitledBorder$1 = ::TitledBorder$1;
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
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _TitledBorder_FieldInfo_[] = {
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, layout)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, mainControlPanel)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, resultButtonPanel)},
	{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, instructionTextArea)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, failButton)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, mainFrame)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(TitledBorder, latch)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(TitledBorder, testResult)},
	{}
};

$MethodInfo _TitledBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder::*)($CountDownLatch*)>(&TitledBorder::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(TitledBorder::*)()>(&TitledBorder::createUI)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TitledBorder_InnerClassesInfo_[] = {
	{"TitledBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TitledBorder_ClassInfo_ = {
	$ACC_SUPER,
	"TitledBorder",
	"java.lang.Object",
	"java.lang.Runnable",
	_TitledBorder_FieldInfo_,
	_TitledBorder_MethodInfo_,
	nullptr,
	nullptr,
	_TitledBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TitledBorder$1,TitledBorder$1$1"
};

$Object* allocate$TitledBorder($Class* clazz) {
	return $of($alloc(TitledBorder));
}

$GridBagLayout* TitledBorder::layout = nullptr;
$JPanel* TitledBorder::mainControlPanel = nullptr;
$JPanel* TitledBorder::resultButtonPanel = nullptr;
$JTextArea* TitledBorder::instructionTextArea = nullptr;
$JButton* TitledBorder::passButton = nullptr;
$JButton* TitledBorder::failButton = nullptr;
$JFrame* TitledBorder::mainFrame = nullptr;

void TitledBorder::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void TitledBorder::run() {
	try {
		createUI();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if (TitledBorder::mainFrame != nullptr) {
			$nc(TitledBorder::mainFrame)->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void TitledBorder::createUI() {
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new($TitledBorder$1, this));
}

TitledBorder::TitledBorder() {
}

$Class* TitledBorder::load$($String* name, bool initialize) {
	$loadClass(TitledBorder, name, initialize, &_TitledBorder_ClassInfo_, allocate$TitledBorder);
	return class$;
}

$Class* TitledBorder::class$ = nullptr;