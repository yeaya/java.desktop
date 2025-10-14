#include <javax/swing/plaf/metal/MetalTreeUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/plaf/metal/MetalTreeUI$LineListener.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef HORIZ_LINE_STYLE
#undef HORIZ_STYLE_STRING
#undef LEG_LINE_STYLE
#undef LEG_LINE_STYLE_STRING
#undef LINE_STYLE
#undef NO_LINE_STYLE
#undef NO_STYLE_STRING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $MetalTreeUI$LineListener = ::javax::swing::plaf::metal::MetalTreeUI$LineListener;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTreeUI_FieldInfo_[] = {
	{"lineColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(MetalTreeUI, lineColor)},
	{"LINE_STYLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalTreeUI, LINE_STYLE)},
	{"LEG_LINE_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalTreeUI, LEG_LINE_STYLE_STRING)},
	{"HORIZ_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalTreeUI, HORIZ_STYLE_STRING)},
	{"NO_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalTreeUI, NO_STYLE_STRING)},
	{"LEG_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalTreeUI, LEG_LINE_STYLE)},
	{"HORIZ_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalTreeUI, HORIZ_LINE_STYLE)},
	{"NO_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalTreeUI, NO_LINE_STYLE)},
	{"lineStyle", "I", nullptr, $PRIVATE, $field(MetalTreeUI, lineStyle)},
	{"lineStyleListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(MetalTreeUI, lineStyleListener)},
	{}
};

$MethodInfo _MetalTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalTreeUI::*)()>(&MetalTreeUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalTreeUI::createUI))},
	{"decodeLineStyle", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getHorizontalLegBuffer", "()I", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isLocationInExpandControl", "(IIII)Z", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintHorizontalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintHorizontalSeparators", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintVerticalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTreeUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTreeUI$LineListener", "javax.swing.plaf.metal.MetalTreeUI", "LineListener", 0},
	{}
};

$ClassInfo _MetalTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalTreeUI",
	"javax.swing.plaf.basic.BasicTreeUI",
	nullptr,
	_MetalTreeUI_FieldInfo_,
	_MetalTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTreeUI$LineListener"
};

$Object* allocate$MetalTreeUI($Class* clazz) {
	return $of($alloc(MetalTreeUI));
}

$Color* MetalTreeUI::lineColor = nullptr;
$String* MetalTreeUI::LINE_STYLE = nullptr;
$String* MetalTreeUI::LEG_LINE_STYLE_STRING = nullptr;
$String* MetalTreeUI::HORIZ_STYLE_STRING = nullptr;
$String* MetalTreeUI::NO_STYLE_STRING = nullptr;

$ComponentUI* MetalTreeUI::createUI($JComponent* x) {
	$init(MetalTreeUI);
	return $new(MetalTreeUI);
}

void MetalTreeUI::init$() {
	$BasicTreeUI::init$();
	this->lineStyle = MetalTreeUI::LEG_LINE_STYLE;
	$set(this, lineStyleListener, $new($MetalTreeUI$LineListener, this));
}

int32_t MetalTreeUI::getHorizontalLegBuffer() {
	return 3;
}

void MetalTreeUI::installUI($JComponent* c) {
	$BasicTreeUI::installUI(c);
	$assignStatic(MetalTreeUI::lineColor, $UIManager::getColor("Tree.line"_s));
	$var($Object, lineStyleFlag, $nc(c)->getClientProperty(MetalTreeUI::LINE_STYLE));
	decodeLineStyle(lineStyleFlag);
	c->addPropertyChangeListener(this->lineStyleListener);
}

void MetalTreeUI::uninstallUI($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->lineStyleListener);
	$BasicTreeUI::uninstallUI(c);
}

void MetalTreeUI::decodeLineStyle(Object$* lineStyleFlag) {
	if (lineStyleFlag == nullptr || $nc($of(lineStyleFlag))->equals(MetalTreeUI::LEG_LINE_STYLE_STRING)) {
		this->lineStyle = MetalTreeUI::LEG_LINE_STYLE;
	} else if ($of(lineStyleFlag)->equals(MetalTreeUI::NO_STYLE_STRING)) {
		this->lineStyle = MetalTreeUI::NO_LINE_STYLE;
	} else if ($of(lineStyleFlag)->equals(MetalTreeUI::HORIZ_STYLE_STRING)) {
		this->lineStyle = MetalTreeUI::HORIZ_LINE_STYLE;
	}
}

bool MetalTreeUI::isLocationInExpandControl(int32_t row, int32_t rowLevel, int32_t mouseX, int32_t mouseY) {
	if (this->tree != nullptr && !isLeaf(row)) {
		int32_t boxWidth = 0;
		if (getExpandedIcon() != nullptr) {
			boxWidth = $nc($(getExpandedIcon()))->getIconWidth() + 6;
		} else {
			boxWidth = 8;
		}
		$var($Insets, i, $nc(this->tree)->getInsets());
		int32_t boxLeftX = (i != nullptr) ? $nc(i)->left : 0;
		boxLeftX += (((rowLevel + this->depthOffset - 1) * this->totalChildIndent) + getLeftChildIndent()) - boxWidth / 2;
		int32_t boxRightX = boxLeftX + boxWidth;
		return mouseX >= boxLeftX && mouseX <= boxRightX;
	}
	return false;
}

void MetalTreeUI::paint($Graphics* g, $JComponent* c) {
	$BasicTreeUI::paint(g, c);
	if (this->lineStyle == MetalTreeUI::HORIZ_LINE_STYLE && !this->largeModel) {
		paintHorizontalSeparators(g, c);
	}
}

void MetalTreeUI::paintHorizontalSeparators($Graphics* g, $JComponent* c) {
	$nc(g)->setColor(MetalTreeUI::lineColor);
	$var($Rectangle, clipBounds, g->getClipBounds());
	int32_t beginRow = getRowForPath(this->tree, $(getClosestPathForLocation(this->tree, 0, $nc(clipBounds)->y)));
	int32_t endRow = getRowForPath(this->tree, $(getClosestPathForLocation(this->tree, 0, $nc(clipBounds)->y + clipBounds->height - 1)));
	if (beginRow <= -1 || endRow <= -1) {
		return;
	}
	for (int32_t i = beginRow; i <= endRow; ++i) {
		$var($TreePath, path, getPathForRow(this->tree, i));
		if (path != nullptr && path->getPathCount() == 2) {
			$var($Rectangle, rowBounds, getPathBounds(this->tree, $(getPathForRow(this->tree, i))));
			if (rowBounds != nullptr) {
				g->drawLine($nc(clipBounds)->x, rowBounds->y, clipBounds->x + clipBounds->width, rowBounds->y);
			}
		}
	}
}

void MetalTreeUI::paintVerticalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $TreePath* path) {
	if (this->lineStyle == MetalTreeUI::LEG_LINE_STYLE) {
		$BasicTreeUI::paintVerticalPartOfLeg(g, clipBounds, insets, path);
	}
}

void MetalTreeUI::paintHorizontalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	if (this->lineStyle == MetalTreeUI::LEG_LINE_STYLE) {
		$BasicTreeUI::paintHorizontalPartOfLeg(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
	}
}

MetalTreeUI::MetalTreeUI() {
}

void clinit$MetalTreeUI($Class* class$) {
	$assignStatic(MetalTreeUI::LINE_STYLE, "JTree.lineStyle"_s);
	$assignStatic(MetalTreeUI::LEG_LINE_STYLE_STRING, "Angled"_s);
	$assignStatic(MetalTreeUI::HORIZ_STYLE_STRING, "Horizontal"_s);
	$assignStatic(MetalTreeUI::NO_STYLE_STRING, "None"_s);
}

$Class* MetalTreeUI::load$($String* name, bool initialize) {
	$loadClass(MetalTreeUI, name, initialize, &_MetalTreeUI_ClassInfo_, clinit$MetalTreeUI, allocate$MetalTreeUI);
	return class$;
}

$Class* MetalTreeUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax