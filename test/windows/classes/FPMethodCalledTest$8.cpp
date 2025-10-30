#include <FPMethodCalledTest$8.h>

#include <FPMethodCalledTest$PasswordViewINTAPI.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PasswordViewINTAPI = ::FPMethodCalledTest$PasswordViewINTAPI;
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

$MethodInfo _FPMethodCalledTest$8_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$8::*)(bool)>(&FPMethodCalledTest$8::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$8_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$8_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$8", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$8_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$8",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$8_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$8_EnclosingMethodInfo_,
	_FPMethodCalledTest$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$8($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$8));
}

void FPMethodCalledTest$8::init$(bool isPasswordField) {
	$FPMethodCalledTest$Test::init$(isPasswordField);
}

$View* FPMethodCalledTest$8::createView($Element* elem) {
	$var($FPMethodCalledTest$PasswordViewINTAPI, view, $new($FPMethodCalledTest$PasswordViewINTAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$8::FPMethodCalledTest$8() {
}

$Class* FPMethodCalledTest$8::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$8, name, initialize, &_FPMethodCalledTest$8_ClassInfo_, allocate$FPMethodCalledTest$8);
	return class$;
}

$Class* FPMethodCalledTest$8::class$ = nullptr;