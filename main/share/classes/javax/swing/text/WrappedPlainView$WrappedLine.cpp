#include <javax/swing/text/WrappedPlainView$WrappedLine.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/lang/ref/SoftReference.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _WrappedPlainView$WrappedLine_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/WrappedPlainView;", nullptr, $FINAL | $SYNTHETIC, $field(WrappedPlainView$WrappedLine, this$0)},
	{"lineCount", "I", nullptr, 0, $field(WrappedPlainView$WrappedLine, lineCount)},
	{"lineCache", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[I>;", 0, $field(WrappedPlainView$WrappedLine, lineCache)},
	{}
};

$MethodInfo _WrappedPlainView$WrappedLine_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/WrappedPlainView;Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(WrappedPlainView$WrappedLine::*)($WrappedPlainView*,$Element*)>(&WrappedPlainView$WrappedLine::init$))},
	{"breakLines", "(I)[I", nullptr, $FINAL, $method(static_cast<$ints*(WrappedPlainView$WrappedLine::*)(int32_t)>(&WrappedPlainView$WrappedLine::breakLines))},
	{"findLine", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WrappedPlainView$WrappedLine::*)(int32_t)>(&WrappedPlainView$WrappedLine::findLine))},
	{"findLine", "([IIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WrappedPlainView$WrappedLine::*)($ints*,int32_t,int32_t,int32_t)>(&WrappedPlainView$WrappedLine::findLine))},
	{"getLineEnds", "()[I", nullptr, $FINAL, $method(static_cast<$ints*(WrappedPlainView$WrappedLine::*)()>(&WrappedPlainView$WrappedLine::getLineEnds))},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"update", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;)V", nullptr, $PRIVATE, $method(static_cast<void(WrappedPlainView$WrappedLine::*)($DocumentEvent*,$Shape*)>(&WrappedPlainView$WrappedLine::update))},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WrappedPlainView$WrappedLine_InnerClassesInfo_[] = {
	{"javax.swing.text.WrappedPlainView$WrappedLine", "javax.swing.text.WrappedPlainView", "WrappedLine", 0},
	{}
};

$ClassInfo _WrappedPlainView$WrappedLine_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.WrappedPlainView$WrappedLine",
	"javax.swing.text.View",
	nullptr,
	_WrappedPlainView$WrappedLine_FieldInfo_,
	_WrappedPlainView$WrappedLine_MethodInfo_,
	nullptr,
	nullptr,
	_WrappedPlainView$WrappedLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.WrappedPlainView"
};

$Object* allocate$WrappedPlainView$WrappedLine($Class* clazz) {
	return $of($alloc(WrappedPlainView$WrappedLine));
}

void WrappedPlainView$WrappedLine::init$($WrappedPlainView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$View::init$(elem);
	$set(this, lineCache, nullptr);
	this->lineCount = -1;
}

float WrappedPlainView$WrappedLine::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		float width = 0;
		switch (axis) {
		case $View::X_AXIS:
			{
				width = (float)this->this$0->getWidth();
				if (width == $Integer::MAX_VALUE) {
					return 100.0f;
				}
				return width;
			}
		case $View::Y_AXIS:
			{
				if (this->lineCount < 0 || this->this$0->widthChanging) {
					breakLines(getStartOffset());
				}
				return (float)(this->lineCount * $nc(this->this$0->metrics)->getHeight());
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	}
}

void WrappedPlainView$WrappedLine::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, $cast($Rectangle, a));
	int32_t y = $nc(alloc)->y + $nc(this->this$0->metrics)->getAscent();
	int32_t x = alloc->x;
	$var($JTextComponent, host, $cast($JTextComponent, getContainer()));
	$var($Highlighter, h, $nc(host)->getHighlighter());
	$var($LayeredHighlighter, dh, ($instanceOf($LayeredHighlighter, h)) ? $cast($LayeredHighlighter, h) : ($LayeredHighlighter*)nullptr);
	int32_t start = getStartOffset();
	int32_t end = getEndOffset();
	int32_t p0 = start;
	$var($ints, lineEnds, getLineEnds());
	bool useDrawLineFP = this->this$0->drawLineOverridden && $instanceOf($Graphics2D, g);
	for (int32_t i = 0; i < this->lineCount; ++i) {
		int32_t p1 = (lineEnds == nullptr) ? end : start + $nc(lineEnds)->get(i);
		if (dh != nullptr) {
			int32_t hOffset = (p1 == end) ? (p1 - 1) : p1;
			dh->paintLayeredHighlights(g, p0, hOffset, a, host, this);
		}
		if (useDrawLineFP) {
			this->this$0->drawLine(p0, p1, $cast($Graphics2D, g), (float)x, (float)y);
		} else {
			this->this$0->drawLine(p0, p1, g, x, y);
		}
		p0 = p1;
		y += $nc(this->this$0->metrics)->getHeight();
	}
}

