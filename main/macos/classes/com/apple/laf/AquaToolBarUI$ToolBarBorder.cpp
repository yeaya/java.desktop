#include <com/apple/laf/AquaToolBarUI$ToolBarBorder.h>

#include <com/apple/laf/AquaToolBarUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef HORIZONTAL

using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaToolBarUI$ToolBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaToolBarUI$ToolBarBorder::*)()>(&AquaToolBarUI$ToolBarBorder::init$))},
	{"fillHandle", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaToolBarUI$ToolBarBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaToolBarUI$ToolBarBorder", "com.apple.laf.AquaToolBarUI", "ToolBarBorder", $STATIC},
	{}
};

$ClassInfo _AquaToolBarUI$ToolBarBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaToolBarUI$ToolBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource,javax.swing.SwingConstants",
	nullptr,
	_AquaToolBarUI$ToolBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaToolBarUI$ToolBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaToolBarUI"
};

$Object* allocate$AquaToolBarUI$ToolBarBorder($Class* clazz) {
	return $of($alloc(AquaToolBarUI$ToolBarBorder));
}

int32_t AquaToolBarUI$ToolBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool AquaToolBarUI$ToolBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* AquaToolBarUI$ToolBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* AquaToolBarUI$ToolBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void AquaToolBarUI$ToolBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void AquaToolBarUI$ToolBarBorder::init$() {
	$AbstractBorder::init$();
}

void AquaToolBarUI$ToolBarBorder::fillHandle($Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2, bool horizontal) {
	$nc(g)->setColor($($UIManager::getColor("ToolBar.borderHandleColor"_s)));
	if (horizontal) {
		int32_t h = y2 - y1 - 2;
		g->fillRect(x1 + 2, y1 + 1, 1, h);
		g->fillRect(x1 + 5, y1 + 1, 1, h);
	} else {
		int32_t w = x2 - x1 - 2;
		g->fillRect(x1 + 1, y1 + 2, w, 1);
		g->fillRect(x1 + 1, y1 + 5, w, 1);
	}
}

void AquaToolBarUI$ToolBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	if ($nc(c)->isOpaque()) {
		$AquaUtils::fillRect(g, c, $(c->getBackground()), 0, 0, w - 1, h - 1);
	}
	$var($Color, oldColor, g->getColor());
	$var($JToolBar, jtb, $cast($JToolBar, c));
	$var($ComponentOrientation, orient, $nc(jtb)->getComponentOrientation());
	bool horizontal = jtb->getOrientation() == $SwingConstants::HORIZONTAL;
	if (jtb->isFloatable()) {
		if (horizontal) {
			if ($nc(orient)->isLeftToRight()) {
				fillHandle(g, 2, 2, 10, h - 2, true);
			} else {
				fillHandle(g, w - 10, 2, w - 2, h - 2, true);
			}
		} else {
			fillHandle(g, 2, 2, w - 2, 10, false);
		}
	}
	g->setColor(oldColor);
	g->translate(-x, -y);
}

$Insets* AquaToolBarUI$ToolBarBorder::getBorderInsets($Component* c) {
	$var($Insets, borderInsets, $new($Insets, 5, 5, 5, 5));
	return getBorderInsets(c, borderInsets);
}

$Insets* AquaToolBarUI$ToolBarBorder::getBorderInsets($Component* c, $Insets* borderInsets) {
	$nc(borderInsets)->left = 4;
	borderInsets->right = 4;
	borderInsets->top = 2;
	borderInsets->bottom = 2;
	if ($nc(($cast($JToolBar, c)))->isFloatable()) {
		if (($cast($JToolBar, c))->getOrientation() == $SwingConstants::HORIZONTAL) {
			borderInsets->left = 12;
		} else {
			borderInsets->top = 12;
		}
	}
	$var($Insets, margin, $nc(($cast($JToolBar, c)))->getMargin());
	if (margin != nullptr) {
		borderInsets->left += margin->left;
		borderInsets->top += margin->top;
		borderInsets->right += margin->right;
		borderInsets->bottom += margin->bottom;
	}
	return borderInsets;
}

bool AquaToolBarUI$ToolBarBorder::isBorderOpaque() {
	return true;
}

AquaToolBarUI$ToolBarBorder::AquaToolBarUI$ToolBarBorder() {
}

$Class* AquaToolBarUI$ToolBarBorder::load$($String* name, bool initialize) {
	$loadClass(AquaToolBarUI$ToolBarBorder, name, initialize, &_AquaToolBarUI$ToolBarBorder_ClassInfo_, allocate$AquaToolBarUI$ToolBarBorder);
	return class$;
}

$Class* AquaToolBarUI$ToolBarBorder::class$ = nullptr;

		} // laf
	} // apple
} // com