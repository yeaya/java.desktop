#include <javax/swing/PopupFactory$1.h>

#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;

namespace javax {
	namespace swing {

$MethodInfo _PopupFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PopupFactory$1::*)()>(&PopupFactory$1::init$))},
	{"getHeavyWeightPopup", "(Ljavax/swing/PopupFactory;Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PopupFactory$1_EnclosingMethodInfo_ = {
	"javax.swing.PopupFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _PopupFactory$1_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$PopupFactoryAccessor", "sun.swing.SwingAccessor", "PopupFactoryAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PopupFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$PopupFactoryAccessor",
	nullptr,
	_PopupFactory$1_MethodInfo_,
	nullptr,
	&_PopupFactory$1_EnclosingMethodInfo_,
	_PopupFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$1($Class* clazz) {
	return $of($alloc(PopupFactory$1));
}

void PopupFactory$1::init$() {
}

$Popup* PopupFactory$1::getHeavyWeightPopup($PopupFactory* factory, $Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	return $nc(factory)->getPopup(owner, contents, ownerX, ownerY, 2);
}

PopupFactory$1::PopupFactory$1() {
}

$Class* PopupFactory$1::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$1, name, initialize, &_PopupFactory$1_ClassInfo_, allocate$PopupFactory$1);
	return class$;
}

$Class* PopupFactory$1::class$ = nullptr;

	} // swing
} // javax