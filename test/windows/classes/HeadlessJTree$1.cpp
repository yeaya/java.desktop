#include <HeadlessJTree$1.h>

#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $HeadlessJTree = ::HeadlessJTree;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

$MethodInfo _HeadlessJTree$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTree$1::*)()>(&HeadlessJTree$1::init$))},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadlessJTree$1_EnclosingMethodInfo_ = {
	"HeadlessJTree",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTree$1_InnerClassesInfo_[] = {
	{"HeadlessJTree$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTree$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTree$1",
	"javax.swing.tree.DefaultTreeCellRenderer",
	nullptr,
	nullptr,
	_HeadlessJTree$1_MethodInfo_,
	nullptr,
	&_HeadlessJTree$1_EnclosingMethodInfo_,
	_HeadlessJTree$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTree"
};

$Object* allocate$HeadlessJTree$1($Class* clazz) {
	return $of($alloc(HeadlessJTree$1));
}

void HeadlessJTree$1::init$() {
	$DefaultTreeCellRenderer::init$();
}

$Component* HeadlessJTree$1::getTreeCellRendererComponent($JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	return $DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, selected, expanded, leaf, row, hasFocus);
}

HeadlessJTree$1::HeadlessJTree$1() {
}

$Class* HeadlessJTree$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTree$1, name, initialize, &_HeadlessJTree$1_ClassInfo_, allocate$HeadlessJTree$1);
	return class$;
}

$Class* HeadlessJTree$1::class$ = nullptr;