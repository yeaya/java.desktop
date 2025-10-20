#include <javax/swing/tree/DefaultTreeCellEditor$EditorContainer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultTreeCellEditor$EditorContainer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTreeCellEditor$EditorContainer, this$0)},
	{}
};

$MethodInfo _DefaultTreeCellEditor$EditorContainer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultTreeCellEditor;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellEditor$EditorContainer::*)($DefaultTreeCellEditor*)>(&DefaultTreeCellEditor$EditorContainer::init$))},
	{"EditorContainer", "()V", nullptr, $PUBLIC},
	{"calculateIconY", "(Ljavax/swing/Icon;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultTreeCellEditor$EditorContainer::*)($Icon*)>(&DefaultTreeCellEditor$EditorContainer::calculateIconY))},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultTreeCellEditor$EditorContainer_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultTreeCellEditor$EditorContainer", "javax.swing.tree.DefaultTreeCellEditor", "EditorContainer", $PUBLIC},
	{}
};

$ClassInfo _DefaultTreeCellEditor$EditorContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeCellEditor$EditorContainer",
	"java.awt.Container",
	nullptr,
	_DefaultTreeCellEditor$EditorContainer_FieldInfo_,
	_DefaultTreeCellEditor$EditorContainer_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTreeCellEditor$EditorContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultTreeCellEditor"
};

$Object* allocate$DefaultTreeCellEditor$EditorContainer($Class* clazz) {
	return $of($alloc(DefaultTreeCellEditor$EditorContainer));
}

void DefaultTreeCellEditor$EditorContainer::init$($DefaultTreeCellEditor* this$0) {
	$set(this, this$0, this$0);
	$Container::init$();
	setLayout(nullptr);
}

void DefaultTreeCellEditor$EditorContainer::EditorContainer() {
	setLayout(nullptr);
}

void DefaultTreeCellEditor$EditorContainer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t width = getWidth();
	int32_t height = getHeight();
	if (this->this$0->editingIcon != nullptr) {
		int32_t yLoc = calculateIconY(this->this$0->editingIcon);
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			$nc(this->this$0->editingIcon)->paintIcon(this, g, 0, yLoc);
		} else {
			$nc(this->this$0->editingIcon)->paintIcon(this, g, width - $nc(this->this$0->editingIcon)->getIconWidth(), yLoc);
		}
	}
	$var($Color, background, this->this$0->getBorderSelectionColor());
	if (background != nullptr) {
		$nc(g)->setColor(background);
		g->drawRect(0, 0, width - 1, height - 1);
	}
	$Container::paint(g);
}

void DefaultTreeCellEditor$EditorContainer::doLayout() {
	if (this->this$0->editingComponent != nullptr) {
		int32_t width = getWidth();
		int32_t height = getHeight();
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			$nc(this->this$0->editingComponent)->setBounds(this->this$0->offset, 0, width - this->this$0->offset, height);
		} else {
			$nc(this->this$0->editingComponent)->setBounds(0, 0, width - this->this$0->offset, height);
		}
	}
}

int32_t DefaultTreeCellEditor$EditorContainer::calculateIconY($Icon* icon) {
	$useLocalCurrentObjectStackCache();
	int32_t iconHeight = $nc(icon)->getIconHeight();
	int32_t textHeight = $nc($($nc(this->this$0->editingComponent)->getFontMetrics($($nc(this->this$0->editingComponent)->getFont()))))->getHeight();
	int32_t textY = iconHeight / 2 - textHeight / 2;
	int32_t totalY = $Math::min(0, textY);
	int32_t totalHeight = $Math::max(iconHeight, textY + textHeight) - totalY;
	return getHeight() / 2 - (totalY + (totalHeight / 2));
}

$Dimension* DefaultTreeCellEditor$EditorContainer::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->editingComponent != nullptr) {
		$var($Dimension, pSize, $nc(this->this$0->editingComponent)->getPreferredSize());
		$nc(pSize)->width += this->this$0->offset + 5;
		$var($Dimension, rSize, (this->this$0->renderer != nullptr) ? $nc(this->this$0->renderer)->getPreferredSize() : ($Dimension*)nullptr);
		if (rSize != nullptr) {
			pSize->height = $Math::max(pSize->height, rSize->height);
		}
		if (this->this$0->editingIcon != nullptr) {
			pSize->height = $Math::max(pSize->height, $nc(this->this$0->editingIcon)->getIconHeight());
		}
		pSize->width = $Math::max(pSize->width, 100);
		return pSize;
	}
	return $new($Dimension, 0, 0);
}

DefaultTreeCellEditor$EditorContainer::DefaultTreeCellEditor$EditorContainer() {
}

$Class* DefaultTreeCellEditor$EditorContainer::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellEditor$EditorContainer, name, initialize, &_DefaultTreeCellEditor$EditorContainer_ClassInfo_, allocate$DefaultTreeCellEditor$EditorContainer);
	return class$;
}

$Class* DefaultTreeCellEditor$EditorContainer::class$ = nullptr;

		} // tree
	} // swing
} // javax