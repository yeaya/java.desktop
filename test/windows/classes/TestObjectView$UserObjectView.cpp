#include <TestObjectView$UserObjectView.h>

#include <TestObjectView.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/ObjectView.h>
#include <jcpp.h>

using $TestObjectView = ::TestObjectView;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $ObjectView = ::javax::swing::text::html::ObjectView;

$MethodInfo _TestObjectView$UserObjectView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectView$UserObjectView::*)($Element*)>(&TestObjectView$UserObjectView::init$))},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestObjectView$UserObjectView_InnerClassesInfo_[] = {
	{"TestObjectView$UserObjectView", "TestObjectView", "UserObjectView", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestObjectView$UserObjectView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectView$UserObjectView",
	"javax.swing.text.html.ObjectView",
	nullptr,
	nullptr,
	_TestObjectView$UserObjectView_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectView$UserObjectView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectView"
};

$Object* allocate$TestObjectView$UserObjectView($Class* clazz) {
	return $of($alloc(TestObjectView$UserObjectView));
}

void TestObjectView$UserObjectView::init$($Element* elem) {
	$ObjectView::init$(elem);
}

$Component* TestObjectView$UserObjectView::createComponent() {
	return $ObjectView::createComponent();
}

TestObjectView$UserObjectView::TestObjectView$UserObjectView() {
}

$Class* TestObjectView$UserObjectView::load$($String* name, bool initialize) {
	$loadClass(TestObjectView$UserObjectView, name, initialize, &_TestObjectView$UserObjectView_ClassInfo_, allocate$TestObjectView$UserObjectView);
	return class$;
}

$Class* TestObjectView$UserObjectView::class$ = nullptr;