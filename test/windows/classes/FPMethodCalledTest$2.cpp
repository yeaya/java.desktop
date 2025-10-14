#include <FPMethodCalledTest$2.h>

#include <FPMethodCalledTest$PlainViewINTAPI.h>
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

using $FPMethodCalledTest$PlainViewINTAPI = ::FPMethodCalledTest$PlainViewINTAPI;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

$MethodInfo _FPMethodCalledTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$2::*)()>(&FPMethodCalledTest$2::init$))},
	{"createView", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$2_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	nullptr,
	nullptr
};

$InnerClassInfo _FPMethodCalledTest$2_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$2", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$2",
	"FPMethodCalledTest$Test",
	nullptr,
	nullptr,
	_FPMethodCalledTest$2_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$2_EnclosingMethodInfo_,
	_FPMethodCalledTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$2($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$2));
}

void FPMethodCalledTest$2::init$() {
	$FPMethodCalledTest$Test::init$();
}

$View* FPMethodCalledTest$2::createView($Element* elem) {
	$var($FPMethodCalledTest$PlainViewINTAPI, view, $new($FPMethodCalledTest$PlainViewINTAPI, elem));
	$set(this, resultable, view);
	return view;
}

FPMethodCalledTest$2::FPMethodCalledTest$2() {
}

$Class* FPMethodCalledTest$2::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$2, name, initialize, &_FPMethodCalledTest$2_ClassInfo_, allocate$FPMethodCalledTest$2);
	return class$;
}

$Class* FPMethodCalledTest$2::class$ = nullptr;