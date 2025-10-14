#include <FPMethodCalledTest$6.h>

#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest$WrappedPlainViewFPAPI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$WrappedPlainViewFPAPI = ::FPMethodCalledTest$WrappedPlainViewFPAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$MethodInfo _FPMethodCalledTest$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$6::*)()>(&FPMethodCalledTest$6::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$6_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$6_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$6", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$6_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$6",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$6_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$6_EnclosingMethodInfo_,
	_FPMethodCalledTest$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$6($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$6));
}

void FPMethodCalledTest$6::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$6::createView($Element* elem) {
	$var($FPMethodCalledTest$WrappedPlainViewFPAPI, view, $new($FPMethodCalledTest$WrappedPlainViewFPAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$6::FPMethodCalledTest$6() {
}

$Class* FPMethodCalledTest$6::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$6, name, initialize, &_FPMethodCalledTest$6_ClassInfo_, allocate$FPMethodCalledTest$6);
	return class$;
}

$Class* FPMethodCalledTest$6::class$ = nullptr;