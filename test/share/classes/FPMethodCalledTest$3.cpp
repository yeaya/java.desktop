#include <FPMethodCalledTest$3.h>

#include <FPMethodCalledTest$PlainViewFPAPI.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PlainViewFPAPI = ::FPMethodCalledTest$PlainViewFPAPI;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

$MethodInfo _FPMethodCalledTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$3::*)()>(&FPMethodCalledTest$3::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$3_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$3_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$3", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$3",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$3_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$3_EnclosingMethodInfo_,
	_FPMethodCalledTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$3($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$3));
}

void FPMethodCalledTest$3::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$3::createView($Element* elem) {
	$var($FPMethodCalledTest$PlainViewFPAPI, view, $new($FPMethodCalledTest$PlainViewFPAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$3::FPMethodCalledTest$3() {
}

$Class* FPMethodCalledTest$3::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$3, name, initialize, &_FPMethodCalledTest$3_ClassInfo_, allocate$FPMethodCalledTest$3);
	return class$;
}

$Class* FPMethodCalledTest$3::class$ = nullptr;