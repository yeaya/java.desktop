#include <FPMethodCalledTest$1.h>

#include <FPMethodCalledTest$Test.h>
#include <FPMethodCalledTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalTextFieldUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $FPMethodCalledTest = ::FPMethodCalledTest;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTextFieldUI = ::javax::swing::plaf::metal::MetalTextFieldUI;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

$FieldInfo _FPMethodCalledTest$1_FieldInfo_[] = {
	{"val$test", "LFPMethodCalledTest$Test;", nullptr, $FINAL | $SYNTHETIC, $field(FPMethodCalledTest$1, val$test)},
	{}
};

$MethodInfo _FPMethodCalledTest$1_MethodInfo_[] = {
	{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, 0, $method(static_cast<void(FPMethodCalledTest$1::*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest$1::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FPMethodCalledTest$1_EnclosingMethodInfo_ = {
	"FPMethodCalledTest",
	"createAndShowGUI",
	"(LFPMethodCalledTest$Test;)V"
};

$InnerClassInfo _FPMethodCalledTest$1_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$1", nullptr, nullptr, 0},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$1",
	"javax.swing.plaf.metal.MetalTextFieldUI",
	nullptr,
	_FPMethodCalledTest$1_FieldInfo_,
	_FPMethodCalledTest$1_MethodInfo_,
	nullptr,
	&_FPMethodCalledTest$1_EnclosingMethodInfo_,
	_FPMethodCalledTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$1($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$1));
}

void FPMethodCalledTest$1::init$($FPMethodCalledTest$Test* val$test) {
	$set(this, val$test, val$test);
	$MetalTextFieldUI::init$();
}

$View* FPMethodCalledTest$1::create($Element* elem) {
	return $nc(this->val$test)->createView(elem);
}

FPMethodCalledTest$1::FPMethodCalledTest$1() {
}

$Class* FPMethodCalledTest$1::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$1, name, initialize, &_FPMethodCalledTest$1_ClassInfo_, allocate$FPMethodCalledTest$1);
	return class$;
}

$Class* FPMethodCalledTest$1::class$ = nullptr;