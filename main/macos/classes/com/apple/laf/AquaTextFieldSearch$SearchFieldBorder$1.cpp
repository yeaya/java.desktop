#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder$1.h>

#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $AquaTextFieldSearch$SearchFieldBorder = ::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder;
using $BorderLayout = ::java::awt::BorderLayout;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$SearchFieldBorder$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextFieldSearch$SearchFieldBorder$1, this$0)},
	{}
};

$MethodInfo _AquaTextFieldSearch$SearchFieldBorder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;II)V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$SearchFieldBorder$1::*)($AquaTextFieldSearch$SearchFieldBorder*,int32_t,int32_t)>(&AquaTextFieldSearch$SearchFieldBorder$1::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaTextFieldSearch$SearchFieldBorder$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder",
	"getCustomLayout",
	"()Ljava/awt/LayoutManager;"
};

$InnerClassInfo _AquaTextFieldSearch$SearchFieldBorder$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder", "com.apple.laf.AquaTextFieldSearch", "SearchFieldBorder", $STATIC},
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$SearchFieldBorder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1",
	"java.awt.BorderLayout",
	nullptr,
	_AquaTextFieldSearch$SearchFieldBorder$1_FieldInfo_,
	_AquaTextFieldSearch$SearchFieldBorder$1_MethodInfo_,
	nullptr,
	&_AquaTextFieldSearch$SearchFieldBorder$1_EnclosingMethodInfo_,
	_AquaTextFieldSearch$SearchFieldBorder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$SearchFieldBorder$1($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$SearchFieldBorder$1));
}

void AquaTextFieldSearch$SearchFieldBorder$1::init$($AquaTextFieldSearch$SearchFieldBorder* this$0, int32_t hgap, int32_t vgap) {
	$set(this, this$0, this$0);
	$BorderLayout::init$(hgap, vgap);
}

void AquaTextFieldSearch$SearchFieldBorder$1::layoutContainer($Container* target) {
	this->this$0->doingLayout = true;
	$BorderLayout::layoutContainer(target);
	this->this$0->doingLayout = false;
}

AquaTextFieldSearch$SearchFieldBorder$1::AquaTextFieldSearch$SearchFieldBorder$1() {
}

$Class* AquaTextFieldSearch$SearchFieldBorder$1::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$SearchFieldBorder$1, name, initialize, &_AquaTextFieldSearch$SearchFieldBorder$1_ClassInfo_, allocate$AquaTextFieldSearch$SearchFieldBorder$1);
	return class$;
}

$Class* AquaTextFieldSearch$SearchFieldBorder$1::class$ = nullptr;

		} // laf
	} // apple
} // com