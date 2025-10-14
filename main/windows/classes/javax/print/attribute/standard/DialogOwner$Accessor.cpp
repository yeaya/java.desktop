#include <javax/print/attribute/standard/DialogOwner$Accessor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$MethodInfo _DialogOwner$Accessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DialogOwner$Accessor::*)()>(&DialogOwner$Accessor::init$))},
	{"getOwnerID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DialogOwner$Accessor_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.DialogOwner$Accessor", "javax.print.attribute.standard.DialogOwner", "Accessor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DialogOwner$Accessor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.attribute.standard.DialogOwner$Accessor",
	"sun.print.DialogOwnerAccessor",
	nullptr,
	nullptr,
	_DialogOwner$Accessor_MethodInfo_,
	nullptr,
	nullptr,
	_DialogOwner$Accessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.DialogOwner"
};

$Object* allocate$DialogOwner$Accessor($Class* clazz) {
	return $of($alloc(DialogOwner$Accessor));
}

void DialogOwner$Accessor::init$() {
	$DialogOwnerAccessor::init$();
}

int64_t DialogOwner$Accessor::getOwnerID($DialogOwner* owner) {
	return $nc(owner)->getID();
}

DialogOwner$Accessor::DialogOwner$Accessor() {
}

$Class* DialogOwner$Accessor::load$($String* name, bool initialize) {
	$loadClass(DialogOwner$Accessor, name, initialize, &_DialogOwner$Accessor_ClassInfo_, allocate$DialogOwner$Accessor);
	return class$;
}

$Class* DialogOwner$Accessor::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax