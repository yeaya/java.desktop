#include <javax/swing/plaf/basic/BasicBorders$SplitPaneDividerBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicBorders$SplitPaneDividerBorder_FieldInfo_[] = {
	{"highlight", "Ljava/awt/Color;", nullptr, 0, $field(BasicBorders$SplitPaneDividerBorder, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, 0, $field(BasicBorders$SplitPaneDividerBorder, shadow)},
	{}
};

$MethodInfo _BasicBorders$SplitPaneDividerBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(BasicBorders$SplitPaneDividerBorder::*)($Color*,$Color*)>(&BasicBorders$SplitPaneDividerBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$SplitPaneDividerBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$SplitPaneDividerBorder", "javax.swing.plaf.basic.BasicBorders", "SplitPaneDividerBorder", $STATIC},
	{}
};

$ClassInfo _BasicBorders$SplitPaneDividerBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$SplitPaneDividerBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_BasicBorders$SplitPaneDividerBorder_FieldInfo_,
	_BasicBorders$SplitPaneDividerBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$SplitPaneDividerBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$SplitPaneDividerBorder($Class* clazz) {
	return $of($alloc(BasicBorders$SplitPaneDividerBorder));
}

int32_t BasicBorders$SplitPaneDividerBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool BasicBorders$SplitPaneDividerBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* BasicBorders$SplitPaneDividerBorder::clone() {
	 return this->$Border::clone();
}

$String* BasicBorders$SplitPaneDividerBorder::toString() {
	 return this->$Border::toString();
}

void BasicBorders$SplitPaneDividerBorder::finalize() {
	this->$Border::finalize();
}

void BasicBorders$SplitPaneDividerBorder::init$($Color* highlight, $Color* shadow) {
	$set(this, highlight, highlight);
	$set(this, shadow, shadow);
}

void BasicBorders$SplitPaneDividerBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($BasicSplitPaneDivider, c))) {
		return;
	}
	$var($Component, child, nullptr);
	$var($Rectangle, cBounds, nullptr);
	$var($JSplitPane, splitPane, $nc($($nc(($cast($BasicSplitPaneDivider, c)))->getBasicSplitPaneUI()))->getSplitPane());
	$var($Dimension, size, $nc(c)->getSize());
	$assign(child, $nc(splitPane)->getLeftComponent());
	$nc(g)->setColor($(c->getBackground()));
	g->drawRect(x, y, width - 1, height - 1);
	if (splitPane->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		if (child != nullptr) {
			g->setColor(this->highlight);
			g->drawLine(0, 0, 0, $nc(size)->height);
		}
		$assign(child, splitPane->getRightComponent());
		if (child != nullptr) {
			g->setColor(this->shadow);
			g->drawLine($nc(size)->width - 1, 0, size->width - 1, size->height);
		}
	} else {
		if (child != nullptr) {
			g->setColor(this->highlight);
			g->drawLine(0, 0, $nc(size)->width, 0);
		}
		$assign(child, splitPane->getRightComponent());
		if (child != nullptr) {
			g->setColor(this->shadow);
			g->drawLine(0, $nc(size)->height - 1, size->width, size->height - 1);
		}
	}
}

$Insets* BasicBorders$SplitPaneDividerBorder::getBorderInsets($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $new($Insets, 0, 0, 0, 0));
	if ($instanceOf($BasicSplitPaneDivider, c)) {
		$var($BasicSplitPaneUI, bspui, $nc(($cast($BasicSplitPaneDivider, c)))->getBasicSplitPaneUI());
		if (bspui != nullptr) {
			$var($JSplitPane, splitPane, bspui->getSplitPane());
			if (splitPane != nullptr) {
				if (splitPane->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
					insets->top = (insets->bottom = 0);
					insets->left = (insets->right = 1);
					return insets;
				}
				insets->top = (insets->bottom = 1);
				insets->left = (insets->right = 0);
				return insets;
			}
		}
	}
	insets->top = (insets->bottom = (insets->left = (insets->right = 1)));
	return insets;
}

bool BasicBorders$SplitPaneDividerBorder::isBorderOpaque() {
	return true;
}

BasicBorders$SplitPaneDividerBorder::BasicBorders$SplitPaneDividerBorder() {
}

$Class* BasicBorders$SplitPaneDividerBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$SplitPaneDividerBorder, name, initialize, &_BasicBorders$SplitPaneDividerBorder_ClassInfo_, allocate$BasicBorders$SplitPaneDividerBorder);
	return class$;
}

$Class* BasicBorders$SplitPaneDividerBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax