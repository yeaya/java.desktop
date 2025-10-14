#include <sun/java2d/DisposerRecord.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _DisposerRecord_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DisposerRecord_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.DisposerRecord",
	nullptr,
	nullptr,
	nullptr,
	_DisposerRecord_MethodInfo_
};

$Object* allocate$DisposerRecord($Class* clazz) {
	return $of($alloc(DisposerRecord));
}

$Class* DisposerRecord::load$($String* name, bool initialize) {
	$loadClass(DisposerRecord, name, initialize, &_DisposerRecord_ClassInfo_, allocate$DisposerRecord);
	return class$;
}

$Class* DisposerRecord::class$ = nullptr;

	} // java2d
} // sun