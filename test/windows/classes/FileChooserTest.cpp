#include <FileChooserTest.h>

#include <FileChooserTest$1.h>
#include <Sysout4FileChooserTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $FileChooserTest$1 = ::FileChooserTest$1;
using $Sysout4FileChooserTest = ::Sysout4FileChooserTest;
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

$FieldInfo _FileChooserTest_FieldInfo_[] = {
	{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, theTestPassed)},
	{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, testGeneratedInterrupt)},
	{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, mainThread)},
	{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileChooserTest, sleepTime)},
	{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $STATIC, $staticField(FileChooserTest, fileChooser)},
	{}
};

$MethodInfo _FileChooserTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileChooserTest::*)()>(&FileChooserTest::init$))},
	{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&FileChooserTest::fail))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FileChooserTest::init)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FileChooserTest::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&FileChooserTest::pass))},
	{}
};

$InnerClassInfo _FileChooserTest_InnerClassesInfo_[] = {
	{"FileChooserTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileChooserTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FileChooserTest",
	"java.lang.Object",
	nullptr,
	_FileChooserTest_FieldInfo_,
	_FileChooserTest_MethodInfo_,
	nullptr,
	nullptr,
	_FileChooserTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FileChooserTest$1"
};

$Object* allocate$FileChooserTest($Class* clazz) {
	return $of($alloc(FileChooserTest));
}

bool FileChooserTest::theTestPassed = false;
bool FileChooserTest::testGeneratedInterrupt = false;
$Thread* FileChooserTest::mainThread = nullptr;
int32_t FileChooserTest::sleepTime = 0;
$JFileChooser* FileChooserTest::fileChooser = nullptr;

void FileChooserTest::init$() {
}

void FileChooserTest::init() {
	$init(FileChooserTest);
	$SwingUtilities::invokeAndWait($$new($FileChooserTest$1));
}

void FileChooserTest::main($StringArray* args) {
	$init(FileChooserTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(FileChooserTest::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		return;
	}
	try {
		$nc(FileChooserTest::mainThread)->sleep(FileChooserTest::sleepTime);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ex, $catch());
		$Sysout4FileChooserTest::dispose();
		if (!FileChooserTest::theTestPassed && FileChooserTest::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!FileChooserTest::testGeneratedInterrupt) {
		$Sysout4FileChooserTest::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void FileChooserTest::pass() {
	$load(FileChooserTest);
	$synchronized(class$) {
		$init(FileChooserTest);
		FileChooserTest::theTestPassed = true;
		FileChooserTest::testGeneratedInterrupt = true;
		$nc(FileChooserTest::mainThread)->interrupt();
	}
}

void FileChooserTest::fail() {
	$load(FileChooserTest);
	$synchronized(class$) {
		$init(FileChooserTest);
		FileChooserTest::theTestPassed = false;
		FileChooserTest::testGeneratedInterrupt = true;
		$nc(FileChooserTest::mainThread)->interrupt();
	}
}

void clinit$FileChooserTest($Class* class$) {
	FileChooserTest::sleepTime = 30000;
}

FileChooserTest::FileChooserTest() {
}

$Class* FileChooserTest::load$($String* name, bool initialize) {
	$loadClass(FileChooserTest, name, initialize, &_FileChooserTest_ClassInfo_, clinit$FileChooserTest, allocate$FileChooserTest);
	return class$;
}

$Class* FileChooserTest::class$ = nullptr;