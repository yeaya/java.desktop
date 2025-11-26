#include <bug8016833$4.h>

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

$MethodInfo _bug8016833$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8016833$4::*)()>(&bug8016833$4::init$))},
	{"setNormalStyle", "(Ljavax/swing/text/Style;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _bug8016833$4_EnclosingMethodInfo_ = {
	"bug8016833",
	"testSubScript",
	"()V"
};

$InnerClassInfo _bug8016833$4_InnerClassesInfo_[] = {
	{"bug8016833$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug8016833$4",
	"bug8016833",
	nullptr,
	nullptr,
	_bug8016833$4_MethodInfo_,
	nullptr,
	&_bug8016833$4_EnclosingMethodInfo_,
	_bug8016833$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8016833"
};

$Object* allocate$bug8016833$4($Class* clazz) {
	return $of($alloc(bug8016833$4));
}

void bug8016833$4::init$() {
	$bug8016833::init$();
}

void bug8016833$4::setNormalStyle($Style* style) {
	$StyleConstants::setSubscript(style, true);
}

bug8016833$4::bug8016833$4() {
}

$Class* bug8016833$4::load$($String* name, bool initialize) {
	$loadClass(bug8016833$4, name, initialize, &_bug8016833$4_ClassInfo_, allocate$bug8016833$4);
	return class$;
}

$Class* bug8016833$4::class$ = nullptr;