#include <javax/swing/JTree$TreeModelHandler.h>

#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $JTree = ::javax::swing::JTree;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _JTree$TreeModelHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$TreeModelHandler, this$0)},
	{}
};

$MethodInfo _JTree$TreeModelHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTree;)V", nullptr, $PROTECTED, $method(static_cast<void(JTree$TreeModelHandler::*)($JTree*)>(&JTree$TreeModelHandler::init$))},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$TreeModelHandler_InnerClassesInfo_[] = {
	{"javax.swing.JTree$TreeModelHandler", "javax.swing.JTree", "TreeModelHandler", $PROTECTED},
	{}
};

$ClassInfo _JTree$TreeModelHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$TreeModelHandler",
	"java.lang.Object",
	"javax.swing.event.TreeModelListener",
	_JTree$TreeModelHandler_FieldInfo_,
	_JTree$TreeModelHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$TreeModelHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$TreeModelHandler($Class* clazz) {
	return $of($alloc(JTree$TreeModelHandler));
}

void JTree$TreeModelHandler::init$($JTree* this$0) {
	$set(this, this$0, this$0);
}

void JTree$TreeModelHandler::treeNodesChanged($TreeModelEvent* e) {
}

void JTree$TreeModelHandler::treeNodesInserted($TreeModelEvent* e) {
}

void JTree$TreeModelHandler::treeStructureChanged($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		return;
	}
	$var($TreePath, parent, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
	if (parent == nullptr) {
		return;
	}
	if ($nc(parent)->getPathCount() == 1) {
		this->this$0->clearToggledPaths();
		$var($Object, treeRoot, $nc(this->this$0->treeModel)->getRoot());
		if (treeRoot != nullptr && !$nc(this->this$0->treeModel)->isLeaf(treeRoot)) {
			$init($Boolean);
			$nc(this->this$0->expandedState)->put(parent, $Boolean::TRUE);
		}
	} else if ($nc(this->this$0->expandedState)->get(parent) != nullptr) {
		$var($Vector, toRemove, $new($Vector, 1));
		bool isExpanded = this->this$0->isExpanded(parent);
		toRemove->addElement(parent);
		this->this$0->removeDescendantToggledPaths($(toRemove->elements()));
		if (isExpanded) {
			$var($TreeModel, model, this->this$0->getModel());
			if (model == nullptr || $nc(model)->isLeaf($(parent->getLastPathComponent()))) {
				this->this$0->collapsePath(parent);
			} else {
				$init($Boolean);
				$nc(this->this$0->expandedState)->put(parent, $Boolean::TRUE);
			}
		}
	}
	this->this$0->removeDescendantSelectedPaths(parent, false);
}

void JTree$TreeModelHandler::treeNodesRemoved($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		return;
	}
	$var($TreePath, parent, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
	$var($ObjectArray, children, $nc(e)->getChildren());
	if (children == nullptr) {
		return;
	}
	$var($TreePath, rPath, nullptr);
	$var($Vector, toRemove, $new($Vector, $Math::max(1, $nc(children)->length)));
	for (int32_t counter = $nc(children)->length - 1; counter >= 0; --counter) {
		$assign(rPath, $nc(parent)->pathByAddingChild(children->get(counter)));
		if ($nc(this->this$0->expandedState)->get(rPath) != nullptr) {
			toRemove->addElement(rPath);
		}
	}
	if (toRemove->size() > 0) {
		this->this$0->removeDescendantToggledPaths($(toRemove->elements()));
	}
	$var($TreeModel, model, this->this$0->getModel());
	if (model == nullptr || $nc(model)->isLeaf($($nc(parent)->getLastPathComponent()))) {
		$nc(this->this$0->expandedState)->remove(parent);
	}
	this->this$0->removeDescendantSelectedPaths(e);
}

JTree$TreeModelHandler::JTree$TreeModelHandler() {
}

$Class* JTree$TreeModelHandler::load$($String* name, bool initialize) {
	$loadClass(JTree$TreeModelHandler, name, initialize, &_JTree$TreeModelHandler_ClassInfo_, allocate$JTree$TreeModelHandler);
	return class$;
}

$Class* JTree$TreeModelHandler::class$ = nullptr;

	} // swing
} // javax