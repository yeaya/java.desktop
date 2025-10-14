#include <javax/swing/TransferHandler$HasGetTransferHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {

$MethodInfo _TransferHandler$HasGetTransferHandler_MethodInfo_[] = {
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TransferHandler$HasGetTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TransferHandler$HasGetTransferHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.TransferHandler$HasGetTransferHandler",
	nullptr,
	nullptr,
	nullptr,
	_TransferHandler$HasGetTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$HasGetTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$HasGetTransferHandler($Class* clazz) {
	return $of($alloc(TransferHandler$HasGetTransferHandler));
}

$Class* TransferHandler$HasGetTransferHandler::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$HasGetTransferHandler, name, initialize, &_TransferHandler$HasGetTransferHandler_ClassInfo_, allocate$TransferHandler$HasGetTransferHandler);
	return class$;
}

$Class* TransferHandler$HasGetTransferHandler::class$ = nullptr;

	} // swing
} // javax