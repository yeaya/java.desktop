#include <sun/swing/SwingAccessor$JComponentAccessor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SwingAccessor = ::sun::swing::SwingAccessor;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$JComponentAccessor_MethodInfo_[] = {
	{"compWriteObjectNotify", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlag", "(Ljavax/swing/JComponent;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$JComponentAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$JComponentAccessor", "sun.swing.SwingAccessor", "JComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$JComponentAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$JComponentAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$JComponentAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$JComponentAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$JComponentAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$JComponentAccessor));
}

$Class* SwingAccessor$JComponentAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$JComponentAccessor, name, initialize, &_SwingAccessor$JComponentAccessor_ClassInfo_, allocate$SwingAccessor$JComponentAccessor);
	return class$;
}

$Class* SwingAccessor$JComponentAccessor::class$ = nullptr;

	} // swing
} // sun