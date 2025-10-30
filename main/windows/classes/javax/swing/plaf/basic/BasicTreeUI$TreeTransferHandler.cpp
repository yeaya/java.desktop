#include <javax/swing/plaf/basic/BasicTreeUI$TreeTransferHandler.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef COPY

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$TreeTransferHandler_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE, $field(BasicTreeUI$TreeTransferHandler, tree)},
	{}
};

$MethodInfo _BasicTreeUI$TreeTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTreeUI$TreeTransferHandler::*)()>(&BasicTreeUI$TreeTransferHandler::init$))},
	{"compare", "(Ljavax/swing/tree/TreePath;Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"getDisplayOrderPaths", "([Ljavax/swing/tree/TreePath;)[Ljavax/swing/tree/TreePath;", nullptr, 0},
	{"getDisplayString", "(Ljavax/swing/tree/TreePath;ZZ)Ljava/lang/String;", nullptr, 0},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeTransferHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeTransferHandler", $STATIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource,java.util.Comparator",
	_BasicTreeUI$TreeTransferHandler_FieldInfo_,
	_BasicTreeUI$TreeTransferHandler_MethodInfo_,
	"Ljavax/swing/TransferHandler;Ljavax/swing/plaf/UIResource;Ljava/util/Comparator<Ljavax/swing/tree/TreePath;>;",
	nullptr,
	_BasicTreeUI$TreeTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeTransferHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeTransferHandler));
}

int32_t BasicTreeUI$TreeTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicTreeUI$TreeTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicTreeUI$TreeTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicTreeUI$TreeTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicTreeUI$TreeTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicTreeUI$TreeTransferHandler::init$() {
	$TransferHandler::init$();
}

$Transferable* BasicTreeUI$TreeTransferHandler::createTransferable($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTree, c)) {
		$set(this, tree, $cast($JTree, c));
		$var($TreePathArray, paths, $nc(this->tree)->getSelectionPaths());
		if (paths == nullptr || $nc(paths)->length == 0) {
			return nullptr;
		}
		$var($StringBuilder, plainStr, $new($StringBuilder));
		$var($StringBuilder, htmlStr, $new($StringBuilder));
		htmlStr->append("<html>\n<body>\n<ul>\n"_s);
		$var($TreeModel, model, $nc(this->tree)->getModel());
		$var($TreePath, lastPath, nullptr);
		$var($TreePathArray, displayPaths, getDisplayOrderPaths(paths));
		{
			$var($TreePathArray, arr$, displayPaths);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($TreePath, path, arr$->get(i$));
				{
					$var($Object, node, $nc(path)->getLastPathComponent());
					bool leaf = $nc(model)->isLeaf(node);
					$var($String, label, getDisplayString(path, true, leaf));
					plainStr->append(label)->append(u'\n');
					htmlStr->append("  <li>"_s)->append(label)->append(u'\n');
				}
			}
		}
		plainStr->deleteCharAt(plainStr->length() - 1);
		htmlStr->append("</ul>\n</body>\n</html>"_s);
		$set(this, tree, nullptr);
		$var($String, var$0, plainStr->toString());
		return $new($BasicTransferable, var$0, $(htmlStr->toString()));
	}
	return nullptr;
}

int32_t BasicTreeUI$TreeTransferHandler::compare($TreePath* o1, $TreePath* o2) {
	int32_t row1 = $nc(this->tree)->getRowForPath(o1);
	int32_t row2 = $nc(this->tree)->getRowForPath(o2);
	return row1 - row2;
}

$String* BasicTreeUI$TreeTransferHandler::getDisplayString($TreePath* path, bool selected, bool leaf) {
	int32_t row = $nc(this->tree)->getRowForPath(path);
	bool hasFocus = $nc(this->tree)->getLeadSelectionRow() == row;
	$var($Object, node, $nc(path)->getLastPathComponent());
	return $nc(this->tree)->convertValueToText(node, selected, $nc(this->tree)->isExpanded(row), leaf, row, hasFocus);
}

$TreePathArray* BasicTreeUI$TreeTransferHandler::getDisplayOrderPaths($TreePathArray* paths) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, selOrder, $new($ArrayList));
	{
		$var($TreePathArray, arr$, paths);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TreePath, path, arr$->get(i$));
			{
				selOrder->add(path);
			}
		}
	}
	$Collections::sort(selOrder, this);
	int32_t n = selOrder->size();
	$var($TreePathArray, displayPaths, $new($TreePathArray, n));
	for (int32_t i = 0; i < n; ++i) {
		displayPaths->set(i, $cast($TreePath, $(selOrder->get(i))));
	}
	return displayPaths;
}

int32_t BasicTreeUI$TreeTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY;
}

int32_t BasicTreeUI$TreeTransferHandler::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($TreePath, o1), $cast($TreePath, o2));
}

BasicTreeUI$TreeTransferHandler::BasicTreeUI$TreeTransferHandler() {
}

$Class* BasicTreeUI$TreeTransferHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeTransferHandler, name, initialize, &_BasicTreeUI$TreeTransferHandler_ClassInfo_, allocate$BasicTreeUI$TreeTransferHandler);
	return class$;
}

$Class* BasicTreeUI$TreeTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax