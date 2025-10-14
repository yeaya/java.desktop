#include <bug8003830.h>

#include <bug8003830$NullReturningTreeUI.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI$TreePageAction.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $bug8003830$NullReturningTreeUI = ::bug8003830$NullReturningTreeUI;
using $EventQueue = ::java::awt::EventQueue;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTree = ::javax::swing::JTree;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$TreePageAction = ::javax::swing::plaf::basic::BasicTreeUI$TreePageAction;

$MethodInfo _bug8003830_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8003830::*)()>(&bug8003830::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8003830::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"testNPEAtActionsPage", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8003830_InnerClassesInfo_[] = {
	{"bug8003830$NullReturningTreeUI", "bug8003830", "NullReturningTreeUI", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _bug8003830_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8003830",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8003830_MethodInfo_,
	nullptr,
	nullptr,
	_bug8003830_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8003830$NullReturningTreeUI"
};

$Object* allocate$bug8003830($Class* clazz) {
	return $of($alloc(bug8003830));
}

void bug8003830::init$() {
}

void bug8003830::main($StringArray* args) {
	$init(bug8003830);
	$EventQueue::invokeAndWait($$new(bug8003830));
}

void bug8003830::run() {
	testNPEAtActionsPage();
}

void bug8003830::testNPEAtActionsPage() {
	$var($JTree, tree, $new($JTree));
	$var($BasicTreeUI, ui, $new($bug8003830$NullReturningTreeUI));
	tree->setUI(static_cast<$TreeUI*>(ui));
	$var($BasicTreeUI$TreePageAction, tpa, $new($BasicTreeUI$TreePageAction, static_cast<$BasicTreeUI*>(ui), 0, "down"_s));
	tpa->actionPerformed($$new($ActionEvent, tree, 0, ""_s));
}

bug8003830::bug8003830() {
}

$Class* bug8003830::load$($String* name, bool initialize) {
	$loadClass(bug8003830, name, initialize, &_bug8003830_ClassInfo_, allocate$bug8003830);
	return class$;
}

$Class* bug8003830::class$ = nullptr;