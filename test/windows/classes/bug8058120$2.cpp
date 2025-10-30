#include <bug8058120$2.h>

#include <bug8058120.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $bug8058120 = ::bug8058120;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Element = ::javax::swing::text::Element;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

$MethodInfo _bug8058120$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8058120$2::*)()>(&bug8058120$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8058120$2_EnclosingMethodInfo_ = {
	"bug8058120",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8058120$2_InnerClassesInfo_[] = {
	{"bug8058120$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8058120$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8058120$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8058120$2_MethodInfo_,
	nullptr,
	&_bug8058120$2_EnclosingMethodInfo_,
	_bug8058120$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8058120"
};

$Object* allocate$bug8058120$2($Class* clazz) {
	return $of($alloc(bug8058120$2));
}

void bug8058120$2::init$() {
}

void bug8058120$2::run() {
	try {
		$init($bug8058120);
		$nc($bug8058120::document)->insertAfterEnd($($nc($bug8058120::document)->getElement("ab"_s)), "c"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

bug8058120$2::bug8058120$2() {
}

$Class* bug8058120$2::load$($String* name, bool initialize) {
	$loadClass(bug8058120$2, name, initialize, &_bug8058120$2_ClassInfo_, allocate$bug8058120$2);
	return class$;
}

$Class* bug8058120$2::class$ = nullptr;