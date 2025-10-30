#include <PopMenuUIExt$1.h>

#include <PopMenuUIExt.h>
#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $PopMenuUIExt = ::PopMenuUIExt;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;

$FieldInfo _PopMenuUIExt$1_FieldInfo_[] = {
	{"this$0", "LPopMenuUIExt;", nullptr, $FINAL | $SYNTHETIC, $field(PopMenuUIExt$1, this$0)},
	{}
};

$MethodInfo _PopMenuUIExt$1_MethodInfo_[] = {
	{"<init>", "(LPopMenuUIExt;)V", nullptr, 0, $method(static_cast<void(PopMenuUIExt$1::*)($PopMenuUIExt*)>(&PopMenuUIExt$1::init$))},
	{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PopMenuUIExt$1_EnclosingMethodInfo_ = {
	"PopMenuUIExt",
	"getPopup",
	"(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;"
};

$InnerClassInfo _PopMenuUIExt$1_InnerClassesInfo_[] = {
	{"PopMenuUIExt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopMenuUIExt$1_ClassInfo_ = {
	$ACC_SUPER,
	"PopMenuUIExt$1",
	"javax.swing.PopupFactory",
	nullptr,
	_PopMenuUIExt$1_FieldInfo_,
	_PopMenuUIExt$1_MethodInfo_,
	nullptr,
	&_PopMenuUIExt$1_EnclosingMethodInfo_,
	_PopMenuUIExt$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PopMenuUIExt"
};

$Object* allocate$PopMenuUIExt$1($Class* clazz) {
	return $of($alloc(PopMenuUIExt$1));
}

void PopMenuUIExt$1::init$($PopMenuUIExt* this$0) {
	$set(this, this$0, this$0);
	$PopupFactory::init$();
}

$Popup* PopMenuUIExt$1::getPopup($Component* owner, $Component* contents, int32_t x, int32_t y) {
	return $PopupFactory::getPopup(owner, contents, x, y, true);
}

PopMenuUIExt$1::PopMenuUIExt$1() {
}

$Class* PopMenuUIExt$1::load$($String* name, bool initialize) {
	$loadClass(PopMenuUIExt$1, name, initialize, &_PopMenuUIExt$1_ClassInfo_, allocate$PopMenuUIExt$1);
	return class$;
}

$Class* PopMenuUIExt$1::class$ = nullptr;