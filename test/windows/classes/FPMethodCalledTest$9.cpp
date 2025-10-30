#include <FPMethodCalledTest$9.h>

#include <FPMethodCalledTest$PasswordViewFPAPI.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PasswordViewFPAPI = ::FPMethodCalledTest$PasswordViewFPAPI;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $PasswordView = ::javax::swing::text::PasswordView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

$MethodInfo _FPMethodCalledTest$9_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$9::*)(bool)>(&FPMethodCalledTest$9::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$9_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$9_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$9", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$9_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$9",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$9_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$9_EnclosingMethodInfo_,
	_FPMethodCalledTest$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$9($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$9));
}

void FPMethodCalledTest$9::init$(bool isPasswordField) {
	$FPMethodCalledTest$Test::init$(isPasswordField);
}

$View* FPMethodCalledTest$9::createView($Element* elem) {
	$var($FPMethodCalledTest$PasswordViewFPAPI, view, $new($FPMethodCalledTest$PasswordViewFPAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$9::FPMethodCalledTest$9() {
}

$Class* FPMethodCalledTest$9::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$9, name, initialize, &_FPMethodCalledTest$9_ClassInfo_, allocate$FPMethodCalledTest$9);
	return class$;
}

$Class* FPMethodCalledTest$9::class$ = nullptr;