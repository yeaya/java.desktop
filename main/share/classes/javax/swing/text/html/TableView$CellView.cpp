#include <javax/swing/text/html/TableView$CellView.h>

#include <java/lang/Math.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef VALIGN
#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $TableView = ::javax::swing::text::html::TableView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TableView$CellView_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$CellView, this$0)},
	{}
};

$MethodInfo _TableView$CellView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView$CellView::*)($TableView*,$Element*)>(&TableView$CellView::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TableView$CellView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.TableView$CellView", "javax.swing.text.html.TableView", "CellView", 0},
	{}
};

$ClassInfo _TableView$CellView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.TableView$CellView",
	"javax.swing.text.html.BlockView",
	nullptr,
	_TableView$CellView_FieldInfo_,
	_TableView$CellView_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$CellView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.TableView"
};

$Object* allocate$TableView$CellView($Class* clazz) {
	return $of($alloc(TableView$CellView));
}

void TableView$CellView::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BlockView::init$(elem, $View::Y_AXIS);
}

void TableView$CellView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	$BlockView::layoutMajorAxis(targetSpan, axis, offsets, spans);
	int32_t used = 0;
	int32_t n = $nc(spans)->length;
	for (int32_t i = 0; i < n; ++i) {
		used += spans->get(i);
	}
	int32_t adjust = 0;
	if (used < targetSpan) {
		$init($HTML$Attribute);
		$var($String, valign, $cast($String, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($HTML$Attribute::VALIGN)));
		if (valign == nullptr) {
			$var($AttributeSet, rowAttr, $nc($($nc($(getElement()))->getParentElement()))->getAttributes());
			$assign(valign, $cast($String, $nc(rowAttr)->getAttribute($HTML$Attribute::VALIGN)));
		}
		if ((valign == nullptr) || $nc(valign)->equals("middle"_s)) {
			adjust = (targetSpan - used) / 2;
		} else if (valign->equals("bottom"_s)) {
			adjust = targetSpan - used;
		}
	}
	if (adjust != 0) {
		for (int32_t i = 0; i < n; ++i) {
			(*$nc(offsets))[i] += adjust;
		}
	}
}

$SizeRequirements* TableView$CellView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$var($SizeRequirements, req, $BlockView::calculateMajorAxisRequirements(axis, r));
	$nc(req)->maximum = $Integer::MAX_VALUE;
	return req;
}

$SizeRequirements* TableView$CellView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, rv, $BlockView::calculateMinorAxisRequirements(axis, r));
	int32_t n = getViewCount();
	int32_t min = 0;
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		min = $Math::max($cast(int32_t, $nc(v)->getMinimumSpan(axis)), min);
	}
	$nc(rv)->minimum = $Math::min(rv->minimum, min);
	return rv;
}

TableView$CellView::TableView$CellView() {
}

$Class* TableView$CellView::load$($String* name, bool initialize) {
	$loadClass(TableView$CellView, name, initialize, &_TableView$CellView_ClassInfo_, allocate$TableView$CellView);
	return class$;
}

$Class* TableView$CellView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax