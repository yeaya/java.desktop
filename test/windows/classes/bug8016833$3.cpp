#include <bug8016833$3.h>

#include <bug8016833.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $bug8016833 = ::bug8016833;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;

$MethodInfo _bug8016833$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8016833$3::*)()>(&bug8016833$3::init$))},
	{"setNormalStyle", "(Ljavax/swing/text/Style;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _bug8016833$3_EnclosingMethodInfo_ = {
	"bug8016833",
	"testSuperScript",
	"()V"
};

$InnerClassInfo _bug8016833$3_InnerClassesInfo_[] = {
	{"bug8016833$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8016833$3",
	"bug8016833",
	nullptr,
	nullptr,
	_bug8016833$3_MethodInfo_,
	nullptr,
	&_bug8016833$3_EnclosingMethodInfo_,
	_bug8016833$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8016833"
};

$Object* allocate$bug8016833$3($Class* clazz) {
	return $of($alloc(bug8016833$3));
}

void bug8016833$3::init$() {
	$bug8016833::init$();
}

void bug8016833$3::setNormalStyle($Style* style) {
	$StyleConstants::setSuperscript(style, true);
}

bug8016833$3::bug8016833$3() {
}

$Class* bug8016833$3::load$($String* name, bool initialize) {
	$loadClass(bug8016833$3, name, initialize, &_bug8016833$3_ClassInfo_, allocate$bug8016833$3);
	return class$;
}

$Class* bug8016833$3::class$ = nullptr;