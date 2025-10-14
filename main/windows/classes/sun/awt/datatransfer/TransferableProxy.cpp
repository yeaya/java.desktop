#include <sun/awt/datatransfer/TransferableProxy.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/awt/datatransfer/ClassLoaderObjectInputStream.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Map = ::java::util::Map;
using $ClassLoaderObjectInputStream = ::sun::awt::datatransfer::ClassLoaderObjectInputStream;
using $ClassLoaderObjectOutputStream = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream;

namespace sun {
	namespace awt {
		namespace datatransfer {

$FieldInfo _TransferableProxy_FieldInfo_[] = {
	{"transferable", "Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED | $FINAL, $field(TransferableProxy, transferable)},
	{"isLocal", "Z", nullptr, $PROTECTED | $FINAL, $field(TransferableProxy, isLocal)},
	{}
};

$MethodInfo _TransferableProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/datatransfer/Transferable;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TransferableProxy::*)($Transferable*,bool)>(&TransferableProxy::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TransferableProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.datatransfer.TransferableProxy",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_TransferableProxy_FieldInfo_,
	_TransferableProxy_MethodInfo_
};

$Object* allocate$TransferableProxy($Class* clazz) {
	return $of($alloc(TransferableProxy));
}

void TransferableProxy::init$($Transferable* t, bool local) {
	$set(this, transferable, t);
	this->isLocal = local;
}

$DataFlavorArray* TransferableProxy::getTransferDataFlavors() {
	return $nc(this->transferable)->getTransferDataFlavors();
}

bool TransferableProxy::isDataFlavorSupported($DataFlavor* flavor) {
	return $nc(this->transferable)->isDataFlavorSupported(flavor);
}

$Object* TransferableProxy::getTransferData($DataFlavor* df) {
	$var($Object, data, $nc(this->transferable)->getTransferData(df));
	if (data != nullptr && this->isLocal && $nc(df)->isFlavorSerializedObjectType()) {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($ClassLoaderObjectOutputStream, oos, $new($ClassLoaderObjectOutputStream, baos));
		oos->writeObject(data);
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, $(baos->toByteArray())));
		try {
			$var($ClassLoaderObjectInputStream, ois, $new($ClassLoaderObjectInputStream, bais, $(oos->getClassLoaderMap())));
			$assign(data, ois->readObject());
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, cnfe, $catch());
			$throw($cast($IOException, $($$new($IOException)->initCause(cnfe))));
		}
	}
	return $of(data);
}

TransferableProxy::TransferableProxy() {
}

$Class* TransferableProxy::load$($String* name, bool initialize) {
	$loadClass(TransferableProxy, name, initialize, &_TransferableProxy_ClassInfo_, allocate$TransferableProxy);
	return class$;
}

$Class* TransferableProxy::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun