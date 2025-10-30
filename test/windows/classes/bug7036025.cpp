#include <bug7036025.h>

#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef DIR

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFileChooser = ::javax::swing::JFileChooser;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug7036025_FieldInfo_[] = {
	{"DIR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug7036025, DIR)},
	{}
};

$MethodInfo _bug7036025_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7036025::*)()>(&bug7036025::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7036025::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug7036025_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7036025",
	"java.lang.Object",
	nullptr,
	_bug7036025_FieldInfo_,
	_bug7036025_MethodInfo_
};

$Object* allocate$bug7036025($Class* clazz) {
	return $of($alloc(bug7036025));
}

$String* bug7036025::DIR = nullptr;

void bug7036025::init$() {
}

void bug7036025::main($StringArray* args) {
	$init(bug7036025);
	$useLocalCurrentObjectStackCache();
	$var($String, systemLookAndFeelClassName, $UIManager::getSystemLookAndFeelClassName());
	if (!$($nc(systemLookAndFeelClassName)->toLowerCase())->contains("windows"_s)) {
		$nc($System::out)->println("The test is only for Windows OS."_s);
		return;
	}
	$var($File, file, $new($File, bug7036025::DIR));
	if (!file->exists()) {
		if (!file->mkdir()) {
			$throwNew($RuntimeException, $$str({"Cannot create "_s, bug7036025::DIR}));
		}
		file->deleteOnExit();
	}
	$UIManager::setLookAndFeel(systemLookAndFeelClassName);
	$new($JFileChooser, file);
	$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc($($UIManager::getLookAndFeel()))->getName())}));
}

bug7036025::bug7036025() {
}

void clinit$bug7036025($Class* class$) {
	$assignStatic(bug7036025::DIR, "c:/temp"_s);
}

$Class* bug7036025::load$($String* name, bool initialize) {
	$loadClass(bug7036025, name, initialize, &_bug7036025_ClassInfo_, clinit$bug7036025, allocate$bug7036025);
	return class$;
}

$Class* bug7036025::class$ = nullptr;