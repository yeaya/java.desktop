#include <javax/swing/text/TextLayoutStrategy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/LineBreakMeasurer.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextLayout.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView$FlowStrategy.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/GlyphPainter2.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/TextLayoutStrategy$AttributedSegment.h>
#include <javax/swing/text/View.h>
#include <sun/font/BidiUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DONE
#undef MAX_VALUE
#undef NUMERIC_SHAPING
#undef TRUE

using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $LineBreakMeasurer = ::java::awt::font::LineBreakMeasurer;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextLayout = ::java::awt::font::TextLayout;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $FlowView$FlowStrategy = ::javax::swing::text::FlowView$FlowStrategy;
using $GlyphPainter2 = ::javax::swing::text::GlyphPainter2;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $TextLayoutStrategy$AttributedSegment = ::javax::swing::text::TextLayoutStrategy$AttributedSegment;
using $View = ::javax::swing::text::View;
using $BidiUtils = ::sun::font::BidiUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _TextLayoutStrategy_FieldInfo_[] = {
	{"measurer", "Ljava/awt/font/LineBreakMeasurer;", nullptr, $PRIVATE, $field(TextLayoutStrategy, measurer)},
	{"text", "Ljavax/swing/text/TextLayoutStrategy$AttributedSegment;", nullptr, $PRIVATE, $field(TextLayoutStrategy, text)},
	{}
};

$MethodInfo _TextLayoutStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextLayoutStrategy::*)()>(&TextLayoutStrategy::init$))},
	{"adjustRow", "(Ljavax/swing/text/FlowView;III)V", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"createView", "(Ljavax/swing/text/FlowView;III)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getLimitingOffset", "(Ljavax/swing/text/View;IIZ)I", nullptr, 0},
	{"insertUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"layout", "(Ljavax/swing/text/FlowView;)V", nullptr, $PUBLIC},
	{"layoutRow", "(Ljavax/swing/text/FlowView;II)I", nullptr, $PROTECTED},
	{"removeUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"sync", "(Ljavax/swing/text/FlowView;)V", nullptr, 0},
	{}
};

$InnerClassInfo _TextLayoutStrategy_InnerClassesInfo_[] = {
	{"javax.swing.text.FlowView$FlowStrategy", "javax.swing.text.FlowView", "FlowStrategy", $PUBLIC | $STATIC},
	{"javax.swing.text.TextLayoutStrategy$AttributedSegment", "javax.swing.text.TextLayoutStrategy", "AttributedSegment", $STATIC},
	{}
};

$ClassInfo _TextLayoutStrategy_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.TextLayoutStrategy",
	"javax.swing.text.FlowView$FlowStrategy",
	nullptr,
	_TextLayoutStrategy_FieldInfo_,
	_TextLayoutStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_TextLayoutStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.TextLayoutStrategy$AttributedSegment"
};

$Object* allocate$TextLayoutStrategy($Class* clazz) {
	return $of($alloc(TextLayoutStrategy));
}

void TextLayoutStrategy::init$() {
	$FlowView$FlowStrategy::init$();
	$set(this, text, $new($TextLayoutStrategy$AttributedSegment));
}

void TextLayoutStrategy::insertUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	sync(fv);
	$FlowView$FlowStrategy::insertUpdate(fv, e, alloc);
}

void TextLayoutStrategy::removeUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	sync(fv);
	$FlowView$FlowStrategy::removeUpdate(fv, e, alloc);
}

void TextLayoutStrategy::changedUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	sync(fv);
	$FlowView$FlowStrategy::changedUpdate(fv, e, alloc);
}

void TextLayoutStrategy::layout($FlowView* fv) {
	$FlowView$FlowStrategy::layout(fv);
}

int32_t TextLayoutStrategy::layoutRow($FlowView* fv, int32_t rowIndex, int32_t p0) {
	$useLocalCurrentObjectStackCache();
	int32_t p1 = $FlowView$FlowStrategy::layoutRow(fv, rowIndex, p0);
	$var($View, row, $nc(fv)->getView(rowIndex));
	$var($Document, doc, fv->getDocument());
	$init($AbstractDocument);
	$var($Object, i18nFlag, $nc(doc)->getProperty($AbstractDocument::I18NProperty));
	$init($Boolean);
	if ((i18nFlag != nullptr) && $of(i18nFlag)->equals($Boolean::TRUE)) {
		int32_t n = $nc(row)->getViewCount();
		if (n > 1) {
			$var($AbstractDocument, d, $cast($AbstractDocument, fv->getDocument()));
			$var($Element, bidiRoot, $nc(d)->getBidiRootElement());
			$var($bytes, levels, $new($bytes, n));
			$var($ViewArray, reorder, $new($ViewArray, n));
			for (int32_t i = 0; i < n; ++i) {
				$var($View, v, row->getView(i));
				int32_t bidiIndex = $nc(bidiRoot)->getElementIndex($nc(v)->getStartOffset());
				$var($Element, bidiElem, bidiRoot->getElement(bidiIndex));
				levels->set(i, (int8_t)$StyleConstants::getBidiLevel($($nc(bidiElem)->getAttributes())));
				reorder->set(i, v);
			}
			$BidiUtils::reorderVisually(levels, reorder);
			row->replace(0, n, reorder);
		}
	}
	return p1;
}

void TextLayoutStrategy::adjustRow($FlowView* fv, int32_t rowIndex, int32_t desiredSpan, int32_t x) {
}

