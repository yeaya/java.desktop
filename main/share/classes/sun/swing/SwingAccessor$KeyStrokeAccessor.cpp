#include <sun/swing/SwingAccessor$KeyStrokeAccessor.h>

#include <javax/swing/KeyStroke.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$MethodInfo _SwingAccessor$KeyStrokeAccessor_MethodInfo_[] = {
	{"create", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingAccessor$KeyStrokeAccessor_InnerClassesInfo_[] = {
	{"sun.swing.SwingAccessor$KeyStrokeAccessor", "sun.swing.SwingAccessor", "KeyStrokeAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingAccessor$KeyStrokeAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingAccessor$KeyStrokeAccessor",
	nullptr,
	nullptr,
	nullptr,
	_SwingAccessor$KeyStrokeAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_SwingAccessor$KeyStrokeAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingAccessor"
};

$Object* allocate$SwingAccessor$KeyStrokeAccessor($Class* clazz) {
	return $of($alloc(SwingAccessor$KeyStrokeAccessor));
}

$Class* SwingAccessor$KeyStrokeAccessor::load$($String* name, bool initialize) {
	$loadClass(SwingAccessor$KeyStrokeAccessor, name, initialize, &_SwingAccessor$KeyStrokeAccessor_ClassInfo_, allocate$SwingAccessor$KeyStrokeAccessor);
	return class$;
}

$Class* SwingAccessor$KeyStrokeAccessor::class$ = nullptr;

	} // swing
} // sun