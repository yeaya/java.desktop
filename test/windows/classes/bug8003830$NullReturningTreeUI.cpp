#include <bug8003830$NullReturningTreeUI.h>

#include <bug8003830.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $bug8003830 = ::bug8003830;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $TreePath = ::javax::swing::tree::TreePath;

$MethodInfo _bug8003830$NullReturningTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug8003830$NullReturningTreeUI::*)()>(&bug8003830$NullReturningTreeUI::init$))},
	{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8003830$NullReturningTreeUI_InnerClassesInfo_[] = {
	{"bug8003830$NullReturningTreeUI", "bug8003830", "NullReturningTreeUI", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _bug8003830$NullReturningTreeUI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"bug8003830$NullReturningTreeUI",
	"javax.swing.plaf.basic.BasicTreeUI",
	nullptr,
	nullptr,
	_bug8003830$NullReturningTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug8003830$NullReturningTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8003830"
};

$Object* allocate$bug8003830$NullReturningTreeUI($Class* clazz) {
	return $of($alloc(bug8003830$NullReturningTreeUI));
}

void bug8003830$NullReturningTreeUI::init$() {
	$BasicTreeUI::init$();
}

$Rectangle* bug8003830$NullReturningTreeUI::getPathBounds($JTree* tree, $TreePath* path) {
	return nullptr;
}

bug8003830$NullReturningTreeUI::bug8003830$NullReturningTreeUI() {
}

$Class* bug8003830$NullReturningTreeUI::load$($String* name, bool initialize) {
	$loadClass(bug8003830$NullReturningTreeUI, name, initialize, &_bug8003830$NullReturningTreeUI_ClassInfo_, allocate$bug8003830$NullReturningTreeUI);
	return class$;
}

$Class* bug8003830$NullReturningTreeUI::class$ = nullptr;