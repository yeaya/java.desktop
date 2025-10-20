#include <javax/swing/tree/FixedHeightLayoutCache$SearchInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $FixedHeightLayoutCache = ::javax::swing::tree::FixedHeightLayoutCache;
using $FixedHeightLayoutCache$FHTreeStateNode = ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _FixedHeightLayoutCache$SearchInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/FixedHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(FixedHeightLayoutCache$SearchInfo, this$0)},
	{"node", "Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, node)},
	{"isNodeParentNode", "Z", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, isNodeParentNode)},
	{"childIndex", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$SearchInfo, childIndex)},
	{}
};

$MethodInfo _FixedHeightLayoutCache$SearchInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/FixedHeightLayoutCache;)V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache$SearchInfo::*)($FixedHeightLayoutCache*)>(&FixedHeightLayoutCache$SearchInfo::init$))},
	{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _FixedHeightLayoutCache$SearchInfo_InnerClassesInfo_[] = {
	{"javax.swing.tree.FixedHeightLayoutCache$SearchInfo", "javax.swing.tree.FixedHeightLayoutCache", "SearchInfo", $PRIVATE},
	{}
};

$ClassInfo _FixedHeightLayoutCache$SearchInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.FixedHeightLayoutCache$SearchInfo",
	"java.lang.Object",
	nullptr,
	_FixedHeightLayoutCache$SearchInfo_FieldInfo_,
	_FixedHeightLayoutCache$SearchInfo_MethodInfo_,
	nullptr,
	nullptr,
	_FixedHeightLayoutCache$SearchInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.FixedHeightLayoutCache"
};

$Object* allocate$FixedHeightLayoutCache$SearchInfo($Class* clazz) {
	return $of($alloc(FixedHeightLayoutCache$SearchInfo));
}

void FixedHeightLayoutCache$SearchInfo::init$($FixedHeightLayoutCache* this$0) {
	$set(this, this$0, this$0);
}

$TreePath* FixedHeightLayoutCache$SearchInfo::getPath() {
	$useLocalCurrentObjectStackCache();
	if (this->node == nullptr) {
		return nullptr;
	}
	if (this->isNodeParentNode) {
		return $nc($($nc(this->node)->getTreePath()))->pathByAddingChild($($nc(this->this$0->treeModel)->getChild($($nc(this->node)->getUserObject()), this->childIndex)));
	}
	return $nc(this->node)->path;
}

FixedHeightLayoutCache$SearchInfo::FixedHeightLayoutCache$SearchInfo() {
}

$Class* FixedHeightLayoutCache$SearchInfo::load$($String* name, bool initialize) {
	$loadClass(FixedHeightLayoutCache$SearchInfo, name, initialize, &_FixedHeightLayoutCache$SearchInfo_ClassInfo_, allocate$FixedHeightLayoutCache$SearchInfo);
	return class$;
}

$Class* FixedHeightLayoutCache$SearchInfo::class$ = nullptr;

		} // tree
	} // swing
} // javax