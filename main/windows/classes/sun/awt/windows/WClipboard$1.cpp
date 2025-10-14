#include <sun/awt/windows/WClipboard$1.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/windows/WClipboard.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $WClipboard = ::sun::awt::windows::WClipboard;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WClipboard$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WClipboard;", nullptr, $FINAL | $SYNTHETIC, $field(WClipboard$1, this$0)},
	{"val$localeDataFinal", "[B", nullptr, $FINAL | $SYNTHETIC, $field(WClipboard$1, val$localeDataFinal)},
	{}
};

$MethodInfo _WClipboard$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WClipboard;[B)V", "()V", 0, $method(static_cast<void(WClipboard$1::*)($WClipboard*,$bytes*)>(&WClipboard$1::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WClipboard$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WClipboard",
	"createLocaleTransferable",
	"([J)Ljava/awt/datatransfer/Transferable;"
};

$InnerClassInfo _WClipboard$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WClipboard$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WClipboard$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WClipboard$1",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_WClipboard$1_FieldInfo_,
	_WClipboard$1_MethodInfo_,
	nullptr,
	&_WClipboard$1_EnclosingMethodInfo_,
	_WClipboard$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WClipboard"
};

$Object* allocate$WClipboard$1($Class* clazz) {
	return $of($alloc(WClipboard$1));
}

void WClipboard$1::init$($WClipboard* this$0, $bytes* val$localeDataFinal) {
	$set(this, this$0, this$0);
	$set(this, val$localeDataFinal, val$localeDataFinal);
}

$DataFlavorArray* WClipboard$1::getTransferDataFlavors() {
	$init($DataTransferer);
	return $new($DataFlavorArray, {$DataTransferer::javaTextEncodingFlavor});
}

bool WClipboard$1::isDataFlavorSupported($DataFlavor* flavor) {
	$init($DataTransferer);
	return $nc(flavor)->equals($DataTransferer::javaTextEncodingFlavor);
}

$Object* WClipboard$1::getTransferData($DataFlavor* flavor) {
	if (isDataFlavorSupported(flavor)) {
		return $of(this->val$localeDataFinal);
	}
	$throwNew($UnsupportedFlavorException, flavor);
}

WClipboard$1::WClipboard$1() {
}

$Class* WClipboard$1::load$($String* name, bool initialize) {
	$loadClass(WClipboard$1, name, initialize, &_WClipboard$1_ClassInfo_, allocate$WClipboard$1);
	return class$;
}

$Class* WClipboard$1::class$ = nullptr;

		} // windows
	} // awt
} // sun