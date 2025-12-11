#include <bug7049024$3.h>

#include <bug7049024.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7049024 = ::bug7049024;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

$MethodInfo _bug7049024$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7049024$3::*)()>(&bug7049024$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7049024$3_EnclosingMethodInfo_ = {
	"bug7049024",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7049024$3_InnerClassesInfo_[] = {
	{"bug7049024$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7049024$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug7049024$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7049024$3_MethodInfo_,
	nullptr,
	&_bug7049024$3_EnclosingMethodInfo_,
	_bug7049024$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7049024"
};

$Object* allocate$bug7049024$3($Class* clazz) {
	return $of($alloc(bug7049024$3));
}

void bug7049024$3::init$() {
}

void bug7049024$3::run() {
	$init($bug7049024);
	$assignStatic($bug7049024::caret, $cast($DefaultCaret, $nc($bug7049024::textField)->getCaret()));
	$nc($bug7049024::caret)->setDot(2);
	$nc($bug7049024::caret)->moveDot(4);
}

bug7049024$3::bug7049024$3() {
}

$Class* bug7049024$3::load$($String* name, bool initialize) {
	$loadClass(bug7049024$3, name, initialize, &_bug7049024$3_ClassInfo_, allocate$bug7049024$3);
	return class$;
}

$Class* bug7049024$3::class$ = nullptr;