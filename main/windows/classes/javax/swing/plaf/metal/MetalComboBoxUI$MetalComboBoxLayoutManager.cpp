#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager.h>

#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxUI$MetalComboBoxLayoutManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxUI$MetalComboBoxLayoutManager, this$0)},
	{}
};

$MethodInfo _MetalComboBoxUI$MetalComboBoxLayoutManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxUI$MetalComboBoxLayoutManager::*)($MetalComboBoxUI*)>(&MetalComboBoxUI$MetalComboBoxLayoutManager::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"superLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalComboBoxUI$MetalComboBoxLayoutManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboBoxLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _MetalComboBoxUI$MetalComboBoxLayoutManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager",
	"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
	nullptr,
	_MetalComboBoxUI$MetalComboBoxLayoutManager_FieldInfo_,
	_MetalComboBoxUI$MetalComboBoxLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxUI$MetalComboBoxLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxUI"
};

$Object* allocate$MetalComboBoxUI$MetalComboBoxLayoutManager($Class* clazz) {
	return $of($alloc(MetalComboBoxUI$MetalComboBoxLayoutManager));
}

void MetalComboBoxUI$MetalComboBoxLayoutManager::init$($MetalComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$(this$0);
}

void MetalComboBoxUI$MetalComboBoxLayoutManager::layoutContainer($Container* parent) {
	this->this$0->layoutComboBox(parent, this);
}

void MetalComboBoxUI$MetalComboBoxLayoutManager::superLayout($Container* parent) {
	$BasicComboBoxUI$ComboBoxLayoutManager::layoutContainer(parent);
}

MetalComboBoxUI$MetalComboBoxLayoutManager::MetalComboBoxUI$MetalComboBoxLayoutManager() {
}

$Class* MetalComboBoxUI$MetalComboBoxLayoutManager::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxUI$MetalComboBoxLayoutManager, name, initialize, &_MetalComboBoxUI$MetalComboBoxLayoutManager_ClassInfo_, allocate$MetalComboBoxUI$MetalComboBoxLayoutManager);
	return class$;
}

$Class* MetalComboBoxUI$MetalComboBoxLayoutManager::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax