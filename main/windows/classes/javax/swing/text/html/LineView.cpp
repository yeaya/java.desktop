#include <javax/swing/text/html/LineView.h>

#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/TabSet.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/ParagraphView.h>
#include <jcpp.h>

#undef ALIGN_LEFT
#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $1ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $TabSet = ::javax::swing::text::TabSet;
using $View = ::javax::swing::text::View;
using $ParagraphView = ::javax::swing::text::html::ParagraphView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _LineView_FieldInfo_[] = {
	{"tabBase", "I", nullptr, 0, $field(LineView, tabBase)},
	{}
};

$MethodInfo _LineView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(LineView::*)($Element*)>(&LineView::init$))},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getCharactersPerTab", "()I", nullptr, $PROTECTED},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreTab", "(FI)F", nullptr, $PROTECTED},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"layout", "(II)V", nullptr, $PROTECTED},
	{"nextTabStop", "(FI)F", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LineView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.LineView",
	"javax.swing.text.html.ParagraphView",
	nullptr,
	_LineView_FieldInfo_,
	_LineView_MethodInfo_
};

$Object* allocate$LineView($Class* clazz) {
	return $of($alloc(LineView));
}

void LineView::init$($Element* elem) {
	$ParagraphView::init$(elem);
}

bool LineView::isVisible() {
	return true;
}

float LineView::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

int32_t LineView::getResizeWeight(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $View::X_AXIS:
		{
			return 1;
		}
	case $View::Y_AXIS:
		{
			return 0;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

float LineView::getAlignment(int32_t axis) {
	if (axis == $View::X_AXIS) {
		return (float)0;
	}
	return $ParagraphView::getAlignment(axis);
}

void LineView::layout(int32_t width, int32_t height) {
	$ParagraphView::layout($Integer::MAX_VALUE - 1, height);
}

float LineView::nextTabStop(float x, int32_t tabOffset) {
	bool var$0 = getTabSet() == nullptr;
	if (var$0 && $StyleConstants::getAlignment($(getAttributes())) == $StyleConstants::ALIGN_LEFT) {
		return getPreTab(x, tabOffset);
	}
	return $ParagraphView::nextTabStop(x, tabOffset);
}

float LineView::getPreTab(float x, int32_t tabOffset) {
	$useLocalCurrentObjectStackCache();
	$var($Document, d, getDocument());
	$var($View, v, getViewAtPosition(tabOffset, nullptr));
	if (($instanceOf($StyledDocument, d)) && v != nullptr) {
		$var($Font, f, $nc(($cast($StyledDocument, d)))->getFont($(v->getAttributes())));
		$var($Container, c, getContainer());
		$var($FontMetrics, fm, (c != nullptr) ? $nc(c)->getFontMetrics(f) : $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(f));
		int32_t var$0 = getCharactersPerTab();
		int32_t width = var$0 * $nc(fm)->charWidth(u'W');
		int32_t tb = $cast(int32_t, getTabBase());
		return (float)(($div(($cast(int32_t, x) - tb), width) + 1) * width + tb);
	}
	return 10.0f + x;
}

int32_t LineView::getCharactersPerTab() {
	return 8;
}

LineView::LineView() {
}

$Class* LineView::load$($String* name, bool initialize) {
	$loadClass(LineView, name, initialize, &_LineView_ClassInfo_, allocate$LineView);
	return class$;
}

$Class* LineView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax