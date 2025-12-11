#include <javax/swing/plaf/basic/BasicTreeUI$NodeDimensionsHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $AbstractLayoutCache$NodeDimensions = ::javax::swing::tree::AbstractLayoutCache$NodeDimensions;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$NodeDimensionsHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$NodeDimensionsHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$NodeDimensionsHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$NodeDimensionsHandler::*)($BasicTreeUI*)>(&BasicTreeUI$NodeDimensionsHandler::init$))},
	{"getNodeDimensions", "(Ljava/lang/Object;IIZLjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getRowX", "(II)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicTreeUI$NodeDimensionsHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$NodeDimensionsHandler", "javax.swing.plaf.basic.BasicTreeUI", "NodeDimensionsHandler", $PUBLIC},
	{"javax.swing.tree.AbstractLayoutCache$NodeDimensions", "javax.swing.tree.AbstractLayoutCache", "NodeDimensions", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _BasicTreeUI$NodeDimensionsHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$NodeDimensionsHandler",
	"javax.swing.tree.AbstractLayoutCache$NodeDimensions",
	nullptr,
	_BasicTreeUI$NodeDimensionsHandler_FieldInfo_,
	_BasicTreeUI$NodeDimensionsHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$NodeDimensionsHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$NodeDimensionsHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$NodeDimensionsHandler));
}

void BasicTreeUI$NodeDimensionsHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractLayoutCache$NodeDimensions::init$();
}

$Rectangle* BasicTreeUI$NodeDimensionsHandler::getNodeDimensions(Object$* value, int32_t row, int32_t depth, bool expanded, $Rectangle* size$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, size, size$renamed);
	if (this->this$0->editingComponent != nullptr && this->this$0->editingRow == row) {
		$var($Dimension, prefSize, $nc(this->this$0->editingComponent)->getPreferredSize());
		int32_t rh = this->this$0->getRowHeight();
		if (rh > 0 && rh != $nc(prefSize)->height) {
			prefSize->height = rh;
		}
		if (size != nullptr) {
			size->x = getRowX(row, depth);
			size->width = $nc(prefSize)->width;
			size->height = prefSize->height;
		} else {
			$assign(size, $new($Rectangle, getRowX(row, depth), 0, $nc(prefSize)->width, prefSize->height));
		}
		return size;
	}
	if (this->this$0->currentCellRenderer != nullptr) {
		$var($Component, aComponent, nullptr);
		$var($JTree, var$0, this->this$0->tree);
		$var($Object, var$1, value);
		bool var$2 = $nc(this->this$0->tree)->isRowSelected(row);
		bool var$3 = expanded;
		$assign(aComponent, $nc(this->this$0->currentCellRenderer)->getTreeCellRendererComponent(var$0, var$1, var$2, var$3, $nc(this->this$0->treeModel)->isLeaf(value), row, false));
		if (this->this$0->tree != nullptr) {
			$nc(this->this$0->rendererPane)->add(aComponent);
			$nc(aComponent)->validate();
		}
		$var($Dimension, prefSize, $nc(aComponent)->getPreferredSize());
		if (size != nullptr) {
			size->x = getRowX(row, depth);
			size->width = $nc(prefSize)->width;
			size->height = prefSize->height;
		} else {
			$assign(size, $new($Rectangle, getRowX(row, depth), 0, $nc(prefSize)->width, prefSize->height));
		}
		return size;
	}
	return nullptr;
}

int32_t BasicTreeUI$NodeDimensionsHandler::getRowX(int32_t row, int32_t depth) {
	return this->this$0->getRowX(row, depth);
}

BasicTreeUI$NodeDimensionsHandler::BasicTreeUI$NodeDimensionsHandler() {
}

$Class* BasicTreeUI$NodeDimensionsHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$NodeDimensionsHandler, name, initialize, &_BasicTreeUI$NodeDimensionsHandler_ClassInfo_, allocate$BasicTreeUI$NodeDimensionsHandler);
	return class$;
}

$Class* BasicTreeUI$NodeDimensionsHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax