#include <bug6209975$ReturnObject.h>

#include <bug6209975.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug6209975$ReturnObject_FieldInfo_[] = {
	{"itsValue", "I", nullptr, $PUBLIC | $VOLATILE, $field(bug6209975$ReturnObject, itsValue)},
	{}
};

$MethodInfo _bug6209975$ReturnObject_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6209975$ReturnObject::*)()>(&bug6209975$ReturnObject::init$))},
	{}
};

$InnerClassInfo _bug6209975$ReturnObject_InnerClassesInfo_[] = {
	{"bug6209975$ReturnObject", "bug6209975", "ReturnObject", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug6209975$ReturnObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6209975$ReturnObject",
	"java.lang.Object",
	nullptr,
	_bug6209975$ReturnObject_FieldInfo_,
	_bug6209975$ReturnObject_MethodInfo_,
	nullptr,
	nullptr,
	_bug6209975$ReturnObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6209975"
};

$Object* allocate$bug6209975$ReturnObject($Class* clazz) {
	return $of($alloc(bug6209975$ReturnObject));
}

void bug6209975$ReturnObject::init$() {
}

bug6209975$ReturnObject::bug6209975$ReturnObject() {
}

$Class* bug6209975$ReturnObject::load$($String* name, bool initialize) {
	$loadClass(bug6209975$ReturnObject, name, initialize, &_bug6209975$ReturnObject_ClassInfo_, allocate$bug6209975$ReturnObject);
	return class$;
}

$Class* bug6209975$ReturnObject::class$ = nullptr;