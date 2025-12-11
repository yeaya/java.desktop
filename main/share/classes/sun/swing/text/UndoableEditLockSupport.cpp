#include <sun/swing/text/UndoableEditLockSupport.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace text {

$MethodInfo _UndoableEditLockSupport_MethodInfo_[] = {
	{"lockEdit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"unlockEdit", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UndoableEditLockSupport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.text.UndoableEditLockSupport",
	nullptr,
	"javax.swing.undo.UndoableEdit",
	nullptr,
	_UndoableEditLockSupport_MethodInfo_
};

$Object* allocate$UndoableEditLockSupport($Class* clazz) {
	return $of($alloc(UndoableEditLockSupport));
}

$Class* UndoableEditLockSupport::load$($String* name, bool initialize) {
	$loadClass(UndoableEditLockSupport, name, initialize, &_UndoableEditLockSupport_ClassInfo_, allocate$UndoableEditLockSupport);
	return class$;
}

$Class* UndoableEditLockSupport::class$ = nullptr;

		} // text
	} // swing
} // sun