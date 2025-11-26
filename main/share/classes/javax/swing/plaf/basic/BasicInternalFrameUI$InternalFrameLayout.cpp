#include <javax/swing/plaf/basic/BasicInternalFrameUI$InternalFrameLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $BasicInternalFrameUI$Handler = ::javax::swing::plaf::basic::BasicInternalFrameUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameUI$InternalFrameLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$InternalFrameLayout, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameUI$InternalFrameLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameUI$InternalFrameLayout::*)($BasicInternalFrameUI*)>(&BasicInternalFrameUI$InternalFrameLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameUI$InternalFrameLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFrameLayout", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameUI$InternalFrameLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicInternalFrameUI$InternalFrameLayout_FieldInfo_,
	_BasicInternalFrameUI$InternalFrameLayout_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI$InternalFrameLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$InternalFrameLayout($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$InternalFrameLayout));
}

void BasicInternalFrameUI$InternalFrameLayout::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$InternalFrameLayout::addLayoutComponent($String* name, $Component* c) {
	$nc($(this->this$0->getHandler()))->addLayoutComponent(name, c);
}

void BasicInternalFrameUI$InternalFrameLayout::removeLayoutComponent($Component* c) {
	$nc($(this->this$0->getHandler()))->removeLayoutComponent(c);
}

$Dimension* BasicInternalFrameUI$InternalFrameLayout::preferredLayoutSize($Container* c) {
	return $nc($(this->this$0->getHandler()))->preferredLayoutSize(c);
}

$Dimension* BasicInternalFrameUI$InternalFrameLayout::minimumLayoutSize($Container* c) {
	return $nc($(this->this$0->getHandler()))->minimumLayoutSize(c);
}

void BasicInternalFrameUI$InternalFrameLayout::layoutContainer($Container* c) {
	$nc($(this->this$0->getHandler()))->layoutContainer(c);
}

BasicInternalFrameUI$InternalFrameLayout::BasicInternalFrameUI$InternalFrameLayout() {
}

$Class* BasicInternalFrameUI$InternalFrameLayout::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$InternalFrameLayout, name, initialize, &_BasicInternalFrameUI$InternalFrameLayout_ClassInfo_, allocate$BasicInternalFrameUI$InternalFrameLayout);
	return class$;
}

$Class* BasicInternalFrameUI$InternalFrameLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax