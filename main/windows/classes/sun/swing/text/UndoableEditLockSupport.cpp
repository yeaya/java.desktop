#include <sun/swing/text/UndoableEditLockSupport.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

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