#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>

#include <javax/swing/RepaintManager.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$RepaintManagerAccessor_MethodInfo_[] = {
	{"addRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$RepaintManagerAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$RepaintManagerAccessor", "sun.swing.SwingAccessor", "RepaintManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$RepaintManagerAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$RepaintManagerAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$RepaintManagerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$RepaintManagerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$RepaintManagerAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$RepaintManagerAccessor));
}

$Class* SwingAccessor$RepaintManagerAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$RepaintManagerAccessor, name, initialize, &_SwingAccessor$RepaintManagerAccessor_ClassInfo_, allocate$SwingAccessor$RepaintManagerAccessor);
	return class$;
}

$Class* SwingAccessor$RepaintManagerAccessor::class$ = nullptr;

	} // swing
} // sun