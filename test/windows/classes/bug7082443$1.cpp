#include <bug7082443$1.h>

#include <bug7082443$TestComboBox.h>
#include <bug7082443.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug7082443 = ::bug7082443;
using $bug7082443$TestComboBox = ::bug7082443$TestComboBox;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _bug7082443$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7082443$1::*)()>(&bug7082443$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7082443$1_EnclosingMethodInfo_ = {
	"bug7082443",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7082443$1_InnerClassesInfo_[] = {
	{"bug7082443$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7082443$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7082443$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7082443$1_MethodInfo_,
	nullptr,
	&_bug7082443$1_EnclosingMethodInfo_,
	_bug7082443$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7082443"
};

$Object* allocate$bug7082443$1($Class* clazz) {
	return $of($alloc(bug7082443$1));
}

void bug7082443$1::init$() {
}

void bug7082443$1::run() {
	$var($bug7082443$TestComboBox, testComboBox, $new($bug7082443$TestComboBox));
	if (testComboBox->isOldRendererOpaque()) {
		$init($System);
		$nc($System::out)->println($$str({"Passed for "_s, "GTKLookAndFeel"_s}));
	} else {
		$throwNew($RuntimeException, $$str({"Failed for "_s, "GTKLookAndFeel"_s}));
	}
}

bug7082443$1::bug7082443$1() {
}

$Class* bug7082443$1::load$($String* name, bool initialize) {
	$loadClass(bug7082443$1, name, initialize, &_bug7082443$1_ClassInfo_, allocate$bug7082443$1);
	return class$;
}

$Class* bug7082443$1::class$ = nullptr;