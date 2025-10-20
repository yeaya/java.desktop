#include <javax/swing/text/AsyncBoxView$ChildLocator.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AsyncBoxView$ChildState.h>
#include <javax/swing/text/AsyncBoxView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;
using $AsyncBoxView$ChildState = ::javax::swing::text::AsyncBoxView$ChildState;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AsyncBoxView$ChildLocator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AsyncBoxView;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncBoxView$ChildLocator, this$0)},
	{"lastValidOffset", "Ljavax/swing/text/AsyncBoxView$ChildState;", nullptr, $PROTECTED, $field(AsyncBoxView$ChildLocator, lastValidOffset)},
	{"lastAlloc", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(AsyncBoxView$ChildLocator, lastAlloc)},
	{"childAlloc", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(AsyncBoxView$ChildLocator, childAlloc)},
	{}
};

$MethodInfo _AsyncBoxView$ChildLocator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AsyncBoxView;)V", nullptr, $PUBLIC, $method(static_cast<void(AsyncBoxView$ChildLocator::*)($AsyncBoxView*)>(&AsyncBoxView$ChildLocator::init$))},
	{"childChanged", "(Ljavax/swing/text/AsyncBoxView$ChildState;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getChildAllocation", "(I)Ljava/awt/Shape;", nullptr, $PROTECTED},
	{"getViewIndexAtPoint", "(FFLjava/awt/Shape;)I", nullptr, $PUBLIC},
	{"getViewIndexAtVisualOffset", "(F)I", nullptr, $PROTECTED},
	{"intersectsClip", "(Ljava/awt/Shape;Ljava/awt/Rectangle;)Z", nullptr, 0},
	{"paintChildren", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAllocation", "(Ljava/awt/Shape;)V", nullptr, $PROTECTED},
	{"updateChildOffsets", "(F)I", nullptr, 0},
	{"updateChildOffsetsToIndex", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _AsyncBoxView$ChildLocator_InnerClassesInfo_[] = {
	{"javax.swing.text.AsyncBoxView$ChildLocator", "javax.swing.text.AsyncBoxView", "ChildLocator", $PUBLIC},
	{}
};

$ClassInfo _AsyncBoxView$ChildLocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AsyncBoxView$ChildLocator",
	"java.lang.Object",
	nullptr,
	_AsyncBoxView$ChildLocator_FieldInfo_,
	_AsyncBoxView$ChildLocator_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncBoxView$ChildLocator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AsyncBoxView"
};

$Object* allocate$AsyncBoxView$ChildLocator($Class* clazz) {
	return $of($alloc(AsyncBoxView$ChildLocator));
}

void AsyncBoxView$ChildLocator::init$($AsyncBoxView* this$0) {
	$set(this, this$0, this$0);
	$set(this, lastAlloc, $new($Rectangle));
	$set(this, childAlloc, $new($Rectangle));
}

void AsyncBoxView$ChildLocator::childChanged($AsyncBoxView$ChildState* cs) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->lastValidOffset == nullptr) {
			$set(this, lastValidOffset, cs);
		} else {
			int32_t var$1 = $nc($($nc(cs)->getChildView()))->getStartOffset();
			if (var$1 < $nc($($nc(this->lastValidOffset)->getChildView()))->getStartOffset()) {
				$set(this, lastValidOffset, cs);
			}
		}
	}
}

void AsyncBoxView$ChildLocator::paintChildren($Graphics* g) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Rectangle, clip, $nc(g)->getClipBounds());
		float targetOffset = (float)((this->this$0->axis == 0) ? $nc(clip)->x - $nc(this->lastAlloc)->x : clip->y - $nc(this->lastAlloc)->y);
		int32_t index = getViewIndexAtVisualOffset(targetOffset);
		int32_t n = this->this$0->getViewCount();
		float offs = $nc($(this->this$0->getChildState(index)))->getMajorOffset();
		for (int32_t i = index; i < n; ++i) {
			$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(i));
			$nc(cs)->setMajorOffset(offs);
			$var($Shape, ca, getChildAllocation(i));
			if (intersectsClip(ca, clip)) {
				$synchronized(cs) {
					$var($View, v, cs->getChildView());
					$nc(v)->paint(g, ca);
				}
			} else {
				break;
			}
			offs += cs->getMajorSpan();
		}
	}
}

$Shape* AsyncBoxView$ChildLocator::getChildAllocation(int32_t index, $Shape* a) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (a == nullptr) {
			return nullptr;
		}
		setAllocation(a);
		$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(index));
		if (this->lastValidOffset == nullptr) {
			$set(this, lastValidOffset, this->this$0->getChildState(0));
		}
		int32_t var$0 = $nc($($nc(cs)->getChildView()))->getStartOffset();
		if (var$0 > $nc($($nc(this->lastValidOffset)->getChildView()))->getStartOffset()) {
			updateChildOffsetsToIndex(index);
		}
		$var($Shape, ca, getChildAllocation(index));
		return ca;
	}
}

int32_t AsyncBoxView$ChildLocator::getViewIndexAtPoint(float x, float y, $Shape* a) {
	setAllocation(a);
	float targetOffset = (this->this$0->axis == 0) ? x - $nc(this->lastAlloc)->x : y - $nc(this->lastAlloc)->y;
	int32_t index = getViewIndexAtVisualOffset(targetOffset);
	return index;
}

