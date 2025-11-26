#include <FPMethodCalledTest$7.h>

#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$WrappedPlainViewMixedAPI.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$WrappedPlainViewMixedAPI = ::FPMethodCalledTest$WrappedPlainViewMixedAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$MethodInfo _FPMethodCalledTest$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$7::*)()>(&FPMethodCalledTest$7::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$7_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$7_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$7", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$7_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$7",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$7_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$7_EnclosingMethodInfo_,
	_FPMethodCalledTest$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$7($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$7));
}

void FPMethodCalledTest$7::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$7::createView($Element* elem) {
	$var($FPMethodCalledTest$WrappedPlainViewMixedAPI, view, $new($FPMethodCalledTest$WrappedPlainViewMixedAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$7::FPMethodCalledTest$7() {
}

$Class* FPMethodCalledTest$7::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$7, name, initialize, &_FPMethodCalledTest$7_ClassInfo_, allocate$FPMethodCalledTest$7);
	return class$;
}

$Class* FPMethodCalledTest$7::class$ = nullptr;