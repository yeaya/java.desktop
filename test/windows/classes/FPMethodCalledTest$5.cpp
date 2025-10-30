#include <FPMethodCalledTest$5.h>

#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$WrappedPlainViewINTAPI.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$WrappedPlainViewINTAPI = ::FPMethodCalledTest$WrappedPlainViewINTAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$MethodInfo _FPMethodCalledTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$5::*)()>(&FPMethodCalledTest$5::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$5_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$5_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$5", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$5",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$5_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$5_EnclosingMethodInfo_,
	_FPMethodCalledTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$5($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$5));
}

void FPMethodCalledTest$5::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$5::createView($Element* elem) {
	$var($FPMethodCalledTest$WrappedPlainViewINTAPI, view, $new($FPMethodCalledTest$WrappedPlainViewINTAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$5::FPMethodCalledTest$5() {
}

$Class* FPMethodCalledTest$5::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$5, name, initialize, &_FPMethodCalledTest$5_ClassInfo_, allocate$FPMethodCalledTest$5);
	return class$;
}

$Class* FPMethodCalledTest$5::class$ = nullptr;