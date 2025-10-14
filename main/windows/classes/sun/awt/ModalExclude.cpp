#include <sun/awt/ModalExclude.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace awt {

$ClassInfo _ModalExclude_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.ModalExclude"
};

$Object* allocate$ModalExclude($Class* clazz) {
	return $of($alloc(ModalExclude));
}

$Class* ModalExclude::load$($String* name, bool initialize) {
	$loadClass(ModalExclude, name, initialize, &_ModalExclude_ClassInfo_, allocate$ModalExclude);
	return class$;
}

$Class* ModalExclude::class$ = nullptr;

	} // awt
} // sun