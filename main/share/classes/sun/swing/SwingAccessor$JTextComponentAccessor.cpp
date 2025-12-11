#include <sun/swing/SwingAccessor$JTextComponentAccessor.h>

#include <java/awt/Point.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$JTextComponentAccessor_MethodInfo_[] = {
	{"dropLocationForPoint", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PUBLIC | $ABSTRACT},
	{"setDropLocation", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$JTextComponentAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$JTextComponentAccessor", "sun.swing.SwingAccessor", "JTextComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$JTextComponentAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$JTextComponentAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$JTextComponentAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$JTextComponentAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$JTextComponentAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$JTextComponentAccessor));
}

$Class* SwingAccessor$JTextComponentAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$JTextComponentAccessor, name, initialize, &_SwingAccessor$JTextComponentAccessor_ClassInfo_, allocate$SwingAccessor$JTextComponentAccessor);
	return class$;
}

$Class* SwingAccessor$JTextComponentAccessor::class$ = nullptr;

	} // swing
} // sun