#include <javax/swing/text/FlowView$FlowStrategy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/TabableView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $FlowView = ::javax::swing::text::FlowView;
using $Position = ::javax::swing::text::Position;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $TabExpander = ::javax::swing::text::TabExpander;
using $TabableView = ::javax::swing::text::TabableView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _FlowView$FlowStrategy_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FlowView$FlowStrategy, $assertionsDisabled)},
	{"damageStart", "Ljavax/swing/text/Position;", nullptr, 0, $field(FlowView$FlowStrategy, damageStart)},
	{"viewBuffer", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/View;>;", 0, $field(FlowView$FlowStrategy, viewBuffer)},
	{}
};

$MethodInfo _FlowView$FlowStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FlowView$FlowStrategy::*)()>(&FlowView$FlowStrategy::init$))},
	{"addDamage", "(Ljavax/swing/text/FlowView;I)V", nullptr, 0},
	{"adjustRow", "(Ljavax/swing/text/FlowView;III)V", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"createView", "(Ljavax/swing/text/FlowView;III)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getLogicalView", "(Ljavax/swing/text/FlowView;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"insertUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"layout", "(Ljavax/swing/text/FlowView;)V", nullptr, $PUBLIC},
	{"layoutRow", "(Ljavax/swing/text/FlowView;II)I", nullptr, $PROTECTED},
	{"removeUpdate", "(Ljavax/swing/text/FlowView;Ljavax/swing/event/DocumentEvent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"reparentViews", "(Ljavax/swing/text/View;I)V", nullptr, 0},
	{"unsetDamage", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _FlowView$FlowStrategy_InnerClassesInfo_[] = {
	{"javax.swing.text.FlowView$FlowStrategy", "javax.swing.text.FlowView", "FlowStrategy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FlowView$FlowStrategy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.FlowView$FlowStrategy",
	"java.lang.Object",
	nullptr,
	_FlowView$FlowStrategy_FieldInfo_,
	_FlowView$FlowStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_FlowView$FlowStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.FlowView"
};

$Object* allocate$FlowView$FlowStrategy($Class* clazz) {
	return $of($alloc(FlowView$FlowStrategy));
}

bool FlowView$FlowStrategy::$assertionsDisabled = false;

void FlowView$FlowStrategy::init$() {
	$set(this, damageStart, nullptr);
}

void FlowView$FlowStrategy::addDamage($FlowView* fv, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = offset >= $nc(fv)->getStartOffset();
	if (var$0 && offset < fv->getEndOffset()) {
		if (this->damageStart == nullptr || offset < $nc(this->damageStart)->getOffset()) {
			try {
				$set(this, damageStart, $nc($(fv->getDocument()))->createPosition(offset));
			} catch ($BadLocationException&) {
				$var($BadLocationException, e, $catch());
				if (!FlowView$FlowStrategy::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
			}
		}
	}
}

void FlowView$FlowStrategy::unsetDamage() {
	$set(this, damageStart, nullptr);
}

void FlowView$FlowStrategy::insertUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	if (e != nullptr) {
		addDamage(fv, e->getOffset());
	}
	if (alloc != nullptr) {
		$var($Component, host, $nc(fv)->getContainer());
		if (host != nullptr) {
			host->repaint(alloc->x, alloc->y, alloc->width, alloc->height);
		}
	} else {
		$nc(fv)->preferenceChanged(nullptr, true, true);
	}
}

void FlowView$FlowStrategy::removeUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	addDamage(fv, $nc(e)->getOffset());
	if (alloc != nullptr) {
		$var($Component, host, $nc(fv)->getContainer());
		if (host != nullptr) {
			host->repaint(alloc->x, alloc->y, alloc->width, alloc->height);
		}
	} else {
		$nc(fv)->preferenceChanged(nullptr, true, true);
	}
}

void FlowView$FlowStrategy::changedUpdate($FlowView* fv, $DocumentEvent* e, $Rectangle* alloc) {
	addDamage(fv, $nc(e)->getOffset());
	if (alloc != nullptr) {
		$var($Component, host, $nc(fv)->getContainer());
		if (host != nullptr) {
			host->repaint(alloc->x, alloc->y, alloc->width, alloc->height);
		}
	} else {
		$nc(fv)->preferenceChanged(nullptr, true, true);
	}
}

$View* FlowView$FlowStrategy::getLogicalView($FlowView* fv) {
	return $nc(fv)->layoutPool;
}

void FlowView$FlowStrategy::layout($FlowView* fv) {
	$useLocalCurrentObjectStackCache();
	$var($View, pool, getLogicalView(fv));
	int32_t rowIndex = 0;
	int32_t p0 = 0;
	int32_t p1 = $nc(fv)->getEndOffset();
	if (fv->majorAllocValid) {
		if (this->damageStart == nullptr) {
			return;
		}
		int32_t offset = $nc(this->damageStart)->getOffset();
		while ((rowIndex = fv->getViewIndexAtPosition(offset)) < 0) {
			--offset;
		}
		if (rowIndex > 0) {
			--rowIndex;
		}
		p0 = $nc($(fv->getView(rowIndex)))->getStartOffset();
	} else {
		rowIndex = 0;
		p0 = fv->getStartOffset();
	}
	reparentViews(pool, p0);
	$set(this, viewBuffer, $new($Vector, 10, 10));
	int32_t rowCount = fv->getViewCount();
	while (p0 < p1) {
		$var($View, row, nullptr);
		if (rowIndex >= rowCount) {
			$assign(row, fv->createRow());
			fv->append(row);
		} else {
			$assign(row, fv->getView(rowIndex));
		}
		p0 = layoutRow(fv, rowIndex, p0);
		++rowIndex;
	}
	$set(this, viewBuffer, nullptr);
	if (rowIndex < rowCount) {
		fv->replace(rowIndex, rowCount - rowIndex, nullptr);
	}
	unsetDamage();
}

int32_t FlowView$FlowStrategy::layoutRow($FlowView* fv, int32_t rowIndex, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($View, row, $nc(fv)->getView(rowIndex));
	float x = (float)fv->getFlowStart(rowIndex);
	float spanLeft = (float)fv->getFlowSpan(rowIndex);
	int32_t end = fv->getEndOffset();
	$var($TabExpander, te, ($instanceOf($TabExpander, fv)) ? $cast($TabExpander, fv) : ($TabExpander*)nullptr);
	int32_t flowAxis = fv->getFlowAxis();
	int32_t breakWeight = 0;
	float breakX = 0.0f;
	float breakSpan = 0.0f;
	int32_t breakIndex = -1;
	int32_t n = 0;
	$nc(this->viewBuffer)->clear();
	while (pos < end && spanLeft >= 0) {
		$var($View, v, createView(fv, pos, $cast(int32_t, spanLeft), rowIndex));
		if (v == nullptr) {
			break;
		}
		int32_t bw = $nc(v)->getBreakWeight(flowAxis, x, spanLeft);
		if (bw >= 3000) {
			$var($View, w, v->breakView(flowAxis, pos, x, spanLeft));
			if (w != nullptr) {
				$nc(this->viewBuffer)->add(w);
			} else if (n == 0) {
				$nc(this->viewBuffer)->add(v);
			}
			break;
		} else if (bw >= breakWeight && bw > 0) {
			breakWeight = bw;
			breakX = x;
			breakSpan = spanLeft;
			breakIndex = n;
		}
		float chunkSpan = 0.0;
		if (flowAxis == 0 && $instanceOf($TabableView, v)) {
			chunkSpan = $nc(($cast($TabableView, v)))->getTabbedSpan(x, te);
		} else {
			chunkSpan = v->getPreferredSpan(flowAxis);
		}
		if (chunkSpan > spanLeft && breakIndex >= 0) {
			if (breakIndex < n) {
				$assign(v, $cast($View, $nc(this->viewBuffer)->get(breakIndex)));
			}
			for (int32_t i = n - 1; i >= breakIndex; --i) {
				$nc(this->viewBuffer)->remove(i);
			}
			$assign(v, v->breakView(flowAxis, v->getStartOffset(), breakX, breakSpan));
		}
		spanLeft -= chunkSpan;
		x += chunkSpan;
		$nc(this->viewBuffer)->add(v);
		pos = v->getEndOffset();
		++n;
	}
	$var($ViewArray, views, $new($ViewArray, $nc(this->viewBuffer)->size()));
	$nc(this->viewBuffer)->toArray(views);
	$nc(row)->replace(0, row->getViewCount(), views);
	return (views->length > 0 ? row->getEndOffset() : pos);
}

void FlowView$FlowStrategy::adjustRow($FlowView* fv, int32_t rowIndex, int32_t desiredSpan, int32_t x) {
	$useLocalCurrentObjectStackCache();
	int32_t flowAxis = $nc(fv)->getFlowAxis();
	$var($View, r, fv->getView(rowIndex));
	int32_t n = $nc(r)->getViewCount();
	int32_t span = 0;
	int32_t bestWeight = 0;
	int32_t bestSpan = 0;
	int32_t bestIndex = -1;
	$var($View, v, nullptr);
	for (int32_t i = 0; i < n; ++i) {
		$assign(v, r->getView(i));
		int32_t spanLeft = desiredSpan - span;
		int32_t w = $nc(v)->getBreakWeight(flowAxis, (float)(x + span), (float)spanLeft);
		if ((w >= bestWeight) && (w > 0)) {
			bestWeight = w;
			bestIndex = i;
			bestSpan = span;
			if (w >= 3000) {
				break;
			}
		}
		span += v->getPreferredSpan(flowAxis);
	}
	if (bestIndex < 0) {
		return;
	}
	int32_t spanLeft = desiredSpan - bestSpan;
	$assign(v, r->getView(bestIndex));
	$assign(v, $nc(v)->breakView(flowAxis, v->getStartOffset(), (float)(x + bestSpan), (float)spanLeft));
	$var($ViewArray, va, $new($ViewArray, 1));
	va->set(0, v);
	$var($View, lv, getLogicalView(fv));
	int32_t p0 = $nc($(r->getView(bestIndex)))->getStartOffset();
	int32_t p1 = r->getEndOffset();
	for (int32_t i = 0; i < $nc(lv)->getViewCount(); ++i) {
		$var($View, tmpView, lv->getView(i));
		if ($nc(tmpView)->getEndOffset() > p1) {
			break;
		}
		if ($nc(tmpView)->getStartOffset() >= p0) {
			tmpView->setParent(lv);
		}
	}
	r->replace(bestIndex, n - bestIndex, va);
}

void FlowView$FlowStrategy::reparentViews($View* pool, int32_t startPos) {
	$useLocalCurrentObjectStackCache();
	$init($Position$Bias);
	int32_t n = $nc(pool)->getViewIndex(startPos, $Position$Bias::Forward);
	if (n >= 0) {
		for (int32_t i = n; i < pool->getViewCount(); ++i) {
			$nc($(pool->getView(i)))->setParent(pool);
		}
	}
}

$View* FlowView$FlowStrategy::createView($FlowView* fv, int32_t startOffset, int32_t spanLeft, int32_t rowIndex) {
	$useLocalCurrentObjectStackCache();
	$var($View, lv, getLogicalView(fv));
	$init($Position$Bias);
	int32_t childIndex = $nc(lv)->getViewIndex(startOffset, $Position$Bias::Forward);
	$var($View, v, lv->getView(childIndex));
	if (startOffset == $nc(v)->getStartOffset()) {
		return v;
	}
	$assign(v, $nc(v)->createFragment(startOffset, v->getEndOffset()));
	return v;
}

void clinit$FlowView$FlowStrategy($Class* class$) {
	$load($FlowView);
	FlowView$FlowStrategy::$assertionsDisabled = !$FlowView::class$->desiredAssertionStatus();
}

FlowView$FlowStrategy::FlowView$FlowStrategy() {
}

$Class* FlowView$FlowStrategy::load$($String* name, bool initialize) {
	$loadClass(FlowView$FlowStrategy, name, initialize, &_FlowView$FlowStrategy_ClassInfo_, clinit$FlowView$FlowStrategy, allocate$FlowView$FlowStrategy);
	return class$;
}

$Class* FlowView$FlowStrategy::class$ = nullptr;

		} // text
	} // swing
} // javax