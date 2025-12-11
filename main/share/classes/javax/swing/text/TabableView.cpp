#include <javax/swing/text/TabableView.h>

#include <javax/swing/text/TabExpander.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _TabableView_MethodInfo_[] = {
	{"getPartialSpan", "(II)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getTabbedSpan", "(FLjavax/swing/text/TabExpander;)F", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TabableView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.TabableView",
	nullptr,
	nullptr,
	nullptr,
	_TabableView_MethodInfo_
};

$Object* allocate$TabableView($Class* clazz) {
	return $of($alloc(TabableView));
}

$Class* TabableView::load$($String* name, bool initialize) {
	$loadClass(TabableView, name, initialize, &_TabableView_ClassInfo_, allocate$TabableView);
	return class$;
}

$Class* TabableView::class$ = nullptr;

		} // text
	} // swing
} // javax