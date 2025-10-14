#include <bug8016833$5.h>

#include <bug8016833.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Style.h>
#include <jcpp.h>

using $bug8016833 = ::bug8016833;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Style = ::javax::swing::text::Style;

$MethodInfo _bug8016833$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8016833$5::*)()>(&bug8016833$5::init$))},
	{"setNormalStyle", "(Ljavax/swing/text/Style;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _bug8016833$5_EnclosingMethodInfo_ = {
	"bug8016833",
	"testNormalScript",
	"()V"
};

$InnerClassInfo _bug8016833$5_InnerClassesInfo_[] = {
	{"bug8016833$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug8016833$5",
	"bug8016833",
	nullptr,
	nullptr,
	_bug8016833$5_MethodInfo_,
	nullptr,
	&_bug8016833$5_EnclosingMethodInfo_,
	_bug8016833$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8016833"
};

$Object* allocate$bug8016833$5($Class* clazz) {
	return $of($alloc(bug8016833$5));
}

void bug8016833$5::init$() {
	$bug8016833::init$();
}

void bug8016833$5::setNormalStyle($Style* style) {
}

bug8016833$5::bug8016833$5() {
}

$Class* bug8016833$5::load$($String* name, bool initialize) {
	$loadClass(bug8016833$5, name, initialize, &_bug8016833$5_ClassInfo_, allocate$bug8016833$5);
	return class$;
}

$Class* bug8016833$5::class$ = nullptr;