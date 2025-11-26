#include <javax/swing/ClientPropertyKey$1.h>

#include <javax/swing/ClientPropertyKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;

namespace javax {
	namespace swing {

$MethodInfo _ClientPropertyKey$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClientPropertyKey$1::*)()>(&ClientPropertyKey$1::init$))},
	{"getJComponent_TRANSFER_HANDLER", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClientPropertyKey$1_EnclosingMethodInfo_ = {
	"javax.swing.ClientPropertyKey",
	nullptr,
	nullptr
};

$InnerClassInfo _ClientPropertyKey$1_InnerClassesInfo_[] = {
	{"javax.swing.ClientPropertyKey$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$ClientPropertyKeyAccessor", "sun.awt.AWTAccessor", "ClientPropertyKeyAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClientPropertyKey$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ClientPropertyKey$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$ClientPropertyKeyAccessor",
	nullptr,
	_ClientPropertyKey$1_MethodInfo_,
	nullptr,
	&_ClientPropertyKey$1_EnclosingMethodInfo_,
	_ClientPropertyKey$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ClientPropertyKey"
};

$Object* allocate$ClientPropertyKey$1($Class* clazz) {
	return $of($alloc(ClientPropertyKey$1));
}

void ClientPropertyKey$1::init$() {
}

$Object* ClientPropertyKey$1::getJComponent_TRANSFER_HANDLER() {
	$init($ClientPropertyKey);
	return $of($ClientPropertyKey::JComponent_TRANSFER_HANDLER);
}

ClientPropertyKey$1::ClientPropertyKey$1() {
}

$Class* ClientPropertyKey$1::load$($String* name, bool initialize) {
	$loadClass(ClientPropertyKey$1, name, initialize, &_ClientPropertyKey$1_ClassInfo_, allocate$ClientPropertyKey$1);
	return class$;
}

$Class* ClientPropertyKey$1::class$ = nullptr;

	} // swing
} // javax