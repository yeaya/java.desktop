#include <sun/awt/datatransfer/ClipboardTransferable$DataFactory.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/datatransfer/ClipboardTransferable.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClipboardTransferable = ::sun::awt::datatransfer::ClipboardTransferable;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _ClipboardTransferable$DataFactory_FieldInfo_[] = {
	{"this$0", "Lsun/awt/datatransfer/ClipboardTransferable;", nullptr, $FINAL | $SYNTHETIC, $field(ClipboardTransferable$DataFactory, this$0)},
	{"format", "J", nullptr, $FINAL, $field(ClipboardTransferable$DataFactory, format)},
	{"data", "[B", nullptr, $FINAL, $field(ClipboardTransferable$DataFactory, data)},
	{}
};

$MethodInfo _ClipboardTransferable$DataFactory_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/datatransfer/ClipboardTransferable;J[B)V", nullptr, 0, $method(static_cast<void(ClipboardTransferable$DataFactory::*)($ClipboardTransferable*,int64_t,$bytes*)>(&ClipboardTransferable$DataFactory::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(ClipboardTransferable$DataFactory::*)($DataFlavor*)>(&ClipboardTransferable$DataFactory::getTransferData)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ClipboardTransferable$DataFactory_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.ClipboardTransferable$DataFactory", "sun.awt.datatransfer.ClipboardTransferable", "DataFactory", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ClipboardTransferable$DataFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.datatransfer.ClipboardTransferable$DataFactory",
	"java.lang.Object",
	nullptr,
	_ClipboardTransferable$DataFactory_FieldInfo_,
	_ClipboardTransferable$DataFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ClipboardTransferable$DataFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.ClipboardTransferable"
};

$Object* allocate$ClipboardTransferable$DataFactory($Class* clazz) {
	return $of($alloc(ClipboardTransferable$DataFactory));
}

void ClipboardTransferable$DataFactory::init$($ClipboardTransferable* this$0, int64_t format, $bytes* data) {
	$set(this, this$0, this$0);
	this->format = format;
	$set(this, data, data);
}

$Object* ClipboardTransferable$DataFactory::getTransferData($DataFlavor* flavor) {
	return $of($nc($($DataTransferer::getInstance()))->translateBytes(this->data, flavor, this->format, this->this$0));
}

ClipboardTransferable$DataFactory::ClipboardTransferable$DataFactory() {
}

$Class* ClipboardTransferable$DataFactory::load$($String* name, bool initialize) {
	$loadClass(ClipboardTransferable$DataFactory, name, initialize, &_ClipboardTransferable$DataFactory_ClassInfo_, allocate$ClipboardTransferable$DataFactory);
	return class$;
}

$Class* ClipboardTransferable$DataFactory::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun