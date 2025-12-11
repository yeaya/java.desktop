#include <javax/swing/plaf/metal/MetalBorders$ToolBarBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$ToolBarBorder_FieldInfo_[] = {
	{"bumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, $PRIVATE, $field(MetalBorders$ToolBarBorder, bumps)},
	{}
};

$MethodInfo _MetalBorders$ToolBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$ToolBarBorder::*)()>(&MetalBorders$ToolBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$ToolBarBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$ToolBarBorder", "javax.swing.plaf.metal.MetalBorders", "ToolBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$ToolBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$ToolBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource,javax.swing.SwingConstants",
	_MetalBorders$ToolBarBorder_FieldInfo_,
	_MetalBorders$ToolBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$ToolBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$ToolBarBorder($Class* clazz) {
	return $of($alloc(MetalBorders$ToolBarBorder));
}

int32_t MetalBorders$ToolBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$ToolBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$ToolBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$ToolBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$ToolBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$ToolBarBorder::init$() {
	$useLocalCurrentObjectStackCache();
	$AbstractBorder::init$();
	$var($Color, var$0, static_cast<$Color*>($MetalLookAndFeel::getControlHighlight()));
	$var($Color, var$1, static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow()));
	$set(this, bumps, $new($MetalBumps, 10, 10, var$0, var$1, $($UIManager::getColor("ToolBar.background"_s))));
}

void MetalBorders$ToolBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JToolBar, c))) {
		return;
	}
	$nc(g)->translate(x, y);
	if ($nc(($cast($JToolBar, c)))->isFloatable()) {
		if (($cast($JToolBar, c))->getOrientation() == $SwingConstants::HORIZONTAL) {
			int32_t shift = $MetalLookAndFeel::usingOcean() ? -1 : 0;
			$nc(this->bumps)->setBumpArea(10, h - 4);
			if ($MetalUtils::isLeftToRight(c)) {
				$nc(this->bumps)->paintIcon(c, g, 2, 2 + shift);
			} else {
				$nc(this->bumps)->paintIcon(c, g, w - 12, 2 + shift);
			}
		} else {
			$nc(this->bumps)->setBumpArea(w - 4, 10);
			$nc(this->bumps)->paintIcon(c, g, 2, 2);
		}
	}
	bool var$0 = $nc(($cast($JToolBar, c)))->getOrientation() == $SwingConstants::HORIZONTAL;
	if (var$0 && $MetalLookAndFeel::usingOcean()) {
		g->setColor($($MetalLookAndFeel::getControl()));
		g->drawLine(0, h - 2, w, h - 2);
		g->setColor($($UIManager::getColor("ToolBar.borderColor"_s)));
		g->drawLine(0, h - 1, w, h - 1);
	}
	g->translate(-x, -y);
}

$Insets* MetalBorders$ToolBarBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$useLocalCurrentObjectStackCache();
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(newInsets)->set(1, 2, 3, 2);
	} else {
		$nc(newInsets)->top = (newInsets->left = (newInsets->bottom = (newInsets->right = 2)));
	}
	if (!($instanceOf($JToolBar, c))) {
		return newInsets;
	}
	if ($nc(($cast($JToolBar, c)))->isFloatable()) {
		if (($cast($JToolBar, c))->getOrientation() == $SwingConstants::HORIZONTAL) {
			if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
				$nc(newInsets)->left = 16;
			} else {
				$nc(newInsets)->right = 16;
			}
		} else {
			$nc(newInsets)->top = 16;
		}
	}
	$var($Insets, margin, $nc(($cast($JToolBar, c)))->getMargin());
	if (margin != nullptr) {
		$nc(newInsets)->left += margin->left;
		newInsets->top += margin->top;
		newInsets->right += margin->right;
		newInsets->bottom += margin->bottom;
	}
	return newInsets;
}

MetalBorders$ToolBarBorder::MetalBorders$ToolBarBorder() {
}

$Class* MetalBorders$ToolBarBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$ToolBarBorder, name, initialize, &_MetalBorders$ToolBarBorder_ClassInfo_, allocate$MetalBorders$ToolBarBorder);
	return class$;
}

$Class* MetalBorders$ToolBarBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax