#include <FPMethodCalledTest$4.h>

#include <FPMethodCalledTest$PlainViewMixedAPI.h>
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
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest$PlainViewMixedAPI = ::FPMethodCalledTest$PlainViewMixedAPI;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

$MethodInfo _FPMethodCalledTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$4::*)()>(&FPMethodCalledTest$4::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$4_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$4_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$4", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$4",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$4_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$4_EnclosingMethodInfo_,
	_FPMethodCalledTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$4($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$4));
}

void FPMethodCalledTest$4::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$4::createView($Element* elem) {
	$var($FPMethodCalledTest$PlainViewMixedAPI, view, $new($FPMethodCalledTest$PlainViewMixedAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$4::FPMethodCalledTest$4() {
}

$Class* FPMethodCalledTest$4::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$4, name, initialize, &_FPMethodCalledTest$4_ClassInfo_, allocate$FPMethodCalledTest$4);
	return class$;
}

$Class* FPMethodCalledTest$4::class$ = nullptr;