$Shape* WrappedPlainView$WrappedLine::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, $nc(a)->getBounds());
	$nc(alloc)->height = $nc(this->this$0->metrics)->getHeight();
	alloc->width = 1;
	int32_t p0 = getStartOffset();
	if (pos < p0 || pos > getEndOffset()) {
		$throwNew($BadLocationException, "Position out of range"_s, pos);
	}
	$init($Position$Bias);
	int32_t testP = (b == $Position$Bias::Forward) ? pos : $Math::max(p0, pos - 1);
	int32_t line = 0;
	$var($ints, lineEnds, getLineEnds());
	if (lineEnds != nullptr) {
		line = findLine(testP - p0);
		if (line > 0) {
			p0 += lineEnds->get(line - 1);
		}
		alloc->y += alloc->height * line;
	}
	if (pos > p0) {
		$var($Segment, segment, $SegmentCache::getSharedSegment());
		this->this$0->loadText(segment, p0, pos);
		float x = (float)alloc->x;
		x += $Utilities::getTabbedTextWidth(segment, this->this$0->metrics, x, static_cast<$TabExpander*>(this->this$0), p0);
		$SegmentCache::releaseSharedSegment(segment);
		return $new($Rectangle2D$Float, x, (float)alloc->y, (float)alloc->width, (float)alloc->height);
	}
	return alloc;
}

int32_t WrappedPlainView$WrappedLine::viewToModel(float fx, float fy, $Shape* a, $Position$BiasArray* bias) {
	$useLocalCurrentObjectStackCache();
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Forward);
	$var($Rectangle, alloc, $cast($Rectangle, a));
	int32_t x = $cast(int32_t, fx);
	int32_t y = $cast(int32_t, fy);
	if (y < $nc(alloc)->y) {
		return getStartOffset();
	} else if (y > alloc->y + alloc->height) {
		return getEndOffset() - 1;
	} else {
		alloc->height = $nc(this->this$0->metrics)->getHeight();
		int32_t line = (alloc->height > 0 ? $div((y - alloc->y), alloc->height) : this->lineCount - 1);
		if (line >= this->lineCount) {
			return getEndOffset() - 1;
		} else {
			int32_t p0 = getStartOffset();
			int32_t p1 = 0;
			if (this->lineCount == 1) {
				p1 = getEndOffset();
			} else {
				$var($ints, lineEnds, getLineEnds());
				p1 = p0 + $nc(lineEnds)->get(line);
				if (line > 0) {
					p0 += lineEnds->get(line - 1);
				}
			}
			if (x < alloc->x) {
				return p0;
			} else if (x > alloc->x + alloc->width) {
				return p1 - 1;
			} else {
				$var($Segment, segment, $SegmentCache::getSharedSegment());
				this->this$0->loadText(segment, p0, p1);
				int32_t n = $Utilities::getTabbedTextOffset(segment, this->this$0->metrics, (float)alloc->x, (float)x, static_cast<$TabExpander*>(this->this$0), p0, false);
				$SegmentCache::releaseSharedSegment(segment);
				return $Math::min(p0 + n, p1 - 1);
			}
		}
	}
}

void WrappedPlainView$WrappedLine::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	update(e, a);
}

void WrappedPlainView$WrappedLine::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	update(e, a);
}

void WrappedPlainView$WrappedLine::update($DocumentEvent* ev, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	int32_t oldCount = this->lineCount;
	breakLines($nc(ev)->getOffset());
	if (oldCount != this->lineCount) {
		this->this$0->preferenceChanged(this, false, true);
		$nc($(getContainer()))->repaint();
	} else if (a != nullptr) {
		$var($Component, c, getContainer());
		$var($Rectangle, alloc, $cast($Rectangle, a));
		$nc(c)->repaint(alloc->x, alloc->y, alloc->width, alloc->height);
	}
}

