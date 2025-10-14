#include <bug4492274$2.h>

#include <bug4492274.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $JEditorPane = ::javax::swing::JEditorPane;

$MethodInfo _bug4492274$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4492274$2::*)()>(&bug4492274$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4492274$2_EnclosingMethodInfo_ = {
	"bug4492274",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4492274$2_InnerClassesInfo_[] = {
	{"bug4492274$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4492274$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4492274$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4492274$2_MethodInfo_,
	nullptr,
	&_bug4492274$2_EnclosingMethodInfo_,
	_bug4492274$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4492274"
};

$Object* allocate$bug4492274$2($Class* clazz) {
	return $of($alloc(bug4492274$2));
}

void bug4492274$2::init$() {
}

void bug4492274$2::run() {
	try {
		$init($bug4492274);
		$assignStatic($bug4492274::page, $new($URL, $bug4492274::page, "#linkname"_s));
		$nc($bug4492274::jep)->setPage($bug4492274::page);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug4492274$2::bug4492274$2() {
}

$Class* bug4492274$2::load$($String* name, bool initialize) {
	$loadClass(bug4492274$2, name, initialize, &_bug4492274$2_ClassInfo_, allocate$bug4492274$2);
	return class$;
}

$Class* bug4492274$2::class$ = nullptr;