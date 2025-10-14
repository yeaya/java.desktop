#include <javax/swing/text/html/BRView.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/InlineView.h>
#include <jcpp.h>

#undef X_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $InlineView = ::javax::swing::text::html::InlineView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _BRView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(BRView::*)($Element*)>(&BRView::init$))},
	{"getBreakWeight", "(IFF)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BRView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.BRView",
	"javax.swing.text.html.InlineView",
	nullptr,
	nullptr,
	_BRView_MethodInfo_
};

$Object* allocate$BRView($Class* clazz) {
	return $of($alloc(BRView));
}

void BRView::init$($Element* elem) {
	$InlineView::init$(elem);
}

int32_t BRView::getBreakWeight(int32_t axis, float pos, float len) {
	if (axis == $View::X_AXIS) {
		return $View::ForcedBreakWeight;
	} else {
		return $InlineView::getBreakWeight(axis, pos, len);
	}
}

BRView::BRView() {
}

$Class* BRView::load$($String* name, bool initialize) {
	$loadClass(BRView, name, initialize, &_BRView_ClassInfo_, allocate$BRView);
	return class$;
}

$Class* BRView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax