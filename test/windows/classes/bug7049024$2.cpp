#include <bug7049024$2.h>

#include <bug7049024.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $bug7049024 = ::bug7049024;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;

$MethodInfo _bug7049024$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7049024$2::*)()>(&bug7049024$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7049024$2_EnclosingMethodInfo_ = {
	"bug7049024",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7049024$2_InnerClassesInfo_[] = {
	{"bug7049024$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7049024$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7049024$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7049024$2_MethodInfo_,
	nullptr,
	&_bug7049024$2_EnclosingMethodInfo_,
	_bug7049024$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7049024"
};

$Object* allocate$bug7049024$2($Class* clazz) {
	return $of($alloc(bug7049024$2));
}

void bug7049024$2::init$() {
}

void bug7049024$2::run() {
	$init($bug7049024);
	$nc($bug7049024::textField)->requestFocusInWindow();
}

bug7049024$2::bug7049024$2() {
}

$Class* bug7049024$2::load$($String* name, bool initialize) {
	$loadClass(bug7049024$2, name, initialize, &_bug7049024$2_ClassInfo_, allocate$bug7049024$2);
	return class$;
}

$Class* bug7049024$2::class$ = nullptr;