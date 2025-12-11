#include <com/apple/laf/ClientPropertyApplicator$Property.h>

#include <com/apple/laf/ClientPropertyApplicator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ClientPropertyApplicator$Property_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ClientPropertyApplicator$Property, name)},
	{}
};

$MethodInfo _ClientPropertyApplicator$Property_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ClientPropertyApplicator$Property::*)($String*)>(&ClientPropertyApplicator$Property::init$))},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TX;Ljava/lang/Object;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ClientPropertyApplicator$Property_InnerClassesInfo_[] = {
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ClientPropertyApplicator$Property_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.ClientPropertyApplicator$Property",
	"java.lang.Object",
	nullptr,
	_ClientPropertyApplicator$Property_FieldInfo_,
	_ClientPropertyApplicator$Property_MethodInfo_,
	"<X:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ClientPropertyApplicator$Property_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.ClientPropertyApplicator"
};

$Object* allocate$ClientPropertyApplicator$Property($Class* clazz) {
	return $of($alloc(ClientPropertyApplicator$Property));
}

void ClientPropertyApplicator$Property::init$($String* name) {
	$set(this, name, name);
}

ClientPropertyApplicator$Property::ClientPropertyApplicator$Property() {
}

$Class* ClientPropertyApplicator$Property::load$($String* name, bool initialize) {
	$loadClass(ClientPropertyApplicator$Property, name, initialize, &_ClientPropertyApplicator$Property_ClassInfo_, allocate$ClientPropertyApplicator$Property);
	return class$;
}

$Class* ClientPropertyApplicator$Property::class$ = nullptr;

		} // laf
	} // apple
} // com