#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicVerticalLayoutManager.h>

#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $BasicSplitPaneUI$BasicHorizontalLayoutManager = ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$BasicVerticalLayoutManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$BasicVerticalLayoutManager, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$BasicVerticalLayoutManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI$BasicVerticalLayoutManager::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$BasicVerticalLayoutManager::init$))},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$BasicVerticalLayoutManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicVerticalLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicHorizontalLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$BasicVerticalLayoutManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager",
	"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager",
	nullptr,
	_BasicSplitPaneUI$BasicVerticalLayoutManager_FieldInfo_,
	_BasicSplitPaneUI$BasicVerticalLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$BasicVerticalLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$BasicVerticalLayoutManager($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$BasicVerticalLayoutManager));
}

void BasicSplitPaneUI$BasicVerticalLayoutManager::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSplitPaneUI$BasicHorizontalLayoutManager::init$(this$0, 1);
}

BasicSplitPaneUI$BasicVerticalLayoutManager::BasicSplitPaneUI$BasicVerticalLayoutManager() {
}

$Class* BasicSplitPaneUI$BasicVerticalLayoutManager::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$BasicVerticalLayoutManager, name, initialize, &_BasicSplitPaneUI$BasicVerticalLayoutManager_ClassInfo_, allocate$BasicSplitPaneUI$BasicVerticalLayoutManager);
	return class$;
}

$Class* BasicSplitPaneUI$BasicVerticalLayoutManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax