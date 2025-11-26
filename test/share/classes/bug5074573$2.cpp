#include <bug5074573$2.h>

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

$MethodInfo _bug5074573$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug5074573$2::*)()>(&bug5074573$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug5074573$2_EnclosingMethodInfo_ = {
	"bug5074573",
	"test",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _bug5074573$2_InnerClassesInfo_[] = {
	{"bug5074573$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5074573$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug5074573$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug5074573$2_MethodInfo_,
	nullptr,
	&_bug5074573$2_EnclosingMethodInfo_,
	_bug5074573$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5074573"
};

$Object* allocate$bug5074573$2($Class* clazz) {
	return $of($alloc(bug5074573$2));
}

void bug5074573$2::init$() {
}

void bug5074573$2::run() {
	$init($bug5074573);
	$var($Caret, caret, $nc($bug5074573::textComponent)->getCaret());
	int32_t dot = $nc(caret)->getDot();
	$nc($bug5074573::textComponent)->select(dot, dot);
}

bug5074573$2::bug5074573$2() {
}

$Class* bug5074573$2::load$($String* name, bool initialize) {
	$loadClass(bug5074573$2, name, initialize, &_bug5074573$2_ClassInfo_, allocate$bug5074573$2);
	return class$;
}

$Class* bug5074573$2::class$ = nullptr;