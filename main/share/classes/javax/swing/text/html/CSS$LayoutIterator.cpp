#include <javax/swing/text/html/CSS$LayoutIterator.h>

#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSS$LayoutIterator_FieldInfo_[] = {
	{"WorstAdjustmentWeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CSS$LayoutIterator, WorstAdjustmentWeight)},
	{}
};

$MethodInfo _CSS$LayoutIterator_MethodInfo_[] = {
	{"getAdjustmentWeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBorderWidth", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLeadingCollapseSpan", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getMaximumSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimumSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredSpan", "(F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getSpan", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTrailingCollapseSpan", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOffset", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSpan", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CSS$LayoutIterator_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$LayoutIterator", "javax.swing.text.html.CSS", "LayoutIterator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSS$LayoutIterator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.html.CSS$LayoutIterator",
	nullptr,
	nullptr,
	_CSS$LayoutIterator_FieldInfo_,
	_CSS$LayoutIterator_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$LayoutIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$LayoutIterator($Class* clazz) {
	return $of($alloc(CSS$LayoutIterator));
}

$Class* CSS$LayoutIterator::load$($String* name, bool initialize) {
	$loadClass(CSS$LayoutIterator, name, initialize, &_CSS$LayoutIterator_ClassInfo_, allocate$CSS$LayoutIterator);
	return class$;
}

$Class* CSS$LayoutIterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax