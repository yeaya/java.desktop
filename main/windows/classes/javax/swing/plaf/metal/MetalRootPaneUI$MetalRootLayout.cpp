#include <javax/swing/plaf/metal/MetalRootPaneUI$MetalRootLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NONE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $MetalRootPaneUI = ::javax::swing::plaf::metal::MetalRootPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalRootPaneUI$MetalRootLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI$MetalRootLayout::*)()>(&MetalRootPaneUI$MetalRootLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalRootPaneUI$MetalRootLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalRootPaneUI$MetalRootLayout", "javax.swing.plaf.metal.MetalRootPaneUI", "MetalRootLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalRootPaneUI$MetalRootLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalRootPaneUI$MetalRootLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2",
	nullptr,
	_MetalRootPaneUI$MetalRootLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalRootPaneUI$MetalRootLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalRootPaneUI"
};

$Object* allocate$MetalRootPaneUI$MetalRootLayout($Class* clazz) {
	return $of($alloc(MetalRootPaneUI$MetalRootLayout));
}

void MetalRootPaneUI$MetalRootLayout::init$() {
}

$Dimension* MetalRootPaneUI$MetalRootLayout::preferredLayoutSize($Container* parent) {
	$var($Dimension, cpd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Dimension, tpd, nullptr);
	int32_t cpWidth = 0;
	int32_t cpHeight = 0;
	int32_t mbWidth = 0;
	int32_t mbHeight = 0;
	int32_t tpWidth = 0;
	int32_t tpHeight = 0;
	$var($Insets, i, $nc(parent)->getInsets());
	$var($JRootPane, root, $cast($JRootPane, parent));
	if (root->getContentPane() != nullptr) {
		$assign(cpd, $nc($(root->getContentPane()))->getPreferredSize());
	} else {
		$assign(cpd, root->getSize());
	}
	if (cpd != nullptr) {
		cpWidth = cpd->width;
		cpHeight = cpd->height;
	}
	if (root->getJMenuBar() != nullptr) {
		$assign(mbd, $nc($(root->getJMenuBar()))->getPreferredSize());
		if (mbd != nullptr) {
			mbWidth = mbd->width;
			mbHeight = mbd->height;
		}
	}
	bool var$0 = root->getWindowDecorationStyle() != $JRootPane::NONE;
	if (var$0 && ($instanceOf($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI()))))) {
		$var($JComponent, titlePane, $nc(($cast($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI())))))->getTitlePane());
		if (titlePane != nullptr) {
			$assign(tpd, titlePane->getPreferredSize());
			if (tpd != nullptr) {
				tpWidth = tpd->width;
				tpHeight = tpd->height;
			}
		}
	}
	return $new($Dimension, $Math::max($Math::max(cpWidth, mbWidth), tpWidth) + $nc(i)->left + i->right, cpHeight + mbHeight + tpHeight + i->top + i->bottom);
}

$Dimension* MetalRootPaneUI$MetalRootLayout::minimumLayoutSize($Container* parent) {
	$var($Dimension, cpd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Dimension, tpd, nullptr);
	int32_t cpWidth = 0;
	int32_t cpHeight = 0;
	int32_t mbWidth = 0;
	int32_t mbHeight = 0;
	int32_t tpWidth = 0;
	int32_t tpHeight = 0;
	$var($Insets, i, $nc(parent)->getInsets());
	$var($JRootPane, root, $cast($JRootPane, parent));
	if (root->getContentPane() != nullptr) {
		$assign(cpd, $nc($(root->getContentPane()))->getMinimumSize());
	} else {
		$assign(cpd, root->getSize());
	}
	if (cpd != nullptr) {
		cpWidth = cpd->width;
		cpHeight = cpd->height;
	}
	if (root->getJMenuBar() != nullptr) {
		$assign(mbd, $nc($(root->getJMenuBar()))->getMinimumSize());
		if (mbd != nullptr) {
			mbWidth = mbd->width;
			mbHeight = mbd->height;
		}
	}
	bool var$0 = root->getWindowDecorationStyle() != $JRootPane::NONE;
	if (var$0 && ($instanceOf($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI()))))) {
		$var($JComponent, titlePane, $nc(($cast($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI())))))->getTitlePane());
		if (titlePane != nullptr) {
			$assign(tpd, titlePane->getMinimumSize());
			if (tpd != nullptr) {
				tpWidth = tpd->width;
				tpHeight = tpd->height;
			}
		}
	}
	return $new($Dimension, $Math::max($Math::max(cpWidth, mbWidth), tpWidth) + $nc(i)->left + i->right, cpHeight + mbHeight + tpHeight + i->top + i->bottom);
}

$Dimension* MetalRootPaneUI$MetalRootLayout::maximumLayoutSize($Container* target) {
	$var($Dimension, cpd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Dimension, tpd, nullptr);
	int32_t cpWidth = $Integer::MAX_VALUE;
	int32_t cpHeight = $Integer::MAX_VALUE;
	int32_t mbWidth = $Integer::MAX_VALUE;
	int32_t mbHeight = $Integer::MAX_VALUE;
	int32_t tpWidth = $Integer::MAX_VALUE;
	int32_t tpHeight = $Integer::MAX_VALUE;
	$var($Insets, i, $nc(target)->getInsets());
	$var($JRootPane, root, $cast($JRootPane, target));
	if (root->getContentPane() != nullptr) {
		$assign(cpd, $nc($(root->getContentPane()))->getMaximumSize());
		if (cpd != nullptr) {
			cpWidth = cpd->width;
			cpHeight = cpd->height;
		}
	}
	if (root->getJMenuBar() != nullptr) {
		$assign(mbd, $nc($(root->getJMenuBar()))->getMaximumSize());
		if (mbd != nullptr) {
			mbWidth = mbd->width;
			mbHeight = mbd->height;
		}
	}
	bool var$0 = root->getWindowDecorationStyle() != $JRootPane::NONE;
	if (var$0 && ($instanceOf($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI()))))) {
		$var($JComponent, titlePane, $nc(($cast($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI())))))->getTitlePane());
		if (titlePane != nullptr) {
			$assign(tpd, titlePane->getMaximumSize());
			if (tpd != nullptr) {
				tpWidth = tpd->width;
				tpHeight = tpd->height;
			}
		}
	}
	int32_t maxHeight = $Math::max($Math::max(cpHeight, mbHeight), tpHeight);
	if (maxHeight != $Integer::MAX_VALUE) {
		maxHeight = cpHeight + mbHeight + tpHeight + $nc(i)->top + i->bottom;
	}
	int32_t maxWidth = $Math::max($Math::max(cpWidth, mbWidth), tpWidth);
	if (maxWidth != $Integer::MAX_VALUE) {
		maxWidth += $nc(i)->left + i->right;
	}
	return $new($Dimension, maxWidth, maxHeight);
}

void MetalRootPaneUI$MetalRootLayout::layoutContainer($Container* parent) {
	$var($JRootPane, root, $cast($JRootPane, parent));
	$var($Rectangle, b, $nc(root)->getBounds());
	$var($Insets, i, root->getInsets());
	int32_t nextY = 0;
	int32_t w = $nc(b)->width - $nc(i)->right - i->left;
	int32_t h = b->height - i->top - i->bottom;
	if (root->getLayeredPane() != nullptr) {
		$nc($(root->getLayeredPane()))->setBounds(i->left, i->top, w, h);
	}
	if (root->getGlassPane() != nullptr) {
		$nc($(root->getGlassPane()))->setBounds(i->left, i->top, w, h);
	}
	bool var$0 = root->getWindowDecorationStyle() != $JRootPane::NONE;
	if (var$0 && ($instanceOf($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI()))))) {
		$var($JComponent, titlePane, $nc(($cast($MetalRootPaneUI, $($cast($RootPaneUI, root->getUI())))))->getTitlePane());
		if (titlePane != nullptr) {
			$var($Dimension, tpd, titlePane->getPreferredSize());
			if (tpd != nullptr) {
				int32_t tpHeight = tpd->height;
				titlePane->setBounds(0, 0, w, tpHeight);
				nextY += tpHeight;
			}
		}
	}
	if (root->getJMenuBar() != nullptr) {
		$var($Dimension, mbd, $nc($(root->getJMenuBar()))->getPreferredSize());
		$nc($(root->getJMenuBar()))->setBounds(0, nextY, w, $nc(mbd)->height);
		nextY += $nc(mbd)->height;
	}
	if (root->getContentPane() != nullptr) {
		$var($Dimension, cpd, $nc($(root->getContentPane()))->getPreferredSize());
		$nc($(root->getContentPane()))->setBounds(0, nextY, w, h < nextY ? 0 : h - nextY);
	}
}

void MetalRootPaneUI$MetalRootLayout::addLayoutComponent($String* name, $Component* comp) {
}

void MetalRootPaneUI$MetalRootLayout::removeLayoutComponent($Component* comp) {
}

void MetalRootPaneUI$MetalRootLayout::addLayoutComponent($Component* comp, Object$* constraints) {
}

float MetalRootPaneUI$MetalRootLayout::getLayoutAlignmentX($Container* target) {
	return 0.0f;
}

float MetalRootPaneUI$MetalRootLayout::getLayoutAlignmentY($Container* target) {
	return 0.0f;
}

void MetalRootPaneUI$MetalRootLayout::invalidateLayout($Container* target) {
}

MetalRootPaneUI$MetalRootLayout::MetalRootPaneUI$MetalRootLayout() {
}

$Class* MetalRootPaneUI$MetalRootLayout::load$($String* name, bool initialize) {
	$loadClass(MetalRootPaneUI$MetalRootLayout, name, initialize, &_MetalRootPaneUI$MetalRootLayout_ClassInfo_, allocate$MetalRootPaneUI$MetalRootLayout);
	return class$;
}

$Class* MetalRootPaneUI$MetalRootLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax