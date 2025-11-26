#include <javax/swing/text/GlyphPainter2.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/font/TextHitInfo.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $TextHitInfo = ::java::awt::font::TextHitInfo;
using $TextLayout = ::java::awt::font::TextLayout;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $TabExpander = ::javax::swing::text::TabExpander;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GlyphPainter2_FieldInfo_[] = {
	{"layout", "Ljava/awt/font/TextLayout;", nullptr, 0, $field(GlyphPainter2, layout)},
	{}
};

$MethodInfo _GlyphPainter2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/font/TextLayout;)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphPainter2::*)($TextLayout*)>(&GlyphPainter2::init$))},
	{"getAscent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getBoundedPosition", "(Ljavax/swing/text/GlyphView;IFF)I", nullptr, $PUBLIC},
	{"getDescent", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getHeight", "(Ljavax/swing/text/GlyphView;)F", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/GlyphView;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPainter", "(Ljavax/swing/text/GlyphView;II)Ljavax/swing/text/GlyphView$GlyphPainter;", nullptr, $PUBLIC},
	{"getSpan", "(Ljavax/swing/text/GlyphView;IILjavax/swing/text/TabExpander;F)F", nullptr, $PUBLIC},
	{"modelToView", "(Ljavax/swing/text/GlyphView;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljavax/swing/text/GlyphView;Ljava/awt/Graphics;Ljava/awt/Shape;II)V", nullptr, $PUBLIC},
	{"viewToModel", "(Ljavax/swing/text/GlyphView;FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GlyphPainter2_InnerClassesInfo_[] = {
	{"javax.swing.text.GlyphView$GlyphPainter", "javax.swing.text.GlyphView", "GlyphPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GlyphPainter2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.GlyphPainter2",
	"javax.swing.text.GlyphView$GlyphPainter",
	nullptr,
	_GlyphPainter2_FieldInfo_,
	_GlyphPainter2_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphPainter2_InnerClassesInfo_
};

$Object* allocate$GlyphPainter2($Class* clazz) {
	return $of($alloc(GlyphPainter2));
}

void GlyphPainter2::init$($TextLayout* layout) {
	$GlyphView$GlyphPainter::init$();
	$set(this, layout, layout);
}

$GlyphView$GlyphPainter* GlyphPainter2::getPainter($GlyphView* v, int32_t p0, int32_t p1) {
	return nullptr;
}

float GlyphPainter2::getSpan($GlyphView* v, int32_t p0, int32_t p1, $TabExpander* e, float x) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = (p0 == $nc(v)->getStartOffset());
	if (var$0 && (p1 == v->getEndOffset())) {
		return $nc(this->layout)->getAdvance();
	}
	int32_t p = $nc(v)->getStartOffset();
	int32_t index0 = p0 - p;
	int32_t index1 = p1 - p;
	$var($TextHitInfo, hit0, $TextHitInfo::afterOffset(index0));
	$var($TextHitInfo, hit1, $TextHitInfo::beforeOffset(index1));
	$var($floats, locs, $nc(this->layout)->getCaretInfo(hit0));
	float x0 = $nc(locs)->get(0);
	$assign(locs, $nc(this->layout)->getCaretInfo(hit1));
	float x1 = locs->get(0);
	return (x1 > x0) ? x1 - x0 : x0 - x1;
}

float GlyphPainter2::getHeight($GlyphView* v) {
	float var$1 = $nc(this->layout)->getAscent();
	float var$0 = var$1 + $nc(this->layout)->getDescent();
	return var$0 + $nc(this->layout)->getLeading();
}

float GlyphPainter2::getAscent($GlyphView* v) {
	return $nc(this->layout)->getAscent();
}

float GlyphPainter2::getDescent($GlyphView* v) {
	return $nc(this->layout)->getDescent();
}

