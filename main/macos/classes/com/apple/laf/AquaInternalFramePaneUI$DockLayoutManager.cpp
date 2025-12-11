#include <com/apple/laf/AquaInternalFramePaneUI$DockLayoutManager.h>

#include <com/apple/laf/AquaInternalFramePaneUI$Dock.h>
#include <com/apple/laf/AquaInternalFramePaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $AquaInternalFramePaneUI = ::com::apple::laf::AquaInternalFramePaneUI;
using $AquaInternalFramePaneUI$Dock = ::com::apple::laf::AquaInternalFramePaneUI$Dock;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFramePaneUI$DockLayoutManager_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFramePaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFramePaneUI$DockLayoutManager, this$0)},
	{}
};

$MethodInfo _AquaInternalFramePaneUI$DockLayoutManager_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFramePaneUI;)V", nullptr, 0, $method(static_cast<void(AquaInternalFramePaneUI$DockLayoutManager::*)($AquaInternalFramePaneUI*)>(&AquaInternalFramePaneUI$DockLayoutManager::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaInternalFramePaneUI$DockLayoutManager_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager", "com.apple.laf.AquaInternalFramePaneUI", "DockLayoutManager", 0},
	{}
};

$ClassInfo _AquaInternalFramePaneUI$DockLayoutManager_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_AquaInternalFramePaneUI$DockLayoutManager_FieldInfo_,
	_AquaInternalFramePaneUI$DockLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFramePaneUI$DockLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFramePaneUI"
};

$Object* allocate$AquaInternalFramePaneUI$DockLayoutManager($Class* clazz) {
	return $of($alloc(AquaInternalFramePaneUI$DockLayoutManager));
}

void AquaInternalFramePaneUI$DockLayoutManager::init$($AquaInternalFramePaneUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFramePaneUI$DockLayoutManager::addLayoutComponent($String* name, $Component* comp) {
}

void AquaInternalFramePaneUI$DockLayoutManager::removeLayoutComponent($Component* comp) {
}

$Dimension* AquaInternalFramePaneUI$DockLayoutManager::preferredLayoutSize($Container* parent) {
	return $nc(parent)->getSize();
}

$Dimension* AquaInternalFramePaneUI$DockLayoutManager::minimumLayoutSize($Container* parent) {
	return $nc(parent)->getSize();
}

void AquaInternalFramePaneUI$DockLayoutManager::layoutContainer($Container* parent) {
	if (this->this$0->fDock != nullptr) {
		$nc(($cast($AquaInternalFramePaneUI$Dock, this->this$0->fDock)))->updateSize();
	}
}

AquaInternalFramePaneUI$DockLayoutManager::AquaInternalFramePaneUI$DockLayoutManager() {
}

$Class* AquaInternalFramePaneUI$DockLayoutManager::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFramePaneUI$DockLayoutManager, name, initialize, &_AquaInternalFramePaneUI$DockLayoutManager_ClassInfo_, allocate$AquaInternalFramePaneUI$DockLayoutManager);
	return class$;
}

$Class* AquaInternalFramePaneUI$DockLayoutManager::class$ = nullptr;

		} // laf
	} // apple
} // com