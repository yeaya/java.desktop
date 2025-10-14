#include <javax/swing/text/AsyncBoxView$ChildState.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AsyncBoxView$ChildLocator.h>
#include <javax/swing/text/AsyncBoxView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;
using $AsyncBoxView$ChildLocator = ::javax::swing::text::AsyncBoxView$ChildLocator;
using $Document = ::javax::swing::text::Document;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AsyncBoxView$ChildState_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AsyncBoxView;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncBoxView$ChildState, this$0)},
	{"min", "F", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, min)},
	{"pref", "F", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, pref)},
	{"max", "F", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, max)},
	{"minorValid", "Z", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, minorValid)},
	{"span", "F", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, span)},
	{"offset", "F", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, offset)},
	{"majorValid", "Z", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, majorValid)},
	{"child", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, child)},
	{"childSizeValid", "Z", nullptr, $PRIVATE, $field(AsyncBoxView$ChildState, childSizeValid)},
	{}
};

$MethodInfo _AsyncBoxView$ChildState_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AsyncBoxView;Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $method(static_cast<void(AsyncBoxView$ChildState::*)($AsyncBoxView*,$View*)>(&AsyncBoxView$ChildState::init$))},
	{"getChildView", "()Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getMajorOffset", "()F", nullptr, $PUBLIC},
	{"getMajorSpan", "()F", nullptr, $PUBLIC},
	{"getMinorOffset", "()F", nullptr, $PUBLIC},
	{"getMinorSpan", "()F", nullptr, $PUBLIC},
	{"isLayoutValid", "()Z", nullptr, $PUBLIC},
	{"preferenceChanged", "(ZZ)V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"setMajorOffset", "(F)V", nullptr, $PUBLIC},
	{"updateChild", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _AsyncBoxView$ChildState_InnerClassesInfo_[] = {
	{"javax.swing.text.AsyncBoxView$ChildState", "javax.swing.text.AsyncBoxView", "ChildState", $PUBLIC},
	{}
};

$ClassInfo _AsyncBoxView$ChildState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AsyncBoxView$ChildState",
	"java.lang.Object",
	"java.lang.Runnable",
	_AsyncBoxView$ChildState_FieldInfo_,
	_AsyncBoxView$ChildState_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncBoxView$ChildState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AsyncBoxView"
};

$Object* allocate$AsyncBoxView$ChildState($Class* clazz) {
	return $of($alloc(AsyncBoxView$ChildState));
}

void AsyncBoxView$ChildState::init$($AsyncBoxView* this$0, $View* v) {
	$set(this, this$0, this$0);
	$set(this, child, v);
	this->minorValid = false;
	this->majorValid = false;
	this->childSizeValid = false;
	$nc(this->child)->setParent(this$0);
}

$View* AsyncBoxView$ChildState::getChildView() {
	return this->child;
}

void AsyncBoxView$ChildState::run() {
	$var($AbstractDocument, doc, $cast($AbstractDocument, this->this$0->getDocument()));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$nc(doc)->readLock();
			if (this->minorValid && this->majorValid && this->childSizeValid) {
				return$1 = true;
				goto $finally;
			}
			if ($equals($nc(this->child)->getParent(), this->this$0)) {
				$synchronized(this->this$0) {
					$set(this->this$0, changing, this);
				}
				updateChild();
				$synchronized(this->this$0) {
					$set(this->this$0, changing, nullptr);
				}
				updateChild();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(doc)->readUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void AsyncBoxView$ChildState::updateChild() {
	bool minorUpdated = false;
	$synchronized(this) {
		if (!this->minorValid) {
			int32_t minorAxis = this->this$0->getMinorAxis();
			this->min = $nc(this->child)->getMinimumSpan(minorAxis);
			this->pref = $nc(this->child)->getPreferredSpan(minorAxis);
			this->max = $nc(this->child)->getMaximumSpan(minorAxis);
			this->minorValid = true;
			minorUpdated = true;
		}
	}
	if (minorUpdated) {
		this->this$0->minorRequirementChange(this);
	}
	bool majorUpdated = false;
	float delta = 0.0f;
	$synchronized(this) {
		if (!this->majorValid) {
			float old = this->span;
			this->span = $nc(this->child)->getPreferredSpan(this->this$0->axis);
			delta = this->span - old;
			this->majorValid = true;
			majorUpdated = true;
		}
	}
	if (majorUpdated) {
		this->this$0->majorRequirementChange(this, delta);
		$nc(this->this$0->locator)->childChanged(this);
	}
	$synchronized(this) {
		if (!this->childSizeValid) {
			float w = 0.0;
			float h = 0.0;
			if (this->this$0->axis == 0) {
				w = this->span;
				h = getMinorSpan();
			} else {
				w = getMinorSpan();
				h = this->span;
			}
			this->childSizeValid = true;
			$nc(this->child)->setSize(w, h);
		}
	}
}

float AsyncBoxView$ChildState::getMinorSpan() {
	if (this->max < this->this$0->minorSpan) {
		return this->max;
	}
	return $Math::max(this->min, this->this$0->minorSpan);
}

float AsyncBoxView$ChildState::getMinorOffset() {
	if (this->max < this->this$0->minorSpan) {
		float align = $nc(this->child)->getAlignment(this->this$0->getMinorAxis());
		return ((this->this$0->minorSpan - this->max) * align);
	}
	return 0.0f;
}

float AsyncBoxView$ChildState::getMajorSpan() {
	return this->span;
}

float AsyncBoxView$ChildState::getMajorOffset() {
	return this->offset;
}

void AsyncBoxView$ChildState::setMajorOffset(float offs) {
	this->offset = offs;
}

void AsyncBoxView$ChildState::preferenceChanged(bool width, bool height) {
	if (this->this$0->axis == 0) {
		if (width) {
			this->majorValid = false;
		}
		if (height) {
			this->minorValid = false;
		}
	} else {
		if (width) {
			this->minorValid = false;
		}
		if (height) {
			this->majorValid = false;
		}
	}
	this->childSizeValid = false;
}

bool AsyncBoxView$ChildState::isLayoutValid() {
	return (this->minorValid && this->majorValid && this->childSizeValid);
}

AsyncBoxView$ChildState::AsyncBoxView$ChildState() {
}

$Class* AsyncBoxView$ChildState::load$($String* name, bool initialize) {
	$loadClass(AsyncBoxView$ChildState, name, initialize, &_AsyncBoxView$ChildState_ClassInfo_, allocate$AsyncBoxView$ChildState);
	return class$;
}

$Class* AsyncBoxView$ChildState::class$ = nullptr;

		} // text
	} // swing
} // javax