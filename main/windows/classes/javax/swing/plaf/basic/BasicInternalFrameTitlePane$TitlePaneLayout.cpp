#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$Handler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$TitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$TitlePaneLayout, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$TitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$TitlePaneLayout::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$TitlePaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$TitlePaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "TitlePaneLayout", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$TitlePaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicInternalFrameTitlePane$TitlePaneLayout_FieldInfo_,
	_BasicInternalFrameTitlePane$TitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$TitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$TitlePaneLayout($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$TitlePaneLayout));
}

void BasicInternalFrameTitlePane$TitlePaneLayout::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
	$nc($(this->this$0->getHandler()))->addLayoutComponent(name, c);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::removeLayoutComponent($Component* c) {
	$nc($(this->this$0->getHandler()))->removeLayoutComponent(c);
}

$Dimension* BasicInternalFrameTitlePane$TitlePaneLayout::preferredLayoutSize($Container* c) {
	return $nc($(this->this$0->getHandler()))->preferredLayoutSize(c);
}

$Dimension* BasicInternalFrameTitlePane$TitlePaneLayout::minimumLayoutSize($Container* c) {
	return $nc($(this->this$0->getHandler()))->minimumLayoutSize(c);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::layoutContainer($Container* c) {
	$nc($(this->this$0->getHandler()))->layoutContainer(c);
}

BasicInternalFrameTitlePane$TitlePaneLayout::BasicInternalFrameTitlePane$TitlePaneLayout() {
}

$Class* BasicInternalFrameTitlePane$TitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$TitlePaneLayout, name, initialize, &_BasicInternalFrameTitlePane$TitlePaneLayout_ClassInfo_, allocate$BasicInternalFrameTitlePane$TitlePaneLayout);
	return class$;
}

$Class* BasicInternalFrameTitlePane$TitlePaneLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax