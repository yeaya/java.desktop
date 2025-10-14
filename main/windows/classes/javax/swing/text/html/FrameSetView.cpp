#include <javax/swing/text/html/FrameSetView.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/StringTokenizer.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/FrameView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef COLS
#undef ROWS
#undef Y_AXIS

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $FrameView = ::javax::swing::text::html::FrameView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FrameSetView_FieldInfo_[] = {
	{"children", "[Ljava/lang/String;", nullptr, 0, $field(FrameSetView, children)},
	{"percentChildren", "[I", nullptr, 0, $field(FrameSetView, percentChildren)},
	{"absoluteChildren", "[I", nullptr, 0, $field(FrameSetView, absoluteChildren)},
	{"relativeChildren", "[I", nullptr, 0, $field(FrameSetView, relativeChildren)},
	{"percentTotals", "I", nullptr, 0, $field(FrameSetView, percentTotals)},
	{"absoluteTotals", "I", nullptr, 0, $field(FrameSetView, absoluteTotals)},
	{"relativeTotals", "I", nullptr, 0, $field(FrameSetView, relativeTotals)},
	{}
};

$MethodInfo _FrameSetView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(FrameSetView::*)($Element*,int32_t)>(&FrameSetView::init$))},
	{"getChildRequests", "(II)[Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(FrameSetView::*)()>(&FrameSetView::init))},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"parseDigits", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FrameSetView::*)($String*)>(&FrameSetView::parseDigits))},
	{"parseRowColSpec", "(Ljavax/swing/text/html/HTML$Attribute;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(FrameSetView::*)($HTML$Attribute*)>(&FrameSetView::parseRowColSpec))},
	{"spread", "(I[I)V", nullptr, $PRIVATE, $method(static_cast<void(FrameSetView::*)(int32_t,$ints*)>(&FrameSetView::spread))},
	{}
};

$ClassInfo _FrameSetView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.FrameSetView",
	"javax.swing.text.BoxView",
	nullptr,
	_FrameSetView_FieldInfo_,
	_FrameSetView_MethodInfo_
};

$Object* allocate$FrameSetView($Class* clazz) {
	return $of($alloc(FrameSetView));
}

void FrameSetView::init$($Element* elem, int32_t axis) {
	$BoxView::init$(elem, axis);
	$set(this, children, nullptr);
}

$StringArray* FrameSetView::parseRowColSpec($HTML$Attribute* key) {
	$var($AttributeSet, attributes, $nc($(getElement()))->getAttributes());
	$var($String, spec, "*"_s);
	if (attributes != nullptr) {
		if (attributes->getAttribute(key) != nullptr) {
			$assign(spec, $cast($String, attributes->getAttribute(key)));
		}
	}
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, spec, ","_s));
	int32_t nTokens = tokenizer->countTokens();
	int32_t n = getViewCount();
	$var($StringArray, items, $new($StringArray, $Math::max(nTokens, n)));
	int32_t i = 0;
	for (; i < nTokens; ++i) {
		items->set(i, $($nc($(tokenizer->nextToken()))->trim()));
		if ($nc(items->get(i))->equals("100%"_s)) {
			items->set(i, "*"_s);
		}
	}
	for (; i < items->length; ++i) {
		items->set(i, "*"_s);
	}
	return items;
}

void FrameSetView::init() {
	if (getAxis() == $View::Y_AXIS) {
		$init($HTML$Attribute);
		$set(this, children, parseRowColSpec($HTML$Attribute::ROWS));
	} else {
		$init($HTML$Attribute);
		$set(this, children, parseRowColSpec($HTML$Attribute::COLS));
	}
	$set(this, percentChildren, $new($ints, $nc(this->children)->length));
	$set(this, relativeChildren, $new($ints, $nc(this->children)->length));
	$set(this, absoluteChildren, $new($ints, $nc(this->children)->length));
	for (int32_t i = 0; i < $nc(this->children)->length; ++i) {
		$nc(this->percentChildren)->set(i, -1);
		$nc(this->relativeChildren)->set(i, -1);
		$nc(this->absoluteChildren)->set(i, -1);
		if ($nc($nc(this->children)->get(i))->endsWith("*"_s)) {
			if ($nc($nc(this->children)->get(i))->length() > 1) {
				$nc(this->relativeChildren)->set(i, $Integer::parseInt($($($nc($nc(this->children)->get(i))->substring(0, $nc($nc(this->children)->get(i))->length() - 1))->trim())));
				this->relativeTotals += $nc(this->relativeChildren)->get(i);
			} else {
				$nc(this->relativeChildren)->set(i, 1);
				this->relativeTotals += 1;
			}
		} else if ($nc($nc(this->children)->get(i))->indexOf((int32_t)u'%') != -1) {
			$nc(this->percentChildren)->set(i, parseDigits($nc(this->children)->get(i)));
			this->percentTotals += $nc(this->percentChildren)->get(i);
		} else {
			$var($String, value, $nc($nc(this->children)->get(i))->toLowerCase());
			if (value->endsWith("px"_s)) {
				$assign(value, $(value->substring(0, value->length() - 2))->trim());
			}
			$nc(this->absoluteChildren)->set(i, $Integer::parseInt(value));
		}
	}
	if (this->percentTotals > 100) {
		for (int32_t i = 0; i < $nc(this->percentChildren)->length; ++i) {
			if ($nc(this->percentChildren)->get(i) > 0) {
				$nc(this->percentChildren)->set(i, $div(($nc(this->percentChildren)->get(i) * 100), this->percentTotals));
			}
		}
		this->percentTotals = 100;
	}
}

void FrameSetView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	if (this->children == nullptr) {
		init();
	}
	$SizeRequirements::calculateTiledPositions(targetSpan, nullptr, $(getChildRequests(targetSpan, axis)), offsets, spans);
}

$SizeRequirementsArray* FrameSetView::getChildRequests(int32_t targetSpan, int32_t axis) {
	$var($ints, span, $new($ints, $nc(this->children)->length));
	spread(targetSpan, span);
	int32_t n = getViewCount();
	$var($SizeRequirementsArray, reqs, $new($SizeRequirementsArray, n));
	{
		int32_t i = 0;
		int32_t sIndex = 0;
		for (; i < n; ++i) {
			$var($View, v, getView(i));
			if (($instanceOf($FrameView, v)) || ($instanceOf(FrameSetView, v))) {
				int32_t var$0 = $cast(int32_t, $nc(v)->getMinimumSpan(axis));
				int32_t var$1 = span->get(sIndex);
				reqs->set(i, $$new($SizeRequirements, var$0, var$1, $cast(int32_t, v->getMaximumSpan(axis)), 0.5f));
				++sIndex;
			} else {
				int32_t min = $cast(int32_t, $nc(v)->getMinimumSpan(axis));
				int32_t pref = $cast(int32_t, v->getPreferredSpan(axis));
				int32_t max = $cast(int32_t, v->getMaximumSpan(axis));
				float a = v->getAlignment(axis);
				reqs->set(i, $$new($SizeRequirements, min, pref, max, a));
			}
		}
	}
	return reqs;
}

void FrameSetView::spread(int32_t targetSpan, $ints* span) {
	if (targetSpan == 0) {
		return;
	}
	int32_t tempSpace = 0;
	int32_t remainingSpace = targetSpan;
	for (int32_t i = 0; i < $nc(span)->length; ++i) {
		if ($nc(this->absoluteChildren)->get(i) > 0) {
			span->set(i, $nc(this->absoluteChildren)->get(i));
			remainingSpace -= span->get(i);
		}
	}
	tempSpace = remainingSpace;
	for (int32_t i = 0; i < $nc(span)->length; ++i) {
		if ($nc(this->percentChildren)->get(i) > 0 && tempSpace > 0) {
			span->set(i, ($nc(this->percentChildren)->get(i) * tempSpace) / 100);
			remainingSpace -= span->get(i);
		} else if ($nc(this->percentChildren)->get(i) > 0 && tempSpace <= 0) {
			span->set(i, $div(targetSpan, span->length));
			remainingSpace -= span->get(i);
		}
	}
	if (remainingSpace > 0 && this->relativeTotals > 0) {
		for (int32_t i = 0; i < $nc(span)->length; ++i) {
			if ($nc(this->relativeChildren)->get(i) > 0) {
				span->set(i, $div((remainingSpace * $nc(this->relativeChildren)->get(i)), this->relativeTotals));
			}
		}
	} else if (remainingSpace > 0) {
		float vTotal = (float)(targetSpan - remainingSpace);
		$var($floats, tempPercents, $new($floats, $nc(span)->length));
		remainingSpace = targetSpan;
		for (int32_t i = 0; i < span->length; ++i) {
			tempPercents->set(i, ((float)span->get(i) / vTotal) * 100.0f);
			span->set(i, $cast(int32_t, (((float)targetSpan * tempPercents->get(i)) / 100.0f)));
			remainingSpace -= span->get(i);
		}
		int32_t i = 0;
		while (remainingSpace != 0) {
			if (remainingSpace < 0) {
				--(*span)[i++];
				++remainingSpace;
			} else {
				++(*span)[i++];
				--remainingSpace;
			}
			if (i == span->length) {
				i = 0;
			}
		}
	}
}

int32_t FrameSetView::parseDigits($String* mixedStr) {
	int32_t result = 0;
	for (int32_t i = 0; i < $nc(mixedStr)->length(); ++i) {
		char16_t ch = mixedStr->charAt(i);
		if ($Character::isDigit(ch)) {
			result = (result * 10) + $Character::digit(ch, 10);
		}
	}
	return result;
}

FrameSetView::FrameSetView() {
}

$Class* FrameSetView::load$($String* name, bool initialize) {
	$loadClass(FrameSetView, name, initialize, &_FrameSetView_ClassInfo_, allocate$FrameSetView);
	return class$;
}

$Class* FrameSetView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax