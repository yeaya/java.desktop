#include <sun/print/AttributeUpdater.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace sun {
	namespace print {

$MethodInfo _AttributeUpdater_MethodInfo_[] = {
	{"getUpdatedAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AttributeUpdater_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.print.AttributeUpdater",
	nullptr,
	nullptr,
	nullptr,
	_AttributeUpdater_MethodInfo_
};

$Object* allocate$AttributeUpdater($Class* clazz) {
	return $of($alloc(AttributeUpdater));
}

$Class* AttributeUpdater::load$($String* name, bool initialize) {
	$loadClass(AttributeUpdater, name, initialize, &_AttributeUpdater_ClassInfo_, allocate$AttributeUpdater);
	return class$;
}

$Class* AttributeUpdater::class$ = nullptr;

	} // print
} // sun