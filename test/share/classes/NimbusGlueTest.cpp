#include <NimbusGlueTest.h>

#include <NimbusGlueTest$1.h>
#include <NimbusGlueTest$2.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $NimbusGlueTest$1 = ::NimbusGlueTest$1;
using $NimbusGlueTest$2 = ::NimbusGlueTest$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _NimbusGlueTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, robot)},
	{"errorMessage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(NimbusGlueTest, errorMessage)},
	{"bar", "Ljavax/swing/JToolBar;", nullptr, $PRIVATE | $STATIC, $staticField(NimbusGlueTest, bar)},
	{}
};

$MethodInfo _NimbusGlueTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NimbusGlueTest::*)()>(&NimbusGlueTest::init$))},
	{"createButton", "(I)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JButton*(*)(int32_t)>(&NimbusGlueTest::createButton))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NimbusGlueTest::createUI)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NimbusGlueTest::main)), "java.lang.Exception"},
	{"performTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&NimbusGlueTest::performTest)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&NimbusGlueTest::tryLookAndFeel))},
	{}
};

$InnerClassInfo _NimbusGlueTest_InnerClassesInfo_[] = {
	{"NimbusGlueTest$2", nullptr, nullptr, 0},
	{"NimbusGlueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusGlueTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NimbusGlueTest",
	"java.lang.Object",
	nullptr,
	_NimbusGlueTest_FieldInfo_,
	_NimbusGlueTest_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusGlueTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NimbusGlueTest$2,NimbusGlueTest$1"
};

$Object* allocate$NimbusGlueTest($Class* clazz) {
	return $of($alloc(NimbusGlueTest));
}

$JFrame* NimbusGlueTest::frame = nullptr;
$Robot* NimbusGlueTest::robot = nullptr;
$volatile($String*) NimbusGlueTest::errorMessage = nullptr;
$JToolBar* NimbusGlueTest::bar = nullptr;

void NimbusGlueTest::init$() {
}

void NimbusGlueTest::main($StringArray* args) {
	$init(NimbusGlueTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(NimbusGlueTest::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				if (tryLookAndFeel(lookAndFeelString)) {
					createUI();
					performTest();
					$nc(NimbusGlueTest::robot)->waitForIdle();
				}
			}
		}
	}
	if (!""_s->equals(NimbusGlueTest::errorMessage)) {
		$throwNew($RuntimeException, NimbusGlueTest::errorMessage);
	}
}

bool NimbusGlueTest::tryLookAndFeel($String* lookAndFeelString) {
	$init(NimbusGlueTest);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
		return true;
	} catch ($UnsupportedLookAndFeelException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($ClassNotFoundException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($InstantiationException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	} catch ($IllegalAccessException& e) {
		$plusAssignStatic(NimbusGlueTest::errorMessage, $$str({$(e->getMessage()), "\n"_s}));
		$nc($System::err)->println($$str({"Caught Exception: "_s, $(e->getMessage())}));
		return false;
	}
	$shouldNotReachHere();
}

void NimbusGlueTest::performTest() {
	$init(NimbusGlueTest);
	$SwingUtilities::invokeAndWait($$new($NimbusGlueTest$1));
}

void NimbusGlueTest::createUI() {
	$init(NimbusGlueTest);
	$SwingUtilities::invokeAndWait($$new($NimbusGlueTest$2));
}

$JButton* NimbusGlueTest::createButton(int32_t id) {
	$init(NimbusGlueTest);
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($JButton, $$str({"B: "_s, $$str(id)})));
	b->setPreferredSize($$new($Dimension, 60, $nc($(b->getPreferredSize()))->height));
	return b;
}

void clinit$NimbusGlueTest($Class* class$) {
	$assignStatic(NimbusGlueTest::errorMessage, ""_s);
}

NimbusGlueTest::NimbusGlueTest() {
}

$Class* NimbusGlueTest::load$($String* name, bool initialize) {
	$loadClass(NimbusGlueTest, name, initialize, &_NimbusGlueTest_ClassInfo_, clinit$NimbusGlueTest, allocate$NimbusGlueTest);
	return class$;
}

$Class* NimbusGlueTest::class$ = nullptr;