$View* TextLayoutStrategy::createView($FlowView* fv, int32_t startOffset, int32_t spanLeft, int32_t rowIndex) {
	$useLocalCurrentObjectStackCache();
	$var($View, lv, getLogicalView(fv));
	$var($View, row, $nc(fv)->getView(rowIndex));
	bool requireNextWord = ($nc(this->viewBuffer)->size() == 0) ? false : true;
	$init($Position$Bias);
	int32_t childIndex = $nc(lv)->getViewIndex(startOffset, $Position$Bias::Forward);
	$var($View, v, lv->getView(childIndex));
	int32_t endOffset = getLimitingOffset(v, startOffset, spanLeft, requireNextWord);
	if (endOffset == startOffset) {
		return nullptr;
	}
	$var($View, frag, nullptr);
	bool var$0 = (startOffset == $nc(v)->getStartOffset());
	if (var$0 && (endOffset == v->getEndOffset())) {
		$assign(frag, v);
	} else {
		$assign(frag, v->createFragment(startOffset, endOffset));
	}
	if (($instanceOf($GlyphView, frag)) && (this->measurer != nullptr)) {
		bool isTab = false;
		int32_t p0 = $nc(frag)->getStartOffset();
		int32_t p1 = frag->getEndOffset();
		if ((p1 - p0) == 1) {
			$var($Segment, s, $nc(($cast($GlyphView, frag)))->getText(p0, p1));
			char16_t ch = $nc(s)->first();
			if (ch == u'\t') {
				isTab = true;
			}
		}
		$var($TextLayout, tl, (isTab) ? ($TextLayout*)nullptr : $nc(this->measurer)->nextLayout((float)spanLeft, $nc(this->text)->toIteratorIndex(endOffset), requireNextWord));
		if (tl != nullptr) {
			$nc(($cast($GlyphView, frag)))->setGlyphPainter($$new($GlyphPainter2, tl));
		}
	}
	return frag;
}

int32_t TextLayoutStrategy::getLimitingOffset($View* v, int32_t startOffset, int32_t spanLeft, bool requireNextWord) {
	$useLocalCurrentObjectStackCache();
	int32_t endOffset = $nc(v)->getEndOffset();
	$var($Document, doc, v->getDocument());
	if ($instanceOf($AbstractDocument, doc)) {
		$var($AbstractDocument, d, $cast($AbstractDocument, doc));
		$var($Element, bidiRoot, $nc(d)->getBidiRootElement());
		if ($nc(bidiRoot)->getElementCount() > 1) {
			int32_t bidiIndex = bidiRoot->getElementIndex(startOffset);
			$var($Element, bidiElem, bidiRoot->getElement(bidiIndex));
			endOffset = $Math::min($nc(bidiElem)->getEndOffset(), endOffset);
		}
	}
	if ($instanceOf($GlyphView, v)) {
		$var($Segment, s, $nc(($cast($GlyphView, v)))->getText(startOffset, endOffset));
		char16_t ch = $nc(s)->first();
		if (ch == u'\t') {
			endOffset = startOffset + 1;
		} else {
			for (ch = s->next(); ch != $Segment::DONE; ch = s->next()) {
				if (ch == u'\t') {
					int32_t var$0 = startOffset + s->getIndex();
					endOffset = var$0 - s->getBeginIndex();
					break;
				}
			}
		}
	}
	int32_t limitIndex = $nc(this->text)->toIteratorIndex(endOffset);
	if (this->measurer != nullptr) {
		int32_t index = $nc(this->text)->toIteratorIndex(startOffset);
		if ($nc(this->measurer)->getPosition() != index) {
			$nc(this->measurer)->setPosition(index);
		}
		limitIndex = $nc(this->measurer)->nextOffset((float)spanLeft, limitIndex, requireNextWord);
	}
	int32_t pos = $nc(this->text)->toModelPosition(limitIndex);
	return pos;
}

void TextLayoutStrategy::sync($FlowView* fv) {
	$useLocalCurrentObjectStackCache();
	$var($View, lv, getLogicalView(fv));
	$nc(this->text)->setView(lv);
	$var($Container, container, $nc(fv)->getContainer());
	$var($FontRenderContext, frc, $SwingUtilities2::getFontRenderContext(container));
	$var($BreakIterator, iter, nullptr);
	$var($Container, c, fv->getContainer());
	if (c != nullptr) {
		$assign(iter, $BreakIterator::getLineInstance($(c->getLocale())));
	} else {
		$assign(iter, $BreakIterator::getLineInstance());
	}
	$var($Object, shaper, nullptr);
	if ($instanceOf($JComponent, c)) {
		$init($TextAttribute);
		$assign(shaper, $nc(($cast($JComponent, c)))->getClientProperty($TextAttribute::NUMERIC_SHAPING));
	}
	$nc(this->text)->setShaper(shaper);
	$set(this, measurer, $new($LineBreakMeasurer, this->text, iter, frc));
	int32_t n = $nc(lv)->getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, child, lv->getView(i));
		if ($instanceOf($GlyphView, child)) {
			int32_t p0 = $nc(child)->getStartOffset();
			int32_t p1 = child->getEndOffset();
			$nc(this->measurer)->setPosition($nc(this->text)->toIteratorIndex(p0));
			$init($Float);
			$var($TextLayout, layout, $nc(this->measurer)->nextLayout($Float::MAX_VALUE, $nc(this->text)->toIteratorIndex(p1), false));
			$nc(($cast($GlyphView, child)))->setGlyphPainter($$new($GlyphPainter2, layout));
		}
	}
	$nc(this->measurer)->setPosition($nc(this->text)->getBeginIndex());
}

TextLayoutStrategy::TextLayoutStrategy() {
}

$Class* TextLayoutStrategy::load$($String* name, bool initialize) {
	$loadClass(TextLayoutStrategy, name, initialize, &_TextLayoutStrategy_ClassInfo_, allocate$TextLayoutStrategy);
	return class$;
}

$Class* TextLayoutStrategy::class$ = nullptr;

		} // text
	} // swing
} // javax