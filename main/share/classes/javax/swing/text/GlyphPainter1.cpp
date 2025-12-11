#include <javax/swing/text/GlyphPainter1.h>

#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/ParagraphView$Row.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $ParagraphView$Row = ::javax::swing::text::ParagraphView$Row;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GlyphPainter1_FieldInfo_[] = {
	{"metrics", "Ljava/awt/FontMetrics;", nullptr, 0, $field(GlyphPainter1, metrics)},
	{}
};

$MethodInfo _GlyphPainter1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GlyphPainter1::*)()>(&GlyphPainter1::init$))},
	{"getAscent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getBoundedPosition", "(Ljavax/swing/text/GlyphView;IFF)I", nullptr, $PUBLIC},
	{"getDescent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getHeight", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getJustificationData", "(Ljavax/swing/text/GlyphView;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(GlyphPainter1::*)($GlyphView*)>(&GlyphPainter1::getJustificationData))},
	{"getSpan", "(Ljavax/swing/text/GlyphView;IILjavax/swing/text/TabExpander;F)F", nullptr, $PUBLIC},
	{"modelToView", "(Ljavax/swing/text/GlyphView;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljavax/swing/text/GlyphView;Ljava/awt/Graphics;Ljava/awt/Shape;II)V", nullptr, $PUBLIC},
	{"sync", "(Ljavax/swing/text/GlyphView;)V", nullptr, 0},
	{"viewToModel", "(Ljavax/swing/text/GlyphView;FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GlyphPainter1_InnerClassesInfo_[] = {
	{"javax.swing.text.GlyphView$GlyphPainter", "javax.swing.text.GlyphView", "GlyphPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GlyphPainter1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.GlyphPainter1",
	"javax.swing.text.GlyphView$GlyphPainter",
	nullptr,
	_GlyphPainter1_FieldInfo_,
	_GlyphPainter1_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphPainter1_InnerClassesInfo_
};

$Object* allocate$GlyphPainter1($Class* clazz) {
	return $of($alloc(GlyphPainter1));
}

void GlyphPainter1::init$() {
	$GlyphView$GlyphPainter::init$();
}

float GlyphPainter1::getSpan($GlyphView* v, int32_t p0, int32_t p1, $TabExpander* e, float x) {
	$useLocalCurrentObjectStackCache();
	sync(v);
	$var($Segment, text, $nc(v)->getText(p0, p1));
	$var($ints, justificationData, getJustificationData(v));
	int32_t width = $Utilities::getTabbedTextWidth(static_cast<$View*>(v), text, this->metrics, $cast(int32_t, x), e, p0, justificationData);
	$SegmentCache::releaseSharedSegment(text);
	return (float)width;
}

float GlyphPainter1::getHeight($GlyphView* v) {
	sync(v);
	return (float)$nc(this->metrics)->getHeight();
}

float GlyphPainter1::getAscent($GlyphView* v) {
	sync(v);
	return (float)$nc(this->metrics)->getAscent();
}

float GlyphPainter1::getDescent($GlyphView* v) {
	sync(v);
	return (float)$nc(this->metrics)->getDescent();
}

void GlyphPainter1::paint($GlyphView* v, $Graphics* g, $Shape* a, int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	sync(v);
	$var($Segment, text, nullptr);
	$var($TabExpander, expander, $nc(v)->getTabExpander());
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	float x = (float)$nc(alloc)->x;
	int32_t p = v->getStartOffset();
	$var($ints, justificationData, getJustificationData(v));
	if (p != p0) {
		$assign(text, v->getText(p, p0));
		float width = $Utilities::getTabbedTextWidth(static_cast<$View*>(v), text, this->metrics, x, expander, p, justificationData);
		x += width;
		$SegmentCache::releaseSharedSegment(text);
	}
	int32_t var$0 = alloc->y + $nc(this->metrics)->getHeight();
	float y = (float)(var$0 - $nc(this->metrics)->getDescent());
	$assign(text, v->getText(p0, p1));
	$nc(g)->setFont($($nc(this->metrics)->getFont()));
	$Utilities::drawTabbedText(v, text, x, y, g, expander, p0, justificationData, true);
	$SegmentCache::releaseSharedSegment(text);
}

$Shape* GlyphPainter1::modelToView($GlyphView* v, int32_t pos, $Position$Bias* bias, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	sync(v);
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	int32_t p0 = $nc(v)->getStartOffset();
	int32_t p1 = v->getEndOffset();
	$var($TabExpander, expander, v->getTabExpander());
	$var($Segment, text, nullptr);
	if (pos == p1) {
		return $new($Rectangle, $nc(alloc)->x + alloc->width, alloc->y, 0, $nc(this->metrics)->getHeight());
	}
	if ((pos >= p0) && (pos <= p1)) {
		$assign(text, v->getText(p0, pos));
		$var($ints, justificationData, getJustificationData(v));
		int32_t width = $Utilities::getTabbedTextWidth(static_cast<$View*>(v), text, this->metrics, $nc(alloc)->x, expander, p0, justificationData);
		$SegmentCache::releaseSharedSegment(text);
		return $new($Rectangle, $nc(alloc)->x + width, alloc->y, 0, $nc(this->metrics)->getHeight());
	}
	$throwNew($BadLocationException, "modelToView - can\'t convert"_s, p1);
}

int32_t GlyphPainter1::viewToModel($GlyphView* v, float x, float y, $Shape* a, $Position$BiasArray* biasReturn) {
	$useLocalCurrentObjectStackCache();
	sync(v);
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	int32_t p0 = $nc(v)->getStartOffset();
	int32_t p1 = v->getEndOffset();
	$var($TabExpander, expander, v->getTabExpander());
	$var($Segment, text, v->getText(p0, p1));
	$var($ints, justificationData, getJustificationData(v));
	int32_t offs = $Utilities::getTabbedTextOffset(static_cast<$View*>(v), text, this->metrics, (float)$nc(alloc)->x, x, expander, p0, justificationData);
	$SegmentCache::releaseSharedSegment(text);
	int32_t retValue = p0 + offs;
	if (retValue == p1) {
		--retValue;
	}
	$init($Position$Bias);
	$nc(biasReturn)->set(0, $Position$Bias::Forward);
	return retValue;
}

int32_t GlyphPainter1::getBoundedPosition($GlyphView* v, int32_t p0, float x, float len) {
	$useLocalCurrentObjectStackCache();
	sync(v);
	$var($TabExpander, expander, $nc(v)->getTabExpander());
	$var($Segment, s, v->getText(p0, v->getEndOffset()));
	$var($ints, justificationData, getJustificationData(v));
	int32_t index = $Utilities::getTabbedTextOffset(v, s, this->metrics, x, (x + len), expander, p0, false, justificationData, true);
	$SegmentCache::releaseSharedSegment(s);
	int32_t p1 = p0 + index;
	return p1;
}

void GlyphPainter1::sync($GlyphView* v) {
	$useLocalCurrentObjectStackCache();
	$var($Font, f, $nc(v)->getFont());
	$var($FontMetrics, fm, nullptr);
	$var($Container, c, v->getContainer());
	if (c != nullptr) {
		$assign(fm, c->getFontMetrics(f));
	}
	bool var$0 = (this->metrics == nullptr) || (!$nc(f)->equals($($nc(this->metrics)->getFont())));
	if (var$0 || (!$nc($of(this->metrics))->equals(fm))) {
		$set(this, metrics, (c != nullptr) ? fm : $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(f));
	}
}

$ints* GlyphPainter1::getJustificationData($GlyphView* v) {
	$useLocalCurrentObjectStackCache();
	$var($View, parent, $nc(v)->getParent());
	$var($ints, ret, nullptr);
	if ($instanceOf($ParagraphView$Row, parent)) {
		$var($ParagraphView$Row, row, $cast($ParagraphView$Row, parent));
		$assign(ret, $nc(row)->justificationData);
	}
	return ret;
}

GlyphPainter1::GlyphPainter1() {
}

$Class* GlyphPainter1::load$($String* name, bool initialize) {
	$loadClass(GlyphPainter1, name, initialize, &_GlyphPainter1_ClassInfo_, allocate$GlyphPainter1);
	return class$;
}

$Class* GlyphPainter1::class$ = nullptr;

		} // text
	} // swing
} // javax