$ints* WrappedPlainView$WrappedLine::getLineEnds() {
	if (this->lineCache == nullptr) {
		return nullptr;
	} else {
		$var($ints, lineEnds, $cast($ints, $nc(this->lineCache)->get()));
		if (lineEnds == nullptr) {
			return breakLines(getStartOffset());
		} else {
			return lineEnds;
		}
	}
}

$ints* WrappedPlainView$WrappedLine::breakLines(int32_t startPos) {
	$useLocalCurrentObjectStackCache();
	$var($ints, lineEnds, (this->lineCache == nullptr) ? ($ints*)nullptr : $cast($ints, $nc(this->lineCache)->get()));
	$var($ints, oldLineEnds, lineEnds);
	int32_t start = getStartOffset();
	int32_t lineIndex = 0;
	if (lineEnds != nullptr) {
		lineIndex = findLine(startPos - start);
		if (lineIndex > 0) {
			--lineIndex;
		}
	}
	int32_t p0 = (lineIndex == 0) ? start : start + $nc(lineEnds)->get(lineIndex - 1);
	int32_t p1 = getEndOffset();
	while (p0 < p1) {
		int32_t p = this->this$0->calculateBreakPosition(p0, p1);
		p0 = (p == p0) ? ++p : p;
		if (lineIndex == 0 && p0 >= p1) {
			$set(this, lineCache, nullptr);
			$assign(lineEnds, nullptr);
			lineIndex = 1;
			break;
		} else if (lineEnds == nullptr || lineIndex >= lineEnds->length) {
			double growFactor = ((double)(p1 - start) / (p0 - start));
			int32_t newSize = $cast(int32_t, $Math::ceil((lineIndex + 1) * growFactor));
			newSize = $Math::max(newSize, lineIndex + 2);
			$var($ints, tmp, $new($ints, newSize));
			if (lineEnds != nullptr) {
				$System::arraycopy(lineEnds, 0, tmp, 0, lineIndex);
			}
			$assign(lineEnds, tmp);
		}
		lineEnds->set(lineIndex++, p0 - start);
	}
	this->lineCount = lineIndex;
	if (this->lineCount > 1) {
		int32_t maxCapacity = this->lineCount + this->lineCount / 3;
		if (lineEnds->length > maxCapacity) {
			$var($ints, tmp, $new($ints, maxCapacity));
			$System::arraycopy(lineEnds, 0, tmp, 0, this->lineCount);
			$assign(lineEnds, tmp);
		}
	}
	if (lineEnds != nullptr && lineEnds != oldLineEnds) {
		$set(this, lineCache, $new($SoftReference, lineEnds));
	}
	return lineEnds;
}

int32_t WrappedPlainView$WrappedLine::findLine(int32_t offset) {
	$var($ints, lineEnds, $cast($ints, $nc(this->lineCache)->get()));
	if (offset < $nc(lineEnds)->get(0)) {
		return 0;
	} else if (offset > lineEnds->get(this->lineCount - 1)) {
		return this->lineCount;
	} else {
		return findLine(lineEnds, offset, 0, this->lineCount - 1);
	}
}

int32_t WrappedPlainView$WrappedLine::findLine($ints* array, int32_t offset, int32_t min, int32_t max) {
	if (max - min <= 1) {
		return max;
	} else {
		int32_t mid = (max + min) / 2;
		return (offset < $nc(array)->get(mid)) ? findLine(array, offset, min, mid) : findLine(array, offset, mid, max);
	}
}

WrappedPlainView$WrappedLine::WrappedPlainView$WrappedLine() {
}

$Class* WrappedPlainView$WrappedLine::load$($String* name, bool initialize) {
	$loadClass(WrappedPlainView$WrappedLine, name, initialize, &_WrappedPlainView$WrappedLine_ClassInfo_, allocate$WrappedPlainView$WrappedLine);
	return class$;
}

$Class* WrappedPlainView$WrappedLine::class$ = nullptr;

		} // text
	} // swing
} // javax