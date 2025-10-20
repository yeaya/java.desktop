#include <JListWithScroll.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Autoscroll = ::java::awt::dnd::Autoscroll;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JViewport = ::javax::swing::JViewport;

$FieldInfo _JListWithScroll_FieldInfo_[] = {
	{"scrollInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JListWithScroll, scrollInsets)},
	{}
};

$MethodInfo _JListWithScroll_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(static_cast<void(JListWithScroll::*)($ObjectArray*)>(&JListWithScroll::init$))},
	{"autoscroll", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"getAutoscrollInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getViewport", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JListWithScroll_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JListWithScroll",
	"javax.swing.JList",
	"java.awt.dnd.Autoscroll",
	_JListWithScroll_FieldInfo_,
	_JListWithScroll_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/JList<TE;>;Ljava/awt/dnd/Autoscroll;"
};

$Object* allocate$JListWithScroll($Class* clazz) {
	return $of($alloc(JListWithScroll));
}

$String* JListWithScroll::toString() {
	 return this->$JList::toString();
}

int32_t JListWithScroll::hashCode() {
	 return this->$JList::hashCode();
}

bool JListWithScroll::equals(Object$* arg0) {
	 return this->$JList::equals(arg0);
}

$Object* JListWithScroll::clone() {
	 return this->$JList::clone();
}

void JListWithScroll::finalize() {
	this->$JList::finalize();
}

void JListWithScroll::init$($ObjectArray* listData) {
	$JList::init$(listData);
	$set(this, scrollInsets, $new($Insets, 50, 50, 50, 50));
}

$Insets* JListWithScroll::getAutoscrollInsets() {
	return this->scrollInsets;
}

void JListWithScroll::autoscroll($Point* cursorLoc) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, viewport, getViewport());
	if (viewport == nullptr) {
		return;
	}
	$var($Point, viewPos, $nc(viewport)->getViewPosition());
	int32_t viewHeight = $nc($(viewport->getExtentSize()))->height;
	int32_t viewWidth = $nc($(viewport->getExtentSize()))->width;
	if (($nc(cursorLoc)->y - $nc(viewPos)->y) < $nc(this->scrollInsets)->top) {
		viewport->setViewPosition($$new($Point, viewPos->x, $Math::max(viewPos->y - $nc(this->scrollInsets)->top, 0)));
	} else if (((viewPos->y + viewHeight) - cursorLoc->y) < $nc(this->scrollInsets)->bottom) {
		viewport->setViewPosition($$new($Point, viewPos->x, $Math::min(viewPos->y + $nc(this->scrollInsets)->bottom, this->getHeight() - viewHeight)));
	} else if ((cursorLoc->x - viewPos->x) < $nc(this->scrollInsets)->left) {
		viewport->setViewPosition($$new($Point, $Math::max(viewPos->x - $nc(this->scrollInsets)->left, 0), viewPos->y));
	} else if (((viewPos->x + viewWidth) - cursorLoc->x) < $nc(this->scrollInsets)->right) {
		viewport->setViewPosition($$new($Point, $Math::min(viewPos->x + $nc(this->scrollInsets)->right, this->getWidth() - viewWidth), viewPos->y));
	}
}

$JViewport* JListWithScroll::getViewport() {
	$var($Component, curComp, this);
	while (!($instanceOf($JViewport, curComp)) && (curComp != nullptr)) {
		$assign(curComp, curComp->getParent());
	}
	if ($instanceOf($JViewport, curComp)) {
		return $cast($JViewport, curComp);
	} else {
		return nullptr;
	}
}

JListWithScroll::JListWithScroll() {
}

$Class* JListWithScroll::load$($String* name, bool initialize) {
	$loadClass(JListWithScroll, name, initialize, &_JListWithScroll_ClassInfo_, allocate$JListWithScroll);
	return class$;
}

$Class* JListWithScroll::class$ = nullptr;