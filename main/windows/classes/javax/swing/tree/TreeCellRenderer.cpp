#include <javax/swing/tree/TreeCellRenderer.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _TreeCellRenderer_MethodInfo_[] = {
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeCellRenderer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeCellRenderer",
	nullptr,
	nullptr,
	nullptr,
	_TreeCellRenderer_MethodInfo_
};

$Object* allocate$TreeCellRenderer($Class* clazz) {
	return $of($alloc(TreeCellRenderer));
}

$Class* TreeCellRenderer::load$($String* name, bool initialize) {
	$loadClass(TreeCellRenderer, name, initialize, &_TreeCellRenderer_ClassInfo_, allocate$TreeCellRenderer);
	return class$;
}

$Class* TreeCellRenderer::class$ = nullptr;

		} // tree
	} // swing
} // javax