#include <FPMethodCalledTest$10.h>

#include <FPMethodCalledTest$PasswordViewMixedAPI.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PasswordViewMixedAPI = ::FPMethodCalledTest$PasswordViewMixedAPI;
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

$MethodInfo _FPMethodCalledTest$10_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$10::*)(bool)>(&FPMethodCalledTest$10::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$10_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$10_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$10", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$10_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$10",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$10_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$10_EnclosingMethodInfo_,
	_FPMethodCalledTest$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$10($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$10));
}

void FPMethodCalledTest$10::init$(bool isPasswordField) {
	$FPMethodCalledTest$Test::init$(isPasswordField);
}

$View* FPMethodCalledTest$10::createView($Element* elem) {
	$var($FPMethodCalledTest$PasswordViewMixedAPI, view, $new($FPMethodCalledTest$PasswordViewMixedAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$10::FPMethodCalledTest$10() {
}

$Class* FPMethodCalledTest$10::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$10, name, initialize, &_FPMethodCalledTest$10_ClassInfo_, allocate$FPMethodCalledTest$10);
	return class$;
}

$Class* FPMethodCalledTest$10::class$ = nullptr;