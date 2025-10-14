#include <SystemLookAndFeelTest.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _SystemLookAndFeelTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemLookAndFeelTest::*)()>(&SystemLookAndFeelTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SystemLookAndFeelTest::main))},
	{}
};

$ClassInfo _SystemLookAndFeelTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SystemLookAndFeelTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SystemLookAndFeelTest_MethodInfo_
};

$Object* allocate$SystemLookAndFeelTest($Class* clazz) {
	return $of($alloc(SystemLookAndFeelTest));
}

void SystemLookAndFeelTest::init$() {
}

void SystemLookAndFeelTest::main($StringArray* args) {
	$var($String, laf, $UIManager::getSystemLookAndFeelClassName());
	$var($String, os, $nc($($System::getProperty("os.name"_s)))->toLowerCase());
	$nc($System::out)->println($$str({"OS is "_s, os}));
	$nc($System::out)->println($$str({"Reported System LAF is "_s, laf}));
	$var($String, expLAF, nullptr);
	if (os->contains("windows"_s)) {
		$assign(expLAF, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	} else if (os->contains("macos"_s)) {
		$assign(expLAF, "com.apple.laf.AquaLookAndFeel"_s);
	} else if (os->contains("linux"_s)) {
		$var($String, gnome, $System::getenv("GNOME_DESKTOP_SESSION_ID"_s));
		$var($String, desktop, $System::getenv("XDG_CURRENT_DESKTOP"_s));
		$nc($System::out)->println($$str({"Gnome desktop session ID is "_s, gnome}));
		$nc($System::out)->println($$str({"XDG_CURRENT_DESKTOP is set to "_s, desktop}));
		if (gnome != nullptr || (desktop != nullptr && $(desktop->toLowerCase())->contains("gnome"_s))) {
			$assign(expLAF, "com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
		} else {
			$assign(expLAF, "javax.swing.plaf.metal.MetalLookAndFeel"_s);
		}
	}
	$nc($System::out)->println($$str({"Expected System LAF is "_s, expLAF}));
	if (expLAF == nullptr) {
		$nc($System::out)->println("No match for expected LAF, unknown OS ?"_s);
		return;
	}
	if (!($nc(laf)->equals(expLAF))) {
		$throwNew($RuntimeException, "LAF not as expected"_s);
	}
}

SystemLookAndFeelTest::SystemLookAndFeelTest() {
}

$Class* SystemLookAndFeelTest::load$($String* name, bool initialize) {
	$loadClass(SystemLookAndFeelTest, name, initialize, &_SystemLookAndFeelTest_ClassInfo_, allocate$SystemLookAndFeelTest);
	return class$;
}

$Class* SystemLookAndFeelTest::class$ = nullptr;