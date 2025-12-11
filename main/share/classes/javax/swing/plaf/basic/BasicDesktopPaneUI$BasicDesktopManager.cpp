#include <javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager.h>

#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$BasicDesktopManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$BasicDesktopManager, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$BasicDesktopManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicDesktopPaneUI$BasicDesktopManager::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$BasicDesktopManager::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$BasicDesktopManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager", "javax.swing.plaf.basic.BasicDesktopPaneUI", "BasicDesktopManager", $PRIVATE},
	{}
};

$ClassInfo _BasicDesktopPaneUI$BasicDesktopManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager",
	"javax.swing.DefaultDesktopManager",
	"javax.swing.plaf.UIResource",
	_BasicDesktopPaneUI$BasicDesktopManager_FieldInfo_,
	_BasicDesktopPaneUI$BasicDesktopManager_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$BasicDesktopManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$BasicDesktopManager($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$BasicDesktopManager));
}

int32_t BasicDesktopPaneUI$BasicDesktopManager::hashCode() {
	 return this->$DefaultDesktopManager::hashCode();
}

bool BasicDesktopPaneUI$BasicDesktopManager::equals(Object$* arg0) {
	 return this->$DefaultDesktopManager::equals(arg0);
}

$Object* BasicDesktopPaneUI$BasicDesktopManager::clone() {
	 return this->$DefaultDesktopManager::clone();
}

$String* BasicDesktopPaneUI$BasicDesktopManager::toString() {
	 return this->$DefaultDesktopManager::toString();
}

void BasicDesktopPaneUI$BasicDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void BasicDesktopPaneUI$BasicDesktopManager::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultDesktopManager::init$();
}

BasicDesktopPaneUI$BasicDesktopManager::BasicDesktopPaneUI$BasicDesktopManager() {
}

$Class* BasicDesktopPaneUI$BasicDesktopManager::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$BasicDesktopManager, name, initialize, &_BasicDesktopPaneUI$BasicDesktopManager_ClassInfo_, allocate$BasicDesktopPaneUI$BasicDesktopManager);
	return class$;
}

$Class* BasicDesktopPaneUI$BasicDesktopManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax