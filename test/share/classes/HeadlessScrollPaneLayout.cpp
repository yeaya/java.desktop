#include <HeadlessScrollPaneLayout.h>

#include <javax/swing/ScrollPaneLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;

$MethodInfo _HeadlessScrollPaneLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessScrollPaneLayout::*)()>(&HeadlessScrollPaneLayout::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessScrollPaneLayout::main))},
	{}
};

$ClassInfo _HeadlessScrollPaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessScrollPaneLayout",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessScrollPaneLayout_MethodInfo_
};

$Object* allocate$HeadlessScrollPaneLayout($Class* clazz) {
	return $of($alloc(HeadlessScrollPaneLayout));
}

void HeadlessScrollPaneLayout::init$() {
}

void HeadlessScrollPaneLayout::main($StringArray* args) {
	$var($ScrollPaneLayout, msm, $new($ScrollPaneLayout));
}

HeadlessScrollPaneLayout::HeadlessScrollPaneLayout() {
}

$Class* HeadlessScrollPaneLayout::load$($String* name, bool initialize) {
	$loadClass(HeadlessScrollPaneLayout, name, initialize, &_HeadlessScrollPaneLayout_ClassInfo_, allocate$HeadlessScrollPaneLayout);
	return class$;
}

$Class* HeadlessScrollPaneLayout::class$ = nullptr;