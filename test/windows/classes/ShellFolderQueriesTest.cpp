#include <ShellFolderQueriesTest.h>

#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

#undef HOME

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

$FieldInfo _ShellFolderQueriesTest_FieldInfo_[] = {
	{"HOME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ShellFolderQueriesTest, HOME)},
	{"fsv", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $STATIC | $FINAL, $staticField(ShellFolderQueriesTest, fsv)},
	{"scriptBeg", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ShellFolderQueriesTest, scriptBeg)},
	{"scriptEnd", "Ljava/lang/String;", nullptr, $STATIC, $staticField(ShellFolderQueriesTest, scriptEnd)},
	{}
};

$MethodInfo _ShellFolderQueriesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderQueriesTest::*)()>(&ShellFolderQueriesTest::init$))},
	{"createVbsScript", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)($String*)>(&ShellFolderQueriesTest::createVbsScript)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShellFolderQueriesTest::main)), "java.lang.Exception"},
	{"testGet", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ShellFolderQueriesTest::testGet))},
	{"testLink", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ShellFolderQueriesTest::testLink)), "java.io.IOException,java.lang.InterruptedException"},
	{"testShortcutPanelFiles", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ShellFolderQueriesTest::testShortcutPanelFiles))},
	{}
};

$ClassInfo _ShellFolderQueriesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShellFolderQueriesTest",
	"java.lang.Object",
	nullptr,
	_ShellFolderQueriesTest_FieldInfo_,
	_ShellFolderQueriesTest_MethodInfo_
};

$Object* allocate$ShellFolderQueriesTest($Class* clazz) {
	return $of($alloc(ShellFolderQueriesTest));
}

$String* ShellFolderQueriesTest::HOME = nullptr;
$FileSystemView* ShellFolderQueriesTest::fsv = nullptr;
$String* ShellFolderQueriesTest::scriptBeg = nullptr;
$String* ShellFolderQueriesTest::scriptEnd = nullptr;

void ShellFolderQueriesTest::init$() {
}

void ShellFolderQueriesTest::main($StringArray* args) {
	$init(ShellFolderQueriesTest);
	if ($($nc($($System::getProperty("os.name"_s)))->toLowerCase())->contains("windows"_s)) {
		$init($System);
		$nc($System::out)->println("Windows detected: will run shortcut test"_s);
		testGet();
		testLink();
		testShortcutPanelFiles();
	} else {
		testGet();
	}
	$nc($System::out)->println("ok"_s);
}

void ShellFolderQueriesTest::testLink() {
	$init(ShellFolderQueriesTest);
	$var($File, file, createVbsScript($$str({ShellFolderQueriesTest::scriptBeg, ShellFolderQueriesTest::HOME, ShellFolderQueriesTest::scriptEnd})));
	$var($String, var$0, $str({"cscript "_s, $($nc(file)->getName())}));
	$nc($($nc($($Runtime::getRuntime()))->exec(var$0, ($StringArray*)nullptr, $(file->getParentFile()))))->waitFor();
	$nc(file)->delete$();
	$var($File, link, $new($File, $(file->getParentFile()), "shortcut.lnk"_s));
	if (!$nc(ShellFolderQueriesTest::fsv)->isLink(link)) {
		link->delete$();
		$throwNew($RuntimeException, "Link is not detected"_s);
	}
	$var($File, location, $nc(ShellFolderQueriesTest::fsv)->getLinkLocation(link));
	if (!$nc($($nc(location)->getAbsolutePath()))->equals(ShellFolderQueriesTest::HOME)) {
		link->delete$();
		$throwNew($RuntimeException, $$str({"Link location "_s, location, " is wrong"_s}));
	}
	link->delete$();
	$assign(link, $File::createTempFile("test"_s, ".tst"_s));
	if ($nc(ShellFolderQueriesTest::fsv)->isLink(link)) {
		$nc(link)->delete$();
		$throwNew($RuntimeException, "File is not a link"_s);
	}
	try {
		$assign(location, $nc(ShellFolderQueriesTest::fsv)->getLinkLocation(link));
		if (location != nullptr) {
			$nc(link)->delete$();
			$throwNew($RuntimeException, "Not a link, should return null"_s);
		}
	} catch ($FileNotFoundException&) {
		$catch();
	}
	$nc(link)->delete$();
}

$File* ShellFolderQueriesTest::createVbsScript($String* script) {
	$init(ShellFolderQueriesTest);
	$var($File, file, $File::createTempFile("test"_s, ".vbs"_s));
	$nc(file)->deleteOnExit();
	$var($FileOutputStream, fos, $new($FileOutputStream, file));
	fos->write($($nc(script)->getBytes()));
	fos->close();
	return file;
}

void ShellFolderQueriesTest::testGet() {
	$init(ShellFolderQueriesTest);
	$var($FileArray, files, $nc(ShellFolderQueriesTest::fsv)->getChooserComboBoxFiles());
	{
		$var($FileArray, arr$, files);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			{
				if ($nc(ShellFolderQueriesTest::fsv)->isLink(file)) {
					$throwNew($RuntimeException, $$str({"Link shouldn\'t be in FileChooser combobox, "_s, $($nc(file)->getPath())}));
				}
			}
		}
	}
}

void ShellFolderQueriesTest::testShortcutPanelFiles() {
	$init(ShellFolderQueriesTest);
	$var($FileArray, shortcuts, $nc(ShellFolderQueriesTest::fsv)->getChooserShortcutPanelFiles());
	if ($nc(shortcuts)->length == 0) {
		$throwNew($RuntimeException, "No shortcut panel files found."_s);
	}
}

void clinit$ShellFolderQueriesTest($Class* class$) {
	$assignStatic(ShellFolderQueriesTest::HOME, $System::getProperty("user.home"_s));
	$assignStatic(ShellFolderQueriesTest::fsv, $FileSystemView::getFileSystemView());
	$assignStatic(ShellFolderQueriesTest::scriptBeg, "set WshShell = WScript.CreateObject(\"WScript.Shell\")\nset oShellLink = WshShell.CreateShortcut(\"shortcut.lnk\")\noShellLink.TargetPath = \""_s);
	$assignStatic(ShellFolderQueriesTest::scriptEnd, "\"\noShellLink.WindowStyle = 1\noShellLink.Save"_s);
}

ShellFolderQueriesTest::ShellFolderQueriesTest() {
}

$Class* ShellFolderQueriesTest::load$($String* name, bool initialize) {
	$loadClass(ShellFolderQueriesTest, name, initialize, &_ShellFolderQueriesTest_ClassInfo_, clinit$ShellFolderQueriesTest, allocate$ShellFolderQueriesTest);
	return class$;
}

$Class* ShellFolderQueriesTest::class$ = nullptr;