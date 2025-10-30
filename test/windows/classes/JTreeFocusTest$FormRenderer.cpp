#include <JTreeFocusTest$FormRenderer.h>

#include <JTreeFocusTest.h>
#include <java/awt/Component.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

$FieldInfo _JTreeFocusTest$FormRenderer_FieldInfo_[] = {
	{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$FormRenderer, this$0)},
	{}
};

$MethodInfo _JTreeFocusTest$FormRenderer_MethodInfo_[] = {
	{"<init>", "(LJTreeFocusTest;)V", nullptr, 0, $method(static_cast<void(JTreeFocusTest$FormRenderer::*)($JTreeFocusTest*)>(&JTreeFocusTest$FormRenderer::init$))},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTreeFocusTest$FormRenderer_InnerClassesInfo_[] = {
	{"JTreeFocusTest$FormRenderer", "JTreeFocusTest", "FormRenderer", 0},
	{}
};

$ClassInfo _JTreeFocusTest$FormRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"JTreeFocusTest$FormRenderer",
	"javax.swing.tree.DefaultTreeCellRenderer",
	nullptr,
	_JTreeFocusTest$FormRenderer_FieldInfo_,
	_JTreeFocusTest$FormRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTreeFocusTest$FormRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTreeFocusTest"
};

$Object* allocate$JTreeFocusTest$FormRenderer($Class* clazz) {
	return $of($alloc(JTreeFocusTest$FormRenderer));
}

void JTreeFocusTest$FormRenderer::init$($JTreeFocusTest* this$0) {
	$set(this, this$0, this$0);
	$DefaultTreeCellRenderer::init$();
}

$Component* JTreeFocusTest$FormRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	$var($Object, obj, $nc(($cast($DefaultMutableTreeNode, value)))->getUserObject());
	if ($instanceOf($Component, obj)) {
		return $cast($Component, ($cast($DefaultMutableTreeNode, value))->getUserObject());
	}
	return $DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, sel, expanded, leaf, row, hasFocus);
}

JTreeFocusTest$FormRenderer::JTreeFocusTest$FormRenderer() {
}

$Class* JTreeFocusTest$FormRenderer::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$FormRenderer, name, initialize, &_JTreeFocusTest$FormRenderer_ClassInfo_, allocate$JTreeFocusTest$FormRenderer);
	return class$;
}

$Class* JTreeFocusTest$FormRenderer::class$ = nullptr;