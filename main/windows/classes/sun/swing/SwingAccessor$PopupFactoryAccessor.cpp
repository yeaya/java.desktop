#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>

#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingAccessor = ::sun::swing::SwingAccessor;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$PopupFactoryAccessor_MethodInfo_[] = {
	{"getHeavyWeightPopup", "(Ljavax/swing/PopupFactory;Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$PopupFactoryAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$PopupFactoryAccessor", "sun.swing.SwingAccessor", "PopupFactoryAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$PopupFactoryAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$PopupFactoryAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$PopupFactoryAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$PopupFactoryAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$PopupFactoryAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$PopupFactoryAccessor));
}

$Class* SwingAccessor$PopupFactoryAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$PopupFactoryAccessor, name, initialize, &_SwingAccessor$PopupFactoryAccessor_ClassInfo_, allocate$SwingAccessor$PopupFactoryAccessor);
	return class$;
}

$Class* SwingAccessor$PopupFactoryAccessor::class$ = nullptr;

	} // swing
} // sun