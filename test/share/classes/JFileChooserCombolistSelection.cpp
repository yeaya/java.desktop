#include <JFileChooserCombolistSelection.h>

#include <JFileChooserCombolistSelection$1.h>
#include <Sysout4JFileChooserCombolistSelection.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection$1 = ::JFileChooserCombolistSelection$1;
using $Sysout4JFileChooserCombolistSelection = ::Sysout4JFileChooserCombolistSelection;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _JFileChooserCombolistSelection_FieldInfo_[] = {
	{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, theTestPassed)},
	{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, testGeneratedInterrupt)},
	{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, mainThread)},
	{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserCombolistSelection, sleepTime)},
	{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $STATIC, $staticField(JFileChooserCombolistSelection, fileChooser)},
	{}
};

$MethodInfo _JFileChooserCombolistSelection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooserCombolistSelection::*)()>(&JFileChooserCombolistSelection::init$))},
	{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&JFileChooserCombolistSelection::fail))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFileChooserCombolistSelection::init)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JFileChooserCombolistSelection::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&JFileChooserCombolistSelection::pass))},
	{}
};

$InnerClassInfo _JFileChooserCombolistSelection_InnerClassesInfo_[] = {
	{"JFileChooserCombolistSelection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooserCombolistSelection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JFileChooserCombolistSelection",
	"java.lang.Object",
	nullptr,
	_JFileChooserCombolistSelection_FieldInfo_,
	_JFileChooserCombolistSelection_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooserCombolistSelection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JFileChooserCombolistSelection$1"
};

$Object* allocate$JFileChooserCombolistSelection($Class* clazz) {
	return $of($alloc(JFileChooserCombolistSelection));
}

bool JFileChooserCombolistSelection::theTestPassed = false;
bool JFileChooserCombolistSelection::testGeneratedInterrupt = false;
$Thread* JFileChooserCombolistSelection::mainThread = nullptr;
int32_t JFileChooserCombolistSelection::sleepTime = 0;
$JFileChooser* JFileChooserCombolistSelection::fileChooser = nullptr;

void JFileChooserCombolistSelection::init$() {
}

void JFileChooserCombolistSelection::init() {
	$init(JFileChooserCombolistSelection);
	$SwingUtilities::invokeAndWait($$new($JFileChooserCombolistSelection$1));
}

void JFileChooserCombolistSelection::main($StringArray* args) {
	$init(JFileChooserCombolistSelection);
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$($nc(osName)->toLowerCase())->contains("win"_s)) {
		$nc($System::out)->println("The test was skipped because it is sensible only for Windows."_s);
		return;
	}
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} catch ($Exception& ex) {
		return;
	}
	$assignStatic(JFileChooserCombolistSelection::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception& ex) {
		return;
	}
	try {
		$nc(JFileChooserCombolistSelection::mainThread)->sleep(JFileChooserCombolistSelection::sleepTime);
	} catch ($InterruptedException& ex) {
		$Sysout4JFileChooserCombolistSelection::dispose();
		if (!JFileChooserCombolistSelection::theTestPassed && JFileChooserCombolistSelection::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!JFileChooserCombolistSelection::testGeneratedInterrupt) {
		$Sysout4JFileChooserCombolistSelection::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void JFileChooserCombolistSelection::pass() {
	$load(JFileChooserCombolistSelection);
	$synchronized(class$) {
		$init(JFileChooserCombolistSelection);
		JFileChooserCombolistSelection::theTestPassed = true;
		JFileChooserCombolistSelection::testGeneratedInterrupt = true;
		$nc(JFileChooserCombolistSelection::mainThread)->interrupt();
	}
}

void JFileChooserCombolistSelection::fail() {
	$load(JFileChooserCombolistSelection);
	$synchronized(class$) {
		$init(JFileChooserCombolistSelection);
		JFileChooserCombolistSelection::theTestPassed = false;
		JFileChooserCombolistSelection::testGeneratedInterrupt = true;
		$nc(JFileChooserCombolistSelection::mainThread)->interrupt();
	}
}

void clinit$JFileChooserCombolistSelection($Class* class$) {
	JFileChooserCombolistSelection::sleepTime = 0x00015F90;
}

JFileChooserCombolistSelection::JFileChooserCombolistSelection() {
}

$Class* JFileChooserCombolistSelection::load$($String* name, bool initialize) {
	$loadClass(JFileChooserCombolistSelection, name, initialize, &_JFileChooserCombolistSelection_ClassInfo_, clinit$JFileChooserCombolistSelection, allocate$JFileChooserCombolistSelection);
	return class$;
}

$Class* JFileChooserCombolistSelection::class$ = nullptr;