#include <javax/swing/JScrollPane$ScrollBar.h>

#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/Scrollable.h>
#include <jcpp.h>

#undef TRUE
#undef VERTICAL

using $Adjustable = ::java::awt::Adjustable;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $Scrollable = ::javax::swing::Scrollable;

namespace javax {
	namespace swing {

$FieldInfo _JScrollPane$ScrollBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(JScrollPane$ScrollBar, this$0)},
	{"unitIncrementSet", "Z", nullptr, $PRIVATE, $field(JScrollPane$ScrollBar, unitIncrementSet)},
	{"blockIncrementSet", "Z", nullptr, $PRIVATE, $field(JScrollPane$ScrollBar, blockIncrementSet)},
	{}
};

$MethodInfo _JScrollPane$ScrollBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JScrollPane;I)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane$ScrollBar::*)($JScrollPane*,int32_t)>(&JScrollPane$ScrollBar::init$))},
	{"getBlockIncrement", "(I)I", nullptr, $PUBLIC},
	{"getUnitIncrement", "(I)I", nullptr, $PUBLIC},
	{"setBlockIncrement", "(I)V", nullptr, $PUBLIC},
	{"setUnitIncrement", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JScrollPane$ScrollBar_InnerClassesInfo_[] = {
	{"javax.swing.JScrollPane$ScrollBar", "javax.swing.JScrollPane", "ScrollBar", $PROTECTED},
	{}
};

$ClassInfo _JScrollPane$ScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JScrollPane$ScrollBar",
	"javax.swing.JScrollBar",
	"javax.swing.plaf.UIResource",
	_JScrollPane$ScrollBar_FieldInfo_,
	_JScrollPane$ScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollPane$ScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JScrollPane"
};

$Object* allocate$JScrollPane$ScrollBar($Class* clazz) {
	return $of($alloc(JScrollPane$ScrollBar));
}

$String* JScrollPane$ScrollBar::toString() {
	 return this->$JScrollBar::toString();
}

int32_t JScrollPane$ScrollBar::hashCode() {
	 return this->$JScrollBar::hashCode();
}

bool JScrollPane$ScrollBar::equals(Object$* arg0) {
	 return this->$JScrollBar::equals(arg0);
}

$Object* JScrollPane$ScrollBar::clone() {
	 return this->$JScrollBar::clone();
}

void JScrollPane$ScrollBar::finalize() {
	this->$JScrollBar::finalize();
}

void JScrollPane$ScrollBar::init$($JScrollPane* this$0, int32_t orientation) {
	$set(this, this$0, this$0);
	$JScrollBar::init$(orientation);
	$init($Boolean);
	this->putClientProperty("JScrollBar.fastWheelScrolling"_s, $Boolean::TRUE);
}

void JScrollPane$ScrollBar::setUnitIncrement(int32_t unitIncrement) {
	this->unitIncrementSet = true;
	this->putClientProperty("JScrollBar.fastWheelScrolling"_s, nullptr);
	$JScrollBar::setUnitIncrement(unitIncrement);
}

int32_t JScrollPane$ScrollBar::getUnitIncrement(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, vp, this->this$0->getViewport());
	if (!this->unitIncrementSet && (vp != nullptr) && ($instanceOf($Scrollable, $(vp->getView())))) {
		$var($Scrollable, view, ($cast($Scrollable, vp->getView())));
		$var($Rectangle, vr, vp->getViewRect());
		return $nc(view)->getScrollableUnitIncrement(vr, getOrientation(), direction);
	} else {
		return $JScrollBar::getUnitIncrement(direction);
	}
}

void JScrollPane$ScrollBar::setBlockIncrement(int32_t blockIncrement) {
	this->blockIncrementSet = true;
	this->putClientProperty("JScrollBar.fastWheelScrolling"_s, nullptr);
	$JScrollBar::setBlockIncrement(blockIncrement);
}

int32_t JScrollPane$ScrollBar::getBlockIncrement(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, vp, this->this$0->getViewport());
	if (this->blockIncrementSet || vp == nullptr) {
		return $JScrollBar::getBlockIncrement(direction);
	} else if ($instanceOf($Scrollable, $($nc(vp)->getView()))) {
		$var($Scrollable, view, ($cast($Scrollable, vp->getView())));
		$var($Rectangle, vr, vp->getViewRect());
		return $nc(view)->getScrollableBlockIncrement(vr, getOrientation(), direction);
	} else if (getOrientation() == $Adjustable::VERTICAL) {
		return $nc($(vp->getExtentSize()))->height;
	} else {
		return $nc($(vp->getExtentSize()))->width;
	}
}

JScrollPane$ScrollBar::JScrollPane$ScrollBar() {
}

$Class* JScrollPane$ScrollBar::load$($String* name, bool initialize) {
	$loadClass(JScrollPane$ScrollBar, name, initialize, &_JScrollPane$ScrollBar_ClassInfo_, allocate$JScrollPane$ScrollBar);
	return class$;
}

$Class* JScrollPane$ScrollBar::class$ = nullptr;

	} // swing
} // javax