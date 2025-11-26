#include <bug5074573$3.h>

#include <bug5074573.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug5074573$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug5074573$3::*)()>(&bug5074573$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5074573$3_EnclosingMethodInfo_ = {
	"bug5074573",
	"test",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _bug5074573$3_InnerClassesInfo_[] = {
	{"bug5074573$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5074573$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug5074573$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug5074573$3_MethodInfo_,
	nullptr,
	&_bug5074573$3_EnclosingMethodInfo_,
	_bug5074573$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5074573"
};

$Object* allocate$bug5074573$3($Class* clazz) {
	return $of($alloc(bug5074573$3));
}

void bug5074573$3::init$() {
}

void bug5074573$3::run() {
	$init($bug5074573);
	$var($Caret, caret, $nc($bug5074573::textComponent)->getCaret());
	$nc(caret)->setDot(0);
}

bug5074573$3::bug5074573$3() {
}

$Class* bug5074573$3::load$($String* name, bool initialize) {
	$loadClass(bug5074573$3, name, initialize, &_bug5074573$3_ClassInfo_, allocate$bug5074573$3);
	return class$;
}

$Class* bug5074573$3::class$ = nullptr;