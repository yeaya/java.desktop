#include <sun/print/DialogOwnerAccessor.h>

#include <javax/print/attribute/standard/DialogOwner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;

namespace sun {
	namespace print {

$FieldInfo _DialogOwnerAccessor_FieldInfo_[] = {
	{"accessor", "Lsun/print/DialogOwnerAccessor;", nullptr, $PUBLIC | $STATIC, $staticField(DialogOwnerAccessor, accessor)},
	{}
};

$MethodInfo _DialogOwnerAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DialogOwnerAccessor::*)()>(&DialogOwnerAccessor::init$))},
	{"getID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($DialogOwner*)>(&DialogOwnerAccessor::getID))},
	{"getOwnerID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessor", "(Lsun/print/DialogOwnerAccessor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(DialogOwnerAccessor*)>(&DialogOwnerAccessor::setAccessor))},
	{}
};

$ClassInfo _DialogOwnerAccessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.print.DialogOwnerAccessor",
	"java.lang.Object",
	nullptr,
	_DialogOwnerAccessor_FieldInfo_,
	_DialogOwnerAccessor_MethodInfo_
};

$Object* allocate$DialogOwnerAccessor($Class* clazz) {
	return $of($alloc(DialogOwnerAccessor));
}

DialogOwnerAccessor* DialogOwnerAccessor::accessor = nullptr;

void DialogOwnerAccessor::init$() {
}

void DialogOwnerAccessor::setAccessor(DialogOwnerAccessor* acc) {
	$init(DialogOwnerAccessor);
	$assignStatic(DialogOwnerAccessor::accessor, acc);
}

int64_t DialogOwnerAccessor::getID($DialogOwner* owner) {
	$init(DialogOwnerAccessor);
	if (DialogOwnerAccessor::accessor == nullptr || owner == nullptr) {
		return 0;
	} else {
		return $nc(DialogOwnerAccessor::accessor)->getOwnerID(owner);
	}
}

void clinit$DialogOwnerAccessor($Class* class$) {
	$assignStatic(DialogOwnerAccessor::accessor, nullptr);
}

DialogOwnerAccessor::DialogOwnerAccessor() {
}

$Class* DialogOwnerAccessor::load$($String* name, bool initialize) {
	$loadClass(DialogOwnerAccessor, name, initialize, &_DialogOwnerAccessor_ClassInfo_, clinit$DialogOwnerAccessor, allocate$DialogOwnerAccessor);
	return class$;
}

$Class* DialogOwnerAccessor::class$ = nullptr;

	} // print
} // sun