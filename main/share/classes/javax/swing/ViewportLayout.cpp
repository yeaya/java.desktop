#include <javax/swing/ViewportLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/lang/Math.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/Scrollable.h>
#include <jcpp.h>

#undef SHARED_INSTANCE

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;
using $Scrollable = ::javax::swing::Scrollable;

namespace javax {
	namespace swing {

$FieldInfo _ViewportLayout_FieldInfo_[] = {
	{"SHARED_INSTANCE", "Ljavax/swing/ViewportLayout;", nullptr, $STATIC, $staticField(ViewportLayout, SHARED_INSTANCE)},
	{}
};

$MethodInfo _ViewportLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ViewportLayout::*)()>(&ViewportLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ViewportLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ViewportLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,java.io.Serializable",
	_ViewportLayout_FieldInfo_,
	_ViewportLayout_MethodInfo_
};

$Object* allocate$ViewportLayout($Class* clazz) {
	return $of($alloc(ViewportLayout));
}

int32_t ViewportLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool ViewportLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* ViewportLayout::clone() {
	 return this->$LayoutManager::clone();
}

$String* ViewportLayout::toString() {
	 return this->$LayoutManager::toString();
}

void ViewportLayout::finalize() {
	this->$LayoutManager::finalize();
}

ViewportLayout* ViewportLayout::SHARED_INSTANCE = nullptr;

void ViewportLayout::init$() {
}

void ViewportLayout::addLayoutComponent($String* name, $Component* c) {
}

void ViewportLayout::removeLayoutComponent($Component* c) {
}

$Dimension* ViewportLayout::preferredLayoutSize($Container* parent) {
	$var($Component, view, $nc(($cast($JViewport, parent)))->getView());
	if (view == nullptr) {
		return $new($Dimension, 0, 0);
	} else if ($instanceOf($Scrollable, view)) {
		return $nc(($cast($Scrollable, view)))->getPreferredScrollableViewportSize();
	} else {
		return $nc(view)->getPreferredSize();
	}
}

$Dimension* ViewportLayout::minimumLayoutSize($Container* parent) {
	return $new($Dimension, 4, 4);
}

void ViewportLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($JViewport, vp, $cast($JViewport, parent));
	$var($Component, view, $nc(vp)->getView());
	$var($Scrollable, scrollableView, nullptr);
	if (view == nullptr) {
		return;
	} else if ($instanceOf($Scrollable, view)) {
		$assign(scrollableView, $cast($Scrollable, view));
	}
	$var($Insets, insets, vp->getInsets());
	$var($Dimension, viewPrefSize, $nc(view)->getPreferredSize());
	$var($Dimension, vpSize, vp->getSize());
	$var($Dimension, extentSize, vp->toViewCoordinates(vpSize));
	$var($Dimension, viewSize, $new($Dimension, viewPrefSize));
	if (scrollableView != nullptr) {
		if (scrollableView->getScrollableTracksViewportWidth()) {
			viewSize->width = $nc(vpSize)->width;
		}
		if (scrollableView->getScrollableTracksViewportHeight()) {
			viewSize->height = $nc(vpSize)->height;
		}
	}
	$var($Point, viewPosition, vp->getViewPosition());
	bool var$0 = scrollableView == nullptr || vp->getParent() == nullptr;
	if (var$0 || $nc($($nc($(vp->getParent()))->getComponentOrientation()))->isLeftToRight()) {
		if (($nc(viewPosition)->x + $nc(extentSize)->width) > viewSize->width) {
			viewPosition->x = $Math::max(0, viewSize->width - extentSize->width);
		}
	} else if ($nc(extentSize)->width > viewSize->width) {
		$nc(viewPosition)->x = viewSize->width - extentSize->width;
	} else {
		$nc(viewPosition)->x = $Math::max(0, $Math::min(viewSize->width - extentSize->width, viewPosition->x));
	}
	if (($nc(viewPosition)->y + $nc(extentSize)->height) > viewSize->height) {
		viewPosition->y = $Math::max(0, viewSize->height - extentSize->height);
	}
	if (scrollableView == nullptr) {
		if (($nc(viewPosition)->x == 0) && ($nc(vpSize)->width > $nc(viewPrefSize)->width)) {
			viewSize->width = vpSize->width;
		}
		if (($nc(viewPosition)->y == 0) && ($nc(vpSize)->height > $nc(viewPrefSize)->height)) {
			viewSize->height = vpSize->height;
		}
	}
	vp->setViewPosition(viewPosition);
	vp->setViewSize(viewSize);
}

void clinit$ViewportLayout($Class* class$) {
	$assignStatic(ViewportLayout::SHARED_INSTANCE, $new(ViewportLayout));
}

ViewportLayout::ViewportLayout() {
}

$Class* ViewportLayout::load$($String* name, bool initialize) {
	$loadClass(ViewportLayout, name, initialize, &_ViewportLayout_ClassInfo_, clinit$ViewportLayout, allocate$ViewportLayout);
	return class$;
}

$Class* ViewportLayout::class$ = nullptr;

	} // swing
} // javax