void GlyphPainter2::paint($GlyphView* v, $Graphics* g, $Shape* a, int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Graphics2D, g)) {
		$var($Rectangle2D, alloc, $nc(a)->getBounds2D());
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		float var$1 = (float)$nc(alloc)->getY();
		float var$0 = var$1 + $nc(this->layout)->getAscent();
		float y = var$0 + $nc(this->layout)->getLeading();
		float x = (float)alloc->getX();
		bool var$2 = p0 > $nc(v)->getStartOffset();
		if (var$2 || p1 < $nc(v)->getEndOffset()) {
			try {
				$init($Position$Bias);
				$var($Shape, s, v->modelToView(p0, $Position$Bias::Forward, p1, $Position$Bias::Backward, a));
				$var($Shape, savedClip, $nc(g)->getClip());
				$nc(g2d)->clip(s);
				$nc(this->layout)->draw(g2d, x, y);
				g->setClip(savedClip);
			} catch ($BadLocationException& e) {
			}
		} else {
			$nc(this->layout)->draw(g2d, x, y);
		}
	}
}

$Shape* GlyphPainter2::modelToView($GlyphView* v, int32_t pos, $Position$Bias* bias, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	int32_t offs = pos - $nc(v)->getStartOffset();
	$var($Rectangle2D, alloc, $nc(a)->getBounds2D());
	$init($Position$Bias);
	$var($TextHitInfo, hit, (bias == $Position$Bias::Forward) ? $TextHitInfo::afterOffset(offs) : $TextHitInfo::beforeOffset(offs));
	$var($floats, locs, $nc(this->layout)->getCaretInfo(hit));
	$var($Rectangle2D, rect, $new($Rectangle2D$Float));
	double var$0 = $nc(alloc)->getX() + $nc(locs)->get(0);
	double var$1 = alloc->getY();
	rect->setRect(var$0, var$1, (double)1, alloc->getHeight());
	return rect;
}

int32_t GlyphPainter2::viewToModel($GlyphView* v, float x, float y, $Shape* a, $Position$BiasArray* biasReturn) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, alloc, ($instanceOf($Rectangle2D, a)) ? $cast($Rectangle2D, a) : $nc(a)->getBounds2D());
	$var($TextHitInfo, hit, $nc(this->layout)->hitTestChar(x - (float)$nc(alloc)->getX(), (float)0));
	int32_t pos = $nc(hit)->getInsertionIndex();
	if (pos == $nc(v)->getEndOffset()) {
		--pos;
	}
	$init($Position$Bias);
	$nc(biasReturn)->set(0, hit->isLeadingEdge() ? $Position$Bias::Forward : $Position$Bias::Backward);
	return pos + $nc(v)->getStartOffset();
}

int32_t GlyphPainter2::getBoundedPosition($GlyphView* v, int32_t p0, float x, float len) {
	if (len < 0) {
		$throwNew($IllegalArgumentException, "Length must be >= 0."_s);
	}
	$var($TextHitInfo, hit, nullptr);
	if ($nc(this->layout)->isLeftToRight()) {
		$assign(hit, $nc(this->layout)->hitTestChar(len, (float)0));
	} else {
		$assign(hit, $nc(this->layout)->hitTestChar($nc(this->layout)->getAdvance() - len, (float)0));
	}
	int32_t var$0 = $nc(v)->getStartOffset();
	return var$0 + $nc(hit)->getCharIndex();
}