$Shape* AsyncBoxView$ChildLocator::getChildAllocation(int32_t index) {
	$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(index));
	if (!$nc(cs)->isLayoutValid()) {
		cs->run();
	}
	if (this->this$0->axis == 0) {
		$nc(this->childAlloc)->x = $nc(this->lastAlloc)->x + $cast(int32_t, $nc(cs)->getMajorOffset());
		$nc(this->childAlloc)->y = $nc(this->lastAlloc)->y + $cast(int32_t, cs->getMinorOffset());
		$nc(this->childAlloc)->width = $cast(int32_t, cs->getMajorSpan());
		$nc(this->childAlloc)->height = $cast(int32_t, cs->getMinorSpan());
	} else {
		$nc(this->childAlloc)->y = $nc(this->lastAlloc)->y + $cast(int32_t, $nc(cs)->getMajorOffset());
		$nc(this->childAlloc)->x = $nc(this->lastAlloc)->x + $cast(int32_t, cs->getMinorOffset());
		$nc(this->childAlloc)->height = $cast(int32_t, cs->getMajorSpan());
		$nc(this->childAlloc)->width = $cast(int32_t, cs->getMinorSpan());
	}
	$nc(this->childAlloc)->x += $cast(int32_t, this->this$0->getLeftInset());
	$nc(this->childAlloc)->y += $cast(int32_t, this->this$0->getRightInset());
	return this->childAlloc;
}

void AsyncBoxView$ChildLocator::setAllocation($Shape* a) {
	if ($instanceOf($Rectangle, a)) {
		$nc(this->lastAlloc)->setBounds($cast($Rectangle, a));
	} else {
		$nc(this->lastAlloc)->setBounds($($nc(a)->getBounds()));
	}
	this->this$0->setSize((float)$nc(this->lastAlloc)->width, (float)$nc(this->lastAlloc)->height);
}

int32_t AsyncBoxView$ChildLocator::getViewIndexAtVisualOffset(float targetOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t n = this->this$0->getViewCount();
	if (n > 0) {
		bool lastValid = (this->lastValidOffset != nullptr);
		if (this->lastValidOffset == nullptr) {
			$set(this, lastValidOffset, this->this$0->getChildState(0));
		}
		if (targetOffset > this->this$0->majorSpan) {
			if (!lastValid) {
				return 0;
			}
			int32_t pos = $nc($($nc(this->lastValidOffset)->getChildView()))->getStartOffset();
			$init($Position$Bias);
			int32_t index = this->this$0->getViewIndex(pos, $Position$Bias::Forward);
			return index;
		} else if (targetOffset > $nc(this->lastValidOffset)->getMajorOffset()) {
			return updateChildOffsets(targetOffset);
		} else {
			float offs = 0.0f;
			for (int32_t i = 0; i < n; ++i) {
				$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(i));
				float nextOffs = offs + $nc(cs)->getMajorSpan();
				if (targetOffset < nextOffs) {
					return i;
				}
				offs = nextOffs;
			}
		}
	}
	return n - 1;
}

int32_t AsyncBoxView$ChildLocator::updateChildOffsets(float targetOffset) {
	$useLocalCurrentObjectStackCache();
	int32_t n = this->this$0->getViewCount();
	int32_t targetIndex = n - 1;
	int32_t pos = $nc($($nc(this->lastValidOffset)->getChildView()))->getStartOffset();
	$init($Position$Bias);
	int32_t startIndex = this->this$0->getViewIndex(pos, $Position$Bias::Forward);
	float start = $nc(this->lastValidOffset)->getMajorOffset();
	float lastOffset = start;
	for (int32_t i = startIndex; i < n; ++i) {
		$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(i));
		$nc(cs)->setMajorOffset(lastOffset);
		lastOffset += cs->getMajorSpan();
		if (targetOffset < lastOffset) {
			targetIndex = i;
			$set(this, lastValidOffset, cs);
			break;
		}
	}
	return targetIndex;
}

void AsyncBoxView$ChildLocator::updateChildOffsetsToIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc($($nc(this->lastValidOffset)->getChildView()))->getStartOffset();
	$init($Position$Bias);
	int32_t startIndex = this->this$0->getViewIndex(pos, $Position$Bias::Forward);
	float lastOffset = $nc(this->lastValidOffset)->getMajorOffset();
	for (int32_t i = startIndex; i <= index; ++i) {
		$var($AsyncBoxView$ChildState, cs, this->this$0->getChildState(i));
		$nc(cs)->setMajorOffset(lastOffset);
		lastOffset += cs->getMajorSpan();
	}
}

bool AsyncBoxView$ChildLocator::intersectsClip($Shape* childAlloc, $Rectangle* clip) {
	$var($Rectangle, cs, ($instanceOf($Rectangle, childAlloc)) ? $cast($Rectangle, childAlloc) : $nc(childAlloc)->getBounds());
	if ($nc(cs)->intersects(clip)) {
		return $nc(this->lastAlloc)->intersects(cs);
	}
	return false;
}

AsyncBoxView$ChildLocator::AsyncBoxView$ChildLocator() {
}

$Class* AsyncBoxView$ChildLocator::load$($String* name, bool initialize) {
	$loadClass(AsyncBoxView$ChildLocator, name, initialize, &_AsyncBoxView$ChildLocator_ClassInfo_, allocate$AsyncBoxView$ChildLocator);
	return class$;
}

$Class* AsyncBoxView$ChildLocator::class$ = nullptr;

		} // text
	} // swing
} // javax