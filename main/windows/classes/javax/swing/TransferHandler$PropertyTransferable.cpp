#include <javax/swing/TransferHandler$PropertyTransferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$PropertyTransferable_FieldInfo_[] = {
	{"component", "Ljavax/swing/JComponent;", nullptr, 0, $field(TransferHandler$PropertyTransferable, component)},
	{"property", "Ljava/beans/PropertyDescriptor;", nullptr, 0, $field(TransferHandler$PropertyTransferable, property)},
	{}
};

$MethodInfo _TransferHandler$PropertyTransferable_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/PropertyDescriptor;Ljavax/swing/JComponent;)V", nullptr, 0, $method(static_cast<void(TransferHandler$PropertyTransferable::*)($PropertyDescriptor*,$JComponent*)>(&TransferHandler$PropertyTransferable::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler$PropertyTransferable_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$PropertyTransferable", "javax.swing.TransferHandler", "PropertyTransferable", $STATIC},
	{}
};

$ClassInfo _TransferHandler$PropertyTransferable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$PropertyTransferable",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_TransferHandler$PropertyTransferable_FieldInfo_,
	_TransferHandler$PropertyTransferable_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$PropertyTransferable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$PropertyTransferable($Class* clazz) {
	return $of($alloc(TransferHandler$PropertyTransferable));
}

void TransferHandler$PropertyTransferable::init$($PropertyDescriptor* p, $JComponent* c) {
	$set(this, property, p);
	$set(this, component, c);
}

$DataFlavorArray* TransferHandler$PropertyTransferable::getTransferDataFlavors() {
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, 1));
	$Class* propertyType = $nc(this->property)->getPropertyType();
	$init($DataFlavor);
	$var($String, mimeType, $str({$DataFlavor::javaJVMLocalObjectMimeType, ";class="_s, $($nc(propertyType)->getName())}));
	try {
		flavors->set(0, $$new($DataFlavor, mimeType));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, cnfe, $catch());
		$assign(flavors, $new($DataFlavorArray, 0));
	}
	return flavors;
}

bool TransferHandler$PropertyTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	$Class* propertyType = $nc(this->property)->getPropertyType();
	bool var$1 = "application"_s->equals($($nc(flavor)->getPrimaryType()));
	bool var$0 = var$1 && "x-java-jvm-local-objectref"_s->equals($($nc(flavor)->getSubType()));
	if (var$0 && $nc($nc(flavor)->getRepresentationClass())->isAssignableFrom(propertyType)) {
		return true;
	}
	return false;
}

$Object* TransferHandler$PropertyTransferable::getTransferData($DataFlavor* flavor) {
	if (!isDataFlavorSupported(flavor)) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	$var($Method, reader, $nc(this->property)->getReadMethod());
	$var($Object, value, nullptr);
	try {
		$assign(value, $MethodUtil::invoke(reader, this->component, ($ObjectArray*)nullptr));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($IOException, $$str({"Property read failed: "_s, $($nc(this->property)->getName())}));
	}
	return $of(value);
}

TransferHandler$PropertyTransferable::TransferHandler$PropertyTransferable() {
}

$Class* TransferHandler$PropertyTransferable::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$PropertyTransferable, name, initialize, &_TransferHandler$PropertyTransferable_ClassInfo_, allocate$TransferHandler$PropertyTransferable);
	return class$;
}

$Class* TransferHandler$PropertyTransferable::class$ = nullptr;

	} // swing
} // javax