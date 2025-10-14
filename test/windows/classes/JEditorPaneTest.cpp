#include <JEditorPaneTest.h>

#include <JEditorPaneTest$1.h>
#include <java/awt/Robot.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JEditorPaneTest$1 = ::JEditorPaneTest$1;
using $Robot = ::java::awt::Robot;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _JEditorPaneTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPaneTest::*)()>(&JEditorPaneTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JEditorPaneTest::main)), "java.lang.Exception"},
	{"writeFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&JEditorPaneTest::writeFile))},
	{}
};

$InnerClassInfo _JEditorPaneTest_InnerClassesInfo_[] = {
	{"JEditorPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPaneTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JEditorPaneTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JEditorPaneTest_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPaneTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JEditorPaneTest$1"
};

$Object* allocate$JEditorPaneTest($Class* clazz) {
	return $of($alloc(JEditorPaneTest));
}

void JEditorPaneTest::init$() {
}

void JEditorPaneTest::main($StringArray* args) {
	$var($Robot, robot, $new($Robot));
	try {
		$var($File, file, $File::createTempFile("Temp_"_s, ".txt"_s));
		$nc(file)->deleteOnExit();
		writeFile(file);
		$SwingUtilities::invokeAndWait($$new($JEditorPaneTest$1, file));
		robot->waitForIdle();
		if (!file->renameTo(file)) {
			file->delete$();
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($RuntimeException, $$str({"Failed to create File"_s, ex}));
	}
}

void JEditorPaneTest::writeFile($File* file) {
	$var($FileWriter, fw, nullptr);
	try {
		$assign(fw, $new($FileWriter, $($nc(file)->getAbsoluteFile())));
		$var($BufferedWriter, bw, $new($BufferedWriter, fw));
		bw->write("Test Text"_s);
		bw->close();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($RuntimeException, $$str({"Failed to write File"_s, ex}));
	}
}

JEditorPaneTest::JEditorPaneTest() {
}

$Class* JEditorPaneTest::load$($String* name, bool initialize) {
	$loadClass(JEditorPaneTest, name, initialize, &_JEditorPaneTest_ClassInfo_, allocate$JEditorPaneTest);
	return class$;
}

$Class* JEditorPaneTest::class$ = nullptr;