int32_t GlyphPainter2::getNextVisualPositionFrom($GlyphView* v, int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(v)->getDocument());
	int32_t startOffset = v->getStartOffset();
	int32_t endOffset = v->getEndOffset();
	$var($Segment, text, nullptr);
	bool viewIsLeftToRight = false;
	$var($TextHitInfo, currentHit, nullptr);
	$var($TextHitInfo, nextHit, nullptr);
	switch (direction) {
	case $View::NORTH:
		{
			break;
		}
	case $View::SOUTH:
		{
			break;
		}
	case $View::EAST:
		{
			viewIsLeftToRight = $AbstractDocument::isLeftToRight(doc, startOffset, endOffset);
			if (startOffset == $nc(doc)->getLength()) {
				if (pos == -1) {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return startOffset;
				}
				return -1;
			}
			if (pos == -1) {
				if (viewIsLeftToRight) {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return startOffset;
				} else {
					$assign(text, v->getText(endOffset - 1, endOffset));
					char16_t c = $nc($nc(text)->array)->get(text->offset);
					$SegmentCache::releaseSharedSegment(text);
					if (c == u'\n') {
						$init($Position$Bias);
						$nc(biasRet)->set(0, $Position$Bias::Forward);
						return endOffset - 1;
					}
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Backward);
					return endOffset;
				}
			}
			$init($Position$Bias);
			if (b == $Position$Bias::Forward) {
				$assign(currentHit, $TextHitInfo::afterOffset(pos - startOffset));
			} else {
				$assign(currentHit, $TextHitInfo::beforeOffset(pos - startOffset));
			}
			$assign(nextHit, $nc(this->layout)->getNextRightHit(currentHit));
			if (nextHit == nullptr) {
				return -1;
			}
			if (viewIsLeftToRight != $nc(this->layout)->isLeftToRight()) {
				$assign(nextHit, $nc(this->layout)->getVisualOtherHit(nextHit));
			}
			pos = $nc(nextHit)->getInsertionIndex() + startOffset;
			if (pos == endOffset) {
				$assign(text, v->getText(endOffset - 1, endOffset));
				char16_t c = $nc($nc(text)->array)->get(text->offset);
				$SegmentCache::releaseSharedSegment(text);
				if (c == u'\n') {
					return -1;
				}
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Backward);
			} else {
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Forward);
			}
			return pos;
		}
	case $View::WEST:
		{
			viewIsLeftToRight = $AbstractDocument::isLeftToRight(doc, startOffset, endOffset);
			if (startOffset == $nc(doc)->getLength()) {
				if (pos == -1) {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return startOffset;
				}
				return -1;
			}
			if (pos == -1) {
				if (viewIsLeftToRight) {
					$assign(text, v->getText(endOffset - 1, endOffset));
					char16_t c = $nc($nc(text)->array)->get(text->offset);
					$SegmentCache::releaseSharedSegment(text);
					if ((c == u'\n') || $Character::isSpaceChar(c)) {
						$init($Position$Bias);
						$nc(biasRet)->set(0, $Position$Bias::Forward);
						return endOffset - 1;
					}
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Backward);
					return endOffset;
				} else {
					$init($Position$Bias);
					$nc(biasRet)->set(0, $Position$Bias::Forward);
					return startOffset;
				}
			}
			$init($Position$Bias);
			if (b == $Position$Bias::Forward) {
				$assign(currentHit, $TextHitInfo::afterOffset(pos - startOffset));
			} else {
				$assign(currentHit, $TextHitInfo::beforeOffset(pos - startOffset));
			}
			$assign(nextHit, $nc(this->layout)->getNextLeftHit(currentHit));
			if (nextHit == nullptr) {
				return -1;
			}
			if (viewIsLeftToRight != $nc(this->layout)->isLeftToRight()) {
				$assign(nextHit, $nc(this->layout)->getVisualOtherHit(nextHit));
			}
			pos = $nc(nextHit)->getInsertionIndex() + startOffset;
			if (pos == endOffset) {
				$assign(text, v->getText(endOffset - 1, endOffset));
				char16_t c = $nc($nc(text)->array)->get(text->offset);
				$SegmentCache::releaseSharedSegment(text);
				if (c == u'\n') {
					return -1;
				}
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Backward);
			} else {
				$init($Position$Bias);
				$nc(biasRet)->set(0, $Position$Bias::Forward);
			}
			return pos;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Bad direction: "_s, $$str(direction)}));
		}
	}
	return pos;
}

GlyphPainter2::GlyphPainter2() {
}

$Class* GlyphPainter2::load$($String* name, bool initialize) {
	$loadClass(GlyphPainter2, name, initialize, &_GlyphPainter2_ClassInfo_, allocate$GlyphPainter2);
	return class$;
}

$Class* GlyphPainter2::class$ = nullptr;

		} // text
	} // swing
} // javax