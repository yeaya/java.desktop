#include <TabProb$FixLayout.h>

#include <TabProb.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <jcpp.h>

#undef C

using $TabProb = ::TabProb;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TabProb$FixLayout_FieldInfo_[] = {
	{"this$0", "LTabProb;", nullptr, $FINAL | $SYNTHETIC, $field(TabProb$FixLayout, this$0)},
	{}
};

$MethodInfo _TabProb$FixLayout_MethodInfo_[] = {
	{"<init>", "(LTabProb;)V", nullptr, 0, $method(static_cast<void(TabProb$FixLayout::*)($TabProb*)>(&TabProb$FixLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TabProb$FixLayout_InnerClassesInfo_[] = {
	{"TabProb$FixLayout", "TabProb", "FixLayout", 0},
	{}
};

$ClassInfo _TabProb$FixLayout_ClassInfo_ = {
	$ACC_SUPER,
	"TabProb$FixLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_TabProb$FixLayout_FieldInfo_,
	_TabProb$FixLayout_MethodInfo_,
	nullptr,
	nullptr,
	_TabProb$FixLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TabProb"
};

$Object* allocate$TabProb$FixLayout($Class* clazz) {
	return $of($alloc(TabProb$FixLayout));
}

void TabProb$FixLayout::init$($TabProb* this$0) {
	$set(this, this$0, this$0);
}

void TabProb$FixLayout::layoutContainer($Container* C) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, in, $nc(C)->getInsets());
	int32_t w = 200 - $nc(in)->left - in->right;
	int32_t h = 100 - in->top - in->bottom;
	$nc($nc($(C->getComponents()))->get(0))->setBounds(in->top, in->left, w, h);
}

$Dimension* TabProb$FixLayout::minimumLayoutSize($Container* C) {
	return $new($Dimension, 200, 100);
}

$Dimension* TabProb$FixLayout::preferredLayoutSize($Container* C) {
	return $new($Dimension, 200, 100);
}

void TabProb$FixLayout::removeLayoutComponent($Component* c) {
}

void TabProb$FixLayout::addLayoutComponent($String* s, $Component* c) {
}

TabProb$FixLayout::TabProb$FixLayout() {
}

$Class* TabProb$FixLayout::load$($String* name, bool initialize) {
	$loadClass(TabProb$FixLayout, name, initialize, &_TabProb$FixLayout_ClassInfo_, allocate$TabProb$FixLayout);
	return class$;
}

$Class* TabProb$FixLayout::class$ = nullptr;